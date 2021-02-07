---
id: 1991/dds
year: 1991
order: 7
patch: true
authors: "Diomidis_Spinellis"
orig_url: "https://www.ioccc.org/1991/dds.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1991/dds.hint"
title: "IOCCC 1991: Most Well Rounded"
award_ja: "もっともよく練り上げられている"
---

## 動作

BASICコンパイラ。付属するLANDER.BASを起動する例。

```
$ gcc -o dds dds.c

$ ./dds LANDER.BAS

$ ./a.out
You aboard the Lunar Lander about to leave the spacecraft.
Ready for detachment
-- COUNTDOWN --
10
9
8
7
6
5
4
3
2
1
0
You have left the spacecraft.
Try to land with velocity less than 5 m/sec.
        Meter readings
        --------------
Fuel (gal):
500
Velocity (m/sec):
70
Height (m):
1000
How much fuel will you use?
```

## 解説

[[[1990/dds]]]({{ site.baseurl }}{% link 1990/dds.md %})の続編で、インタプリタの次はコンパイラ。
読み込んだBASICソースコードをC言語ソースコードに変換し、ccを呼ぶことでバイナリを生成する。

生成するC言語ソースコードの断片は、文字列リテラルにシーザー暗号（各文字をASCIIに1を加えた文字に置換）した状態で保持されている。
このデータをデコードするために文字列リテラルを破壊しているので、配列に代入することで回避した。
また、生成されたコードは`gets`関数を使っているので、プロトタイプ宣言の`char *gets();`を出力するようにした（エンコードし、`dibs!+hfut)*<`を追加した）。
