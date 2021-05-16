---
id: 2013/hou
year: 2013
order: 9
authors: "Qiming_HOU"
orig_url: "https://www.ioccc.org/2013/hou/hou.c"
hint_url: "https://www.ioccc.org/2013/hou/hint.html"
title: "IOCCC 2013: Best use of 1 Infinite Loop"
award_ja: "無限ループの最高の使い方"
linewrap: true
---

## 動作

シェーダがプログラム可能な3Dレンダラ。

次のように実行して待つ。

```
$ gcc -o tmp hou.c

$ ./tmp > tmp.c

$ gcc -o hou tmp.c -lm

$ ./hou BIG
please  wait...
```

そのうち、画像を書き出したというログが出る。

```
$ ./hou BIG
please  wait...
31    reopen    luna.ppm
```

luna.ppmを開くと次のようになっている。

{% include img.html src="2013-hou-1.png" desc="最初に書き出された画像" %}

画像を書き出してもレンダリングは走り続け、定期的にファイルを上書きしていく。
画像は徐々に高画質になっていく。
一晩くらい走らせ続けると、このくらいの品質になるとのこと。

{% include img.html src="2013-hou-2.jpg" desc="一晩程度走らせた結果" cite="https://www.ioccc.org/2013/hou/luna.jpg" %}

小ネタとして、上の棚は白い部分が"IOCCC"になっている。

引数にシーンデータを指定することで、別の画像もレンダリングできる。
詳細はhintファイルを参照。
添付されている生成画像へのリンクを置いておく。

* [https://github.com/ioccc-src/winner/blob/main/2013/hou/old_default.jpg](https://github.com/ioccc-src/winner/blob/main/2013/hou/old_default.jpg)
* [https://github.com/ioccc-src/winner/blob/main/2013/hou/otherroom.jpg](https://github.com/ioccc-src/winner/blob/main/2013/hou/otherroom.jpg)

## 解説

元のhou.cは、本体コードを圧縮したデータと、それの解凍を行うプログラムになっている。
この圧縮は、[Prediction by Partial Matching](https://ja.wikipedia.org/wiki/Prediction_by_Partial_Matching)（7-zipのベースとなっているデータ圧縮アルゴリズム）に基づいている。
なお、出力文字のうち空白文字の重みを大きくしたり、`'"'`や`'\'`の文字を出さないようにしたりして、IOCCCのサイズルールをパスするように工夫している。
出力が[PPM](https://ja.wikipedia.org/wiki/PNM_%28%E7%94%BB%E5%83%8F%E3%83%95%E3%82%A9%E3%83%BC%E3%83%9E%E3%83%83%E3%83%88%29)なのは、これにかけた洒落とのこと。

hou.cコンパイルして実行すると、本体コードが出力される。
これをコンパイルしたものが3Dレンダラとして動く。
本体はシェーダのプログラムのインタプリタと、[3D-DDA](https://en.wikipedia.org/wiki/Digital_differential_analyzer_%28graphics_algorithm%29)によるレイトレーサと、[PSSMLT](https://www.researchgate.net/publication/220507359_A_Simple_and_Robust_Mutation_Strategy_for_the_Metropolis_Light_Transport_Algorithm)の光線パスサンプラの組み合わせとのこと。
知識がないのでほとんどわからない。

[[[2004/gavare]]]({{ site.baseurl }}{% link 2004/gavare.md %})から始まったレイトレーシング系作品の終着点だろうか。
レンダリングの品質でこれを明確に（素人でもわかるように）上回るのは難しそうなので、新たなひねりを考える必要がありそう。
