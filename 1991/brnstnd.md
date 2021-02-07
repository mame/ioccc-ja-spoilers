---
id: 1991/brnstnd
year: 1991
order: 9
patch: true
authors: "Daniel_J._Bernstein"
orig_url: "https://www.ioccc.org/1991/brnstnd.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1991/brnstnd.hint"
title: "IOCCC 1991: Best Of Show"
award_ja: "最優秀賞"
linewrap: true
---

## 動作

スタックベースの独自言語SORTAのインタプリタ。

```
$ gcc -DM=malloc -DX=free -Do=250 -o brnstnd brnstnd.c

$ cat sorta.i2+2
2 2+#`            [ about as basic as you can get ]ld

$ ./brnstnd < sorta.i2+2
4
```

命令は1文字で、`2`は整数スタックに2をプッシュする、`+`は整数スタックの先頭にある2つの値を足す、`#`は整数スタックの先頭の値を文字列に変換して文字列スタックにプッシュする、`\``は文字列スタックの先頭の値を表示する命令。
他にもいろいろ命令はあるようなので[brnstnd.hint](https://github.com/ioccc-src/winner/blob/main/1991/brnstnd.hint)を参照のこと。

## 解説

言語処理系ネタがついに独自言語に。
いまでこそ良くあるesolangだけれど、FALSE、Brainf\*\*k、Befungeがいずれも1993年の登場なので、それらより古い。

コード中に次のような文字列が埋め込まれている（この文字列は命令のテーブルとして使われている）。
```
"I'd love ta win: the most useful !$>%`/#<&*|^ _OBFUSCATED_ utility. Pleez?"
````

このとおり、Most useful programを狙っていたらしい。
審査員はこういうコンテストへの干渉は断固として受け入れず、代わりにBest of Showを与えたとのこと。
この年は[[[1991/westley]]]({{ site.baseurl }}{% link 1991/westley.md %})がGrand Prizeをとっており、どちらが上かはわからない。

入賞者の[ダニエル・バーンスタイン](https://ja.wikipedia.org/wiki/%E3%83%80%E3%83%8B%E3%82%A8%E3%83%AB%E3%83%BB%E3%83%90%E3%83%BC%E3%83%B3%E3%82%B9%E3%82%BF%E3%82%A4%E3%83%B3)（通称DJB）は、著名なハッカーであり暗号学者だけれど、受賞当時はまだ20歳の学生だったよう。

オリジナルのソースコードはANSI以前のコンパイラでないとコンパイルできないので、審査員によって[brnstnd_ansi.c](https://www.ioccc.org/1991/brnstnd_ansi.c)が提供されている。
パッチはそれにならった。
