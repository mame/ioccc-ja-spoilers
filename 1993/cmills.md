---
id: 1993/cmills
year: 1993
order: 2
patch: true
authors: "Christopher_Mills"
orig_url: "https://www.ioccc.org/1993/cmills.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1993/cmills.hint"
title: "IOCCC 1993: \"Bill Gates\" Award"
award_ja: "『ビル・ゲイツ』賞"
linewrap: true
---

## 動作

X Window Systemの中で窓が飛び回り、粉砕していくデモアプリ。
[[[1991/davidguy]]]({{ site.baseurl }}{% link 1991/davidguy.md %})と同じようにVcXsrvを準備した上で、次のように実行する。

```
$ gcc -o cmills cmills.c -lX11

$ ./cmills
```

{% include img.html src="1993-cmills.png" desc="X Window Systemの画面の中を窓が飛び回って粉砕していく" %}

## 解説

作者の意図はよくわからないが、賞名から考えてWindowsに対する皮肉として採択されていると思う。
当時のUnix文化圏におけるWindowsの空気感をよく知らないので、あまりわからない。

難読化は、短い識別子を使い、インデントをなくした程度に見える。
窓が割れる確率は運動エネルギー（つまり面積と速さ）に基づくとのこと。

現代では処理速度が速すぎるので`usleep`で少しウェイトを置いた。
