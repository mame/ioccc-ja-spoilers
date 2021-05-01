---
id: 2011/richards
year: 2011
order: 10
authors: "Gregor_Richards"
orig_url: "https://www.ioccc.org/2011/richards/richards.c"
hint_url: "https://www.ioccc.org/2011/richards/hint.html"
title: "IOCCC 2011: Most surprisingly portable"
award_ja: "もっとも驚くほどポータブル"
---

## 動作

逆ポーランド記法で書く[dc](https://en.wikipedia.org/wiki/Dc_%28computer_program%29)風電卓。

```
$ gcc -o richards richards.c

$ echo '10 9 8 7 6 5 4 3 2 1*p*p*p*p*p*p*p*p*p' | ./richards
2
6
24
120
720
5040
40320
362880
3628800
```

## 解説

機械語を直接書かずに[JIT](https://ja.wikipedia.org/wiki/%E5%AE%9F%E8%A1%8C%E6%99%82%E3%82%B3%E3%83%B3%E3%83%91%E3%82%A4%E3%83%A9)をしているとのこと。

正直良くわからないが、こんなことをしていそう。

* 巨大な関数`t`をマクロで用意し、その中で頻繁に関数`rd`を呼ぶ。
* 関数`rd`はスタックを走査し、関数`t`内のリターンアドレスと思われる値を探す（関数`t`のアドレスと、その直後に定義された関数`T`の間の値を探す）。
* `mmap`で実行可能にしたメモリ領域に関数`t`の中のコード断片を`memcpy`でつなぎ合わせて作り、そこに関数呼び出しをする。

スタックの伸びる方向を限定していたり、関数の配置の位置関係も前提をおいていたりするので、まったくポータブルとは言えない。
しかし現実問題としては、Linux、Mac OS X、Windows、NetBSD、Alpha、Arm、MIPS、PowerPC、s390x、VAX、gcc、clang、tccで動作確認をしたとのことで、そのあたりが評価されていそう。
それでも、こういう作品は遠くない将来に動かなくなるような予感。
