---
id: 2011/eastman
year: 2011
order: 4
authors: "Peter_Eastman"
orig_url: "https://www.ioccc.org/2011/eastman/eastman.c"
hint_url: "https://www.ioccc.org/2011/eastman/hint.html"
title: "IOCCC 2011: Best ball"
award_ja: "最高のボール"
---

## 動作

ボールが跳ねるアニメーションを、端末の中でエスケープシーケンスを使って表示する。

```
$ gcc -o eastman eastman.c -lm

$ ./eastman
```

{% include img.html src="2011-eastman.png" desc="ボールが跳ねるアニメーションのデモ" %}

## 解説

[コモドール社](https://ja.wikipedia.org/wiki/%E3%82%B3%E3%83%A2%E3%83%89%E3%83%BC%E3%83%AB)が発売していたパソコン[Amiga](https://ja.wikipedia.org/wiki/Amiga)の代表的なデモである"Boing Ball"（Youtube: [Amiga Boing Ball](http://www.youtube.com/watch?v=-ga41edXw3A)）を再現したもの。
赤い市松模様の大きなボールが影付き・音付きで画面を跳ね回るというデモは、当時（1984年）の[CES](https://ja.wikipedia.org/wiki/%E3%82%B3%E3%83%B3%E3%82%B7%E3%83%A5%E3%83%BC%E3%83%9E%E3%83%BC%E3%83%BB%E3%82%A8%E3%83%AC%E3%82%AF%E3%83%88%E3%83%AD%E3%83%8B%E3%82%AF%E3%82%B9%E3%83%BB%E3%82%B7%E3%83%A7%E3%83%BC)では衝撃的だったらしい。

コードもボールの形状。なかなか小さいのでインパクトがある。

ボールと背景をレイトレースしている。
地面の形から[透視投影](https://ja.wikipedia.org/wiki/%E9%80%8F%E8%A6%96%E6%8A%95%E5%BD%B1)かと思わせるが、実際には[平行投影](https://ja.wikipedia.org/wiki/%E6%8A%95%E5%BD%B1%E5%9B%B3)とのこと。
起動時のターミナルのサイズにあわせて描画をする（起動後に変えたらダメ）。
