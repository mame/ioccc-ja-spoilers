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

円の形状自体に意味はなく、単に円周率計算のステップをマクロに閉じ込めたものを繰り返し実行している。

westley.hintにあるように、オリジナルのコードを動かすには

```
#define _ -a
-_
```

を`--a`と解釈するコンパイラが必要。
`-traditional-cpp`をつければコンパイルできるが、この問題が解決された[westley.fix.c](https://www.ioccc.org/1988/westley.fix.c)も用意されている。
