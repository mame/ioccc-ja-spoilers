---
id: 2013/morgan2
year: 2013
order: 13
authors: "Yves-Marie_Morgan"
orig_url: "https://www.ioccc.org/2013/morgan2/morgan2.c"
hint_url: "https://www.ioccc.org/2013/morgan2/hint.html"
title: "IOCCC 2013: Most playfully versatile"
award_ja: "もっともふざけて多用途"
---

## 動作

ドミノゲーム。

```
$ gcc -o morgan2 morgan2.c -lncurses -lX11

$ ./morgan2
```

{% include img.html src="2013-morgan2-1.png" desc="起動直後の様子" %}

左の8x8のマスが盤面、右の1列が手持ちのドミノを置く場所。
右列の一番上にある白いものがカーソル。
上下キーで動かし、改行を押すとそこに赤と緑の物体が現れる。

{% include img.html src="2013-morgan2-2.png" desc="手持ちのドミノを増やした様子" %}

さらに改行を押すと、その物体を選択した状態で左側のフィールドにカーソルが移動する。
ここで上下左右キーでカーソルを動かし、隣り合う物体と赤と緑が揃うように置いていく。
これを繰り返すだけ。

{% include img.html src="2013-morgan2-3.png" desc="手持ちのドミノを盤面に置いた" %}

次のように起動すると、全く同じゲームがXのアプリとして起動する。
ルールや操作方法は全く同じ。
マウスは使えないので注意。

```
$ ./morgan2 X
```

{% include img.html src="2013-morgan2-4.png" desc="端末だけでなくX Window Systemアプリとしても動く" %}

## 解説

右列でドミノを開いている数に応じて特典が変わるとのこと。
なるべく見ない状態で置いていけたほうが高得点。

置けなくなったら終了だが、自動では判定されないので`q`で終了せよとのこと。

コードはチェック柄。
チェッカーボードということだろうか。
