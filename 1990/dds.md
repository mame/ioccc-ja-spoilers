---
id: 1990/dds
year: 1990
order: 3
patch: true
authors: "Diomidis_Spinellis"
orig_url: "https://www.ioccc.org/1990/dds.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1990/dds.hint"
title: "IOCCC 1990: Best Language Tool"
award_ja: "最高の言語ツール"
---

## 動作

[BASIC](https://ja.wikipedia.org/wiki/BASIC)インタプリタ。付属するLANDER.BASを起動する例。

```
$ gcc -o dds dds.c

$ ./dds
Ok
OLD LANDER.BAS
Ok
RUN
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

言語処理系の作品。
これまでの同系統の作品と比べると、多くのコマンドや演算子がサポートされていて、丁寧に作られている。
難読化としては、ブロック上にしただけで特筆することはないと思う。

サンプルコードである[LANDER.BAS](https://github.com/ioccc-src/winner/blob/main/1990/LANDER.BAS)は[Lunar Lander（月面着陸ゲーム）](https://en.wikipedia.org/wiki/Lunar_Lander_%28video_game_genre%29)。
ターン毎に現在の燃料の残量、対地速度、高さが表示され、燃料の使用量を調整して地上に軟着陸することを目指す、レトロなテキストベースゲーム（1969年からあるらしい）。
この記事はネタバレ解説なので単純な攻略法を書くと、燃料をまったく使わずに落ちていき、墜落の直前で全量を噴射するとクリアできる。

`&&`の後に`void`を返す関数（`free()`）を書けなくなっていたので、そこだけ修正が必要。
