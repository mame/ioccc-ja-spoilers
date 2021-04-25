---
id: 2006/borsanyi
year: 2006
order: 2
authors: "Szabolcs_Borsanyi"
orig_url: "https://www.ioccc.org/2006/borsanyi/borsanyi.c"
hint_url: "https://www.ioccc.org/2006/borsanyi/hint.text"
title: "IOCCC 2006: Most Useful"
award_ja: "もっとも便利"
---

## 動作

次のように実行する。

```
$ gcc -o borsanyi borsanyi.c -lpthread

$ ./borsanyi ioccc@example.com > example.gif
```

メールアドレスをGIF画像にして出力する。

{% include img.html src="2006-borsanyi.gif" desc="IOCCC@EXAMPLE.COMと書かれたGIF画像（非常に小さい）" %}

## 解説

メールアドレスをWebサイトに普通に書くとクロールされてスパムを送られてしまうので、メールアドレスの画像を作る風習が当時あった（今でもある？）。
そのためのツール。

アルゴリズムの骨子としては、5x5のビットマップフォントに対して25本のスレッドを立ち上げ、各スレッドは対応するピクセルの白黒を決める（たとえば1番目のスレッドは左上のピクセルの色を決める）。
`D`のマクロが5つずつ5グループになっているのがそれ。
たとえば1つめの`D(bdefhklmnprtuvwxyz57)`は1番目のスレッドを立ち上げていて、`b`、`d`、`e`、……の文字に対しては左上のピクセルを白くする、ということを表現している。
文字列化演算子をうまく活用していて面白い。また、関数内の`static`スコープな変数を巧妙に活用している。

読者への質問は3つ。

1. シンボルを増やせ
2. シンボルを変えろ
3. 文字数制限42はどこから？

1と2は、上記の通り`D(bdefhklmnprtuvwxyz57)`のようなマクロをいじればよい。
なお記号を増やす場合は、マクロ`E`の定義を修正して記号に大文字アルファベットを割り当てる必要がある。

3の文字列制限は、フォントサイズが5x5で、フォント間に1ピクセルの隙間があるので、1文字当たり6ピクセル消費するのに対し、バッファの横幅が`char B[8][256];`というように256となっているため、だと思う。
