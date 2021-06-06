---
id: 2018/bellard
year: 2018
order: 3
authors: "Fabrice_Bellard"
orig_url: "https://www.ioccc.org/2018/bellard/prog.c"
hint_url: "https://www.ioccc.org/2018/bellard/hint.html"
title: "IOCCC 2018: Most inflationary"
award_ja: "もっともインフレ"
---

## 動作

画像圧縮アルゴリズムの有名なサンプルデータ、[Lena](https://ja.wikipedia.org/wiki/%E3%83%AC%E3%83%8A_%28%E7%94%BB%E5%83%8F%E3%83%87%E3%83%BC%E3%82%BF%29)の画像が[PPM形式](https://ja.wikipedia.org/wiki/PNM_%28%E7%94%BB%E5%83%8F%E3%83%95%E3%82%A9%E3%83%BC%E3%83%9E%E3%83%83%E3%83%88%29)で出力される。

```
$ gcc -o prog prog.c -lm

$ ./prog > lena.ppm
```

{% include img.html src="2018-bellard-1.png" desc="lena.ppm" %}

コマンドライン引数で指定した圧縮ファイルを解凍することもできる。
添付されている圧縮画像は以下の通り。

```
$ ./prog d < lena512.bin > lena512.ppm
```

{% include img.html src="2018-bellard-2.png" desc="lena512.ppm" cite="https://www.ioccc.org/2018/bellard/lena512.bin" %}

```
$ ./prog d < fruits.bin > fruits.ppm
```

{% include img.html src="2018-bellard-3.png" desc="fruits.ppm" cite="https://www.ioccc.org/2018/bellard/fruits.bin" %}

```
$ ./prog d < vintage_cars.bin > vintage_cars.ppm
```

{% include img.html src="2018-bellard-4.png" desc="vintage_cars.ppm" cite="https://www.ioccc.org/2018/bellard/vintage_cars.bin" %}

## 解説

lena.ppmは49167バイトあり、prog.cは3984バイトなので、12倍の大きさのデータが隠されていることになる。
画像データ部分に限定すれば1220バイトなので、40倍とも。

```
$ wc -c lena.ppm
49167 lena.ppm
```

ただのJPEGではこの圧縮率は実現できないということで、次の工夫がなされているとのこと。

* [離散コサイン変換](https://ja.wikipedia.org/wiki/%E9%9B%A2%E6%95%A3%E3%82%B3%E3%82%B5%E3%82%A4%E3%83%B3%E5%A4%89%E6%8F%9B)、ブロックサイズは可変（4x4、8x8、16x16、32x32）
* DCとdirectional predictors（よく知らない）
* [算術符号](https://ja.wikipedia.org/wiki/%E7%AE%97%E8%A1%93%E7%AC%A6%E5%8F%B7)
* [YCgCo色空間](https://en.wikipedia.org/wiki/YCoCg)

なお、IOCCCのルールとして8ビット目が立った文字をコードに含めることは禁止されているので、ASCIIコードの1～127で構成されている。
また、IOCCCのサイズルールを利用すべく、空白文字や`{;}`が多めに出るように調整されている。

詳しく解説している記事があったのでリンクを置いておく。

[http://eastfarthing.com/blog/2020-09-14-decoder/](http://eastfarthing.com/blog/2020-09-14-decoder/)
