---
id: 1986/bright
year: 1986
order: 4
patch: true
authors: "Walter_Bright"
orig_url: "https://www.ioccc.org/1986/bright/bright.c"
hint_url: "https://www.ioccc.org/1986/bright/hint.html"
title: "IOCCC 1986: Most useful obfuscation"
award_ja: "もっとも便利な難読化"
---

## 動作

ファイルの16進ダンプ。

```
$ gcc -o bright bright.c

$ ./bright hello.txt
   0: 48 65 6c 6c 6f 2c 20 77 6f 72 6c 64 21 20 49 4f    Hello, world! IO
  10: 43 43 43  a                                        CCC.
```

## 解説

バイナリの0と1にちなんで、識別子は`OQ0`と`IlL1`で構成されているものがほとんど。
演算子もビット演算関係のものが無駄に多い。
単に読みにくくするのではなく、難読化のネタがプログラムの挙動にちなんだものになっている最初期の例。

現代のgccでは`cond && exit(1)`が`error: void value not ignored as it ought to be`になるので、`cond && (exit(1), 0)`などと変更する必要があった。
