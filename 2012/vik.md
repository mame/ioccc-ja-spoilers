---
id: 2012/vik
year: 2012
order: 12
authors: "Daniel_Vik"
orig_url: "https://www.ioccc.org/2012/vik/vik.c"
hint_url: "https://www.ioccc.org/2012/vik/hint.html"
title: "IOCCC 2012: Best use of cocoa - Bronze award"
award_ja: "ココアの最高の使い方 - 銅賞"
---

## 動作

コンパイルにはzlibが必要。

画像にデータを隠すステガノグラフィーツール。

次の画像に"Hello, world!"を埋め込む例。

```
$ cat message.txt
Hello, world!

$ gcc -o vik vik.c -lz

$ ./vik e ioccc.png message.txt > message-in-ioccc.png
```

生成された画像は見た目では違わない。

{% include img.html src="2012-vik-1.png" desc="メッセージを埋め込む対象の画像（ioccc.png）" cite="https://www.ioccc.org/2012/vik/ioccc.png" %}

{% include img.html src="2012-vik-2.png" desc="メッセージを埋め込んだ画像（message-in-ioccc.png）" %}

次のようにすると隠されたメッセージを取り出せる。

```
$ ./vik d message-in-ioccc.png
Hello, world!
```

テキストに限らず、iocccのロゴにチョコレートの画像を隠すこともできる。

```
$ ./vik e ioccc.png chocolate.png > chocolate-in-ioccc.png
```

チョコレートの画像が埋め込まれたロゴ。見た目は変わらない。

{% include img.html src="2012-vik-3.png" desc="メッセージとして埋め込む画像（chocolate.png）" cite="https://www.ioccc.org/2012/vik/chocolate.png"  %}

生成画像
{% include img.html src="2012-vik-4.png" desc="chocolate.pngを埋め込んだ画像（chocolate-in-ioccc.png）" %}

チョコレートの画像を復元する。

```
$ ./vik d chocolate-in-ioccc.png > restored-chocolate.png
```

取り出せたが、画質が落ちている。

{% include img.html src="2012-vik-5.png" desc="chocolate-in-ioccc.pngから取り出した画像（chocolate.png）" %}

このチョコレートの画像はすこし特別で、他の画像に埋め込まれたときにBrainFuckのコードとして動く、とのこと。

```
$ ./vik b chocolate-in-ioccc.png
this is not a bribe!
```

## 解説

各画像のRGB値の下位ビットにイメージやテキストを埋め込むとのこと。わりと正攻法。

コード形状はチョコレートの包みだろうか。
もともとこのプログラムには、PNG画像に基づいてソースコードを整形する機能があったが、サイズ制限にあわなかったので削除したらしい。
現在の形状はその機能で生成したとのこと。

BrainFuckのコードが埋め込まれているというのもあまりよくわからないが、chocolate-in-ioccc.pngを普通のbrainfuckインタプリタで実行しても動作しないので、おそらく、PNGのビットマップデータ部をzlibで展開した状態にbrainfuckのコードが埋め込まれている。
実行して出てくるメッセージ「これは賄賂ではない！」は、審査員間で投票を操作するためにチョコレートの賄賂を送ったとか送らないとかいう話がguideline.txtに書かれていることを踏まえたネタ。
「チョコレートは審査に影響していないです。保証します」と審査員はコメントしている。
