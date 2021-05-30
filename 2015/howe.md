---
id: 2015/howe
year: 2015
order: 8
authors: "Anthony_C._Howe"
orig_url: "https://www.ioccc.org/2015/howe/prog.c"
hint_url: "https://www.ioccc.org/2015/howe/hint.html"
title: "IOCCC 2015: Most Different"
award_ja: "もっとも異なる"
---

## 動作

diffコマンド。

```
$ cat tmp1.txt
a
b
c

$ cat tmp2.txt
a
B
c

$ gcc -o prog prog.c

$ ./prog tmp1.txt tmp2.txt
1a2
> B
2d2
< b
```

`-d`をつけると編集距離を出力する。

```
$ ./prog -d tmp1.txt tmp2.txt
2
```

## 解説

diffのアルゴリズムである[An O(NP) sequence comparison algorithm](https://www.sciencedirect.com/science/article/abs/pii/002001909090035V)を実装したものとのこと。

[FNVハッシュ関数](https://en.wikipedia.org/wiki/Fowler%E2%80%93Noll%E2%80%93Vo_hash_function)を使っている。
このハッシュ関数は、IOCCCの審査員である[Landon Curt Noll](https://en.wikipedia.org/wiki/Landon_Curt_Noll)が開発者の一人（FNVのNはNollのN）なので、エゴを刺激するために選ばれた。
