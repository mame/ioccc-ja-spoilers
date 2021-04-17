---
id: 2005/mikeash
year: 2005
order: 8
patch: true
authors: "Michael_Ash"
orig_url: "https://www.ioccc.org/2005/mikeash/mikeash.c"
hint_url: "https://www.ioccc.org/2005/mikeash/hint.text"
title: "IOCCC 2005: Best use of parenthesis"
award_ja: "カッコの最高の使い方"
linewrap: true
---

## 動作

Common Lispで書かれたQuine。

```
$ clisp mikeash.c | diff -s - mikeash.c
Files - and mikeash.c are identical
```

C言語としてコンパイルすると、ものすごく制限されたCommon Lispインタプリタ風に動くバイナリになる。
自分自身をCommon Lispとして実行するとQuineになる。

```
$ gcc -m32 mikeash.c -o mikeash

$ ./mikeash < mikeash.c | diff -s - mikeash.c
Files - and mikeash.c are identical
```

## 解説

ポインタを返すライブラリ関数が暗黙的に`int`を返すものと扱われることを避けるため、`-m32`が必要。

Common Lispのインタプリタとは言うが、作者自身が認めている通り、いろいろ不完全である。
変数は`q`の1つしか使えない、出力の最後に必ず`"`をつける、`f`で始まる関数はすべて`format`になる、など。
チューリング完全かどうかもわからないとのこと。

一応、次のようなコードは動く。

```
$ echo '(format t "~s" (* (+ 2 2 ) (- 5 (/ 9 3 ))))' | ./mikeash
8"
```

コードの難読化は、そこまで難しくはないと思う。
Common Lispの変数定義の`(defvar q=`を、C99の`for`文の初期化`for(char* q="..."; ...)`と重ねてあるのは面白い。

Common Lispで動かすためには`#include`を書けなかったとのことだが、現代のCommon Lispでは複数行コメントを使って書けるので修正を添付する。
また、Common Lispの文字列リテラルで`"\n"`と書くと、当時は`\`と`n`の2文字の文字列として扱われていたらしい。
現代では`n`の1文字の文字列として扱われるように変わっていたので、この点も適当に修正した。
