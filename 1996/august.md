---
id: 1996/august
year: 1996
order: 11
authors: "Lennart_Augustsson"
orig_url: "https://www.ioccc.org/1996/august.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1996/august.hint"
title: "IOCCC 1996: Best of Show"
award_ja: "最優秀賞"
---

## 動作

順を追って説明する。

august.cを単純にC言語プログラムとして見ると、独自バイトコードのインタプリタとして動く。
階乗計算のバイトコード（fac.oo）を動かす例。

{: .wrap }
```
$ gcc -DZ=60000 -D'T=m[s]' -D'P=m[s++]' -D'L=m[p++]' -D'g=getchar()' -DE=else -DW=while -D'B=m[p++]' -DI=if -DR='s=s+l/2;T=r;I(l%2)s++' -D'X=m[s-' -D'D=Q(13,-)Q(14,*)Q(15,/)Q(16,%)Q(6,==)Q(7,!=)Q(8,<)C(1,r=P;m[T]=r;T=r)C(9,r=P;m[T]=r;s++)' -o august august.c

$ ./august < fac.oo
factorial 0 = 1
factorial 1 = 1
factorial 2 = 2
factorial 3 = 6
factorial 4 = 24
factorial 5 = 120
factorial 6 = 720
factorial 7 = 5040
factorial 8 = 40320
factorial 9 = 362880
```

---

august.cは、独自バイトコードのプログラムとしても解釈できる（C言語のコメントとしてバイトコードが埋め込まれている）。
このバイトコードは、C言語のサブセットの言語（Obfuscated C、以下OC）のコードを独自バイトコードに翻訳するコンパイラとなっている。

fac.ooは、[fac.oc](https://github.com/ioccc-src/winner/blob/main/1996/fac.oc)をこのコンパイラでコンパイルすることで得られる。

```
$ cat august.c fac.oc | ./august > fac.oo
```

ここまでが基本。

---

august.cに埋め込まれたコンパイラのソースコードはparse.oc。これをコンパイルことで、コンパイラとして動くバイトコードparse.ooが得られる。

```
$ cat august.c parse.oc | ./august > parse.oo
```

parse.ooはaugust.cの代替として動く。

```
$ cat parse.oo fac.oc | ./august > fac2.oo

$ ./august < fac2.oo
factorial 0 = 1
factorial 1 = 1
factorial 2 = 2
factorial 3 = 6
factorial 4 = 24
factorial 5 = 120
factorial 6 = 720
factorial 7 = 5040
factorial 8 = 40320
factorial 9 = 362880
```

parse.oc自身もparse.ooでコンパイルできる。その結果はparse.ooと一致する。

```
$ cat parse.oo parse.oc | ./august > parse2.oo

$ diff -s parse.oo parse2.oo
Files parse.oo and parse2.oo are identical
```

---

さて、ここからが本題。august.cはaugust.cをコンパイルできる。ただしプリプロセッサはないので、あらかじめプリプロセスしてaugust.ocを得て、それをコンパイルすることでaugust.ooが得られる。

{: .wrap }
```
$ gcc -DZ=40000 -D'T=m[s]' -D'P=m[s++]' -D'L=m[p++]' -D'g=getchar()' -DE=else -DW=while -D'B=m[p++]' -DI=if -DR='s=s+l/2;T=r;I(l%2)s++' -D'X=m[s-' -D'D=Q(13,-)Q(14,*)Q(15,/)Q(16,%)Q(6,==)Q(7,!=)Q(8,<)C(1,r=P;m[T]=r;T=r)C(9,r=P;m[T]=r;s++)' august.c -E | grep -a -v "^#" > august.oc

$ cat parse.oo august.oc > august.oo
```

このようにして得られたaugust.ooは、august.cなので、つまりバイトコードのインタプリタとして動くバイトコード。これを使ってfac.ooを動かす。

```
$ cat august.oo fac.oo | ./august
factorial 0 = 1
factorial 1 = 1
factorial 2 = 2
factorial 3 = 6
factorial 4 = 24
factorial 5 = 120
factorial 6 = 720
factorial 7 = 5040
factorial 8 = 40320
factorial 9 = 362880
```

さらに、インタプリタの上でインタプリタを動かし、その上でfac.ooを動かすことも可能。

```
$ cat august.oo august.oo fac.oo | ./august
factorial 0 = 1
factorial 1 = 1
factorial 2 = 2
factorial 3 = 6
factorial 4 = 24
factorial 5 = 120
factorial 6 = 720
factorial 7 = 5040
factorial 8 = 40320
factorial 9 = 362880
```

さらにインタプリタの階層を増やすことも可能。

## 解説

セルフホスト可能なCサブセットのコンパイラ兼バイトコードインタプリタ。
しばらく言語処理系作品が入選しなかったが、大作が来たという感じ。

OCが備える機能は、`getchar()`と`putchar()`、型は`int`と`char`とそれらへのポインタ、配列はグローバルなもののみ、演算子や制御構造もいろいろ制限があるとのこと。
それでもサイズ制限が厳しい時代でこれが達成されたのは快挙。
サイズ制限を回避するバイトコードの設計は楽しかったことだろう。
august.hintから審査員の興奮が伺える。
