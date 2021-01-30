---
id: 1990/cmills
year: 1990
order: 2
patch: true
authors: "Christopher_Mills"
orig_url: "https://www.ioccc.org/1990/cmills.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1990/cmills.hint"
title: "IOCCC 1990: Best Game"
award_ja: "最高のゲーム"
linewrap: true
---

## 動作

ブラックジャック。ダブルダウン、スプリット、インシュランスなど、いろいろ本格的。

```
$ gcc -DM=500 -DN=52 -DX="srand((int)time(0L))" -DV=void -o cmills cmills.c

$ ./cmills
Shuffle...
Total $1000.  Wager?500
Dealer: Q?      Player: 37
Double?y
Dealer: Q8      Player: 37K
Total $2000.  Wager?500
Dealer: Q?      Player: 56
Double?n
Hit?y
Dealer: Q?      Player: 56J
Hit?n
Dealer: Q7      Player: 56J
Total $2500.  Wager?500
Dealer: A?      Player: 6A
Insurance?y
Double?n
Hit?y
Dealer: A?      Player: 6AK
Hit?y
Dealer: A3Q6    Player: 6AK8
Total $1750.  Wager?
...
```

## 解説

C89が制定された新時代らしく、ANSI-compliantがうたわれている。
難読化としては、短い識別子を使い、インデントを破壊した程度ではないかと思うが、詳しくは見ていない。

文字列リテラルを破壊しているので修正が必要。
