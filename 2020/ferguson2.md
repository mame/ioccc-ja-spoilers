---
id: 2020/ferguson2
year: 2020
order: 6
authors: "Cody_Ferguson"
orig_url: "https://www.ioccc.org/2020/ferguson2/prog.c"
hint_url: "https://www.ioccc.org/2020/ferguson2/index.html"
title: "IOCCC 2020: Most enigmatic"
award_ja: "もっとも謎めいている"
---

### 動作

[エニグマ](https://ja.wikipedia.org/wiki/%E3%82%A8%E3%83%8B%E3%82%B0%E3%83%9E_(%E6%9A%97%E5%8F%B7%E6%A9%9F))のシミュレータ。

```
$ gcc -o prog prog.c

$ echo "Hello, world!" | ./prog
Pchog, zgeho!

$ echo IOCCC | ./prog
UUMMX
```

### 解説

エニグマは、第二次世界大戦でドイツが使ったという暗号機。
賞名はenigmatic（謎めいた）とエニグマを掛けたというより、元はEnigma（なぞなぞ）という共通の単語。

コード形状は行数とカラム数がともに素数とのこと。
面白い形にするより、単なる空虚な四角のほうが戦争で死んだ人たちへの顕彰になるとか。

オプションを与えて`prog -`と起動すると、エニグマの初期設定がいろいろと指定できるらしい。
また、recode.cという補助プログラムが付属しており、これを使うと初期設定のためのprefixをつけてくれる。
長大なドキュメントがついているので、興味のある人は読んでほしい。
