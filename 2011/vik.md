---
id: 2011/vik
year: 2011
order: 12
authors: "Daniel_Vik"
orig_url: "https://www.ioccc.org/2011/vik/vik.c"
hint_url: "https://www.ioccc.org/2011/vik/hint.html"
title: "IOCCC 2011: Most sound"
award_ja: "もっとも音的"
---

## 動作

[MODフォーマット](https://ja.wikipedia.org/wiki/MOD_%28%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%83%95%E3%82%A9%E3%83%BC%E3%83%9E%E3%83%83%E3%83%88%29)の音楽データをPCMデータに変換する。

```
$ gcc -o vik vik.c

$ ./vik randowan.mod > randowan.raw && ./raw2wav randowan.raw > randowan.wav
```

{% include audio.html src="2011-vik-1.mp3" desc="randowan.wav" cite="http://www.ioccc.org/2011/vik/randowan.mod" %}

```
$ ./vik mad_world.mod > mad_world.raw && ./raw2wav mad_world.raw > mad_world.wav
```

{% include audio.html src="2011-vik-2.mp3" desc="mad_world.wav" cite="http://www.ioccc.org/2011/vik/mad_world.mod" %}

作者自身によるYouTube動画。

{% include youtube.html src="ZvYcjxsMNoM" desc="作者によるデモ動画" %}

## 解説

MODは、[コモドール社](https://ja.wikipedia.org/wiki/%E3%82%B3%E3%83%A2%E3%83%89%E3%83%BC%E3%83%AB)が発売していたパソコン[Amiga](https://ja.wikipedia.org/wiki/Amiga)で作られた音楽フォーマット。
MODフォーマットには多数の機能があるが、トレモロとビブラートと位置ジャンプ以外はサポートしているとのこと。

賞名は、形容詞のsound（健全な）と名詞のsound（音）をかけている洒落。
