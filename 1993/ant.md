---
id: 1993/ant
year: 1993
order: 1
authors: "Anthony_C._Howe"
orig_url: "https://www.ioccc.org/1993/ant.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1993/ant.hint"
title: "IOCCC 1993: Best Utility"
award_ja: "最高のユーティリティ"
---

## 動作

egrep風コマンド。

```
$ gcc -o ant ant.c

$ ./ant a.*t$ ant.hint
ant.hint:       make ant
ant.hint:    See the author's Posix P1003.2-like documentation file ant.txt
```

## 解説

作り込み系の作品。
POSIX.2の拡張正規表現の小さくないサブセットに対応しているとのこと。

難読化は識別子が1文字である程度で、見逃していない限り特別なテクニックは見られない。
man風のドキュメントが添付されている（[ant.txt](https://www.ioccc.org/1993/ant.txt)）。
同作者の[[[1992/ant]]]({{ site.baseurl }}{% link 1992/ant.md %})と同系統の作品。
