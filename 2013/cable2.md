---
id: 2013/cable2
year: 2013
order: 15
authors: "Adrian_Cable"
orig_url: "https://www.ioccc.org/2013/cable2/cable2.c"
hint_url: "https://www.ioccc.org/2013/cable2/hint.html"
title: "IOCCC 2013: Best of show"
award_ja: "最優秀賞"
---

## 動作

手書き文字を認識するOCR。
次の画像を認識し、書かれている文字を標準出力に出す。

{% include img.html src="2013-cable2-1.png" desc="手書き文字の入力例の画像（ascii.bmp）" cite="https://www.ioccc.org/2013/cable2/example-images.tbz2" %}

```
$ ./cable2 ascii.bmp
The Quick Brown Fox Jumps Over A Lazy Dog
ABCDEFGHIJKLMNOPQRSTUVWXYZ
abcdefghijklmnopqrstuvwxyz
0123456789
!"#$%&'()*+,-./
[\]{|}:;<=>?@~^_`
```

---

色付き文字も認識できる。

{% include img.html src="2013-cable2-2.png" desc="色付き文字の入力例（multi_color.bmp）" cite="https://www.ioccc.org/2013/cable2/example-images.tbz2" %}

{% include img.html src="2013-cable2-3.png" desc="multi_color.bmpの認識結果" %}

---

文字の大きさがバラバラでも認識できる。

{% include img.html src="2013-cable2-4.png" desc="文字サイズがバラバラの入力例（mixed_sizes.bmp）" cite="https://www.ioccc.org/2013/cable2/example-images.tbz2" %}

```
$ ./cable2 mixed_sizes.bmp
SMALL
 LARGE
MIXED
```

---

手書きC言語プログラム。

{% include img.html src="2013-cable2-5.png" desc="手書きC言語プログラムの入力例（hello_world.bmp）" cite="https://www.ioccc.org/2013/cable2/example-images.tbz2" %}

```
$ ./cable2 hello_world.bmp | gcc -xc -o hello -

$ ./hello
Hello, world!
```

---

手書きではないフォントも、手書きフォントにある程度近ければ認識できる。

{% include img.html src="2013-cable2-6.png" desc="手書きではない文字の入力例（typeset.bmp）" cite="https://www.ioccc.org/2013/cable2/example-images.tbz2" %}

```
$ ./cable2 typeset.bmp
EXAMPLE OF TYPESET TEXT
```

---

IOCCC用のおまけ機能。

{% include img.html src="2013-cable2-7.png" desc="おまけの入力例（bonus.bmp）" cite="https://www.ioccc.org/2013/cable2/example-images.tbz2" %}

```
$ ./cable2 bonus.bmp
Hello IOCCC!
```

## 解説

チートではない、まじめなOCR。
bmpを受け取って、書かれた文字を認識して出力する。
特に仕込みのあるbmpではなく、自分で書いたものでよいとのこと。
横幅は4の倍数で、8ビットグレースケールか、24ビットカラーか、32ビットカラーでないとダメ。
アンチエイリアスをしても大丈夫だが、カラーモードはおかしくなることがある。

コード形状は、月と狐と犬。
フォントのサンプル文として使われる[The quick brown fox jumps over the lazy dog](https://ja.wikipedia.org/wiki/The_quick_brown_fox_jumps_over_the_lazy_dog)になぞらえたもの。
月は、なんとなく美的な雰囲気を出すためだと思う。

OCRのアルゴリズムは既存のものではなく、IOCCCのために新規開発したものとのこと。
IOCCCが独自研究のピアレビューと出版に使われた初の事例と主張している。

表示可能なASCII文字（94文字）と、空白、およびスマイルマークをサポートしている。
サイズ制限のために文字の形状はわりと限定的（ascii.bmpを参照せよとのこと）だが、拡張は可能とのこと。
文字のフォントデータは圧縮されていて、472文字。
サポートしている文字のストローク総数は約2000なので、すごい。
詳細未解析だが、いつかちゃんと解読したい。
