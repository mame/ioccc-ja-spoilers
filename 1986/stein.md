---
id: 1986/stein
year: 1986
order: 8
authors: "Jan_Stein"
orig_url: "https://www.ioccc.org/1986/stein/stein.c"
hint_url: "https://www.ioccc.org/1986/stein/hint.html"
title: "IOCCC 1986: Best one liner"
award_ja: "最高のワンライナー。"
---

## 動作

HHMMSSで現在時刻を表示する（UTC）。当時の期待通りに動かすのはちょっと工夫が必要。詳しくは解説を参照のこと。

```
$ gcc -o stein stein.c

$ ruby -e 'system(["./stein", "a.out"], "\C-m\C-l")'
120000
```

## 解説

time(2)の結果を86400で割った余りをHHMMSSに変換する。mainを6回ほど再帰呼び出しすることで1文字ずつ10進変換する。

バッファとして`argv`を使う。
hint.textによると、`a.out ^N^N`と呼び出せとあるので、`argv`が`a.out\0\n\n\0\0`という状態で起動されることが想定されていると思われる。
最初の6文字を時刻の6文字で上書きして表示する。

しかし、現代ではPATHにカレントディレクトリを含まないのが普通なので、`a.out`で起動することはできず、面倒くさいことになる。
上記の実行例ではrubyを使ってargvを詐称して呼び出すようにしている。

補足：`^N`は`\016`であって`\n`ではないかも。当時の端末で`\016\016`（シフトアウト2つ）がどのように表示されていたのかはわからない。
環境によっては`^M^L`にしろとも書いてあり、これは`\r\f`なのでわかりやすい。

clangは`main`の第2引数が`char**`でないと怒るので書き換えが必要。
