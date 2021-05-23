---
id: 2014/endoh2
year: 2014
order: 4
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2014/endoh2/prog.c"
hint_url: "https://www.ioccc.org/2014/endoh2/hint.html"
title: "IOCCC 2014: Best use of bioinformatics"
award_ja: "バイオインフォマティクスの最高の使い方"
---

## 動作

標準入力を与えて実行すると二重らせんが出てくる。

```
$ gcc -o prog prog.c

$ echo "Hello, world!" | ./prog
#include "prog.c"

     AT
    C~~G
    A~~~T
    G~~~~C
     A~~~~T
      C~~~G
       G~~C
        CG
        TA
       C~~G
      C~~~G
     C~~~~G
    G~~~~C
    T~~~A
    A~~T
     CG
     TA
    C~~G
    G~~~C
    T~~~~A
     A~~~~T
      C~~~G
       G~~C
        CG
        TA
       T~~A
      T~~~A
     A~~~~T
    G~~~~C
    T~~~A
    A~~T
     CG
     TA
    A~~T
    G~~~C
    A~~~~T
     A~~~~T
      C~~~G
       T~~A
        CG
        TA
       C~~G
      T~~~A
     C~~~~G
    G~~~~C
    T~~~A
    T~~A
     CG
     TA
    C~~G
    T~~~A
    A~~~~T
     G~~~~C
      C~~~G
       G~~C
        CG
        TA
       T~~A
      A~~~T
     C~~~~G
    G~~~~C
    C~~~G
    A~~T
     CG
     TA
    A~~T
    G~~~C
    A~~~~T
     C~~~~G
      A~~~T
       A~~T
        CG
        TA
       G~~C
      G~~~C
     A~~~~T
    A~~~~T
    A~~~T
    A~~T
     GC
```

このコードを保存して実行すると、もとのメッセージが出てくる。

```
$ echo "Hello, world!" | ./prog > tmp.c

$ gcc -o tmp tmp.c

$ ./tmp
Hello, world!
```

## 解説

生成されたプログラムは、元のプログラムを`#include`している。
元のプログラムは、単体で実行するとエンコーダとして動作するが、生成プログラムに`#include`されている状態だとデコーダとして動作する。

このモード切り替えのトリックは、グローバル変数の二重宣言。
prog.cは次のような構成になっている。

```
int (*f)(void);

int main() {
  if (f) {
    f();
  }
  else {
    // エンコード
  }
}
```

そして、出力された二重らせんプログラムは次のような構成になっている。

```
#include "prog.c"

int m(void) {
  // デコード
}

int (*f)(void) = m;
```

グローバル変数は基本的に何回宣言しても良い（矛盾した初期化の値が指定されない限り）。
そして、初期化の値がない場合は0になる（ポインタなら`NULL`になる）ことを利用している。
