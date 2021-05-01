---
id: 2011/zucker
year: 2011
order: 13
authors: "Matt_Zucker"
orig_url: "https://www.ioccc.org/2011/zucker/zucker.c"
hint_url: "https://www.ioccc.org/2011/zucker/hint.html"
title: "IOCCC 2011: Most shiny"
award_ja: "もっともピカピカ"
---

## 動作

レイトレーサ。実行には数分かかる。

```
$ gcc -o zucker zucker.c -lm

$ ./zucker > image.ppm

$ convert image.ppm image.png
```

{% include img.html src="2011-zucker-1.png" desc="ioccc 2011をレンダリングした画像" %}

コマンドライン引数で文字を指定できる。

```
$ ./zucker "Hello!" > hello.ppm

$ convert hello.ppm hello.png
```

{% include img.html src="2011-zucker-2.png" desc="hello!をレンダリングした画像" %}

第2引数に`-preview`コマンドをつけると画質を下げて速くできる。

この出力はIOCCCのサイトでロゴとして使われている。

## 解説

このプログラムはプログラミング初心者向けとうそぶいている。
29行しかないし、`void`や`switch`や`while`のような難しい概念は使っていないし、`putchar`と一部の数学関数しか使っていないなど。
初心者はグローバル変数を使いがちなのにあわせて、ローカル変数は全く使っていないとのこと。

コード形状は、物体の表面で光が反射するときにの幾何学的構造を表現している。
丸い物体の表面に対し、Dが入射してくる光のベクトル（direction vector）、Nが[法線ベクトル](https://ja.wikipedia.org/wiki/%E6%B3%95%E7%B7%9A%E3%83%99%E3%82%AF%E3%83%88%E3%83%AB)、Rが反射していく光のベクトル（reflection vector）を表している。

古くからあるレイトレーシングではなく、スフィアトレーシングを使っているとのこと。
交点を解析的に見つけるのではなく、近接物体との距離を考慮しながら徐々に光線をすすめる手法で、これにより複雑な形状の交点を見つけやすくなったり、[環境光の遮蔽](https://en.wikipedia.org/wiki/Ambient_occlusion)を計算できるようになったりする。
普通はループで徐々に近づけるが、このコードでは再帰によって光線をすすめるのでややこしい。

hint.textによると、コード上の難読化もいろいろ工夫されている。
グローバル変数に入っている値を違う意味で使う（たとえば`X`は整数40とASCIIコード`'('`の両方として使っているとのこと）ので、画像のサイズを変えるのも難しくなっている。
ベクトル演算の関数はいろいろ定義するのではなく、掛け算して足し算する関数1つを使い回すようにしている。
なるべく、論理演算よりビット演算、ビット演算より算術演算を好んで使う。
キャストをするときは、キャスト構文を使わず、キャストしたい型の変数に代入することで行う。
