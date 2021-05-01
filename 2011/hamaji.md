---
id: 2011/hamaji
year: 2011
order: 7
authors:
  - "Shinichiro_Hamaji"
  - "bsoup"
orig_url: "https://www.ioccc.org/2011/hamaji/hamaji.c"
hint_url: "https://www.ioccc.org/2011/hamaji/hint.html"
title: "IOCCC 2011: Best solved puzzle"
award_ja: "最高の解かれたパズル"
---

## 動作

[お絵かきロジック](https://ja.wikipedia.org/wiki/%E3%81%8A%E7%B5%B5%E3%81%8B%E3%81%8D%E3%83%AD%E3%82%B8%E3%83%83%E3%82%AF)のソルバ。

```
$ gcc -o hamaji hamaji.c

$ ./hamaji < dragon.nono
                           4
                         76.                               1
                         ..2321     1       57             3
                         21....     .       ..             .11         1   2
                    1  88..1321  2  33    5512      1      277        14   1
                    099..12....  .  ..    ....    1 4 11111...111 122 5.1  .
                  11...221.821112411123455676489  51.176543232666 902 .27  1
                  10111...1.....................11.417...........1...21..11.
                  ..2239921176566156225563322299887...6533233233182469196894
                  22...............................111......................
                  3269548556987776665556662131223412347543332334543322223456

          13.3.37 XXXXXXXXXXXXX  XXX   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
          12.2.39 XXXXXXXXXXXX  XX   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
          11.2.40 XXXXXXXXXXX  XX   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
            10.39 XXXXXXXXXX         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
             9.36 XXXXXXXXX             XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
             9.31 XXXXXXXXX                  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
           8.3.32 XXXXXXXX  XXX             XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
           7.3.30 XXXXXXX  XXX                XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
           5.3.29 XXXXX   XXX                  XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
       3.1.3.1.28 XXX         X    XXX        X XXXXXXXXXXXXXXXXXXXXXXXXXXXX
         1.2.4.31 X         XX    XXXX       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
           7.5.31     XXXXXXX   XXXXX        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
         1.6.5.30 X  XXXXXX    XXXXX          XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
       5.10.12.16 XXXXX    XXXXXXXXXX         XXXXXXXXXXXX  XXXXXXXXXXXXXXXX
    5.11.5.4.12.4 XXXXX  XXXXXXXXXXX          XXXXX  XXXX  XXXXXXXXXXXX XXXX
    15.2.4.4.11.5 XXXXXXXXXXXXXXX          XX XXXX  XXXX   XXXXXXXXXXX XXXXX
   16.3.4.2.2.5.5 XXXXXXXXXXXXXXXX        XXX XXXX   XX     XX   XXXXX XXXXX
         14.8.7.3 XXXXXXXXXXXXXX          XXXXXXXX              XXXXXXX  XXX
     12.1.4.1.6.2 XXXXXXXXXXXX          X XXXX X                  XXXXXX  XX
       11.3.4.6.1 XXXXXXXXXXX         XXX XXXX                     XXXXXX  X
     10.1.8.8.5.1 XXXXXXXXXX        X XXXXXXXX         XXXXXXXX     XXXXX  X
         9.8.11.5 XXXXXXXXX         XXXXXXXX         XXXXXXXXXXX    XXXXX
    9.5.6.1.2.4.1 XXXXXXXXX          XXXXX          XXXXXX  X XX     XXXX  X
        9.3.5.1.5 XXXXXXXXX           XXX          XXXXX       X    XXXXX
        3.2.6.5.1 XXX    XX                       XXXXXX            XXXXX  X
        2.6.3.5.1 XX                             XXXXXX    XXX     XXXXX   X
    2.1.2.6.3.6.1 XX X     XX                    XXXXXX    XXX    XXXXXX   X
2.1.2.2.1.5.2.5.1 XX X  XX  XX                X  XXXXX     XX     XXXXX    X
    2.1.2.5.5.6.3 XX X  XX  XXXXX         XXXXX  XXXXXX            XXX
      4.1.9.7.5.1 XXXX  X  XXXXXXXXX   XXXXXXX    XXXXX                    X
       5.19.6.1.2 XXXXX XXXXXXXXXXXXXXXXXXX       XXXXXX        X         XX
         24.6.3.3 XXXXXXXXXXXXXXXXXXXXXXXX         XXXXXX      XXX       XXX
     24.1.2.9.7.4 XXXXXXXXXXXXXXXXXXXXXXXX  X  XX  XXXXXXXXX XXXXXXX    XXXX
        25.1.2.25 XXXXXXXXXXXXXXXXXXXXXXXXX X  XX  XXXXXXXXXXXXXXXXXXXXXXXXX
          28.1.26 XXXXXXXXXXXXXXXXXXXXXXXXXXXX  X XXXXXXXXXXXXXXXXXXXXXXXXXX
```

## 解説

入力は問題データを表す。
左側のヒントの数字をドット区切りで並べ、ハイフンの行で区切ったあと、上側のヒントの数字を並べる。
最大サイズは60x60。
解がない場合、解が一意に決まらない、解が求まらない場合は"invalid"と出力される。
詳しくはhint.text参照のこと。

お絵かきロジックはNP困難なので、バックトラックでまじめに解くのは難しい（30x30程度が限界）。
人間が行うヒューリスティクスを実装すれば、人間が解けるものは大体解けるが、プログラムが長くなりがち。
このプログラムは第3の方法として、[http://www.haskell.org/haskellwiki/Nonogram](http://www.haskell.org/haskellwiki/Nonogram)で紹介されている集合ベースのソルバを実装しているとのこと。
人間のようなむずかしい推論はしないが、決定しないセルに対してバックトラックをしない推定を行う。

コードはお絵かきロジックでドラゴンの絵を示した形状。
数字のヒントに多くの文字を消費するので、コード自体はだいぶ縮められている。
ドラゴン形状とスピードとサイズから、しっかり難読化されたコードになっているとのこと。

ドラゴンを選んだのは、2012年が辰年だったからとのこと。
IOCCC 2011は募集期間が2011-11-12から2012-01-12だった。
