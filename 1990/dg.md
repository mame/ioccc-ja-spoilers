---
id: 1990/dg
year: 1990
order: 4
patch: true
authors: "David_Goodenough"
orig_url: "https://www.ioccc.org/1990/dg.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1990/dg.hint"
title: "IOCCC 1990: Best Abuse of the C Preprocessor"
award_ja: "Cプリプロセッサの最高の悪用"
---

## 動作

ROT13エンコーダ。

```
$ gcc -o dg dg.c

$ echo Hello | ./dg
Uryyb
```

## 解説

トークンを1つだけ追加するマクロを大量に定義し、それらを組み合わせるだけでプログラムを構成している。
単純だがおもしろい。

```
#define aqu(x) x'
#define bqu(x) 'x

aqu(bpu(A))
```

によって`'A'`を作り出す、というのは動かないので、これは`'A'`に置き換えた（このことはdg.hintにも書かれている）。
また、`#define d define`のトリックも動かないので書き下した。
