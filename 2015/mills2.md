---
id: 2015/mills2
year: 2015
order: 10
authors: "Christopher_Mills"
orig_url: "https://www.ioccc.org/2015/mills2/prog.c"
hint_url: "https://www.ioccc.org/2015/mills2/hint.html"
title: "IOCCC 2015: Most Compact"
award_ja: "もっともコンパクト"
---

## 動作

圧縮フォーマットの[Compress](https://ja.wikipedia.org/wiki/UNIX_Compress)の解凍プログラム。

```
$ echo "Hello, world!" | compress > hello.Z

$ gcc -o prog prog.c

$ ./prog hello.Z
Hello, world!
```

## 解説

[LZW](https://ja.wikipedia.org/wiki/Lempel%E2%80%93Ziv%E2%80%93Welch)圧縮アルゴリズムの解凍を実装している。
再帰呼び出しがうまくはまっているとのこと。

コード形状は[万力](https://ja.wikipedia.org/wiki/%E4%B8%87%E5%8A%9B)。
compress（押しつぶす）にからめている。

[[[1990/jaw]]]({{ site.baseurl }}{% link 1990/jaw.md %})と少しだけネタがかぶっているが、実質256バイトで実現されているのは非常に迫力がある。
