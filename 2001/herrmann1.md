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

しかし、古いCプリプロセッサの挙動に依存しており、動作できていない。

## 解説

動かせていないのでほとんど謎の状態。

```
#define Q(x, y) x ## y

Q(/, *)
```

で`/*`が作れることを期待しているが、`gcc -traditional-cpp`でも間にスペースが入ってしまうので動かない。
gcc 2.95で動作確認したらしいので、このgccをビルドすれば動作確認できるかもしれない。

なお、Cプリプロセッサ自体は有限状態しか扱えないのでチューリング完全ではないが、[原始再帰関数](https://ja.wikipedia.org/wiki/%E5%8E%9F%E5%A7%8B%E5%86%8D%E5%B8%B0%E9%96%A2%E6%95%B0)程度の表現力はあるので、繰り返し適用する前提をおけば計算可能関数（チューリング完全）になれる。
