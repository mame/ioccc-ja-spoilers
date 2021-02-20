---
id: 1993/vanb
year: 1993
order: 10
authors: "David_Van_Brackle"
orig_url: "https://www.ioccc.org/1993/vanb.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1993/vanb.hint"
title: "IOCCC 1993: Most Irregular Expression"
award_ja: "最も非正規な表現"
---

## 動作

8進数での電卓。

```
$ gcc -DO5=main -o vanb vanb.c

$ ./vanb 1+1
2

$ ./vanb 4+4
10

$ ./vanb "(4+4)*(4+4)"
100
```

## 解説

`+`、`-`、`*`、`/`、`%`に対応していて、カッコも使える。`D999`で10進数の数字、`XFFF`で16進数の数字も表せる。

`main`関数の再帰呼び出しで[再帰下降構文解析](https://ja.wikipedia.org/wiki/%E5%86%8D%E5%B8%B0%E4%B8%8B%E9%99%8D%E6%A7%8B%E6%96%87%E8%A7%A3%E6%9E%90)を実装しているとのこと。この構文解析で表現できる言語は正規表現（regular expression）を超えることが賞名の由来になっていると思われる。

コード形状はローマ数字のVIII（8）。8進数の8とのこと。`main`関数がひとつあり、そのパラメータを除いてグローバル変数もローカル変数もない。使っている定数はすべて8進数（`printf`のフォーマット文字列も）。変数名も8進数っぽいものにしている。
