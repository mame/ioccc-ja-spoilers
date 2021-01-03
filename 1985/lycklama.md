---
id: 1985/lycklama
year: 1985
order: 3
patch: true
authors: "Ed_Lycklama"
orig_url: "https://www.ioccc.org/1985/lycklama/lycklama.c"
hint_url: "https://www.ioccc.org/1985/lycklama/hint.html"
award: "The strangest appearing program"
award_ja: "もっとも変な見た目のプログラム"
---

## 動作

入力行を右にスクロールしていく。

```
$ gcc -o lycklama lycklama.c

$ echo 0123456789 | ./lycklama
    0123456789
```

```
$ echo 0123456789 | ./lycklama
                                                                          01234
```

## 解説

`o_oo`みたいな識別子で埋め尽くされていて読む気がしない。

先頭の2行に注目する。

```
#define o define
#o ___o write
```

これは、`#o`を`#define`に置き換えた上でプリプロセスを行うというハックだが、残念ながら現代のCコンパイラでは動かないので書き下す必要があった。また、現代の環境ではスクロールが高速すぎてまったく見えないので、`usleep(10000)`のようなウェイトを置くとよい。
