---
id: 2006/toledo3
year: 2006
order: 13
patch: true
authors: "Oscar_Toledo_G."
orig_url: "https://www.ioccc.org/2006/toledo3/toledo3.c"
hint_url: "https://www.ioccc.org/2006/toledo3/hint.text"
title: "IOCCC 2006: Most Portable Chess Set"
award_ja: "もっともポータブルなチェスセット"
---

## 動作

X Window Systemでのチェスプログラム。

```
$ gcc -o toledo3 toledo3.c -lX11

$ ./toledo3 1
```

{% include img.html src="2006-toledo3.png" desc="X Window Systemでのチェスゲーム" %}

動かしたいコマをクリックし、それを動かしたい先をクリックするだけ。

CPUのレベルは1、2、3から選ぶことができる。
また、次のように起動するとCPUに白をもたせることができる。

```
$ ./toledo3 1 b
```

コマンドライン引数なしで起動すると人間同士の対戦もできる。

```
$ ./toledo3
```

## 解説

[[[2005/toledo]]]({{ site.baseurl }}{% link 2005/toledo.md %})の発展。
アルファベータ探索で指定レベル+3の深さまで読むとのこと。
アンパッサン、キャスリング、プロモーションなども実装されている。
基本はX11だけれども、`#include <X11/Xlib.h>`のかわりに`#include "layer.c"`とすることで、Windowsでも動くらしい。

残念ながら賞名に反して、32ビット環境に依存していた（暗黙的な`int`に64ビットの値を入れてしまっている模様）。
`long`を明示することで正常に動作した。
