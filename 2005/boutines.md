---
id: 2005/boutines
year: 2005
order: 3
authors: "Francois_Boutines"
orig_url: "https://www.ioccc.org/2005/boutines/boutines.c"
hint_url: "https://www.ioccc.org/2005/boutines/hint.text"
title: "IOCCC 2005: Most superfluous output"
award_ja: "もっとも過剰な出力"
---

## 動作

2次元の点の集合を入力し、[ボロノイ図](https://ja.wikipedia.org/wiki/%E3%83%9C%E3%83%AD%E3%83%8E%E3%82%A4%E5%9B%B3)をSVGで描く。

{: .wrap }
```
$ gcc -o boutines boutines.c

$ ruby -e '20.times{puts "#{rand} #{rand}"}' | ./boutines > test.svg

$ convert test.svg test.png
```

{% include img.html src="2005-boutines.png" desc="ランダムに配置した点に対してボロノイ図を計算した様子" %}

## 解説

審査員が「『生成されたSVGファイルは名前に反してスケーラブルでない』の意味を説明できますか？」という問いを残している。
SVGはScalable Vector Graphicsの略なのに、巨大なSVGファイルを作るとビューアが重くなってつらい（スケーラブルでない）という意味だと思われる。
もちろん、SVGのScalableは拡大縮小できるという意味。

賞名の意味はわからなかった。
