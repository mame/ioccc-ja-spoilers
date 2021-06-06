---
id: 2018/burton2
year: 2018
order: 5
authors: "Dave_Burton"
orig_url: "https://www.ioccc.org/2018/burton2/prog.c"
hint_url: "https://www.ioccc.org/2018/burton2/hint.html"
title: "IOCCC 2018: Best abuse of the rules"
award_ja: "ルールの最高の悪用"
---

## 動作

Cコードのサイズを評価するツール。

{: .wrap }
```
$ gcc -trigraphs -DW=\"keywords\" -DU="\"prog [-tcksri] < file.c\ntokenize and count stdin\n\t-t\ttokens only\n\t-c\tcompatible counts\n\t-k\tkeep comments\n\t-s\tsuppress output\n\t-r\treserved words count as 1\n\t-i\tioccc count only\n\"" -o prog prog.c

$ ./prog < prog.c
257 #include
60 <
258 stdio
46 .
258 h
62 >
...
43 +
258 r
40 (
258 T
44 ,
260 3
41 )
59 ;
125 }
67 1885 4027 3386 621 82 0
```

トークンの列を出した後、最下行に評価が出る。
それぞれ、行数、ワード数、文字数、IOCCCのサイズルールに従ったサイズ、ルールとキーワードのためにカウントが減った文字数、キーワードの数、キーワードのm字数を1とカウントした場合にカウントが減った文字数。

-iを渡せばiocccsize互換モードで動く。

```
$ ./prog -i < prog.c
2052

$ ../iocccsize -i < prog.c
2052
```

他にもオプションがあるので、tac.manを参照のこと。

## 解説

iocccsizeの置き換えを狙って作ったとのこと。
iocccsizeのバグをいくつか指摘しており、-iのときはそれらのバグも再現する。
iocccsizeのバグを悪用した[[[2014/birken]]]({{ site.baseurl }}{% link 2014/birken.md %})を正しく測定できる。

コード形状は秤。

hint.textはだいぶ長く、いろんなことが書いてある。
ポエムっぽいアブストラクト、IOCCC作品の年代ごとのキーワード出現傾向、言語に違いのあるキーワード一覧の話など。
