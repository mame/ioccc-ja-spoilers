---
id: 2019/dogon
year: 2019
order: 6
authors: "Gil_Dogon"
orig_url: "https://www.ioccc.org/2019/dogon/prog.c"
hint_url: "https://www.ioccc.org/2019/dogon/hint.html"
title: "IOCCC 2019: Best use of space and time"
award_ja: "空間と時間の最高の使い方"
---

## 動作

[HashLife](https://ja.wikipedia.org/wiki/%E3%83%8F%E3%83%83%E3%82%B7%E3%83%A5%E3%83%A9%E3%82%A4%E3%83%95)手法による高速なライフゲームの実装。
X11で動く。

```
$ gcc -DX=640l -DY=480l -DZ=0x20000000 -o prog prog.c -lX11

$ ./prog < glider.mc
```

{% include img.html src="2019-dogon-1.png" desc="起動直後の画面" %}

上下左右の矢印キーで視点を移動、`-`でズームアウト。
`+`でズームインできるとあるが、動作しなかった（シフトを押さずに`+`を押せとあるが、それもダメだった）。
スペースでシミュレーションの開始と停止。

{% include img.html src="2019-dogon-2.png" desc="少し進めた画面" %}

`0`を押すと、スペースで1ステップだけ進むモードになる（もう一度押すと普通のモードに戻る）。
`]`で、1ステップで進む世代数を倍にし、`[`で半減する。
バックスペースで時間を戻す方向にすすめるモードにできる（もう一度押すと普通のモードに）。

## 解説

HashLifeはライフゲームを高速にシミュレーションするテクニック。
2の累乗にアラインしている同じパターンを共通化した四分木のダグ構造みたいなデータ構造でライフゲームの配置を表現することで、1世代ごとではなく2の累乗世代を1ステップで計算できる。
詳しくはWikipediaの記事などを参照のこと。

[Golly](http://golly.sourceforge.net/)という実装が有名。
添付されている.mcというファイルも[Gollyのフォーマット](http://golly.sourceforge.net/Help/formats.html)。

コード形状は、ハッシュ『#』と、アンク『☥』。
[アンク](https://ja.wikipedia.org/wiki/%E3%82%A2%E3%83%B3%E3%82%AF)は生命を表す記号。
よって『#☥』でハッシュライフ。

ライフゲーム自体はIOCCCで定番のネタで、先行関連作品に[[[1991/davidguy]]]({{ site.baseurl }}{% link 1991/davidguy.md %})、[[[1993/dgibson]]]({{ site.baseurl }}{% link 1993/dgibson.md %})、[[[2011/blakely]]]({{ site.baseurl }}{% link 2011/blakely.md %})、[[[2012/dlowe]]]({{ site.baseurl }}{% link 2012/dlowe.md %})がある。

いろいろな配置データが添付されているが、次の配置はIOCCC専用に作られている。

```
$ ./prog < message.mc
```

{% include img.html src="2019-dogon-3.png" desc="'IOCCC 2019 #Hash Life Rules!'というメッセージがが流れる（ものすごくズームアウトしている）" %}
