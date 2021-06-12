---
id: 2019/yang
year: 2019
order: 14
authors: "Don_Yang"
orig_url: "https://www.ioccc.org/2019/yang/prog.c"
hint_url: "https://www.ioccc.org/2019/yang/hint.html"
title: "IOCCC 2019: Most in need of transparency"
award_ja: "もっとも透明性が必要"
---

## 動作

テキストをスクランブル・アンスクランブルする。

```
$ cat sample_input.txt


  アイ         オｫ
  あい       オ汚雄                しい      シシシシｼ
  アィ     おぉ    おお        (*ﾟーﾟ)      シシシシシシｼ        cCCCCCCc
 あぃ     ｵお        オォ     しぃ         シシ      シシｼ     cCCCCc   CC
 IIII    oお          Oオ    しー          ｼシ                cCCC
 藍愛    おO           ォ   しい           シｼ                CCC
 哀合    OoO          oOO   詩             ｼシ               CCc
 iiii    おぉ        ォオ   強い            シｼ       ｼシｼ   CCCc
あぁ      おおo   ぉオオ     しい             シシシシシシ     CCCCc    cCc
ぁあ        おぉおぉお        しぃしぃしっ      シｼシシ          CCCCccCCC
                                 (*ﾟーﾟ)


$ gcc -o prog prog.c

$ ./prog sample_input.txt


  アイ         オｫ
  あい       オ汚雄                しい      シシシシｼ
  アィ     おぉ    おお        (*ﾟーﾟ)      シシシシシシｼ        cCCCCCCc
 あぃ     ｵお        オォ     しぃ         シシ      シシｼ     cCCCCc   CC
 IIII    oお          Oオ    しー          ｼシ                cCCC
 藍愛    おO           ォ   しい           シｼ                CCC
 哀合    OoO          oOO   詩             ｼシ               CCc
 iiii    おぉ        ォオ   強い            シｼ       ｼシｼ   CCCc
あぁ      おおo   ぉオオ     しい             シシシシシシ     CCCCc    cCc
ぁあ        おぉおぉお        しぃしぃしっ      シｼシシ          CCCCccCCC
                                 (*ﾟーﾟ)
```

見た目には何も変わらないが、ファイル上では順番がバラバラになっており、さらにエスケープシーケンスが含まれていて本来の位置にカーソル移動してから各文字を含むようになっている。

prog.cはRubyスクリプトとして解釈すると、出力をゆっくり通すcatとして動くので、これを通すとわかりやすい。
文字がランダムな順序で現れるのを確認できる。

```
$ ./prog sample_input.txt | ruby prog.c


  アイ         オ
               汚
             ぉ      お             ﾟ         シシシ  シ           C
 あ                    ォ                            シ  ｼ     c    c   C
    I                                                           C
   愛                  ォ     い             ｼ                 C
 哀      O            o     詩             ｼ
 i       お                 強                         シ    CC
                             し               シシ              C       c c
            お  おぉ            ぃしぃ  っ                       CC    C
                                 ( ﾟー )

```

スクランブルされた出力を./progに与え直すことで、元のテキストに戻る。

```
$ ./prog sample_input.txt | ./prog


  アイ         オｫ
  あい       オ汚雄                しい      シシシシｼ
  アィ     おぉ    おお        (*ﾟーﾟ)      シシシシシシｼ        cCCCCCCc
 あぃ     ｵお        オォ     しぃ         シシ      シシｼ     cCCCCc   CC
 IIII    oお          Oオ    しー          ｼシ                cCCC
 藍愛    おO           ォ   しい           シｼ                CCC
 哀合    OoO          oOO   詩             ｼシ               CCc
 iiii    おぉ        ォオ   強い            シｼ       ｼシｼ   CCCc
あぁ      おおo   ぉオオ     しい             シシシシシシ     CCCCc    cCc
ぁあ        おぉおぉお        しぃしぃしっ      シｼシシ          CCCCccCCC
                                 (*ﾟーﾟ)
```

見た目にはわからないが、上記の出力にはエスケープシーケンスが混ざっていない。

---

出力を別のファイルに分割して出させることもできる。
次は、1.txtと2.txtと3.txtに分割して出力させる例。

```
$ ./prog sample_input.txt 1.txt 2.txt 3.txt

$ cat 1.txt


  アイ         オ
               汚
             ぉ      お             ﾟ         シシシ  シ           C
 あ                    ォ                            シ  ｼ     c    c   C
    I                                                           C
   愛                  ォ     い             ｼ                 C
 哀合    O            o     詩             ｼ
 i       お                 強                         シｼ   CC
                             しい             シシ              C       c c
            お  おぉ            ぃしぃ  っ                       CC    C
                                 ( ﾟー )
```

全部まとめてcatすると元通りに見える。

```
$ cat 1.txt 2.txt 3.txt


  アイ         オｫ
  あい       オ汚雄                しい      シシシシｼ
  アィ     おぉ    おお        (*ﾟーﾟ)      シシシシシシｼ        cCCCCCCc
 あぃ     ｵお        オォ     しぃ         シシ      シシｼ     cCCCCc   CC
 IIII    oお          Oオ    しー          ｼシ                cCCC
 藍愛    おO           ォ   しい           シｼ                CCC
 哀合    OoO          oOO   詩             ｼシ               CCc
 iiii    おぉ        ォオ   強い            シｼ       ｼシｼ   CCCc
あぁ      おおo   ぉオオ     しい             シシシシシシ     CCCCc    cCc
ぁあ        おぉおぉお        しぃしぃしっ      シｼシシ          CCCCccCCC
                                 (*ﾟーﾟ)
```

## 解説

[Visual cryptography](https://en.wikipedia.org/wiki/Visual_cryptography)を念頭に置いて作られた作品。
それぞれ単体では二次元のランダムな点列に見えるけれど、重ねると意味のあるメッセージが浮き上がるというもの。

苦労したポイントは、上記の例のとおり、UTF-8のサポートがあるところ。
日本人なら知っている通り、いわゆる全角文字は半角文字の2つ分の幅があるので、何かと面倒。
このプログラムは全角・半角の区別を理解して、CJKインプットでも正しく動作する。
ただし右から左に書く文字には対応していない（アンスクランブルはできるはずとのこと）。

サイズ制限が厳しく、絵にすることができなかったが、制限がなければ[violet.c](https://www.ioccc.org/2019/yang/violet.c)のようにするはずだったとのこと。
この形状は[ヴァイオレット・エヴァーガーデン](https://ja.wikipedia.org/wiki/%E3%83%B4%E3%82%A1%E3%82%A4%E3%82%AA%E3%83%AC%E3%83%83%E3%83%88%E3%83%BB%E3%82%A8%E3%83%B4%E3%82%A1%E3%83%BC%E3%82%AC%E3%83%BC%E3%83%87%E3%83%B3)のキャラクター、ヴァイオレット。
