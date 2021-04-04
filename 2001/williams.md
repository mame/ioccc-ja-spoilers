---
id: 2001/williams
year: 2001
order: 14
patch: true
authors: "John_Williams"
orig_url: "https://www.ioccc.org/2001/williams.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2001/williams.hint"
title: "IOCCC 2001: Best Graphic Game"
award_ja: "最高のグラフィックゲーム"
---

## 動作

X11での[ミサイルコマンド](https://ja.wikipedia.org/wiki/%E3%83%9F%E3%82%B5%E3%82%A4%E3%83%AB%E3%82%B3%E3%83%9E%E3%83%B3%E3%83%89)のクローン。

```
$ gcc -o williams williams.c -lX11

$ ./williams
```

{% include img.html src="2001-williams.png" desc="ミサイルコマンド風ゲーム" %}

降ってくるミサイルに対し基地を守る。
クリックすると迎撃ミサイルを発射する。
迎撃ミサイルはクリックした地点につくと爆発し、爆風の中に他のミサイルが巻き込まれたらそれも爆発する。
それがさらに誘爆することもある。
すべての都市が破壊されたら終了。

## 解説

コード形状は放射能マーク。
williams.hintの中に作者コメントで「`(x|1)%2`とやってる意味わかるか？」と書かれていて、おそらく符号を取り出す意図（xが正なら1、負なら-1）だと思うが、これはC言語では実装既定なのでポータブルではなさそう。

賞名は同年の[[[2001/kev]]]({{ site.baseurl }}{% link 2001/kev.md %})と対称的になっている。

よくわからないが、`XMaskEvent`の呼び出しで刺さっていたので、取り除いたら動作した。
