---
id: 1998/df
year: 1998
order: 4
authors: "Daniel_Fischer"
orig_url: "https://www.ioccc.org/1998/df.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1998/df.hint"
title: "IOCCC 1998: Best Data Hiding"
award_ja: "最高のデータ隠蔽"
---

## 動作

単語当てゲーム。
1文字入力するごとに、それが使われている位置が表示される。

```
$ gcc -o df df.c

$ ./df
        [________]
a
        [_____A__]
b
        [B____A__]
c
        [B____A__]
d
        [B____A__]
e
        [BE_E_A_E]
v
        [BEVE_A_E]
r
        [BEVERA_E]
g
        [BEVERAGE]
```

隠された単語はプログラム中に隠されている。

## 解説

この作品の一番のポイントは、賞名にあるとおり、単語の隠し方。
答えを言うと、例えば次のような行にエンコードされている。

```
	short pb=0,Md=1,ih=2,sfp=3,sjs=4,fo,u=5,scp=6,t,gq=7,oh,r=8,pcf=9,rs=10;
```

タブが現れて、空白が現れたあと、改行文字に到達するまでの間のアルファベットがデータを構成している。
小文字は辞書テーブルから文字を引く、大文字は辞書テーブルをいじった後に文字を引く、という操作をしているので字面から隠された単語を特定することはできない。

この他に、コードはマクロを活用して難読化されている。
`#include __FILE__`によってコードの実質的な順序はバラバラになっている。
`#define while(int) ...fopen(__##int##__,"r")...`して`while(FILE)`することでソースコードを`fopen`するとか。おしゃれ。

賞名は、モジュール性の用語の[データ隠蔽](https://ja.wikipedia.org/wiki/%E3%82%AB%E3%83%97%E3%82%BB%E3%83%AB%E5%8C%96)にかけたネタ。
