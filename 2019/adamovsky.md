---
id: 2019/adamovsky
year: 2019
order: 1
authors: "Ondřej_Adamovský"
orig_url: "https://www.ioccc.org/2019/adamovsky/prog.c"
hint_url: "https://www.ioccc.org/2019/adamovsky/hint.html"
title: "IOCCC 2019: Most functional interpreter"
award_ja: "もっとも関数的なインタプリタ"
---

## 動作

[Unlambda](https://ja.wikipedia.org/wiki/Unlambda)のインタプリタ。

```
$ cat hello.unl
 `r```````````.H.e.l.l.o. .w.o.r.l.di

$ gcc -trigraphs -o prog prog.c

$ ./prog hello.unl
Hello world
```

## 解説

[Unlambdaで書かれたColossal Cave Adventure](https://github.com/irori/advent-unlambda)を動かすために作ったとのこと。
[Colossal Cave Adventure](https://ja.wikipedia.org/wiki/%E3%82%B3%E3%83%AD%E3%83%83%E3%82%B5%E3%83%AB%E3%83%BB%E3%82%B1%E3%83%BC%E3%83%96%E3%83%BB%E3%82%A2%E3%83%89%E3%83%99%E3%83%B3%E3%83%81%E3%83%A3%E3%83%BC)は、初期のテキストアドベンチャーゲーム。

コード形状は、マクロの部分を除いて細字のラムダ。
iocccsize -iは955と報告するが、Unicodeでコードポイント955は『λ』。

賞名は[[[2019/lynn]]]({{ site.baseurl }}{% link 2019/lynn.md %})と対称的になっている。
