---
id: 2000/primenum
year: 2000
order: 8
authors: "Raymond_Cheong"
orig_url: "https://www.ioccc.org/2000/primenum.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/primenum.hint"
title: "IOCCC 2000: Best Abuse of CPP"
award_ja: "CPPの最高の悪用"
---

## 動作

一部の文字をxorでエンコードする。

```
$ gcc -o primenum primenum.c

$ echo Hello 123 | ./primenum 3
Kfool 123

$ echo Hello 123 | ./primenum 3 | ./primenum 3
Hello 123
```

## 解説

プログラムはPascal風というか擬似コード風に書かれていて、素直に読めば素数列挙のように思える。

しかし一部のマクロが明らかにおかしい定義になっている。
`#define LessThanOrEqualTo !=`とか`#define Zero i%j`とか。
実際には、上記の通りのテキストエンコーダとして振る舞う。

シンプルなコンセプトできれいにまとまっている。
プリプロセスで生成されるコードは非常に小さいけれど、意外と読むのに時間がかかった。
