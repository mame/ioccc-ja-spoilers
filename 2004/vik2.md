---
id: 2004/vik2
year: 2004
order: 14
patch: true
authors: "Daniel_Vik"
orig_url: "https://www.ioccc.org/2004/vik2.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/vik2.hint"
title: "IOCCC 2004: Best Abuse of CPP"
award_ja: "最高のCPP悪用"
---

## 動作

素数列挙。

```
$ gcc -traditional-cpp -E '-DSTOP=_5' '-DFNAME="vik2_1.c"' vik2.c > vik2_1.c

$ gcc -E vik2_1.c > vik2_2.c

$ gcc -O vik2_2.c -o vik2

$ ./vik2
2
3
5
7
11
13
17
19
23
29
31
```

## 解説

純粋にCプリプロセッサで[ALU](https://ja.wikipedia.org/wiki/%E6%BC%94%E7%AE%97%E8%A3%85%E7%BD%AE)を構築し、その上で素数列挙を行っている。

vik2.hintで作者自身が言及している通り、ネタは[[[1988/applin]]]({{ site.baseurl }}{% link 1988/applin.md %})と同じだが、よりストイックな実装となっている。
`#define`でマクロを定義するが、右辺値を常に省略する方針で実装されている（`#define X`と定義したら、`X`は`1`として定義される）。
そして、プリプロセッサのレベルで加算などの整数演算は行わず、`#ifdef`で処理するとのこと。

IOCCCのサイズ制限をクリアするために、プリプロセッサを2段にする必要があった（1段目では`#define C #define`などとして`#define`などを含むコードを生成する）。
あいにく1段階目は現代のgccでは動かないので`-traditional-cpp`を用いた。
しかし`-traditiona-cpp`と`#include <stdio.h>`は同時に利用できないので、`#include`のほうをvik2.cから削除して通した。
