---
id: 1986/applin
year: 1986
order: 1
authors: "Jack_Applin"
orig_url: "https://www.ioccc.org/1986/applin/applin.c"
hint_url: "https://www.ioccc.org/1986/applin/hint.html"
title: "IOCCC 1986: Most adaptable program"
award_ja: "もっとも適応性のあるプログラム"
---

## 動作

C言語、シェルスクリプト、Fortran（f77）のpolyglotであるHello, worldプログラム。

```
$ gcc -w applin.c && ./applin
Hello, world!

$ sh applin.c
Hello, world!

$ f77 -w applin.c && ./applin
Hello, world!
```

## 解説

複数の言語で解釈できるプログラムを[polyglot](https://en.wikipedia.org/wiki/Polyglot_%28computing%29)という。
この作品はpolyglotというアイデアそのものが評価されている。
おそらく当時はまだそこまで知られていなかったアイデアなのではないかと思う。
少なくともhintファイルで"polyglot"という言葉は使われていない。

C言語とFortranは、`write`や`"Hello, world!"`などのコード断片を共有していて面白い。
Fortranは1桁目が`c`だとコメント行となり、6桁目に文字があると継続行であるということに注意して読めば難しくはない。
