---
id: 2012/dlowe
year: 2012
order: 3
authors: "J_David_Lowe"
orig_url: "https://www.ioccc.org/2012/dlowe/dlowe.c"
hint_url: "https://www.ioccc.org/2012/dlowe/hint.html"
title: "IOCCC 2012: Best way to lose a life"
award_ja: "命を落とす最良の方法"
---

## 動作

ライフゲームをネタにしたX11ゲーム。

```
$ gcc -o dlowe dlowe.c -lX11

$ ./dlowe
```

起動するとタイトル画面。このタイトルロゴはライフゲームのルールで崩れていく。

{% include img.html src="2012-dlowe-1.png" desc="タイトル画面" %}

キーを押すとゲームが始まる。

{% include img.html src="2012-dlowe-2.png" desc="ゲーム画面" %}

画面右の真ん中あたりにある小さい[宇宙船](https://ja.wikipedia.org/wiki/%E5%AE%87%E5%AE%99%E8%88%B9_%28%E3%83%A9%E3%82%A4%E3%83%95%E3%82%B2%E3%83%BC%E3%83%A0%29)が自機。
自機が勝手に右に進む（画面全体が左にスクロールしていく）。
上下キーで自機を操作し、ライフゲームに従って変化する障害物を避け続ける。
ぶつかったらゲームオーバー。
スピードは徐々に速くなっていく。

## 解説

hint.textに書かれた"B3/S23"は、ライフゲームのルールを表す符号。
B3は「周囲3セルが生きていたら生まれる（birth）」、S23は「周囲2セルか3セルが生きていたら生き残る（survive）」の意味。

コード形状はライフゲームの配置で、19世代で[グライダー](https://ja.wikipedia.org/wiki/%E3%82%B0%E3%83%A9%E3%82%A4%E3%83%80%E3%83%BC_%28%E3%83%A9%E3%82%A4%E3%83%95%E3%82%B2%E3%83%BC%E3%83%A0%29)になるパターンとのこと。
難読化としては、たくさんのグローバル変数、違う意味での使いまわし、同じ識別子を`struct`のメンバでも使う、三項演算子や優先順位の悪用、マジックナンバーの多用などとのこと。
