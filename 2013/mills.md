---
id: 2013/mills
year: 2013
order: 10
authors: "Christopher_Mills"
orig_url: "https://www.ioccc.org/2013/mills/mills.c"
hint_url: "https://www.ioccc.org/2013/mills/hint.html"
title: "IOCCC 2013: Most timely rendered"
award_ja: "もっともタイムリーにレンダリングされている"
---

## 動作

時計の画像をレイトレーシングして生成し、HTTPサーバとして送信する。
次のように実行する。

```
$ ./mills
```

[http://localhost:8224](http://localhost:8224)を開くと次のようになる。

{% include img.html src="2013-mills.png" desc="HTTPサーバに接続した画面（プログレッシブ画像で徐々に高画質化し、数秒ごとに自動更新する）" %}

## 解説

Webサーバで、PNGエンコーダで、レイトレーサで、時計。
PNGは[Adam7](http://en.wikipedia.org/wiki/Adam7_algorithm)のプログレッシブ画像なので、最初は低画質で表示され、徐々に高画質になる。

コードの形状は球。
球を並べて時計の文字としているからか。
なお、コードの下の方にある巨大な空白は、フォントデータとのこと。

コンパイル時のマクロによってライトの数や座標、視点の位置などを変更できる。
詳しくはhint.textを参照。

作者は[[[1990/cmills]]]({{ site.baseurl }}{% link 1990/cmills.md %})と[[[1993/cmills]]]({{ site.baseurl }}{% link 1993/cmills.md %})で入賞しており、実に20年ぶりの入賞とのこと。
