---
id: 2005/jetro
year: 2005
order: 6
authors: "Jetro_Lauha"
orig_url: "https://www.ioccc.org/2005/jetro/jetro.c"
hint_url: "https://www.ioccc.org/2005/jetro/hint.text"
title: "IOCCC 2005: Most sonorous output"
award_ja: "もっとも鳴り響く出力"
---

## 動作

SDLで音楽が流れる。

```
$ gcc -o jetro jetro.c `sdl-config --cflags --libs` -lm

$ ./jetro
```

出力される音楽。

{% include audio.html src="2005-jetro.mp3" desc="再生される音楽" loop="true" %}

## 解説

`char l[]=...`から始まる4行が楽譜データ。
プリプロセスをするとほぼそのままのデータが見える。
`.`が休符、アルファベットが音階を表すと思う。
`r`が3音の和音（最初から鳴ってる音）、`b`がベース（2番目に鳴り出す音）、`l`がメロディ（最後に鳴りだす音）。

小さいコードに複雑な曲データが埋め込まれているのに感動できる。
ネタバレなのでネタバレをすると、楽譜データは繰り返しが多いので、適切なエンコードをすれば意外と小さくなることが多い。
また、リバーブを利かせているのが複雑な印象を増していると思う。
マクロ`EF`の定義を次のように置き換えると、リバーブが止まる。

```
#define EF(l,s,ms) ((s*ms)/2.f+EF_(3)]/2.f)
```

なお上記のmp3は、生成される出力をファイルに書き出すようにプログラムを改造して作った。
