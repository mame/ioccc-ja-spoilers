---
id: 1998/dorssel
year: 1998
order: 7
authors: "Frans_van_Dorsselaer"
orig_url: "https://www.ioccc.org/1998/dorssel.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1998/dorssel.hint"
title: "IOCCC 1998: Obsolescent Feature"
award_ja: "陳腐化した機能"
---

## 動作

モールス符号・復号。

```
$ gcc -o dorssel dorssel.c

$ echo Hello | ./dorssel
.... . .-.. .-.. ---

$ echo Hello | ./dorssel | ./dorssel
HELLO
```

行単位で符号と復号を分けられる。

```
$ echo -e "Hello\n.... . .-.. .-.. ---" | ./dorssel
.... . .-.. .-.. ---
HELLO
```

## 解説

短くまとまっていてきれい。
モールス符号表は1文字あたり1バイトで表現している。dorssel.hint2に詳しく書いてある。
なるべく表示可能な文字に収まるようにエンコーディングを工夫しているあたりがよい。

賞名の意味がわかっていない。
C言語の機能のことではないらしい。
モールス信号自体のこと？
