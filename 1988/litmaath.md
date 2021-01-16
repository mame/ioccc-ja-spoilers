---
id: 1988/litmaath
year: 1988
order: 3
authors: "Maarten_Litmaath"
orig_url: "https://www.ioccc.org/1988/litmaath.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1988/litmaath.hint"
title: "IOCCC 1988: Best small program"
award_ja: "最高の小さいプログラム"
---

## 動作

コマンドライン引数を文字単位でソートする。

```
$ gcc -o litmaath litmaath.c

$ ./litmaath Hello world EDCBA
Hello
dlorw
ABCDE
```

## 解説

プログラムは`while(<cond>);`の1文だけで、条件式の中ですべての必要な計算を行っている。
変数は`argc`と`argv`しか使っていない。
