---
id: 1995/schnitzi
year: 1995
order: 10
authors: "Mark_Schnitzius"
orig_url: "https://www.ioccc.org/1995/schnitzi.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1995/schnitzi.hint"
title: "IOCCC 1995: Best One Liner"
award_ja: "最高のワンライナー"
---

## 動作

因数を列挙する。

```
$ gcc -o schnitzi schnitzi.c

$ ./schnitzi 24
2
3
4
6
8
12
24
Floating point exception
```

Floating point exceptionは仕様。詳しくは解説で。

## 解説

96バイトの短さもさながら、やり方がおもしろい。
割る数`n`ごとに`fork()`を行い、`n /= !(atoi(argv[1])%n)`を計算する。
問題の数が`n`で割り切れるときこの文は特になにもせず（`n /= 1`をやるだけ）、プログラムは`n`を表示して終わる。
割り切れないときゼロ除算を引き起こし、シグナル終了（Floating point exception）するので、`n`の表示は行われない。
