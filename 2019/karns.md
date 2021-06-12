---
id: 2019/karns
year: 2019
order: 10
authors: "Joshua_Karns"
orig_url: "https://www.ioccc.org/2019/karns/prog.c"
hint_url: "https://www.ioccc.org/2019/karns/hint.html"
title: "IOCCC 2019: Most in need of whitespace"
award_ja: "もっともホワイトスペースが必要"
---

## 動作

幅優先探索で迷路を解く。

```
$ gcc -o prog prog.c

$ ./prog < maze
```

{% include img.html src="2019-karns-1.png" desc="迷路を解いている" %}

`@`がスタート、`!`がゴール。
到達したところは`X`で表示され、アニメーションで徐々に探索範囲が広がっていく。

ゴールに到達したら、ゴールからスタートに向かって最短パスが表示される。

{% include img.html src="2019-karns-2.png" desc="迷路が解けた" %}

## 解説

探索を行っているアニメーションが面白いので実際に実行して欲しい。

幅優先探索を行うので遅いとのこと。
[A\*](https://ja.wikipedia.org/wiki/A*)も作ったが大きすぎたらしい。

コード自体も迷路として解ける。

```
$ ./prog < prog.c
```

{% include img.html src="2019-karns-3.png" desc="prog.cを解いた様子" %}

賞名は[[[2019/endoh]]]({{ site.baseurl }}{% link 2019/endoh.md %})、[[[2019/giles]]]({{ site.baseurl }}{% link 2019/giles.md %})と対称的になっている。
