---
id: 1996/jonth
year: 1996
order: 5
authors: "Jon_Thingvold"
orig_url: "https://www.ioccc.org/1996/jonth.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1996/jonth.hint"
title: "IOCCC 1996: Best X11 Entry"
award_ja: "最高のX11作品"
---

## 動作

X Window Systemでの対戦○×ゲーム。

```
$ gcc -o jonth jonth.c -lX11 -lm

$ ./jonth
```

次のような窓が2つ開き、片方は✕のプレイヤー用、もう片方は○のプレイヤー用。
○ではなく✕が先手らしいので注意。

{% include img.html src="1996-jonth.png" desc="tic-tac-toe（○✕ゲーム）" %}

## 解説

プリプロセスの指示しかないところが目を引く。
これは/usr/include/X11/Xlib.hの中の`XIMOfIC`のプロトタイプ宣言（下記抜粋）を置き換えることで実現されている。
互換性にかなり不安があるが、2021年現在では動いた。

```
extern XIM XIMOfIC(
    XIC /* ic */
);
```

いつか動かなくなったときは、`#include <X11/Xlib.h>`をファイル先頭に移し、上記のプロトタイプ宣言をファイル末尾に貼り付ければ動くと思う。

jonth.hintに「チート方法を探せ」とある。
マークを置いたら`char`型変数を`++`してフラグをたてているので、255回くらいクリックすることで相手のマークを消すことができる。
