---
id: 1992/lush
year: 1992
order: 9
patch: true
authors: "Ed_Luke"
orig_url: "https://www.ioccc.org/1992/lush.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1992/lush.hint"
title: "IOCCC 1992: Worst Abuse of the C Preprocessor"
award_ja: "Cプリプロセッサの最悪の悪用"
---

## 動作

lush.cをコンパイルしたときの警告をlushに食わせるとメッセージが出てくる。
```
$ gcc -o lush lush.c
$ gcc -o lush lush.c |& ./lush
Hello World.
```

## 解説

普通にコンパイルすると次のような警告が出てくる。

```
lush.c: In function ‘main’:
lush.c:40: warning: "f" redefined
   40 | #define f 001:
      |
lush.c:1: note: this is the location of the previous definition
    1 | #define f 000:
      |
lush.c:42: warning: "f" redefined
   42 | #define f 100:
      |
lush.c:40: note: this is the location of the previous definition
   40 | #define f 001:
      |
lush.c:44: warning: "f" redefined
   44 | #define f 126:
      |
lush.c:42: note: this is the location of the previous definition
   42 | #define f 100:
lush.c:45: warning: "f" redefined
   45 | #define f 132:
      |
lush.c:44: note: this is the location of the previous definition
   44 | #define f 126:
      |
...
```

`warning: "f" redefined`が出ている行番号にメッセージが隠されている。
4つの警告につき1文字。
上の例の場合、40、42、44、45。
これの偶奇を見る（0,0,0,1）。
これを2進数として解釈する（1）。
プログラムの最初の方に定義されている文字列の配列`av`の1番目の文字列が、1つめの文字（`"H"`）。

現代で動かすにはちょっと修正が必要。
上記の通り、今のコンパイラは`note: this is the location of the previous definition`というメッセージも出してしまい、lushはこの行も警告とみなして行番号を拾ってしまう。
パッチはやや冗長だが、メッセージ部が`warning`で始まる行だけ拾い出すように変更した。

形状は見ての通り、マクロ宣言部分を除いて各行4文字という感じ。
