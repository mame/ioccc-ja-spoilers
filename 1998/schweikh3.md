---
id: 1998/schweikh3
year: 1998
order: 12
authors: "Jens_Schweikhardt"
orig_url: "https://www.ioccc.org/1998/schweikh3.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1998/schweikh3.hint"
title: "IOCCC 1998: Most Space Efficient"
award_ja: "もっとも空間効率的"
---

## 動作

同じファイルが無駄にディスクを消費している状態を検出する。

```
$ gcc -trigraphs -DM0=sizeof -DM1=long -DM2=void -DM3=realloc -DM4=calloc -DM5=free -o schweikh3 schweikh3.c

$ cp schweikh3 file1

$ cp schweikh3 file2

$ cp schweikh3.c file3

$ ln file3 file4

$ ls file? | ./schweikh3
17672   file2   file1   =       1       1
````

## 解説

コード形状は"DISK SPACE"。
man風のドキュメントがついている。
まずデバイスファイルやハードリンクなどを検出して、それからファイルサイズが同じファイルの中身を比較していくとのこと。
