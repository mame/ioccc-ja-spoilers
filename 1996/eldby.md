---
id: 1996/eldby
year: 1996
order: 2
patch: true
authors: "Thor_Eldby"
orig_url: "https://www.ioccc.org/1996/eldby.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1996/eldby.hint"
title: "IOCCC 1996: Best Output"
award_ja: "最高の出力"
---

## 動作

球が浮かぶ空間を飛行するようなアニメーション。

```
$ gcc -o eldby eldby.c

$ ./eldby
```

```
Thor AAge Eldby [eldby@online.no]                        .oeeeeeeo
                                                       eggllllllggeo
                                                     ogll4444444llgge
     ooo                                            egl44OOOOOO44llgeo
 .eggllllgge                                       .gl4OOOOOOOOO44lggo
.egll444444lg.                                     el44OOOSSOOOO44lgeo
oggl444OO444lg                                     og44OOOOOOOO444lge
 egl4444OO44lg                                      gl44OOOOOO44llge
  egll44444lge                                       gll444444llgeo
.oo eeggggge                                          oegglllggeo
lllllg
44444lg
4444lle                                .Ol
gggge                                  gO4









                                                                              B
```

## 解説

端末でなめらかなアニメーションを行う初の作品。8行でシンプルにまとめられていて美しい。

現代の環境では速すぎるので`usleep`でウェイトを置いた。
