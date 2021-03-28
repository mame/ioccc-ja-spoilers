---
id: 2000/tomx
year: 2000
order: 13
authors: "Thomas_P_John"
orig_url: "https://www.ioccc.org/2000/tomx.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/tomx.hint"
title: "IOCCC 2000: Most Complete Program"
award_ja: "もっとも完備なプログラム"
---

## 動作

コンパイルすると普通にHello world。

```
$ gcc tomx.c -o tomx

$ ./tomx
Hello, world
```

ソースコードをシェルスクリプトとして実行すると、自分をビルドする。

```
$ rm tomx

$ sh tomx.c
cc tomx.c -o tomx

$ ./tomx
Hello, world
```

ソースコードをmakeに与えても、自分をビルドする。

```
$ rm tomx

$ make -f tomx.c
cc tomx.c -o tomx

$ ./tomx
Hello, world
```

## 解説

C言語とMakefileとシェルスクリプトのpolyglot。Makefileは自分自身をC言語コードとしてビルドする。
シェルスクリプトは自分自身をMakefileとしてmakeを呼び、それ経由で自分自身をC言語コードとしてビルドする。
IOCCCの1番目のルールである"Your entry must be a complete program"（あなたのコードは完全なプログラムでなければならない）を厳密な意味で満たしている初の作品だ、という主張。

polyglotを主題としたものは[[[1986/applin]]]({{ site.baseurl }}{% link 1986/applin.md %})以来か。
コードは極めてシンプルで、[[[1986/applin]]]({{ site.baseurl }}{% link 1986/applin.md %})よりも簡単。
コメントの中にシェルスクリプトとMakefileが収まっていて、polyglotにしてはとても簡潔にまとまっている。
2000年になってこれを通したのはすごい。
