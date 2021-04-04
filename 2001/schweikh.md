---
id: 2001/schweikh
year: 2001
order: 12
authors: "Jens_Schweikhardt"
orig_url: "https://www.ioccc.org/2001/schweikh.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2001/schweikh.hint"
title: "IOCCC 2001: Best one-liner"
award_ja: "最高のワンライナー"
---

## 動作

globのパターンマッチ（シェルのワイルドカード）を判定する。

```
$ gcc -o schweikh schweikh.c

$ ./schweikh foo 'f??'; echo $?
0

$ ./schweikh bar 'f*'; echo $?
1
```

`foo`は`f??`とマッチするので正常終了（0）。`bar`は`f*`とマッチしないので異常終了（1）。

## 解説

127文字のワンライナー。シンプルでよい。`*`の解釈をバックトラックしないといけない（最初にマッチしたところ以外も試さないといけない）ので、巧妙に再帰を構築している。

```
$ ./schweikh foo-bar-baz-bar-qux '*bar-qux'; echo $?
0
```
