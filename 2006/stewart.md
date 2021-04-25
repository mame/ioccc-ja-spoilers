---
id: 2006/stewart
year: 2006
order: 9
authors: "Thomas_Stewart"
orig_url: "https://www.ioccc.org/2006/stewart/stewart.c"
hint_url: "https://www.ioccc.org/2006/stewart/hint.text"
title: "IOCCC 2006: Best Computed Graphics"
award_ja: "最高の計算されたグラフィックス"
---

## 動作

フラクタルの一種である[反復関数系](https://ja.wikipedia.org/wiki/%E5%8F%8D%E5%BE%A9%E9%96%A2%E6%95%B0%E7%B3%BB)の描画を行う。

シェルピンスキーのギャスケット。

```
$ gcc -o stewart stewart.c

$ ./stewart 400 1000000 gasket > gasket.xbm

$ convert gasket.xbm gasket.png
```

{% include img.html src="2006-stewart-1.png" desc="gasket.xbm（シェルピンスキーのギャスケット）" %}

ドラゴン曲線。

```
$ ./stewart 400 1000000 dragon > dragon.xbm

$ convert dragon.xbm dragon.png
```

{% include img.html src="2006-stewart-2.png" desc="dragon.xbm（ドラゴン曲線）" %}

リアルなシダ。

```
$ ./stewart 400 1000000 fern > fern.xbm

$ convert fern.xbm fern.png
```

{% include img.html src="2006-stewart-3.png" desc="fern.xbm（シダ画像）" %}

リアルな木。

```
$ ./stewart 400 1000000 tree2 > tree2.xbm

$ convert tree2.xbm tree2.png
```

{% include img.html src="2006-stewart-4.png" desc="tree2.xbm（木）" %}

IOCCCのロゴを目指したもの。

```
$ ./stewart 400 1000000 ioccc > ioccc.xbm

$ convert ioccc.xbm ioccc.png
```

{% include img.html src="2006-stewart-5.png" desc="ioccc.xbm（IOCCCのロゴになりたかったもの）" %}


他にも多数の設定が添付されている。

## 解説

[[[1992/imc]]]({{ site.baseurl }}{% link 1992/imc.md %})や[[[1994/tvr]]]({{ site.baseurl }}{% link 1994/tvr.md %})など、フラクタルを生成する作品はいくつも実績があるけれど、反復関数系（IFS）を扱うものは初とのこと。

設定ファイルのフォーマットは次の通り。

```
<num ifs> <x min> <y min> <x max> <y max>
<a> <b> <c> <d> <e> <f> <p>
<a> <b> <c> <d> <e> <f> <p>
<a> <b> <c> <d> <e> <f> <p>
.
.
.
```

`a`から`f`は、(prevx, prevy)から(x, y)に点を移すときの式の座標。

```
x = a * prevx + b * prevy + e;
y = c * prevx + d * prevy + f;
```

最後の`p`は、その式が実行される確率とのこと。

画像出力は[XBM](https://ja.wikipedia.org/wiki/XBM)という古いフォーマット。

コードは、変数宣言が`void*`の1つだけで、`long`型の値も`double`型の値もポインタもすべてこれにキャストして扱うようになっている。
実質的に、型がない状態。
プリプロセスをするとキャストがたくさん出てくるので、みるのが大変。

賞名は[[[2006/monge]]]({{ site.baseurl }}{% link 2006/monge.md %})と対称的になっている。
