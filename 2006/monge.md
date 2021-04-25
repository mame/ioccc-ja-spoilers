---
id: 2006/monge
year: 2006
order: 6
authors: "Maurizio_Monge"
orig_url: "https://www.ioccc.org/2006/monge/monge.c"
hint_url: "https://www.ioccc.org/2006/monge/hint.text"
title: "IOCCC 2006: Best Compiled Graphics"
award_ja: "最高のコンパイルされたグラフィックス"
---

## 動作

フラクタルをインタラクティブに観察できるビューア。

マンデルブロの例。

```
$ gcc -o monge monge.c `sdl-config --libs --cflags`

$ ./monge "z = 0" "z = z*z + c; Abs2(z) < 4"
```

{% include img.html src="2006-monge-1.png" desc="マンデルブロ集合が表示される" %}

左クリックでズームアップ、右クリックでズームダウン。
マンデルブロの右上あたりを少しだけ拡大した例。

{% include img.html src="2006-monge-2.png" desc="マンデルブロ集合の右上あたりを拡大した様子" %}

さらに拡大。

{% include img.html src="2006-monge-3.png" desc="さらに拡大した様子" %}

他のフラクタルも描ける。

```
$ ./monge "z = 0" "z = z*z*z + c; Abs2(z) < 4"
```

{% include img.html src="2006-monge-4.png" desc="別のフラクタルも表示できる" %}

フラクタルの指定方法は解説で。

## 解説

審査員は[[[1994/tvr]]]({{ site.baseurl }}{% link 1994/tvr.md %})と[[[2001/bellard]]]({{ site.baseurl }}{% link 2001/bellard.md %})の組み合わせと評している。
フラクタルビューアは前者で既出だけれど、フラクタルの指定が柔軟なこと、拡縮ができることに加え、内部実装でx86バイナリを生成してそれを実行しているらしい。

フラクタルの指定はコマンドライン引数で行う。
第1引数は変数の初期化で、第2引数は最後の式が偽になるまで（または回数上限まで）実行を繰り返すコード。
変数は小文字の`a`から`z`だが、`c`はピクセルの位置、`i`は虚数がデフォルトで入っている。
コードは四則演算、比較、`Abs2`、`Re`、`Im`、`Exp`、`Ln`が使えるとのこと。
それぞれについて詳しくはhint.text参照。
また、フラクタル指定の例もhint.textにいろいろ掲載されている。

上述の通り、このプログラムはコマンドライン引数に与えられたコードをx86（とx87 FPU）か、x86\_64の機械語に翻訳して実行する。
そのため、実行可能フラグがたったメモリページが必要で、`mmap()`を使う。

コードは例によってマンデルブロ集合の形状。

賞名は[[[2006/stewart]]]({{ site.baseurl }}{% link 2006/stewart.md %})と対称的になっている。
