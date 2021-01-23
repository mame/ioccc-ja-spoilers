---
id: 1988/isaak
year: 1988
order: 2
patch: true
authors: "Mark_Isaak"
orig_url: "https://www.ioccc.org/1988/isaak.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1988/isaak.hint"
title: "IOCCC 1988: Best visuals"
award_ja: "最高の見た目"
---

## 動作

元素周期表を出力する。

```
$ gcc -DI=B -DO=- -Dy isaak.c -o isaak

$ ./isaak
+---+                                                               +---+
|1  |                                                               |2  |
|H  |                                                               |He |
|  1|                                                               |  4|
+---+---+                                       +---+---+---+---+---+---+
|3  |4  |                                       |5  |6  |7  |8  |9  |10 |
|Li |Be |                                       |B  |C  |N  |O  |F  |Ne |
|  7|  9|                                       | 11| 12| 14| 16| 19| 20|
+---+---+                                       +---+---+---+---+---+---+
|11 |12 |                                       |13 |14 |15 |16 |17 |18 |
|Na |Mg |                                       |Al |Si |P  |S  |Cl |Ar |
| 23| 24|                                       | 27| 28| 31| 32| 35| 40|
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
|19 |20 |21 |22 |23 |24 |25 |26 |27 |28 |29 |30 |31 |32 |33 |34 |35 |36 |
|K  |Ca |Sc |Ti |V  |Cr |Mn |Fe |Co |Ni |Cu |Zn |Ga |Ge |As |Se |Br |Kr |
| 39| 40| 45| 48| 51| 52| 55| 56| 59| 59| 64| 65| 70| 73| 75| 79| 80| 84|
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
|37 |38 |39 |40 |41 |42 |43 |44 |45 |46 |47 |48 |49 |50 |51 |52 |53 |54 |
|Rb |Sr |Y  |Zr |Nb |Mo |Tc |Ru |Rh |Pd |Ag |Cd |In |Sn |Sb |Te |I  |Xe |
| 85| 88| 89| 91| 93| 96| 99|101|103|106|108|112|115|119|122|128|127|131|
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
|55 |56 |57 |72 |73 |74 |75 |76 |77 |78 |79 |80 |81 |82 |83 |84 |85 |86 |
|Cs |Ba |La |Hf |Ta |W  |Re |Os |Ir |Pt |Au |Hg |Tl |Pb |Bi |Po |At |Rn |
|133|137|139|178|181|184|186|190|192|195|197|201|204|207|209|209|210|222|
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
|87 |88 |89 |104|105|
|Fr |Ra |Ac |Rf |Ha |
|223|226|227|261|260|
+---+---+---+---+---+

        +---+---+---+---+---+---+---+---+---+---+---+---+---+---+
        |58 |59 |60 |61 |62 |63 |64 |65 |66 |67 |68 |69 |70 |71 |
        |Ce |Pr |Nd |Pm |Sm |Eu |Gd |Tb |Dy |Ho |Er |Tm |Yb |Lu |
        |140|141|144|145|150|152|157|159|162|165|167|169|173|175|
        +---+---+---+---+---+---+---+---+---+---+---+---+---+---+
        |90 |91 |92 |93 |94 |95 |96 |97 |98 |99 |100|101|102|103|
        |Th |Pa |U  |Np |Pu |Am |Cm |Bk |Cf |Es |Fm |Md |No |Lr |
        |232|231|238|237|244|243|247|247|251|254|257|256|254|257|
        +---+---+---+---+---+---+---+---+---+---+---+---+---+---+
```

## 解説

短いコードで予想外に楽しげな出力が得られるので楽しい。
ただ、この短いコードは驚くほど凶悪で、現代で動作させるのにかなりの時間を要した。

isaak.hintに「`main(){};`から始まるのに4.3BSDでは動く。なぜか」という問いが書かれている。
このコードは関数`exit()`を定義しているので、当時の環境では`main()`の終了時に暗黙的に`exit(0);`が呼ばれていたのではないかと思う。
だれか考古学ができる人は教えて欲しい。

「`#include <stdio.h>`が最後の行にある。なぜ必要か」という問いは、自分自身を再帰的に`#include`しているので、`#include <stdio.h>`の後で`sprintf`を使っているということだと思う。
自分のソースコード自身を`#include`するテクニックはIOCCCでは定番だが、後述の通り、このコードはこのテクニックを単なる難読化ではなく高度に使いこなしている。

現代の環境で動かすための修正ポイントは次の通り。

* `main(){}`は現代のコンパイラでは何もせずに終了するので、`main(){exit(0);}`として明示的に`exit`関数を呼び出すようにした。
* `#define P define`して`#P`を`#define`として使うテクニックは当時のIOCCCではありふれていたが、このコードは再帰`#include`と組み合わせてさらに凶悪な使い方をしている。
  まずは`#P U ifdef`して`#U N`を`#ifdef N`と解釈させたあとで、`#undef U`して`#P U ifndef`しなおし、再帰`#include`によって同じ`#U N`を2回目は`#ifndef N`として解釈している。
  これは再現不能なので、2回目の`#ifdef N`までに`#define N N`することで回避した。
* `#define O -`とし、`x O= y`を`x -= y`と解釈させるテクニックもしばしばあったが、これも再帰`#include`と組み合わされている。
  1回目は`#define O -`として解釈するが、2回目は`#define O +`として解釈される。
  この違いは単なる見せかけではなく、それぞれ別の関数の中に定義され、実際に利用されている。
  なお、`O/**/O`を`--`（2回目は`++`）として解釈させるというのは地味に新しいテクニック。
  このあたりは動かないので、`#define OO --`と`#define Oeq -=`のマクロを新設することで対応した。
* 1回目は`#define I B`によって関数名`I/**/r`を`Br`と解釈させ、2回目は`#define I K`として`I/**/r`を`Kr`と解釈させる、という箇所もあった。
  これもやはり動かないので、マクロ`Ir`を新設して1回目は`#define Ir Br`に、2回目は`#define Ir Kr`にするようにした。
  なお、このコードはすべての識別子を元素記号にしているのだが、`I` `Ir` `B` `Br` `K` `Kr`はすべて元素記号であるので、巧妙に選ばれた関数名となっている。
* `(int)_exit(0)`は現代のコンパイラが通さないので、`(int)(_exit(0),0)`に変更した。
* 古いBSDの`sprintf`は、書き込んだ文字数ではなく、第1引数の`char*`ポインタを返していたらしく、この挙動に依存している。
  これは当時からポータブルではなかったようで、System Vでは動かない旨がisaak.hintに書かれている。
  古い挙動をする`sprintf`を自力定義することで回避した。

一部の難読化は`-traditional-cpp`でもうまく動かず、逆に動かなくなる部分があるようなので避けた。

現代でも動く難読化としては、無意味に改ページ文字が混入させられているなど。

このコードは当時からポータビリティに問題があるコードだった。
当時のルールにも「審査員はポータブルなコードを好む」と書かれていたが、これ以後はさらにポータビリティを重視していくことがisaak.hintに書かれている。