---
id: 2000/natori
year: 2000
order: 7
authors: "NATORI_Shin"
orig_url: "https://www.ioccc.org/2000/natori.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/natori.hint"
title: "IOCCC 2000: Best Small Program"
award_ja: "最高のスモールプログラム"
linewrap: true
---

## 動作

月齢を月の形で表示する。

```
$ gcc -o natori natori.c

$ ./natori

                       ##
                          #####
                            #######
                             ########
                              #########
                               #########
                               ##########
                                ##########
                                ###########
                                ###########
                                ###########
                                ###########
                                ###########
                                ###########
                                ###########
                                ##########
                               ##########
                               #########
                              #########
                             ########
                            #######
                          #####
                       ##
```

## 解説

実質1行、200バイト程度で書かれている。
`main`関数を二重に再帰して`y`と`x`の二重ループを行い、`time(0)`から光が当たっているかどうかを計算する。

南半球にいる場合は`acos(l/2)`を`acos(-l/2)`にせよとのこと。

作者の人は所属が東京大学となっていて、anonymousが日本の人である可能性を除けば、おそらく初の日本の人の受賞。
