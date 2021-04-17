---
id: 2005/persano
year: 2005
order: 15
authors: "Mauro_Persano"
orig_url: "https://www.ioccc.org/2005/persano/persano.c"
hint_url: "https://www.ioccc.org/2005/persano/hint.text"
title: "IOCCC 2005: Best of show"
award_ja: "最優秀賞"
---

## 動作

[トーラス結び目](https://ja.wikipedia.org/wiki/%E3%83%88%E3%83%BC%E3%83%A9%E3%82%B9%E7%B5%90%E3%81%B3%E7%9B%AE)のアニメGIFを生成する。

```
$ gcc -o persano persano.c -lm

$ ./persano 5 2 > knot5-2.gif
........................................
```

{% include img.html src="2005-persano-1.gif" desc="(5,2)型のトーラス結び目" %}

## 解説

`./persano p q`で(p,q)型トーラス結び目の画像を生成する。
(p,q)型トーラス結び目とは、ドーナツ形状（トーラス）の穴の周りをp周しつつ、ドーナツの断面方向にq周して元の位置に戻るときの軌跡のような形。

生成されるGIFは[LZW圧縮](https://ja.wikipedia.org/wiki/Lempel%E2%80%93Ziv%E2%80%93Welch)をしていないとのこと。
無圧縮GIFのようなフォーマットになっていると思われる。

コード形状は"S^3"。4次元空間における[3次元球面](https://ja.wikipedia.org/wiki/%E4%B8%89%E6%AC%A1%E5%85%83%E7%90%83%E9%9D%A2)のこと。
`typedef double V[3],U[4]`で、3次元と4次元のベクトルの型を定義している（詳細な計算方法は解読していない）。

バイナリを標準出力に吐き出すので、テキストモードがあるシステムでは動かない。
作者は「今日にそんな環境を使っている人はいないので些細な問題 ;)」と言っているが、Windowsのことを指している。

---

読者の演習問題が3つある。

1. ポリゴンを増やしてスムーズにせよ（1点）
2. チューブの断面の半径を変える方法を示せ（2点）
3. 有名な超越数の定数、πの位置を示せ（5点）

問1の答え：`#define H 20`の数字を変えれば良い。
審査員が冒頭で`./persano 3 16 > knot3-16.gif`を例にあげているが、これはデフォルトの`H`では小さすぎておかしくなる。

{% include img.html src="2005-persano-3.gif" desc="(3,16)型のトーラス結び目（粗すぎて生成失敗）" %}

`#define H 100`とした結果がこちら。

{% include img.html src="2005-persano-4.gif" desc="(3,16)型のトーラス結び目（きちんと生成できた）" %}

問2の答え：`sr = 15`を`sr = 5`などとすれば細くなる。`./persano 5 2`の例。

{% include img.html src="2005-persano-2.gif" desc="(5,2)型のトーラス結び目（細め）" %}

問3の答え：`pow(25/log(36),4)/377`が2πの近似値になっている。
