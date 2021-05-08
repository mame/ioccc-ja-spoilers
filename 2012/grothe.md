---
id: 2012/grothe
year: 2012
order: 5
authors:
  - "Aaron_Grothe"
  - "David_Madore"
orig_url: "https://www.ioccc.org/2012/grothe/grothe.c"
hint_url: "https://www.ioccc.org/2012/grothe/hint.html"
title: "IOCCC 2012: Most conspiratorial"
award_ja: "もっとも共謀的"
---

## 動作

[シャミアの秘密分散法](https://en.wikipedia.org/wiki/Shamir%27s_Secret_Sharing)により、データを[秘密分散](https://ja.wikipedia.org/wiki/%E7%A7%98%E5%AF%86%E5%88%86%E6%95%A3)する。
秘密分散とは、データをN個に分割し、そのうちのM個を集めたときに復号できる手法のこと。

まず秘密分散をする。
secret.txtのデータをpiece1、piece2、piece3、piece4に分けるには次のようにする。

```
$ cat secret.txt
Hello, world!

$ gcc -DBC='break;case' -o grothe grothe.c

$ ./grothe -secret.txt 1-/dev/urandom 2-/dev/urandom 1+piece1 2+piece2 3+piece3 4+piece4

$ ls piece*
piece1  piece2  piece3  piece4
```

`N-/dev/urandom`を渡した数に1を足した数だけ集めると復号できる。
上記の例では、2つ渡しているので、3つ集めれば復号できるようになる。
`1-/dev/urandom`だけだと、2つ集めれば復号できるようになる。

分散したファイルはいずれも読めない。

```
$ od -c piece1
0000000 036 244 027 336 345   ^ 377   N  \f 204 311   } 377   #
0000016

$ od -c piece2
0000000 323   @ 266  \v 027 310 022   r 250   H   T 004 022 343
0000016

$ od -c piece3
0000000 205 201 315 271 235 272 315   K 313 276 361 035 314 312
0000016

$ od -c piece4
0000000   v  \b   B 314 005 035 030 225 030 336 035 254 034 354
0000016
```

復号するには次のようにする。

```
$ ./grothe 1-piece1 2-piece2 4-piece4 +output.txt

$ cat output.txt
Hello, world!
```

## 解説

コード形状はただの四角。

基本的なシャミアの秘密分散は、(M+1)次関数からN個の点を選んでくるものだけれど、このプログラムのアルゴリズムはそれとは違うと思う。
かけ算を使っておらず、固定のスクランブルテーブルとxorだけで計算している。
数学に強い人に解析してほしい。

実装状の細かい難読化工夫としては、一貫性をあえて壊すように書かれている。
インクリメントは`i+=1`、`i=i+1`、`i++`、`++i`をすべて使っている。
数字のリテラルはとくに意味なく8進数、10進数、16進数を使っている。
変数名も大文字、小文字を混ぜる、など。

投稿時はサイズオーバーしていたが、修正できることが明らかだったので多めにみたとのこと。
