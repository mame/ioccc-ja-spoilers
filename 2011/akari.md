---
id: 2011/akari
year: 2011
order: 14
authors: "Don_Yang"
orig_url: "https://www.ioccc.org/2011/akari/akari.c"
hint_url: "https://www.ioccc.org/2011/akari/hint.html"
title: "IOCCC 2011: Best of Show - Most Shrinkable"
award_ja: "最優秀賞 - もっとも縮みやすい"
---

## 動作

基本的には、[PGM/PPM画像](https://ja.wikipedia.org/wiki/PNM_%28%E7%94%BB%E5%83%8F%E3%83%95%E3%82%A9%E3%83%BC%E3%83%9E%E3%83%83%E3%83%88%29)の縮小ツール。

添付されているサンプル画像（example.ppm）は、IOCCCと書かれているもの。

{% include img.html src="2011-akari-1.png" desc="IOCCCと書かれた画像（example.ppm）" cite="https://www.ioccc.org/2011/akari/example.ppm" %}

まずはこの画像を縮小する。
デフォルトでは奇数番目のピクセルを取り出す。すなわち、奇数行・奇数列のピクセルだけとりだし、サイズは縦横それぞれ1/2になる。

```
$ ./akari < example.ppm > odd_output.ppm
$ convert odd_output.ppm odd_output.png
```

{% include img.html src="2011-akari-2.png" desc="奇数番目のピクセルだけを取り出した画像（odd_output.png）" %}

次のように実行すると偶数番目のピクセルだけを取り出す。

```
$ ./akari - - even < example.ppm > even_output.ppm
$ convert even_output.ppm even_output.png
```

{% include img.html src="2011-akari-3.png" desc="偶数番目のピクセルだけを取り出した画像（even_output.png）" %}

ちなみに、標準入出力でなくとも、第1引数に入力ファイル名、第2引数に出力ファイル名を指示することもできる。

```
$ ./akari example.ppm even_output.ppm
```

以下の動作例ではすべて標準入出力を使うことにする。

---

そして、テキストで書かれたアスキーアートも縮小できる。
偶数番目の行と列の文字（ここでは`g`、`i`、`q`、`s`）だけ取り出していることがわかる。

```
$ cat example.txt
abcde
fghij
klmno
pqrst
uvwxy

$ ./akari < example.txt
gi
qs
```

これを使い、akari.c自身を縮小する。

```
$ ./akari < akari.c


                       int
            *w,m,_namori=('n');
         #include<stdio.h>/*;hrd"%  dnd4%"*/
     /**/int(y),u,r[128*2/*{y}icuhya*rr*rya=
   */];void/**/i(){putchar(u);}int/**/main(/*
  "(n"l)?M5{YlcpvdluvKct[j skao(tve"t"oYRYR"
   */int(w),char**n){for(m  =256;--m;r[m]/*
   "<*]y+u>r>u+y-u-r+i+" )   ;>m.a.i+n>()/q*/
 =25<(31&( m -1))||64-(  m    &192)||2>w?m:(2+
m/*"*,/U//     R/)/U *  & /Y/0/U/=P &=/"*/)\
&16?m-13 : 13+     m)   ;u=+10 ;for(;(m=/*
 *>/()/{ p u t-s        +(yy*+  n1>7?/:*/
   getchar ())+1         ;i()   ){if(10/*
   "wNMR;{ I/=/"               )/{*/==u*1
    )i();                      if(m-10){
      u=/*>                  *./<)[;*/8*
      4;i();       }u=r[    m];}return(
       * *n/*{i            ;w; }_}
          ( -*/ *00    )    ;  }
```

これは実行可能なCプログラムになっている。
実行すると、テキストを引き伸ばすプログラムになる

```
$ ./akari < akari.c > akari2.c

$ gcc -o akari2 akari2.c

$ ./akari2 < akari2.c





                                               i n t

                         * w , m , _ n a m o r i = ( ' n ' ) ;

                   # i n c l u d e < s t d i o . h > / * ; h r d " %     d n d 4 % " * /

           / * * / i n t ( y ) , u , r [ 1 2 8 * 2 / * { y } i c u h y a * r r * r y a =

       * / ] ; v o i d / * * / i ( ) { p u t c h a r ( u ) ; } i n t / * * / m a i n ( / *

     " ( n " l ) ? M 5 { Y l c p v d l u v K c t [ j   s k a o ( t v e " t " o Y R Y R "

       * / i n t ( w ) , c h a r * * n ) { f o r ( m     = 2 5 6 ; - - m ; r [ m ] / *

       " < * ] y + u > r > u + y - u - r + i + "   )       ; > m . a . i + n > ( ) / q * /

   = 2 5 < ( 3 1 & (   m   - 1 ) ) | | 6 4 - (     m         & 1 9 2 ) | | 2 > w ? m : ( 2 +

 m / * " * , / U / /           R / ) / U   *     &   / Y / 0 / U / = P   & = / " * / ) \

 & 1 6 ? m - 1 3   :   1 3 +           m )       ; u = + 1 0   ; f o r ( ; ( m = / *

   * > / ( ) / {   p   u   t - s                 + ( y y * +     n 1 > 7 ? / : * /

       g e t c h a r   ( ) ) + 1                   ; i ( )       ) { i f ( 1 0 / *

       " w N M R ; {   I / = / "                               ) / { * / = = u * 1

         ) i ( ) ;                                             i f ( m - 1 0 ) {

             u = / * >                                     * . / < ) [ ; * / 8 *

             4 ; i ( ) ;               } u = r [         m ] ; } r e t u r n (

               *   * n / * { i                         ; w ;   } _ }

                     (   - * /   * 0 0         )         ;     }
```

おまけで、コマンドライン引数を渡すとROT13をかける。

```
$ ./akari2 rot13 < akari2.c





                                               v a g

                         * j , z , _ a n z b e v = ( ' a ' ) ;

                   # v a p y h q r < f g q v b . u > / * ; u e q " %     q a q 4 % " * /

           / * * / v a g ( l ) , h , e [ 1 2 8 * 2 / * { l } v p h u l n * e e * e l n =

       * / ] ; i b v q / * * / v ( ) { c h g p u n e ( h ) ; } v a g / * * / z n v a ( / *

     " ( a " y ) ? Z 5 { L y p c i q y h i X p g [ w   f x n b ( g i r " g " b L E L E "

       * / v a g ( j ) , p u n e * * a ) { s b e ( z     = 2 5 6 ; - - z ; e [ z ] / *

       " < * ] l + h > e > h + l - h - e + v + "   )       ; > z . n . v + a > ( ) / d * /

   = 2 5 < ( 3 1 & (   z   - 1 ) ) | | 6 4 - (     z         & 1 9 2 ) | | 2 > j ? z : ( 2 +

 z / * " * , / H / /           E / ) / H   *     &   / L / 0 / H / = C   & = / " * / ) \

 & 1 6 ? z - 1 3   :   1 3 +           z )       ; h = + 1 0   ; s b e ( ; ( z = / *

   * > / ( ) / {   c   h   g - f                 + ( l l * +     a 1 > 7 ? / : * /

       t r g p u n e   ( ) ) + 1                   ; v ( )       ) { v s ( 1 0 / *

       " j A Z E ; {   V / = / "                               ) / { * / = = h * 1

         ) v ( ) ;                                             v s ( z - 1 0 ) {

             h = / * >                                     * . / < ) [ ; * / 8 *

             4 ; v ( ) ;               } h = e [         z ] ; } e r g h e a (

               *   * a / * { v                         ; j ;   } _ }

                     (   - * /   * 0 0         )         ;     }
```

---

akari2.cはさらに圧縮可能。akari3.cを作る。

```
$ ./akari < akari2.c

      wm_aoi(n)
  /*ity,,[2*/{}char*y=
 (")M{lpduKtjsa(v""YY"
 "*yuruyuri") ;main(/*
/",U/  R)U*  Y0U= ="/\
*/){puts    (y+ 17/*
 "NR{I="       ){/=*
   =*         */);/*
   **/{      ;;}}

$ ./akari < akari2.c > akari3.c

$ gcc -o akari3 akari3.c
```

これを実行すると`yuruyuri`と出力される。

```
$ ./akari3
yuruyuri
```

akari3.cはさらに圧縮できる。それを実行すると`YU RU YU RI`と出力される。

```
$ ./akari < akari3.c
   main
(){puts("Y"
"U RU YU "\
"RI"   )/*
 */   ;}

$ ./akari < akari3.c > akari4.c

$ gcc -o akari4 akari4.c

$ ./akari4
YU RU YU RI
```

## 解説

歴代IOCCCの中でも特に有名な作品の1つ。
IOCCCと言えばこれを思い浮かべる人もいると多いのではないだろうか。

漫画『[ゆるゆり](https://ja.wikipedia.org/wiki/%E3%82%86%E3%82%8B%E3%82%86%E3%82%8A)』の主人公、赤座あかりをネタとしている（[Google画像検索のリンク](https://www.google.com/search?q=%E8%B5%A4%E5%BA%A7%E3%81%82%E3%81%8B%E3%82%8A&tbm=isch)）。
主人公だが存在感が薄いとされるキャラクターで、徐々に小さく消えていくというテーマに沿ったものとなっている。
縮小した画像の「[アッカリ～ン](https://dic.nicovideo.jp/a/%5C%E3%82%A2%E3%83%83%E3%82%AB%E3%83%AA%E3%80%9C%E3%83%B3%2F)」は同キャラクターが消えたときの効果音。

コードも同キャラクターの形状。
コードはダウンサンプリングしても動作するように注意深く書かれている。
先に小さい方から書き、それを拡大して、すでに決まっている文字の位置をかわすように拡張していったと思われる。

非常にインパクトのある挙動だが、さらにおまけとして、akari.cはBrainfuckのコードとしても動作するようになっている。
実行すると、アニメ第1期のエンディングテーマ『[マイペースでいきましょう](https://ja.wikipedia.org/wiki/%E3%83%9E%E3%82%A4%E3%83%9A%E3%83%BC%E3%82%B9%E3%81%A7%E3%81%84%E3%81%8D%E3%81%BE%E3%81%97%E3%82%87%E3%81%86)』の歌詞の冒頭が出力される。

```
$ bf akari.c
ITSUMO MIRAKURU
ITSUMO MIRAKURU
ITSUMO MIRAKURU
ITSUMO MIRAKURU
MOUSOUCHUU
```

作者は[[[2000/dhyang]]]({{ site.baseurl }}{% link 2000/dhyang.md %})や[[[2004/omoikane]]]({{ site.baseurl }}{% link 2004/omoikane.md %})と同じDon Yang。
この作者はこの先数年に渡ってアニメキャラ形状のプログラムを入選させ続ける（いずれも単にアニメキャラにしているのではなく、テーマに沿ったものとなっている）。
