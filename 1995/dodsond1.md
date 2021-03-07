---
id: 1995/dodsond1
year: 1995
order: 2
authors: "Don_Dodson"
orig_url: "https://www.ioccc.org/1995/dodsond1.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1995/dodsond1.hint"
title: "IOCCC 1995: Most Humorous"
award_ja: "もっともユーモラス"
---

## 動作

テキストを[ピッグ・ラテン（なんちゃってラテン語）](https://ja.wikipedia.org/wiki/%E3%83%94%E3%83%83%E3%82%B0%E3%83%BB%E3%83%A9%E3%83%86%E3%83%B3)に変換する。

```
$ gcc -o dodsond1 dodsond1.c

$ echo "This is a pen" | ./dodsond1
Istha iswa awa enpa
```

## 解説

先頭の子音を最後に持っていって`a`をつけたり、最後に`wa`をつけたりするとラテン語風になるらしい。

dodsond1.hintの先頭に書いてあるピッグ・ラテンは次の文を変換したもの。

```
$ echo "This program takes English text was input and translates it into Pig Latin" | ./dodsond1
Istha ogrampra akesta Englishwa extta aswa inputwa andwa anslatestra itwa intowa Igpa Atinla
```

コードは豚の絵。コードのテキストもピッグ・ラテンにするために、`#define ainma main`や`#define etcharga getchar`などしている。変数もピッグ・ラテンにしていたり、`oink`だったり。
