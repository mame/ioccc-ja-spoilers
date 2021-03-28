---
id: 2000/anderson
year: 2000
order: 1
authors: "Glyn_Anderson"
orig_url: "https://www.ioccc.org/2000/anderson.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/anderson.hint"
title: "IOCCC 2000: Best Use of Flags"
award_ja: "最高のフラグの使い方"
---

## 動作

手旗信号のアスキーアートを出力する。

```
$ gcc -m32 -o anderson anderson.c

$ echo "Hello" | ./anderson
              <>       <>       <>    <>
  _()       ()/      ()/      ()/     _\)       ()
[] /^      |^^      /^^      /^^    [] ^^      |^^|
  <>[      [][     <>][     <>][       ][      [][]
```

## 解説

コード形状は、欧米の手旗信号に使われる旗。
マクロによる難読化は一切使わず、キーワードも`char`が最初に1つあるだけ、すべての関数は式1つだけ、となっており、とても気持ちの良い一品。

賞名のFlagsは、[プログラミングのフラグ](https://ja.wikipedia.org/wiki/%E3%83%95%E3%83%A9%E3%82%B0_%28%E3%82%B3%E3%83%B3%E3%83%94%E3%83%A5%E3%83%BC%E3%82%BF%29)と思わせて、普通に旗の意味。
