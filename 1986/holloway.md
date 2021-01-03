---
id: 1986/holloway
year: 1986
order: 3
authors: "Bruce_Holloway"
orig_url: "https://www.ioccc.org/1986/holloway/holloway.c"
hint_url: "https://www.ioccc.org/1986/holloway/hint.html"
award: "Best simple task performed in a complex way"
award_ja: "複雑なやり方で行われる最高のシンプルなタスク"
---

## 動作

Hello, worldプログラム。

```
$ gcc -o holloway holloway.c

$ ./holloway
hello world!
```

## 解説

やたらとややこしい無意味な演算でhello world!の文字列を計算している。

`main`関数の再帰を多用している。
まず出力する文字数の数だけ再帰し、それから1文字あたり3回再帰して、`case f:`と`case h:`と`case g:`を呼び出す。

`f:`は各文字の7ビット目をビット演算で算出し、`h:`は謎の定数テーブル`tab1`と`tab2`を使って4～6ビット目の3ビットを返し、`g:`はよくわからないがフィボナッチ数列みたいな計算で1～3ビット目の3ビットを返す。

`h:`はゲーデル数のような方法で3ビットをエンコードしている。`tab2`は素数列（を2倍にしたもの）で、`tab1[i]`が`tab2[n]`で割り切れるとき、`i`を返すようになっている。
`tab1`の長さが8（つまり3ビット）、`tab2`の長さが14（つまり`"hello world!\r\n"`の文字数）になっているところがミソ。

賞名は[[[1986/august]]]({{ site.baseurl }}{% link 1986/august.md %})と対称的になっている。

clangは`main`の第2引数が`char**`でないと怒るので、書き換えが必要。
