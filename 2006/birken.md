---
id: 2006/birken
year: 2006
order: 1
authors: "Michael_Birken"
orig_url: "https://www.ioccc.org/2006/birken/birken.c"
hint_url: "https://www.ioccc.org/2006/birken/hint.text"
title: "IOCCC 2006: EDAMAME Award (Electronic Design Automation - Mechanical Abstract Machine Emulator)"
award_ja: "EDAMAME賞（電子的設計自動化 - 機械的抽象機械エミュレータ）"
---

## 動作

回路シミュレータとのこと。
次は、57 + 142をする回路記述をシミュレーションする例。

```
$ gcc -o birken birken.c

$ ./birken < adder.tofu
Build complete: 80 components, 145 nodes.
1: 000000000
3: 010110111
4: 010100111
6: 010000111
8: 011000111
```

199になった。

## 解説

TOFUという回路記述言語。
豆腐が由来。豆腐はベジタリアン向けの人工肉という扱い（[Vegetarian hot dog](https://en.wikipedia.org/wiki/Vegetarian_hot_dog)）なので、人工回路になってもいいじゃない、ということらしい（よくわからない）。
賞名はそれに合わせ、似たような位置づけの日本食である枝豆。

[55ページの長大なマニュアル（PDF）](https://www.ioccc.org/2006/birken/info.pdf)があるので、興味のある人は見るといいと思う。
