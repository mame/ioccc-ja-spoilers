---
id: 2000/bmeyer
year: 2000
order: 3
authors: "Bernd_Meyer"
orig_url: "https://www.ioccc.org/2000/bmeyer.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/bmeyer.hint"
title: "IOCCC 2000: Best Utility"
award_ja: "最高のユーティリティ"
---

## 動作

グレイスケール画像の圧縮・展開ツール。

圧縮の例。端末に出てくるアスキーアートは飾り。

```
$ gcc -DY -o bmeyer bmeyer.c -lm

$ ./bmeyer < lenna.pgm > lenna.glic

 fffff666l;llllllllfffffffffffffffffffffflflllllffffffffff6DDflllllllllll
 ffff666fl;lllllllllfffffffffffffflfffflllllllllff666fffffffDD6llllllfl;,
 f66666ffl;llllllllllllfffffflllllllfffllllllllllffffffffffffDD6lllll,,,,
 666ff66fl;;llllllllllfflfffffff6666fffllllllllllfffffffffffff6DDll,,,,,,
 6fllf66fl;;lllllllllllllflfffff666666D6fllllllllffffffffffffff6Dl,,,,,,,
 fl;lf66fl;;llllllllllllllllfffff66666DDDD6flllllfffflfffffffffl,,,,,,,,,
 l;;lf66fl;;llllllllllllllllfffff6666DDDDDDD6l;;lffff;;lffffff;,,,,,,,;lf
 ;;;lf66fl;;lllllllfllllllfffffff66DDDDDDDDDDD6;lffff;,,lffff;,,,,,,,;fff
 ;;;lf66fl;;;llllll6llllllffflf666666DDDDDDDDDD6lffff;,l6DDDl,,,,,,,lff6f
 llllf666l;;llllll6fllllllllfff666666666DD66DDDDD6ffff6DDDDDf,,,,,,ffffff
 llllf666l;;llllllDfllllllfffff66666666666666666666DDDDDD6DD;,,,,;fffffff
 l;;lf666l;;llllllD6flllfffffffff666666666666666DDDDDDDD6f6f,,,,;ffffffff
 llllf666f;;llllllD6fflllffffffflllfllllllf666DD6DDDDD6flff,,,,;fffffffff
 llllf666f;;;llll;6Dffllfllfffll;;;;;;;;;f666666D66fflfff;,,,,;ff666fffff
 llllf666f;;;llllll66fllllll;;;,;,;,;;;f666666666;llf6f;,,,,,;ff66666ffff
 llllf666f;;;llllllfDlllll;;,,;,;;,,;lf666666DDDDf;;fl,,,,,,,lff666666fff
 llllf666f;;llllllllflll;;,,,,,,;;;f66f666666DDDD6;,ll,,,,,,lf6ffffffffff
 llllf666f;;llllllll;fl;,;,,,,,;,lf666fffff66DDD66l,,f,,,,,;fffff6fffffff
 ll;;f666f;;lll;ffff;;;;;,,,,,,;f6D6l;;;l;lf6D6l;;;,,f;;,,,ffffffffffffff
 ll;;f666f;;ll;lff;;;,;;l,,,,,;f66fllllf6flf6Dfll;,,,f;,,,lffffffffffffff
 ;;;;f666f;;llfl;,;l;,;ll;,,,;f6llfff6666ffffD6ffl;,,fl,,;fffffffffff6666
 ;;;,f666f;lll;l;;l;,,,;,l;,;f6;;lfff6666fflfD6ffl;,,ll,,lffffffffff6DDDD
 ;;,,f666f;lll;;;;ll,,,;l;,lff,,;llffff6ffflf66ffl,,,;f,;ffffffffff6DDDDD
 ;;;;f666f;;l;;;;;ll;;;,;llf;,,;;llffffffffff66fl,,;,,f;ffffffffff6DDDDDD
 ;;;;f666f;ll;;,,;;;ll;f6ll,,,,,;llfffffffff66fl,,,;;,llffffffffffDDDDDDD
 ,,,lf666flll;;;;l;;llf6fl,,,,;,;;llffffllffffl,,,,;;,lfffffffffffDDDDDDD
 ,,;lf666f;l;;,;,llllllf;,,,,,,,,;;llffffffffl,,,,,;;;lfffffffffl6DDDDDDD
 ,,,lf666fll,;,,,l;;llll,,;,,,,,,,;;;llfff66fl;,,,;;;;lflffffffflDDDDD6fl
 l;;,l666fl;,,;;;;lllllll;;,,,,,,,,lllfffff66DD6f;,;;;lffflllllllDDDDf;;;
 lff,l666ff,,,,;;,;;;;lfll;,,,,,,;,lllfffff6666DDD6;,,fffffffllffDD6l;;ll
 ,f6;l666fl,,,,;,,,,;l;fl;l,;,,,;l;lffffffff6666DDDD;,ffffffflf6DDDl;ll;l
 ,l6;l666f;,,,,;,,,,,;lfll;;;,,,ll;lfffffffff666DDDD6;ffffffllDDDDflll;ll
 ,l6ll666fl,,,,,,,,,,;;l;l,,,,,lll;ffffffffff6666DDDDfllfffffff6D6ll;;l;;
 ,;6f;666fl,,,,,,,,,,;l;;,,,,,;ll;lfffffffffff666DDDDD;;;;;;l6fD6;;;;;;l;
 ;l6flf66fl,,,,,;,,,,;;l;,,,,;;;;lfffffffffffff666DDDDflll;;;D6f;;;;;;ll;
 ,;66lf66f,,,,,,;,l,;,;l;,,,;llllfffffffffffffff666DDDD;;lllllll;;;;;ll;,
```

得られたファイルはpngより小さい。

```
$ wc -c lenna.pgm lenna.glic lenna.png
262159 lenna.pgm
127781 lenna.glic
150677 lenna.png
```

展開の例。おなじアスキーアートがでてくるけど省略。もとに戻ったことがわかる。

```
$ ./bmeyer < lenna.glic > lenna2.pgm
...

$ diff -s lenna.pgm lenna2.pgm
Files lenna.pgm and lenna2.pgm are identical
```

## 解説

標準エラー出力に出てくるアスキーアートは圧縮・展開の進捗を表示するためのもの。バー表示やパーセント表示より面白いでしょう、とのこと。

浮動小数点数演算を活用するので、FPUによってはうまく動かないことがあるみたい。いわゆる80 bit浮動小数点数演算問題。

コードは何らかのアスキーアートになっているが、意味はわからなかった。

圧縮アルゴリズムは独自のもの。
周囲の既知のピクセルから予測値を作り、それとの差分を載せるような感じだと思う。
作者が知る限り、どの画像圧縮よりも小さいデータにできたとのこと。
