---
id: 2004/gavare
year: 2004
order: 4
authors: "Anders_Gavare"
orig_url: "https://www.ioccc.org/2004/gavare.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/gavare.hint"
title: "IOCCC 2004: Best Use of Light and Spheres"
award_ja: "ライトと球の最高の使い方"
---

## 動作

レイトレーサ。
現代の環境でも生成に数十秒程度はかかる。

```
$ gcc -o gavare gavare.c

$ ./gavare > ioccc_ray.ppm

$ convert ioccc_ray.ppm ioccc_ray.png
```

出力は次の通り。

{% include img.html src="2004-gavare.png" desc="球がIOCCC RAYという形に並んでいるレイトレーシング画像" %}

この出力は一時期、IOCCCのサイトでロゴとして使われていた。

## 解説

キーワードを使わずに書かれている。
コードを紙に印刷したとき、ハイライトされるキーワードはトナーやインクを多く使うので地球環境に悪いから、とのこと。

すべての変数は`int`として宣言されることになる。
それでも、`int`のサイズやエンディアンには依存しない配慮がされている。
おかげで現代でも変更なしでコンパイル・実行できた。
