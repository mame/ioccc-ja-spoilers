---
id: 2013/cable1
year: 2013
order: 2
authors: "Adrian_Cable"
orig_url: "https://www.ioccc.org/2013/cable1/cable1.c"
hint_url: "https://www.ioccc.org/2013/cable1/hint.html"
title: "IOCCC 2013: Most partisan 1-liner"
award_ja: "もっとも党派心の強いワンライナー"
---

## 動作

アメリカ大統領が共和党か民主党かを判断する。

```
$ gcc -o cable1 cable1.c

$ ./cable1 obama republican democrat
democrat

$ ./cable1 nixon republican democrat
republican

$ ./cable1 bush republican democrat
republican

$ ./cable1 kennedy republican democrat
democrat

$ ./cable1 lincoln republican democrat
republican
```

## 解説

アメリカの大統領が共和党・民主党のどちらかから選ばれるようになった[フランクリン・ピアース](https://ja.wikipedia.org/wiki/%E3%83%95%E3%83%A9%E3%83%B3%E3%82%AF%E3%83%AA%E3%83%B3%E3%83%BB%E3%83%94%E3%82%A2%E3%83%BC%E3%82%B9)から、当時の[バラク・オバマ](https://ja.wikipedia.org/wiki/%E3%83%90%E3%83%A9%E3%82%AF%E3%83%BB%E3%82%AA%E3%83%90%E3%83%9E)までの31人の大統領を適切に分類する。
テーブルを持っているわけではなく、大統領名の最初の4文字をリトルエンディアンの`int`型（32ビット）で表現した値を、`値 % 4796 % 275`するという魔法の計算によって判定する、一種の[完全ハッシュ関数](https://ja.wikipedia.org/wiki/%E3%83%8F%E3%83%83%E3%82%B7%E3%83%A5%E9%96%A2%E6%95%B0)。
この値はブルートフォースで見つけたと思われる。

なお、[セオドア・ルーズベルト](https://ja.wikipedia.org/wiki/%E3%82%BB%E3%82%AA%E3%83%89%E3%82%A2%E3%83%BB%E3%83%AB%E3%83%BC%E3%82%BA%E3%83%99%E3%83%AB%E3%83%88)は"roosevelt"、[フランクリン・ルーズベルト](https://ja.wikipedia.org/wiki/%E3%83%95%E3%83%A9%E3%83%B3%E3%82%AF%E3%83%AA%E3%83%B3%E3%83%BB%E3%83%AB%E3%83%BC%E3%82%BA%E3%83%99%E3%83%AB%E3%83%88)は"fdr"と入力せよとのこと。

ワンライナーではあるが、肝は上記の完全ハッシュ関数だけなので十分短い。
86バイトは、[[[1987/biggar]]]({{ site.baseurl }}{% link 1987/biggar.md %})や[[[1994/smr]]]({{ site.baseurl }}{% link 1994/smr.md %})などのような色物を除けば最小かも。
むしろ、`main(int riguing,char**acters)`はの引数名はintringuing characters（面白いキャラクターたち）というように、遊びを入れている。

審査員のコメントはMac/PC診断で遊んでいる。
ちなみに残念ながらtrumpはdemocratと判断された。
