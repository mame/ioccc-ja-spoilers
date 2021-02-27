---
id: 1994/tvr
year: 1994
order: 8
authors: "Teemu_Rantanen"
orig_url: "https://www.ioccc.org/1994/tvr.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1994/tvr.hint"
title: "IOCCC 1994: Best X11 Program"
award_ja: "最高のX11プログラム"
---

## 動作

インタラクティブにフラクタルを見えるXアプリ。次のようにコンパイル・実行する。

```
$ gcc -o tvr tvr.c -lX11

$ ./tvr 0 256 < tvr.color
```

すると窓が2つ開く。1つめは[マンデルブロ集合](https://ja.wikipedia.org/wiki/%E3%83%9E%E3%83%B3%E3%83%87%E3%83%AB%E3%83%96%E3%83%AD%E9%9B%86%E5%90%88)。

{% include img.html src="1994-tvr-1.png" desc="マンデルブロ集合（操作画面）" %}

2つめは[ジュリア集合](https://ja.wikipedia.org/wiki/%E3%82%B8%E3%83%A5%E3%83%AA%E3%82%A2%E9%9B%86%E5%90%88)。

{% include img.html src="1994-tvr-2.png" desc="ジュリア集合" %}

1つめの窓（マンデルブロ集合）の上でカーソルを動かすと、それに基づいて2つめの窓（ジュリア集合）のパラメータが変わり、リアルタイムで絵が変わる。

第1引数は0～3で描画するフラクタルを変える。
第2引数は描画サイズ。
標準入力には色の指定をする（tvr.bwだと白黒）。

## 解説

描画モードが3種類あるらしい（non-stable、non-stableの亜種、stable）けれど、違いがわからなかった（処理速度が速すぎるせい？）。

コード形状は"Z=Z^2+C?"。
これは、マンデルブロ集合やジュリア集合の定義の式。
