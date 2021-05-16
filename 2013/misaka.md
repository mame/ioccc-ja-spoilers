---
id: 2013/misaka
year: 2013
order: 11
authors: "Don_Yang"
orig_url: "https://www.ioccc.org/2013/misaka/misaka.c"
hint_url: "https://www.ioccc.org/2013/misaka/hint.html"
title: "IOCCC 2013: Most catty"
award_ja: "もっとも意地悪"
---

## 動作

テキストファイルを水平方向に結合するツール。

```
$ gcc misaka.c -o horizontal_cat

$ cat tmp.txt
1
2
3

$ ./horizontal_cat tmp.txt tmp.txt
11
22
33
```

---

元のソースコードmisaka.cを水平方向に結合してコンパイル・実行すると、垂直方向の結合をするプログラムになる。
要するにUNIXの[catコマンド](https://ja.wikipedia.org/wiki/Cat_%28UNIX%29)と同じ。

```
$ ./horizontal_cat misaka.c misaka.c > misaka2.c

$ gcc misaka2.c -o vertical_cat

$ ./vertical_cat tmp.txt tmp.txt
1
2
3
1
2
3
```

---

元のソースコードmisaka.cを垂直方向に結合してコンパイル・実行すると、猫が出てくる。
コマンド名の"cat"とかけている。

```
$ ./vertical_cat misaka.c misaka.c > misaka3.c

$ gcc -o misaka3 misaka3.c

$ ./misaka3

                                      o""8o
                                     o"  "8
                      o88ooo        o8    8
                      "8  ""8ooo8""""     8o
                       "8o          oooo  88
                         8 o""8  o"8"  ""oo8ooo
      o""""oo""""""88oooo8 8oo8  8o8o         "8o
      8o                 8  ""      """8oo      "8o
       "8ooooooooo       8        o      "8o      8
                 "8oo    "o   """"      o8"8ooooo8"
                    "8oo  "8ooo    ooo8""    "8
                       ""ooo888"""""          8
                              8               8
                              8               8
                              8               8
                              8               8
```

結合数を増やすと、猫の胴体が伸びる。

```
$ ./vertical_cat misaka.c misaka.c misaka.c misaka.c misaka.c > misaka6.c

$ gcc -o misaka6 misaka6.c

$ ./misaka6

                                      o""8o
                                     o"  "8
                      o88ooo        o8    8
                      "8  ""8ooo8""""     8o
                       "8o          oooo  88
                         8 o""8  o"8"  ""oo8ooo
      o""""oo""""""88oooo8 8oo8  8o8o         "8o
      8o                 8  ""      """8oo      "8o
       "8ooooooooo       8        o      "8o      8
                 "8oo    "o   """"      o8"8ooooo8"
                    "8oo  "8ooo    ooo8""    "8
                       ""ooo888"""""          8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
                              8               8
```

misaka.cを垂直方向に結合したmisaka3.cを、水平方向に結合する（つまり、元のmisaka.cを2x2に配置する）と、猫が太る。

```
$ ./horizontal_cat misaka3.c misaka3.c > misaka7.c

$ gcc -o misaka7 misaka7.c

$ ./misaka7

                                                                            oo""""88oo
                                                                          oo""    ""88
                                            oo8888oooooo                oo88        88
                                            ""88    """"88oooooo88""""""""          88oo
                                              ""88oo                    oooooooo    8888
                                                  88  oo""""88    oo""88""    """"oooo88oooooo
            oo""""""""oooo""""""""""""8888oooooooo88  88oooo88    88oo88oo                  ""88oo
            88oo                                  88    """"            """"""88oooo            ""88oo
              ""88oooooooooooooooooo              88                oo            ""88oo            88
                                  ""88oooo        ""oo      """"""""            oo88""88oooooooooo88""
                                        ""88oooo    ""88oooooo        oooooo88""""        ""88
                                              """"oooooo888888""""""""""                    88
                                                            88                              88
                                                            88                              88
                                                            88                              88
                                                            88                              88
```

これも水平方向に3段にする（2x3にする）と、さらに太る。

```
$ ./horizontal_cat misaka3.c misaka3.c misaka3.c > misaka8.c

$ gcc -o misaka8 misaka8.c

$ ./misaka8

                                                                                                                  ooo""""""888ooo
                                                                                                               ooo"""      """888
                                                                  ooo888888ooooooooo                        ooo888            888
                                                                  """888      """"""888ooooooooo888""""""""""""               888ooo
                                                                     """888ooo                              oooooooooooo      888888
                                                                           888   ooo""""""888      ooo"""888"""      """"""oooooo888ooooooooo
                  ooo""""""""""""oooooo""""""""""""""""""888888oooooooooooo888   888oooooo888      888ooo888ooo                           """888ooo
                  888ooo                                                   888      """"""                  """""""""888oooooo                  """888ooo
                     """888ooooooooooooooooooooooooooo                     888                        ooo                  """888ooo                  888
                                                   """888oooooo            """ooo         """"""""""""                  ooo888"""888ooooooooooooooo888"""
                                                            """888oooooo      """888ooooooooo            ooooooooo888""""""            """888
                                                                     """"""ooooooooo888888888"""""""""""""""                              888
                                                                                          888                                             888
                                                                                          888                                             888
                                                                                          888                                             888
                                                                                          888                                             888
```

---

何段に積んだかわからなくなったときは、Brainfuckとして実行することで構造が表示される。

```
$ bf misaka.c
 MISAKA

$ bf misaka2.c
 MISAKA MISAKA

$ bf misaka3.c
 MISAKA
 MISAKA

$ bf misaka8.c
 MISAKA MISAKA MISAKA
 MISAKA MISAKA MISAKA
```

## 解説

catコマンドと猫のcatを混ぜ込んだコード遊び。

コード形状は、『[とある魔術の禁書目録](https://ja.wikipedia.org/wiki/%E3%81%A8%E3%81%82%E3%82%8B%E9%AD%94%E8%A1%93%E3%81%AE%E7%A6%81%E6%9B%B8%E7%9B%AE%E9%8C%B2)』に出てくるキャラクター、[御坂美琴](https://ja.wikipedia.org/wiki/%E5%BE%A1%E5%9D%82%E7%BE%8E%E7%90%B4)。
正確には、そのクローンである[ミサカ](https://ja.wikipedia.org/wiki/%E5%A6%B9%E9%81%94)。
積み重ねできるフィギュア（[ミサカ盛り](https://www.kotobukiya.co.jp/product/product-0000000492/)）が有名で、そこから着想を得たとのこと。
出力される猫のアスキーアートは[longcat](https://knowyourmeme.com/memes/longcat)というインターネットミームが元ネタ。

このコードを実現する鍵は、C99の一行コメント。
これにより右側に追加されたコードを無視することができる。
ただしこれを乱用だけではつまらないので、なるべく多用しないようにしているらしい。

水平方向に積み重なっているかどうかの判定は25行目と26行目で行っている。
アスキーアートで言うと、右端の髪の毛の先端部分がポイント。

```
25: * ...... O&=72/
26: 6/*][*/; ... //
```

`O`は5で初期化されている。
水平方向に積み重なっていない場合、`O&=72/6`で`O`は0になる。
水平方向に積み重なっている場合、25行目の先頭の`*`と末尾の`/`が結合し、コメントの開始となる。

```
25: * ...... O&=72/* ...... O&=72/
26: 6/*][*/; ... //6/*][*/; ... //
```

これは`6`をコメントアウトする効果を持つので、`O&=72`の計算となり、`O`は4となる。

他の難読化としては、ランレングス圧縮したlongcat、対称的な変数名（`p`、`q`、`b`、`d`など）、ソースコードのCRCをソースコードに埋め込んでいる（[[[2004/omoikane]]]({{ site.baseurl }}{% link 2004/omoikane.md %})参照）など。
[[[2012/omoikane]]]({{ site.baseurl }}{% link 2012/omoikane.md %})と同様にspoiler.htmlが添付されている。

上記の動作例では説明を省いたが、このコマンドは入力をすべてバッファリングするため、次のコマンドで一気に2x2にできる。

```
$ cat misaka.c | ./horizontal_cat - - | ./vertical_cat - -
```

賞名の"catty"は「猫のように意地悪な」という意味だが、上記の通りcatをテーマにしていることをかけている。
