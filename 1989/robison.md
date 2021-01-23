---
id: 1989/robison
year: 1989
order: 5
patch: true
authors: "Arch_D_Robison"
orig_url: "https://www.ioccc.org/1989/robison.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1989/robison.hint"
title: "IOCCC 1989: Best minimal use of C"
award_ja: "Cの最高の最小限の使い方"
---

## 動作

極小のAPLインタプリタ。2進数の足し算、引き算、掛け算ができる。

```
$ gcc -o robison robison.c

$ echo "101 x 111 - 100" | ./robison
1111
```

APLではこれは5 x (7 - 4) = 15を表すとのこと。

```
$ echo "(101 x 111) - 100" | ./robison
11111
```

これは(5 x 7) - 4 = 31になっている。

## 解説

[[[1988/robison]]]({{ site.baseurl }}{% link 1988/robison.md %})に続き、C言語の利用構文を制限して書かれている（作者はこれをC\-\-と言っている）。
robison.hintに書かれた作者コメントによると、関数呼び出し、間接参照、配列代入、コンマ、`sizeof`だけを使用して多倍長2進数計算を実現しているとのこと。

マクロ定義中の`D/**/f`を`D##f`などに置き換える変更が必要だった。
