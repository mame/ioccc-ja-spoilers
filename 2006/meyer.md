---
id: 2006/meyer
year: 2006
order: 5
authors: "Raphael_Meyer"
orig_url: "https://www.ioccc.org/2006/meyer/meyer.c"
hint_url: "https://www.ioccc.org/2006/meyer/hint.text"
title: "IOCCC 2006: Best Game"
award_ja: "最高のゲーム"
---

## 動作

数独を対戦ゲームにしたもの。

```
$ gcc -o meyer meyer.c

$ ./meyer

. . .  . . .  . . .   a
. . .  . . .  . . .   b
. . .  . . .  . . .   c

. . .  . . .  . . .   d
. . .  . . .  . . .   e
. . .  . . .  . . .   f

. . .  . . .  . . .   g
. . .  . . .  . . .   h
. . .  . . .  . . .   i

0 1 2  3 4 5  6 7 8

you:
```

数字を置く場所を聞かれる。
`a 0 1`と書くと、「a-0の位置に数字`1`を置く」という意味になる。

```
you: a 0 1

1 . .  . . .  . . .   a
. . .  . . .  . . .   b
. . .  . . .  . . .   c

. . .  . . .  . . .   d
. . .  . . .  . . .   e
. . .  . . .  . . .   f

. . .  . . .  . . .   g
. . .  . . .  . . .   h
. . .  . . .  . . .   i

0 1 2  3 4 5  6 7 8

cpu: e 8 3

1 . .  . . .  . . .   a
. . .  . . .  . . .   b
. . .  . . .  . . .   c

. . .  . . .  . . .   d
. . .  . . .  . . 3   e
. . .  . . .  . . .   f

. . .  . . .  . . .   g
. . .  . . .  . . .   h
. . .  . . .  . . .   i

0 1 2  3 4 5  6 7 8

you: a 1 2
```

CPUはe-8に3を置いた。

数独のルールに違反するような置き方はできない。この制約の下で、お互いにマスに数字を1つずつ置いていき、どこにも置けなくなった方の負け。

## 解説

コードの特徴としては、オブジェクト指向を意識しながら書いたらしい。
`F`、`G`、`H`、`I`が4つのクラスを意識しているようで、`NF()`や`NH()`などが`new`相当。
関数ポインタの配列`M`が全クラスのメソッドテーブルになっており、`F`は0番目から5つ、`G`は5番目から4つ、などが所属メソッドになっていると思う（このオフセットは`L`で定義されている）。
0番目のメソッドに対応する関数ポインタは`new`相当の関数から呼び出されるので、コンストラクタ相当。
`G`のコンストラクタは0なので、これは直接`new`することがない抽象クラス相当と思われる。
`NH()`と`NI()`の返り値が`(G*)`にキャストされているので、これらの親クラスということか。