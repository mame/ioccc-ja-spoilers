---
id: 1988/phillipps
year: 1988
order: 4
authors: "Ian_Phillipps"
orig_url: "https://www.ioccc.org/1988/phillipps.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1988/phillipps.hint"
title: "IOCCC 1988: Least likely to compile successfully"
award_ja: "もっともコンパイルできなさそう"
linewrap: true
---

## 動作

[クリスマスの12日間](https://ja.wikipedia.org/wiki/%E3%82%AF%E3%83%AA%E3%82%B9%E3%83%9E%E3%82%B9%E3%81%AE12%E6%97%A5%E9%96%93)の歌詞を表示する。

```
$ gcc -o phillipps phillipps.c

$ ./phillipps
On the first day of Christmas my true love gave to me
a partridge in a pear tree.

On the second day of Christmas my true love gave to me
two turtle doves
and a partridge in a pear tree.

On the third day of Christmas my true love gave to me
three french hens, two turtle doves
and a partridge in a pear tree.

...

On the twelfth day of Christmas my true love gave to me
twelve drummers drumming, eleven pipers piping, ten lords a-leaping,
nine ladies dancing, eight maids a-milking, seven swans a-swimming,
six geese a-laying, five gold rings;
four calling birds, three french hens, two turtle doves
and a partridge in a pear tree.

```

## 解説

プログラムは`return <expr>;`の1文だけであるが、返り値の式の中でおそろしいほど複雑に`main`関数を再帰呼び出ししている。
全体的な見た目は、古いプリンタの壊れた出力のよう（phillipps.hintには「古いタイプライターのキーを適当に叩いた感じに見えた」とある）。
出力をcompressで圧縮したよりも小さいコードになっているとのこと。
意味ありげに`"%s %s %d\n"`などと書いてあるが、`printf`は使っていないのでフェイントだと思う。おしゃれ。

clangは`main`の第2引数と第3引数が`char**`でないと怒るので、書き換えが必要。
