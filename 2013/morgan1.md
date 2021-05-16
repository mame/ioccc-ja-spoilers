---
id: 2013/morgan1
year: 2013
order: 12
authors: "Yves-Marie_Morgan"
orig_url: "https://www.ioccc.org/2013/morgan1/morgan1.c"
hint_url: "https://www.ioccc.org/2013/morgan1/hint.html"
title: "IOCCC 2013: Smallest large system simulator"
award_ja: "大きいシステムの最小のエミュレータ"
---

## 動作

太陽系の惑星の位置を表示する。

```
$ gcc -o morgan1 morgan1.c -lX11 -lm

$ echo "2013/10/03" | ./morgan1
```

{% include img.html src="2013-morgan1-1.png" desc="2013年10月3日ごろの太陽系の惑星の配置" %}

矢印キーで日付を変えられる。
左で1日戻る、右で1日進む、下で20日戻る、上で20日進む。

1986年と1997年に接近した有名な彗星も表示する。

[ハレー彗星](https://ja.wikipedia.org/wiki/%E3%83%8F%E3%83%AC%E3%83%BC%E5%BD%97%E6%98%9F)。`Ha`が地球（`Ea`）に近づいている。

```
$ echo "1985/10/28" | ./morgan1
```

{% include img.html src="2013-morgan1-2.png" desc="1985年10月28日ごろの太陽系の惑星の配置（Haはハレー彗星）" %}

[ヘール・ボップ彗星](https://ja.wikipedia.org/wiki/%E3%83%98%E3%83%BC%E3%83%AB%E3%83%BB%E3%83%9C%E3%83%83%E3%83%97%E5%BD%97%E6%98%9F)。中心付近に`Hb`がある。

```
$ echo "1996/12/31" | ./morgan1
```

{% include img.html src="2013-morgan1-3.png" desc="1996年12月31日ごろの太陽系の惑星の配置（Haはヘール・ボップ彗星）" %}

## 解説

表示は対数になっている。
普通に表示すると水星・金星・地球・火星が太陽にくっついてしまうためとのこと。
