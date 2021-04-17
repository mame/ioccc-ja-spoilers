---
id: 2005/timwi
year: 2005
order: 11
authors: "Arne_Timwi_Heizmann"
orig_url: "https://www.ioccc.org/2005/timwi/timwi.c"
hint_url: "https://www.ioccc.org/2005/timwi/hint.text"
title: "IOCCC 2005: Most discourteous interpreter"
award_ja: "もっとも失礼なインタプリタ"
---

## 動作

[Brainfuck](https://ja.wikipedia.org/wiki/Brainfuck)のインタプリタ。

`入力数列 : プログラム`という形式で標準入力に流し込む必要がある。
また、出力はASCII文字ではなく数字で出てくる。

エコーの例。

```
$ gcc -o timwi timwi.c

$ echo "1 2 3 0:,[.,]" | ./timwi
1
2
3
```

1を足してエコーする例。

```
$ echo "1 2 3 0:,[+.,]" | ./timwi
2
3
4
```

フィボナッチ数列の例。

```
$ (echo "20 : ,-->+.>+.<<[>[>>+>+<<<-]>[>>+>+<<<-]>"; echo "[<+>-]>[<<<+>>>-]>[-]<<<<.<-]") | ./timwi
1
1
2
3
5
8
13
21
34
55
89
144
233
377
610
987
1597
2584
4181
6765
```

## 解説

コードの見た目から、`____1`な識別子を使った程度の難読化と思って読み流してしまいそうになったが、見せかけだけでなく高度に難読化されていた。

プリプロセスを通すと数字が"1+1+1+..."になっている。
また、一つの大きな式を`return`する`main`になっている。
いずれもindentコマンドを無力にする工夫で、手作業でほぐす必要がある。

命令文字のデコードは、文字コードでの比較ではなく、ややこしい計算によって判定される。
たとえば、7で割り切れず、5で割り切れず、3で割り切れず、4で割り切れず、2で割り切れないときは`+`とみなされる。
このような判定が`if`文の入れ子で行われているので、非常にややこしい。
他の文字の判定方法は、解説の末尾にある解読結果のコードを参照のこと。

この判定は別の無関係な文字を命令文字と判定してしまう（たとえば`m`や`e`や`;`などは`+`と同じ意味になる）ので、これを悪用してBrainfuckのコードを難読化できるとされている。
hint.textに例として挙げられているコードは、次のようにデコードされる。
これは数字を2つ入力し、整数除算の結果を出力するコードである。

```
J4mzt?Vazexx-20d~&&~AxdUV!x(~Jz&V)x*(P=J)JUN(dizz)xx_!xx'0&{Vz;}&Jj
>,+>,[>+>+<<- ]<[>>[-<<->]<<[>>>>+<[<<+>+>-]<<[>>+<<-]<< ]>]>>+->>.
```

また、このプログラムはまず入力数列をすべてロードするが、その先の命令文字はオンデマンドに読み込む。
つまり、いま実行が読み込み済みコードの右端にいるかどうかを覚えておき、さらに右側に実行が進むとき、フェッチを行う。

一番の工夫は、これらをすべてを`main`関数の巧妙な再帰で行っているところ。
実行は基本的に再帰で行う（末尾呼び出し最適化がされていない場合、実行命令数が多いとスタックオーバーフローになる可能性がある）。
`[`は末尾ではない呼び出しを行い、対応する`]`までの距離を返り値とする。
スキップをする（`[`に対応する`]`に飛ぶ）場合は、この返り値を利用して行う。

「右端にいるかどうか」はグローバル変数ではなく、`main`関数の再帰の引数の中に保存されている。
`main`関数の第1引数である`_1`は、4ビットで状態をエンコードしている。

* `_1 & 8`が真のとき、普通の実行中を表す。偽のときは、`[`に対応する`]`を探している状態で、命令の実行を飛ばしてカッコの対応だけを調べていく。
* `_1 & 4`が真のとき、初期化完了を表す。偽のときは、コードの前にある入力数列を読み込んでいる状態を表す。
* `_1 & 2`が真のとき、「右端にいる」ということを表す。
* `_1 & 1`が真のとき、スキップをする場合、ジャンプ先がコード右端となっていることを表す。

解析のために展開したコードを残しておく。`execute`は`_1 & 8`、`need_ch`は`_1 & 2`、`need_ch_bak`は`_1 & 1`に対応する。
コアとなる計算を`main`関数から切り離し、入力数列を読み込む初期化コード（これも`main`関数の再帰で行われていた）は`main`関数に残した。

```
#include <stdio.h>

int INPUT[3125], DATA[3125], *data = DATA, *input = INPUT, *code_start;

int func(int execute, int need_ch, int need_ch_bak, int *code)
{
    if (need_ch) *code = getchar();
    //printf("pc: %d / ptr: %d / %d %d %d %d %d %d %d %d / execute: %c => ", code - code_start, data - DATA, DATA[0], DATA[1], DATA[2], DATA[3], DATA[4], DATA[5], DATA[6], DATA[7], *code);
    if (*code < 1) {
        /* EOF */
        return 1;
    }
    else if (*code % 7) {
        if (*code % 5) {
            if (*code % 3) {
                if (execute) {
                    if (*code % 4) {
                        if (*code % 2) {
                            /* '+' */ (*data)++;
                        }
                        else {
                            if (*code % 3 - 1) {
                                /* '>' */ *(data++);
                            }
                            else {
                                if (!(*code % 5 - 1)) /* '.' */ printf("%d\n", *data);
                            }
                        }
                    }
                    else {
                        if (*code % 8) /* '.' */ (*data) = *(input++);
                    }
                }
                return func(execute, need_ch, need_ch_bak, code + 1) + 1;
            }
            else {
                return *code % 5 - 3 ? func(execute, need_ch, need_ch_bak, code + 1) + 1 : /* ']' */ 2;
            }
        }
        else {
            if (execute) {
                if (*code % 2) {
                    /* '-' */ (*data)--;
                }
                else {
                    /* '<' */ if (!(*code % 4)) *(data--);
                }
            }
            return func(execute, need_ch, need_ch_bak, code + 1) + 1;
        }
    }
    else {
        /* '[' */
        if (execute && *data) {
            int n = func(execute, need_ch, 0, code + 1);
            return
                n ?
                    func(execute, 0, need_ch_bak | need_ch, code)
                :
                    0;
        }
        else {
            int n = func(0, need_ch, 0, code + 1);
            return
                n ?
                    n + func(execute, need_ch | need_ch_bak, need_ch_bak, code + n)
                :
                    0;
        }
    }
}

int main() {
    int *code = input;
    while (scanf("%i", code)) code++;
    code_start = code;
    func(1, 1, 0, code);
}
```
