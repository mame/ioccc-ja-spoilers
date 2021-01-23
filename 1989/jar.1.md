---
id: 1989/jar.1
year: 1989
order: 2
authors: "Jari_Arkko"
orig_url: "https://www.ioccc.org/1989/jar.1.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1989/jar.1.hint"
title: "IOCCC 1989: Strangest abuse of the rules"
award_ja: "もっとも奇妙なルール悪用"
---

## 動作

コンパイルしたオブジェクトファイルの中にHello worldが見えるというもの。

```
$ gcc -c -o jar.1.o jar.1.c
$ cat jar.1.o
ELF......
Hello world.
GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.GNU.......
```

## 解説

作者の意図としては、`cc -c -o /dev/tty jar.1.c`とコンパイルすることで、コンパイル結果を直接TTYに書き出させることだったらしい。
しかし現代ではこれは動かなくなっていたので残念。

作者のもともとのソースコード（[jar.1.orig.c](https://www.ioccc.org/1989/jar.1.orig.c)）は`char*He="llo world.\n";`となっていた。
おそらく、当時のオブジェクトファイルのヘッダ部分やシンボル情報などに`He`が含まれていて、それとつながって表示されていたのではないかと思う。
考古学もとむ。

翌年からルールに「実行可能な通常のファイルになること」が追加された。

同じ年に同じ人が複数入賞した初の事例。
ただしもう1つの[[[1989/jar.2]]]({{ site.baseurl }}{% link 1989/jar.2.md %})は3人の共作で、この作品と同じ人が筆頭作者となっている。
