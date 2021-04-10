---
id: 2004/vik1
year: 2004
order: 13
patch: true
authors: "Daniel_Vik"
orig_url: "https://www.ioccc.org/2004/vik1.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/vik1.hint"
title: "IOCCC 2004: Best X11 Game"
award_ja: "最高のX11ゲーム"
---

## 動作

レースゲーム。

```
$ gcc -o vik1 vik1.c -lX11

$ ./vik
```

{% include img.html src="2004-vik1-1.png" desc="デフォルトのゲーム画面" %}

左右の矢印でハンドル操作。
スペースでアクセルを踏む。離すと徐々に減速する。

次のように実行すると冬になる。

```
$ ./vik1 a
```

{% include img.html src="2004-vik1-2.png" desc="冬モード" %}

次は夏の夜。

```
$ ./vik1 d
```

{% include img.html src="2004-vik1-3.png" desc="夏の夜モード" %}

次は冬の夜。

```
$ ./vik1 ad
```

{% include img.html src="2004-vik1-4.png" desc="冬の夜モード" %}

トラックの選択もでき、`2`とすると夏の昼のトラック2、`ad3`とすると冬の夜のトラック3など。

作者自身によるYouTube動画。

{% include youtube.html src="xTseqWCtAUA" desc="作者によるデモ動画" %}

## 解説

短いコードにもかかわらず、信じられないほど作り込まれている。次はvik1.hintのFeatureの翻訳。

* 道は左右に曲がるだけでなく、丘を登ったり降りたりする
* 地平線の向こうに山がある
* 昼は空に太陽がある
* 夜は空が暗くなり遠くの視界がなくなる
* 冬は雪が降る
* 冬はスリップする
* 車が道を外れると遅くなり、止まる
* 約1分程度のトラックが3種類ある
* スピードメーター
* コンピュータ操作の他の車がいる
* 他の車との衝突判定もする
* ラップ時間を計測する
* 最短ラップ時間を記憶する

`struct timeval`を`int*`として扱っている部分が壊れていた（現代では`time_t`が64ビット）ので、そこだけ修正した。
定数は奇妙に使い回されている（トラックの長さと色など）。
