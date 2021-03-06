---
id: 2004/jdalbec
year: 2004
order: 7
patch: true
authors: "John_Dalbec"
orig_url: "https://www.ioccc.org/2004/jdalbec.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/jdalbec.hint"
title: "IOCCC 2004: Best Abuse of the Periodic Table"
award_ja: "周期表の最高の悪用"
---

## 動作

[Look-and-say sequence](https://en.wikipedia.org/wiki/Look-and-say_sequence)を生成する。

```
$ gcc -trigraphs -E jdalbec.c > jdalbec2.c

$ sed -e 's/ (/(/g' < jdalbec2.c > jdalbec3.c

$ ruby -i -p -e 'if /# define Tm/.../^Tm/; if /^Tm/; $_ = "\n" + $_; else; $_.sub!(/$/, "\\"); end; end' jdalbec3.c

$ gcc -o jdalbec jdalbec3.c

$ ./jdalbec 1
0: 1
1: 11
2: 21
3: 1211
4: 111221
5: 312211
6: 13112221
7: 11132 13211
8: 311312 11131221
9: 1321131112 3113112211
10: 11131221133112 132113212221
11: 311311222 12 32112 111312211312113211
12: 1321132 132 1112 13122112 311311222113111221131221
13: 111312211312 111312 3112 111311222112 1321132 132211331222113112211
14: 3113112221131112 31131112 132112 31132 1322112 111312211312 1113222 12 311322113212221
...
```

最初の数字はコマンドライン引数で指定する。
次の数字は、前の数字の桁を読み上げる形で決める。

* 最初の"1"は「1つの1がある」と読み、この数字をひろってくっつけた数字"11"が次の数字。
* "11"は「2つの1がある」と読み、この数字をひろってくっつけた数字"21"が次の数字。
* "21"は「1つの2、1つの1がある」と読み、数字だけくっつけて"1211"が次の数字。
* "1211"は「1つの1、1つの2、2つの1がある」なので、"111221"が次の数字。

これを繰り返していく。

ポイントは、勝手に空白が入っているところ。
これは、空白の前と後がこの先独立に発展していくことを示している。
詳しくは解説で。

## 解説

Look-and-say sequenceは、ライフゲームの考案者として知られる[コンウェイ](https://ja.wikipedia.org/wiki/%E3%82%B8%E3%83%A7%E3%83%B3%E3%83%BB%E3%83%9B%E3%83%BC%E3%83%88%E3%83%B3%E3%83%BB%E3%82%B3%E3%83%B3%E3%82%A6%E3%82%A7%E3%82%A4)が導入・解析したもの。
一見するとよくある数遊びに見えるけれど、意外と面白い性質があるらしい。

数学系の情報サイトであるWolfram MathWorldにも載っている、[Cosmological Theorem](https://mathworld.wolfram.com/CosmologicalTheorem.html)（宇宙論的定理？）という次のような定理。

「次のような整数Nが存在する：Look-and-say sequenceのすべての文字列は、最大でN日のうちに、普通の元素と超ウラン元素の化合物に減衰する」

この定理の詳しい説明がjdalbec.hintにもWolframにもないので苦労したが、[CMUのサイトにあった資料](https://www.cs.cmu.edu/~kw/pubs/conwayslides.pdf)の導入を見たら理解できたので詳しく説明する。

---

Look-and-say sequenceを繰り返していくと、「切り離して扱っても問題ない箇所」が出てくる。たとえば"2111"は"2"と"111"に分割できる。

```
   2 111
-> 12 31
-> 1112 1311
-> 3112 111321
-> 132112 31131211
-> 1113122112 132113111221
-> 311311222112 1113122113312211
-> 13211321322112 311311222123112221
```

切れ目の左側の数字は常に2、右側の数字は1と3の繰り返しになっていることがわかる。
少し観察すると、この性質はこの先ずっと続くことがわかる。
よって、ここは切り離して扱っても問題ない。

これは、どこを切っても良いわけではない。
例えば"111"を"1 11"に分割すると、"111"→"31"だが"1 11"→"11 21"なので、別の文字列になってしまう。

Cosmological Theoremの主張は、どんな文字列もlook-and-sayの操作を繰り返していくうちに、ある92+2種類の部分文字列を連結した文字列になる、ということ。

92というとウランの原子番号なので、コンウェイは92種類の部分文字列を「普通の元素」と呼び、元素記号を割り当てた。
これが[Cosmological Theorem](https://mathworld.wolfram.com/CosmologicalTheorem.html)の表に書かれているもので、すべて1、2、3の数字だけからなる。

残りの2種類は、1、2、3以外の数字を持つもの。
次の2種類だけとのこと。

* Pu = 31221132221222112112322211n
* Np = 1311222113321132211221121332211n

nの部分は1～3以外の数字、または数字以外の文字が入る（同位体と言われている）。なお、look-and-sayの操作をするとPuとNpは交互に入れ替わる。
この2つ（プルトニウムとネプツニウム）が、[超ウラン元素](https://ja.wikipedia.org/wiki/%E8%B6%85%E3%82%A6%E3%83%A9%E3%83%B3%E5%85%83%E7%B4%A0)。

ということで、定理が言っていた「普通の元素と超ウラン元素の化合物」は、独立して変化していく92+2種類の部分文字列を結合した文字列という意味だった。

---

元のプログラムは、プリプロセスを2回行う必要があるコードになっている。
残念ながら現代のCコンパイラでは期待通りにプリプロセスされないので、1点のコード修正と1点のビルドプロセス修正を行った。

* `#include <std##N##.h>` は期待通りに動作しないので、書きくだした。
* 生成されたコードの中で、`# define Tm(B,C)`の定義本体を`\`で行継続していく必要があった。rubyコマンドでこの変換を行っている。

コード中の識別子は元素記号や化合物。
コードには周期表が含まれていたり、最後の方に"OBFUSCATED"のアスキーアートがややわかりにくい形で仕込まれてたりする。

```
 {   }  {    }  {   } { } { }  {  }  {  }   { } {     } {   } {    }
{     } { { } } { }   { } { } { }   { }    {   }  { }   { }   { { } }
{ { } } {    }  {   } { } { }  { }  { }   { { } } { }   {   } { {  } }  C;
{     } { { } } { }   { } { }   { } { }   {     } { }   { }   { { } }
 {   }  {    }  { }    {   }  {  }   {  } { } { } { }   {   } {    }
```

このアスキーアートは、わかりやすく`@`で埋めると次のようになる。

```
 {@@@}  {@@@@}  {@@@} {@} {@}  {@@}  {@@}   {@} {@@@@@} {@@@} {@@@@}
{@@@@@} {@{ }@} {@}   {@} {@} {@}   {@}    {@@@}  {@}   {@}   {@{ }@}
{@{ }@} {@@@@}  {@@@} {@} {@}  {@}  {@}   {@{ }@} {@}   {@@@} {@{  }@}  C;
{@@@@@} {@{ }@} {@}   {@} {@}   {@} {@}   {@@@@@} {@}   {@}   {@{ }@}
 {@@@}  {@@@@}  {@}    {@@@}  {@@}   {@@} {@} {@} {@}   {@@@} {@@@@}
```
