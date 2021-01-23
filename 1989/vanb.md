---
id: 1989/vanb
year: 1989
order: 8
authors: "David_Van_Brackle"
orig_url: "https://www.ioccc.org/1989/vanb.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1989/vanb.hint"
title: "IOCCC 1989: Best one liner"
award_ja: "最高のワンライナー"
---

## 動作

コマンドライン引数の真部分集合を列挙する。

```
$ gcc -o vanb vanb.c

$ ./vanb 1 2 3
2
3
----------
3
----------
1
3
----------
1
----------
----------
2
----------
1
2
----------
```

## 解説

変数は宣言せず、`argc`と`argv`だけで計算する。
実際にはそれぞれ`Q`と`O`という円数名になっており、`0`の多用も相まって視覚的な厳しさがある。
`main`関数の再帰呼び出しを活用している。

vanb.hintによると、`char`型が`signed`であることに依存しているらしい。Armでは動かないかもしれない。
