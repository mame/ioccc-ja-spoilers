---
id: 2006/hamre
year: 2006
order: 4
authors: "Steinar_Hamre"
orig_url: "https://www.ioccc.org/2006/hamre/hamre.c"
hint_url: "https://www.ioccc.org/2006/hamre/hint.text"
title: "IOCCC 2006: Most Irrational"
award_ja: "もっとも不合理"
---

## 動作

有理数をサポートした電卓。

```
$ gcc -o hamre hamre.c

$ ./hamre 1-1/3
2/3

$ ./hamre '-1+4/3*(2+1/(3/2*(7/2-7/3+1/6)))/2'
2/3
```

## 解説

四則演算とカッコをサポートしている、有理数の計算をするツール。

コード形状は"1/2"。
IOCCCの作品はマジックナンバーを使いすぎる傾向があるので、このプログラムでは7より大きいマジックナンバーは使わないように心がけたとのこと。

賞名のirrationalは、不合理という意味と、無理数（irrational number）という意味をかけている。
