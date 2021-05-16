---
id: 2013/dlowe
year: 2013
order: 4
authors: "J_David_Lowe"
orig_url: "https://www.ioccc.org/2013/dlowe/dlowe.c"
hint_url: "https://www.ioccc.org/2013/dlowe/hint.html"
title: "IOCCC 2013: Best sparkling utility"
award_ja: "最高のきらめくツール"
---

## 動作

Unicodeの文字を使ってスパークライン（小さなグラフ）を表示する。

```
$ gcc -include stdio.h -include stdlib.h -D'_(x)=strtof(b[x],0)' -o dlowe dlowe.c

$ ./dlowe 0 1 2 3 4 5 6 7
▁▂▃▄▅▆▇▉

$ ./dlowe 16 32 64 128
▁▂▄▉
```

## 解説

動作例がすべて。
久々のアイデア一発勝負の作品。

コードは150バイト弱。
データの最大値と最小値を求めて、オートスケールして表示する。
U+2581からU+2589までの文字（[ブロック要素](https://ja.wikipedia.org/wiki/%E3%83%96%E3%83%AD%E3%83%83%E3%82%AF%E8%A6%81%E7%B4%A0)）を使う。
UTF-8の下位バイトが違うだけなので、直接`printf("\xe2\x96%c",...)`で直接表示している。
