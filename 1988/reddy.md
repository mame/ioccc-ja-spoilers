---
id: 1988/reddy
year: 1988
order: 5
authors: "Gopi_Reddy"
orig_url: "https://www.ioccc.org/1988/reddy.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1988/reddy.hint"
title: "IOCCC 1988: Most useful Obfuscated C program"
award_ja: "もっとも便利な難読化Cプログラム"
linewrap: true
---

## 動作

C言語の変数名の定義を与えると、それを英語で説明してくれる。

```
$ gcc -m32 -o reddy reddy.c

$ ./reddy
input: int x;
`x' is int.

input: int x[10];
`x' is array[0..9] of int.

input: int *x;
`x' is ptr to int.

input: int x();
`x' is func returning int.

input: char *(*(fun[16])();
`fun' is array[0..15] of func returning ptr to ptr to char.
```

## 解説

再帰呼び出しを使って非常に巧妙にパースと出力をしている。

`gets`をプロトタイプ宣言なしで使っており、返り値が暗黙的に`int`となるが、それをポインタとして使うので、`-m32`をつけないと動かない。
