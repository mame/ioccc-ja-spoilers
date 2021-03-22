---
id: 1998/dloweneil
year: 1998
order: 6
authors:
  - "J_David_Lowe"
  - "Neil_Mix"
orig_url: "https://www.ioccc.org/1998/dloweneil.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1998/dloweneil.hint"
title: "IOCCC 1998: Most Fun"
award_ja: "もっとも楽しい"
---

## 動作

`P`→`O`→`O`→`T`と並べたら消える落ち物ゲーム。

```
$ gcc -o dloweneil dloweneil.c -lncurses

$ ./dloweneil
```

```
     O
  +---------------+
  |               |
  |               |
  |               |
  |               |
  |               |
  |               |
  |               |
  | T         O   |
  | OT        O   |
  |OT         POOO|
  |OTT  T    OP  T|
  |TT  OPT  OOO  P|
  +---------------+

  score: 47

```

ボードの外にある記号を<kbd>a</kbd>と<kbd>s</kbd>で動かし、<kbd>d</kbd>で発射する。
発射位置はボードの横や下にも回り込める。

<kbd>d</kbd>を押すと、`P`は（発射位置からみて）左45度の斜めに発射され、ボードの下以外の端に当たると反射し、下の端か他の記号にぶつかったら止まる。
`T`は右45度に発射される。
`O`はまっすぐ落ちる（左右の壁にあたったら必ず下に向かう）。
このようにして記号を落としていき、縦横斜めのどれかで`P`→`O`→`O`→`T`と並んだらその4つが消える。


## 解説

コード形状はPooT。
コードサイズは制限ギリギリの3217バイトで、カウント対象文字数もギリギリの1536文字。

第1作者は[[[1998/dlowe]]]({{ site.baseurl }}{% link 1998/dlowe.md %})でも入選している。
