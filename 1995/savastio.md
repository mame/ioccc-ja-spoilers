---
id: 1995/savastio
year: 1995
order: 9
authors: "Michael_Savastio"
orig_url: "https://www.ioccc.org/1995/savastio.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1995/savastio.hint"
title: "IOCCC 1995: Most Obfuscated Syntax"
award_ja: "もっとも難読化された構文"
---

## 動作

無限精度での階乗計算。

```
$ gcc -o savastio savastio.c

$ ./savastio
Enter number: 10
 3628800

$ ./savastio
Enter number: 100
 93326215443944152681699238856266700490715968264381621468592963895217599993
 2299156089414639761565182862536979208272237582511852109168640000000000000000
 00000000
```

## 解説

コード形状は階乗を表す"n!"。識別子に`l`と`1`を多用し、独特の趣がある。
アルゴリズムとしては、4桁ずつ区切ってリンクリストとして多倍長整数を表現しているとのこと。
`Enter number`のメッセージは縦長の文字が多めになるようにエンコードされて埋め込まれている。
