---
id: 2020/kurdyukov2
year: 2020
order: 9
authors: "Ilya_Kurdyukov"
orig_url: "https://www.ioccc.org/2020/kurdyukov2/prog.c"
hint_url: "https://www.ioccc.org/2020/kurdyukov2/index.html"
title: "IOCCC 2020: Least detailed"
award_ja: "もっともざっくり"
---

### 動作

入力画像をざっくりと四角にする。

サンプルの入力画像。

{% include img.html src="2020-kurdyukov2-1.jpg" desc="sample.jpg" cite="https://www.ioccc.org/2020/giles/pi.wav" %}

```
$ cc -o prog prog.c -ljpeg
$ ./prog 1000 sample.jpg output.jpg
```

次のようなoutput.jpgが生成される。

{% include img.html src="2020-kurdyukov2-2.jpg" desc="output.jpg" %}

### 解説

コード形状の意味は不明。
[[[2020/kurdyukov4]]]({{ site.baseurl }}{% link 2020/kurdyukov4.md %})と酷似しているので、特に意味はないか。

画像の非可逆圧縮の実験をしていてできたコードで、圧縮としては微妙だけれど[キュビズム](https://ja.wikipedia.org/wiki/%E3%82%AD%E3%83%A5%E3%83%93%E3%82%B9%E3%83%A0)風のドット絵が面白く感じたとのこと。

png出力版（[prog.png.c](https://www.ioccc.org/2020/kurdyukov2/prog.png.c)）やppm出力版（[prog.ppm.c](https://www.ioccc.org/2020/kurdyukov2/prog.ppm.c)）もあるもよう。
