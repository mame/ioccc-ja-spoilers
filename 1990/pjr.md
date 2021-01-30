---
id: 1990/pjr
year: 1990
order: 6
authors: "Peter_J_Ruczynski"
orig_url: "https://www.ioccc.org/1990/pjr.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1990/pjr.hint"
title: "IOCCC 1990: Most Unusual Data Structure"
award_ja: "もっとも異常なデータ構造"
---

## 動作

固定メッセージを出力するだけ。

```
$ gcc -o pjr pjr.c

$ ./pjr
the quick brown fox jumped over the lazy dog
```

## 解説

`X=g().s().v().S().j().f().r().x().p().`...というメソッドチェーンのようなコード。
1関数が1文字を出力する。
`.a()`は`z`、`.b()`は`y`、`.c()`は`x`というように、abc順を反転した文字を出すとのこと。

実現するためには構造体を使えばよい。大まかには次のような構造になっている。

```
// 関数プロトタイプ宣言
struct F a();
struct F b();
struct F c();
...

// 肝となる構造体
struct F {
  struct F (*a)(), (*b)(), (*c)(), ...;
} X = { a, b, c, ... };

// 関数定義（かならずXを返す）
struct F a() { printf("a"); return X; }
struct F b() { printf("b"); return X; }
struct F c() { printf("c"); return X; }
...

main(){
  X = a().b().c()...;
}
```

一発ネタの難読化でシンプルにまとめられている。
