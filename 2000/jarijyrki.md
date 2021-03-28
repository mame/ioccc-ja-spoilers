---
id: 2000/jarijyrki
year: 2000
order: 14
authors:
  - "Jari_Arkko"
  - "Jyrki_Holopainen"
orig_url: "https://www.ioccc.org/2000/jarijyrki.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/jarijyrki.hint"
title: "IOCCC 2000: Best of Show"
award_ja: "最優秀賞"
---

## 動作

Xでスプレッドシートアプリ。

{: .wrap }
```
$ gcc -I/usr/include/X11 -DNeedFunctionPrototypes -DU=40 -DT=98 '-Dz=(T+1)*U*U' -DQ=80 -DS=20 -DN=10 -DB=5 -DG=23 -Dp=7 '-DM=((p+1)*Q)+S' '-DH=(G*S)+S+S' -DC=XK_Up -DL=XK_Down -DO=XK_Left -DV=XK_Right -DR=XK_Escape -D_=XK_BackSpace -o jarijyrki jarijyrki.c -lX11

$ ./jarijyrki < sheet1.info > myedits.info
```

{% include img.html src="2000-jarijyrki.png" desc="X Window Systemで動くスプレッドシートアプリ" %}

数値を編集でき、それに合わせてグラフもちゃんと自動更新される。

## 解説

画像だけではわからないところも作りこんである。セルの参照、四則演算（逆ポーランド記法）、セルの値を変えたらいろいろ再計算される、スクロール、円グラフや棒グラフは固定ではなく自分で描けるなど。

コードはただの四角だが、ここまで多機能に作り込まれているものがこのサイズなのは確かにインパクトがある。
