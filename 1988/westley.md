---
id: 1988/westley
year: 1988
order: 8
authors: "Brian_Westley"
orig_url: "https://www.ioccc.org/1988/westley.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1988/westley.hint"
title: "IOCCC 1988: Best layout"
award_ja: "最高のレイアウト"
---

## 動作

円周率を計算する。

```
$ gcc -traditional-cpp -o westley westley.c

$ ./westley
3.141
```

## 解説

円の形状のコードで円周率を計算する。IOCCCの中ではかなり有名な作品。westleyの2作目。

1行目の`_-_-_-_`は次のように展開される。

```
-F<00||--F-OO--;--F<00||--F-OO--;--F<00||--F-OO--;--F<00||--F-OO--;
```

ひとつめだけ`-F<00||--F-OO--`、ふたつめ以降は`--F<00||--F-OO--`になっているところがポイント（先頭のマイナスの数が違う）。
このコードの実行中、`F`はゼロか負になっている。
よって、ひとつめでは`-F<0`は偽となり、`--F-OO--`が実行されてともに1ずつ減る。
ふたつめ以降は、`--F<0`が真となるので、`--F-OO--`は実行されない。
ただし、条件式のほうで`F`が1減ることに注意。

まとめるとこの1行は、`OO`を1減らし、`F`をアンダースコアの数（≒横幅）だけ減らす効果がある。

コード全体としては、`OO`は行数だけ減るので、コードが描く円の直径（に-1をかけたもの）に相当する。
また、`F`が減る量は円の面積（に-1をかけたもの）に相当する。
よって、円の面積の公式により、`(-OO/2) * (-OO/2) * π ≒ -F`と言える。
このプログラムは`4 * F / OO / OO`を計算することで、円周率を出力している。

`OO`は`00`と紛らわしくなっており、`FOO`は[メタ構文変数](https://ja.wikipedia.org/wiki/%E3%83%A1%E3%82%BF%E6%A7%8B%E6%96%87%E5%A4%89%E6%95%B0)にかけていると思われる。

westley.hintにあるように、オリジナルのコードを動かすには

```
#define _ -a
-_
```

を`--a`と解釈するコンパイラが必要。
`-traditional-cpp`をつければコンパイルできるが、この問題が解決された[westley.fix.c](https://www.ioccc.org/1988/westley.fix.c)も用意されている。
