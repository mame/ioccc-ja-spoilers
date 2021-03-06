---
id: 2004/hoyle
year: 2004
order: 6
authors: "Jonathan_Hoyle"
orig_url: "https://www.ioccc.org/2004/hoyle.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/hoyle.hint"
title: "IOCCC 2004: Most Functional Output"
award_ja: "もっとも関数的な出力"
---

## 動作

テキストでグラフを表示する。

コマンドライン引数で係数の列を指定する。次はy=1+x+x^2+x^3の例。

```
$ gcc -o hoyle hoyle.c -lm

$ ./hoyle 1 1 1 1
                                |                              /
                                |                             /
                                |
                                |                            /
                                |                           /
                                |                          /
                                |                         /
                                |                        /
                                |                       /
                                |                      /
                                |                     /
                                |                   A/
                                |                 A/
                                |               A/
                                |            A_/
                                A___________/
____________________A__________/|_______________________________
                A__/            |
              A/                |
            A/                  |
           /                    |
         A/                     |
        /                       |
       /                        |
      /                         |
     /                          |
    /                           |
   /                            |
                                |
  /                             |
 /                              |
                                |
```

次はy=2+x^2-0.001*x^4の例。

```
$ ./hoyle 2 0 1 0 -0.001
       A/  \_                   |                   A/  \_
      /      \_                 |                 A/      \
               \                |                /
     /          \               |               /          \
                 \              |              /
    /             \             |             /             \
                   \            |            /
   /                            |                            \
                    \           |           /
                     \          |          /
  /                   \         |         /                   \
                       \        |        /
                        \_      |      A/
 /                        \     |     /                        \
                           \_   |   A/
                             \_____/
________________________________|_______________________________
/                               |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
```

## 解説

7次関数まで表示可能（引数8つまで）。
x軸は-32から+31まで、y軸はオートスケールする。

コードはとても短くまとまっている。
`do(if,else)`や`case(break,default)`のようなマクロにセンスを感じる。
