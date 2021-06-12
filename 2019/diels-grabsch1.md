---
id: 2019/diels-grabsch1
year: 2019
order: 4
authors: "Volker_Diels-Grabsch"
orig_url: "https://www.ioccc.org/2019/diels-grabsch1/prog.c"
hint_url: "https://www.ioccc.org/2019/diels-grabsch1/hint.html"
title: "IOCCC 2019: Best small program"
award_ja: "最高のスモールプログラム"
---

## 動作

[compress](https://ja.wikipedia.org/wiki/UNIX_Compress)コマンドのクローン。

```
$ gcc -o prog prog.c

$ ./prog < hint.text | zcat | diff -s - hint.text
Files - and hint.text are identical
```

## 解説

482バイトで実現されている。
[[[2015/mills2]]]({{ site.baseurl }}{% link 2015/mills2.md %})の解凍と合わせて、圧縮と解凍が揃ったとのこと。

hint.textは、プログラムと同じサイズ・同じ形で書かれている。ちょっとおしゃれ。
