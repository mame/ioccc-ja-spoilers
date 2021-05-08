---
id: 2012/hamano
year: 2012
order: 13
authors: "Tsukasa_Hamano"
orig_url: "https://www.ioccc.org/2012/hamano/hamano.c"
hint_url: "https://www.ioccc.org/2012/hamano/hint.html"
title: "IOCCC 2012: Most elementary use of C - Silver award"
award_ja: "Cのもっとも初歩的な使い方 - 銀賞"
---

## 動作

[シャーロック・ホームズ](https://ja.wikipedia.org/wiki/%E3%82%B7%E3%83%A3%E3%83%BC%E3%83%AD%E3%83%83%E3%82%AF%E3%83%BB%E3%83%9B%E3%83%BC%E3%83%A0%E3%82%BA)の作品の1つ『[踊る人形](https://ja.wikipedia.org/wiki/%E8%B8%8A%E3%82%8B%E4%BA%BA%E5%BD%A2)』に出てくる暗号化を入力テキストに対して行い、PDFとして出力する。

```
$ gcc -o hamano hamano.c

$ ( echo "Hello, world!"; echo; echo; cat hamano.c ) | ./hamano > tmp.pdf
```

左上に"Hello, world!"を暗号化した人形たちがあり、その下にhamano.cの中身をまるごと暗号化したものが表示されている。
対応する人形が定義されていない文字はそのまま表示されている。

{% include img.html src="2012-hamano.png" desc="生成されたPDF（tmp.pdf）" %}

このPDFはC言語プログラムとして解釈できるようになっており、コンパイル・実行すると元のテキストが出てくる。

```
$ gcc -o tmp -xc tmp.pdf

$ ./tmp
Hello, world!
```

## 解説

独自フォント情報を持つPDFを生成するプログラム。
フォント情報もコード中に埋め込まれている。
作者自身が[日本語で実装を解説している](https://www.cuspy.org/diary/2012-10-18/)ので、参照されたい。

コード形状も踊る人形。ちなみに'A'に対応する文字。

賞名の"elementary"は、シャーロック・ホームズを象徴するフレーズ、"It's elementary, my dear Watson."（初歩的なことだよ、ワトソンくん）から。
