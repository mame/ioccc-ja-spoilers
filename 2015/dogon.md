---
id: 2015/dogon
year: 2015
order: 2
authors: "Gil_Dogon"
orig_url: "https://www.ioccc.org/2015/dogon/prog.c"
hint_url: "https://www.ioccc.org/2015/dogon/hint.html"
title: "IOCCC 2015: Most Crafty"
award_ja: "もっとも狡猾"
---

## 動作

起動すると[マインクラフト](https://ja.wikipedia.org/wiki/Minecraft)風の壁が見える。

```
$ gcc -DW=640 -Dp=480 -o prog prog.c -lX11 -lm

$ ./prog
```

{% include img.html src="2015-dogon-1.png" desc="起動直後の画面" %}

上下左右で視点を変えられる。90度弱ほど右に向いた様子。

{% include img.html src="2015-dogon-2.png" desc="右を向いた" %}

ファンクションキーで前方にすすめる。
F1だと停止、F2だとゆっくり進む、F3、F4と大きい数字にしていくことで高速になる。

自分が通ったあとのボクセルは消滅する。
壁に突っ込んで穴を開けた様子。

{% include img.html src="2015-dogon-3.png" desc="穴を開けた" %}

なお世界はトーラス上になっており、壁に垂直に突っ込めばそのうち元の洞窟に戻れる。

## 解説

コード形状はマインクラフトに出てくる敵の[クリーパー](https://minecraft-ja.gamepedia.com/%E3%82%AF%E3%83%AA%E3%83%BC%E3%83%91%E3%83%BC)の顔を少しいじったようなもの。

このデモは、マインクラフトの作者であるNotchが[JavaScriptで書いたデモ](https://twitter.com/notch/status/275329867984302081)をベースにしているとのこと。
オリジナルのデモは見えなくなっているが、"you may use the code in here for any purpose in any way you want, at your own risk"というライセンスだったらしい。
レンダリングを高速化したり、キーボードでの操作を可能にしたりしたところはこのコードの工夫。

賞名の"crafty"はMinecraftとかけている。
