---
id: 2000/schneiderwent
year: 2000
order: 11
authors: "Craig_Schneiderwent"
orig_url: "https://www.ioccc.org/2000/schneiderwent.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/schneiderwent.hint"
title: "IOCCC 2000: Most Timely Output"
award_ja: "もっともタイムリーな出力"
---

## 動作

時刻を英語でざっくり説明してくれる。

```
$ gcc -trigraphs -o schneiderwent schneiderwent.c

$ ./schneiderwent schneiderwent.data
it's just after ten 'til 6 in the evening
```

## 解説

いろいろと懐古主義的な要素が詰まったコードになっている。

* メッセージの文字列はschneiderwent.dataに入っているが、文字コードが[EBCDIC](https://ja.wikipedia.org/wiki/EBCDIC)。
* 環境がEBCDICであるかASCIIであるかを判定して（`'J'`が奇数ならEBCDICらしい）、環境にあった文字コードで出力するとのこと。
* [trigraph](https://ja.wikipedia.org/wiki/%E3%83%88%E3%83%A9%E3%82%A4%E3%82%B0%E3%83%A9%E3%83%95)の使用は審査員が嫌っているが、[IBM 3270](https://ja.wikipedia.org/wiki/IBM_3270)では対応する文字がないのでやむを得ない（EBCDICなので鍵カッコがなかったらしい）。
* 若い頃にCOBOLを覚えると冗長にしがちで、`#define`はその影響みたいなことが書いてある（よくわからず）。

賞名は、[[[2000/bellard]]]({{ site.baseurl }}{% link 2000/bellard.md %})と[[[2000/thadgavin]]]({{ site.baseurl }}{% link 2000/thadgavin.md %})と対象的になっている。
