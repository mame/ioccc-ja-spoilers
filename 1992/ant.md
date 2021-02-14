---
id: 1992/ant
year: 1992
order: 3
authors: "Anthony_C._Howe"
orig_url: "https://www.ioccc.org/1992/ant.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1992/ant.hint"
title: "IOCCC 1992: Best Utility"
award_ja: "最高のユーティリティ"
---

## 動作

makeの互換品。

```
$ cat test.mk
MESSAGE=Hello

all: sub1 sub2
        @echo $(MESSAGE)

sub1:
        @echo sub task 1

sub2:
        @echo sub task 2

$ gcc -o ant ant.c

$ ./ant test.mk
sub task 1
sub task 2
Hello
```

## 解説

上記の通り、makeコマンドとしてそれなりに作りこんである。
この年の入賞作品のMakefileも動くらしい。
この長さで実現されているのはそれなりにすごそう。

詳細未解読なので、難読化のポイントはあまりよくわからない。
man風のドキュメントが添付されている（[ant.README](https://github.com/ioccc-src/winner/blob/main/1992/ant.README)）。
こういうテキストが付属していると評価される時期があったような気がする。
