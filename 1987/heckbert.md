---
id: 1987/heckbert
year: 1987
order: 2
patch: true
authors: "Paul_Heckbert"
orig_url: "https://www.ioccc.org/1987/heckbert/heckbert.c"
hint_url: "https://www.ioccc.org/1987/heckbert/hint.html"
title: "IOCCC 1987: Best Obfuscator of Programs"
award_ja: "最高のプログラム難読化"
---

## 動作

テキストを指定幅で折り畳めるプログラム。

一行最大10文字で区切る例。

```
$ gcc -o heckbert heckbert.c

$ echo "a bb ccc dddd eeeee ffffff ggggggg" | ./heckbert 10
a bb ccc
dddd eeeee
ffffff
ggggggg
```

15文字で区切る例。

```
$ echo "a bb ccc dddd eeeee ffffff ggggggg" | ./heckbert 15
a bb ccc dddd
eeeee ffffff
ggggggg
```

20文字。

```
$ echo "a bb ccc dddd eeeee ffffff ggggggg" | ./heckbert 20
a bb ccc dddd eeeee
ffffff ggggggg
```

識別子や文字列リテラルのようなところで区切らないような工夫もあるらしい。

```
$ echo 'a bb "ccc dddd eeeee" ffffff ggggggg' | ./heckbert 15
a bb
"ccc dddd eeeee"
ffffff ggggggg
```

そのため、自分自身を折りたたんだ上でビルドすることもできる。

```
$ ./heckbert 40 < heckbert.c > tmp.c

$ gcc tmp.c
```

## 解説

このプログラムの背景には、当時の通信環境や慣習がある。
ネットニュースや当時のメールなどのプロトコルでは、テキストの横幅を最大70～80文字程度で区切る必要があった。
そういうときにこのプログラムは便利。
ただ、区切るだけなら[foldコマンド](https://en.wikipedia.org/wiki/Fold_%28Unix%29)がすでにあった。
このプログラムは、C言語テキストに特化して文字列リテラルなどを分割しないように配慮するところがfoldより賢いのだと思う。

実際、[[[1986/stein]]]({{ site.baseurl }}{% link 1986/stein.md %})はワンライナーであるにも関わらず行分割がされている。
行分割したままビルドできるようにするためには、識別子や文字列リテラルの途中に改行を入れないよう、注意する必要があった。
hint.textには審査員コメントとして「このプログラムはコンテストの道具箱にいれておきました」と書かれている。
つまりこのプログラムはIOCCCの審査員にとって特に便利だったと思われる。
IOCCCでは、審査員に（大げさに）媚びる芸風の作品がしばしば採択されるが、そのきっかけの作品かもしれない。

`#define _ define`のテクニックが使われているので、修正が必要。
