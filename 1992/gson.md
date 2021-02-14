---
id: 1992/gson
year: 1992
order: 6
authors: "Andreas_Gustafsson"
orig_url: "https://www.ioccc.org/1992/gson.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1992/gson.hint"
title: "IOCCC 1992: Most Humorous Output"
award_ja: "もっともユーモラスな出力"
---

## 動作

アナグラムの生成器。標準入力に与えられた辞書をもとに、コマンドライン引数の文字列をアナグラムして出力する。

```
$ gcc -m32 -o gson gson.c

$ ./gson obfuscated c contest < /usr/share/dict/american-english-small
contacted fetus cobs
contacted bets focus
contacted best focus
contacted cubes soft
defunct sets tobacco
defunct set tobaccos
cottoned facets cubs
cottoned cubes facts
concocted safest tub
concocted safest but
concocted feats tubs
...
```

## 解説

コードの形状は"AG"。Anagram GeneratorまたはAnaGramの略とか、Alphabet Gameの略とか、作者の名前（Andreas Gustafsson）のイニシャルとか。

アルファベットゲームということで、識別子が出現順に`a`、`b`、`c`と名付けられている。実装の詳しい解説はgson.hintのROT13部分を参照。
