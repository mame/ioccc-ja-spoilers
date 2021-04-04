---
id: 2001/herrmann1
year: 2001
order: 7
authors: "Immanuel_Herrmann"
orig_url: "https://www.ioccc.org/2001/herrmann1.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2001/herrmann1.hint"
title: "IOCCC 2001: Best abuse of the C preprocessor"
award_ja: "Cプリプロセッサの最高の悪用"
---

## 動作

Cプリプロセッサを使ったチューリングマシン。

しかし、古いCプリプロセッサの挙動に依存しており、現代の環境では動作確認できていない。

## 解説

```
#define Q(x, y) x ## y

Q(/, *)
```

で`/*`が作れることを期待しているが、`gcc -traditional-cpp`でも間にスペースが入ってしまうので動かない。
gcc 2.95で動作確認したらしいので、このgccをビルドすれば動作確認できるかもしれない。

なお、Cプリプロセッサ自体は有限状態しか扱えないのでチューリング完全ではないが、[原始再帰関数](https://ja.wikipedia.org/wiki/%E5%8E%9F%E5%A7%8B%E5%86%8D%E5%B8%B0%E9%96%A2%E6%95%B0)程度の表現力はあるので、繰り返し適用する前提をおけば計算可能関数（チューリング完全）になれる。

---

当時のOS環境であるDebian 2.2 (potato)をQEMUで動かしたところ、とりあえず動作確認できた。
`./herrmann1.sh 'prg=herrmann1.times2'`を実行した例。
`I`の数を2倍にする

{% include img.html src="2001-herrmann1-1.png" desc="初期状態：Iが8本ある" %}
{% include img.html src="2001-herrmann1-2.png" desc="計算中" %}
{% include img.html src="2001-herrmann1-3.png" desc="終了状態：Iが16本になった" %}

左端にOをはさみ、その位置を右に1つずつずらすたびに、Iを左端に余分につけたす、というような動きで2倍にしていった。
