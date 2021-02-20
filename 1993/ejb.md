---
id: 1993/ejb
year: 1993
order: 4
authors: "E._Jay_Berkenbilt"
orig_url: "https://www.ioccc.org/1993/ejb.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1993/ejb.hint"
title: "IOCCC 1993: Best Obfuscated Algorithm"
award_ja: "最高の難読化アルゴリズム"
---

## 動作

2つのアルゴリズムが搭載されている。
1つはハノイの塔。コマンドライン引数に正の値を与えると、その高さのハノイの塔の解答を表示する。

```
$ gcc -o ejb ejb.c

$ ./ejb 3
move ring 1 from stack 1 to stack 2
move ring 2 from stack 1 to stack 3
move ring 1 from stack 2 to stack 3
move ring 3 from stack 1 to stack 2
move ring 1 from stack 3 to stack 1
move ring 2 from stack 3 to stack 2
move ring 1 from stack 1 to stack 2
```

もう1つ。負の値をあたえると、patience puzzleを外すまでの状態の列を表示する。
patience puzzleはたぶん[連環・チャイニーズリング](https://ja.wikipedia.org/wiki/%E3%83%81%E3%83%A3%E3%82%A4%E3%83%8B%E3%83%BC%E3%82%BA%E3%83%AA%E3%83%B3%E3%82%B0)のこと。
右端の数字が最初のリングを表し、1はU字金具に入った状態、0は外れた状態を表すらしい。

```
$ ./ejb -3
111
110
010
011
001
000
```

## 解説

コードはセミコロンをかたどっている。
このプログラムには、セミコロンが2つしかない（変数宣言で1つ、`return`文の終わり）。
プログラムの規模（lines of code）を測るためにセミコロンを数えるとすると、このプログラムのセミコロンは2つか、それとも3つか曖昧にするため、というネタらしい。

型名などを除けば、キーワードは`return`しか使っていない。必然的に、`main`関数の再帰を伴う巨大な式1つからなる`return`文となっている。
