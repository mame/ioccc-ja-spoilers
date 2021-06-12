---
id: 2019/duble
year: 2019
order: 7
authors: "Etienne_Duble"
orig_url: "https://www.ioccc.org/2019/duble/prog.c"
hint_url: "https://www.ioccc.org/2019/duble/hint.html"
title: "IOCCC 2019: Best collaborative graphics"
award_ja: "もっとも協力的なグラフィックス"
---

## 動作

ターミナルでのお絵かきツール。
同じ画面を複数人で編集できる。

1つめの端末で次のように実行する。

```
$ gcc -Dg=11 -Ds=0 -DV=24 -DW=80 -o prog prog.c

$ ./prog /tmp/drawing
```

{% include img.html src="2019-duble-1.png" desc="起動画面" %}

操作は次の通り。

* 矢印キーで移動。
* `p`でペンモード（カーソルを移動したら現在色で塗っていく）。
* `l`で線モード（目的地まで移動してからもう一度`l`を押すことで線分を引く）。
* `c`で色を変える。
* `q`で終了。

線モードで直線を引く様子。

{% include img.html src="2019-duble-2.png" desc="青い直線を引く様子" %}

この画面は開いたまま、別の端末で同じコマンドを実行することで、同じセッションにジョインできる。

```
$ ./prog /tmp/drawing
```

操作方法は同じ。
どちらの編集もリアルタイムで同期される。

{% include img.html src="2019-duble-3.png" desc="赤いペンで適当にカーソルを動かした様子" %}

すべてのクライアントが編集終了したら、/tmp/drawingを実行することで編集結果を見ることができる。

{% include img.html src="2019-duble-4.png" desc="最終的な絵が保存されている" %}

## 解説

コード形状は、スクラッチパッドに線を書いている様子？

通信はUNIXソケットで行う。
すべて終了したときにUNIXソケットを実行ファイルに置き換えるというのは少しおもしろい。
この実行ファイルは`#!/bin/cat`のスクリプトになっている。
`ls --color /tmp/drawing`をすれば、編集状態が見えるだろうとのこと（UNIXソケットか実行ファイルかで色が変わる環境が多いので）。
