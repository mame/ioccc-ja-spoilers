---
id: 2000/robison
year: 2000
order: 10
authors: "Arch_D_Robison"
orig_url: "https://www.ioccc.org/2000/robison.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/robison.hint"
title: "IOCCC 2000: Best game"
award_ja: "最高のゲーム"
---

## 動作

端末で[チェッカー](https://ja.wikipedia.org/wiki/%E3%83%81%E3%82%A7%E3%83%83%E3%82%AB%E3%83%BC)。

```
$ gcc -o robison robison.c

$ ./robison
o o o o  29
 o o o o 25
o o o o  21
 . . . . 17
. . . .  13
 x x x x  9
x x x x   5
 x x x x  1
Black position and direction: 
```

自分は`x`。9番の位置にあるコマを左上（1）の方角に動かす。

```
Black position and direction: 9 1
o o o o  29
 o o o o 25
o o o o  21
 . . . . 17
. . . x  13
 x x x .  9
x x x x   5
 x x x x  1
Red position and direction: 21 2
o o o o  29
 o o o o 25
o o o .  21
 . . . o 17
. . . x  13
 x x x .  9
x x x x   5
 x x x x  1
```

相手は21番を17番に動かしてきた。このように交互に動かしていき、相手のコマを飛び越したら相手のコマを取れる。
詳しいルールはWikipediaなどを参照のこと。

## 解説

robison.hintの作者のコメントは特許申請フォーム風に書かれている。

強いチェッカープレイヤーは居酒屋などにいることが多く、衛生的な対戦相手を見つけるのが難しいので、衛生的なチェッカーAIを提供する、とのこと。

アルゴリズムはアルファベータ探索。
コードは可能な限り改行を入れていくスタイル。
