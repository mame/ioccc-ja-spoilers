---
id: 1987/biggar
year: 1987
order: 1
authors: "Mark_Biggar"
orig_url: "https://www.ioccc.org/1987/biggar/biggar.c"
hint_url: "https://www.ioccc.org/1987/biggar/hint.html"
title: "IOCCC 1987: Best Abuse of the Rules"
award_ja: "ルールの最高の悪用"
---

## 動作

任意の挙動をさせることができるプログラム。

```
$ gcc -DP='int main(){puts("Hello");}' -o biggar biggar.c

$ ./biggar
Hello
```

## 解説

初のBest Abuse of the Rulesの受賞作。

2文字だけからなるプログラム。
コンパイラのオプションで`P`を好きなコードにマクロ置換することで、任意の好きな挙動をさせることができる。
コードよりもコンパイルコマンドの方が長い。

IOCCCの中ではかなり有名な作品で、アイデア一発の楽しい作品。
