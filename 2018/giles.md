---
id: 2018/giles
year: 2018
order: 10
authors: "Edward_Giles"
orig_url: "https://www.ioccc.org/2018/giles/prog.c"
hint_url: "https://www.ioccc.org/2018/giles/hint.html"
title: "IOCCC 2018: Most unstable"
award_ja: "もっとも不安定"
---

## 動作

砂が落ちるシミュレーション。SDL2利用。

```
$ gcc -o prog prog.c `sdl2-config --cflags --libs`

$ ./prog
```

{% include img.html src="2018-giles.png" desc="砂が落ちるシミュレーション" %}

## 解説

砂の動きはセルオートマトンで実現とのこと。
遷移テーブルをそのままコードに埋め込むのではなく、多項式の形でもたせた。
その係数は`double`型のIEEE754表現を`uint64_t`型にキャストして16進数で`V[]`の配列に持たせている。

コード形状は、バケツに入った砂を落としているところと、"SAND"という文字。
シンプルにまとまった作品で良い。
