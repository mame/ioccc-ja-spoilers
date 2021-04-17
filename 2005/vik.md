---
id: 2005/vik
year: 2005
order: 13
authors: "Daniel_Vik"
orig_url: "https://www.ioccc.org/2005/vik/vik.c"
hint_url: "https://www.ioccc.org/2005/vik/hint.text"
title: "IOCCC 2005: Most circuitous walk"
award_ja: "もっとも回り道"
---

## 動作

[Wolfenstein](https://ja.wikipedia.org/wiki/Wolfenstein)スタイルのグラフィックエンジン。

```
$ gcc -o vik vik.c -lX11 -lm

$ ./vik
```

{% include img.html src="2005-vik-1.png" desc="デフォルトの画面" %}

矢印キーで移動できる。左右で向きを変える。上で前に進む、下で後ろに戻る。

オプションもある。

```
$ ./vik -w 400 maze.map
```

{% include img.html src="2005-vik-2.png" desc="マップを指定して起動した様子" %}

`-w 400`は画面の横幅（省略可能）、maze.mapは迷路の指定（省略可能）。

作者自身によるYouTube動画。

{% include youtube.html src="u-3oox7FICg" desc="作者によるデモ動画" %}

## 解説

マップは次のようなフォーマットで指定する。

```
aaaaaaaaaaaaa
a           a
a      *    a
a    bbbb   cccccccc
c                  c
cccccccccccccccccccc
```

`*`が初期位置、`a`や`b`や`c`はそれぞれa.bmp、b.bmp、c.bmpをテクスチャとする壁。
増やすこともできる。

コードはindentコマンドをかけても読みやすくならない。
その証明として、あらかじめindentをかけてあるとのこと。
