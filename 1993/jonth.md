---
id: 1993/jonth
year: 1993
order: 5
patch: true
authors: "Jon_Thingvold"
orig_url: "https://www.ioccc.org/1993/jonth.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1993/jonth.hint"
title: "IOCCC 1993: Most Obfuscated X Program"
award_ja: "もっとも難読化されたXプログラム"
---

## 動作

X Window Systemでのテトリス。

{: .wrap }
```
$ sed -e s/\^\ /#define/ -e 's/@/Window(D,/g' jonth.c > jonth.tmp.c

$ gcc -DXX1='H 19;}M(J,4)}N H 20;}M(T,4)}q(m,w,' -DXX='XKeycodeToKeysym(D,((XKeyEvent*)o)->keycode,0);K 12:Y();}R;}d XX1' jonth.tmp.c -o jonth -lX11

$ ./jonth
```

{% include img.html src="1993-jonth.png" desc="X Window Systemでテトリス" %}

<kbd>j</kbd>で左、<kbd>l</kbd>で右、<kbd>k</kbd>で回転、スペースで落とす。

## 解説

X11の関数名は長いので、sedコマンドで`@`を`Window(D,`に置き換えるなどをした上でコンパイルすることになっている。
それ以外、コードに特筆することはないと思う。

現代で動かすことにとても苦労した。
なぜか（難読化のため？）、`#include <X11/Xlib.h>`をせず、定数は即値で、構造体は配列インデックスで無理やりアクセスしている。
関数宣言もないので、返り値は暗黙的に`int`が仮定されてしまう。
jonth.hintに「`int`とポインタが同じサイズでないと動かない」と書いてあるとおり（`-m32`をつけるとX11とリンクできないので使えなかった）。
よって、`#include <X11/Xlib.h>`をして`int`を`long`に書き換えれば、とりあえず動いた。
しかしこれだけではキー入力が効かない。
構造体のフィールドを`int`の配列インデックスで読みだそうとしているが、`long`に変えたためにずれる模様。
このコード断片はMakefileの中にある（サイズ制限回避のため？）。
ややこしいので、直接展開した上で修正した。
さらに、`XSelectInput`を指定した。
これによってキー操作もできるようになった。
ただし、途中でキーボード操作が効かなくなることがある（未調査）。
