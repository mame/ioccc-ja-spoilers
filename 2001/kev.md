---
id: 2001/kev
year: 2001
order: 9
authors: "Kevin_Pulo"
orig_url: "https://www.ioccc.org/2001/kev.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2001/kev.hint"
title: "IOCCC 2001: Best Curses Game"
award_ja: "最高のcursesゲーム"
---

## 動作

端末で普通に起動する。

```
$ gcc -DPORT=5455 -DSPEED=50 -Dl_="socket(il.sin_family=AF_INET,SOCK_STREAM,0)" -o kev kev.c -lcurses

$ ./kev
```

別の端末で次のように起動する。

```
$ ./kev localhost
```

ピンポン対戦が始まる。

```
                                                 [==================]           









7
--------------------------------------------------------------------------------2

                                                             *








                                       [==================]
```

下側のパッドが自分、上側が相手。<kbd>,</kbd>で左、<kbd>,</kbd>で右に動かす。

## 解説

コードはパッドの形状を縦向きにしたものになっている。

賞名は同年の[[[2001/williams]]]({{ site.baseurl }}{% link 2001/williams.md %})と対称的。
