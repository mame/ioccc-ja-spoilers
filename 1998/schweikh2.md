---
id: 1998/schweikh2
year: 1998
order: 11
patch: true
authors: "Jens_Schweikhardt"
orig_url: "https://www.ioccc.org/1998/schweikh2.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1998/schweikh2.hint"
title: "IOCCC 1998: Most Erratic Behavior"
award_ja: "もっとも不安定な挙動"
---

## 動作

0と1の乱数列をゆっくりと表示する。

```
$ gcc -trigraphs -o schweikh2 schweikh2.c

$ ./schweikh2 32
00000010011101101111000001101011
```

## 解説

1秒のアラームシグナルをセットして、無限ループで変数をカウントアップしていき、シグナルが届いたタイミングでのカウンタの偶奇を0か1として出力するとのこと。
シグナルハンドラに`main`関数をセットしているのが面白い。

元コードは`??=line 10 ONE(O(1,1,2,6,0,6))`で、これは`#line "01\012"`なんだけれど、当時のコンパイラでも動かなかったらしく、審査員によって`#line "01\015"`と変えられている。
しかし、これを現代のgccで実行するとinternal compiler errorになったので、元通りに`#line "01\012"`にしておいた。
