---
id: 1992/albert
year: 1992
order: 2
authors: "Albert_van_der_Horst"
orig_url: "https://www.ioccc.org/1992/albert.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1992/albert.hint"
title: "IOCCC 1992: Most Useful Program"
award_ja: "もっとも便利なプログラム"
---

## 動作

素因数分解をするプログラム。素因数を小さい順にあげていく。残りが高々1つになったら終了する。

```
$ gcc -o albert albert.c

$ ./albert 111111111111111111111111111111
3
7
11
13
31
37
41
211
241
271
2161
9091
At most one remains
```

分解対象の数は任意桁でよいが、素因数は`MAX_LONG`未満でないとだめとのこと。

## 解説

面白いポイントがあまりよくわかっていない。
自作の素因数分解アルゴリズムを、`setjmp`と`longjmp`を使ってややこしめに実装したもの？
アルゴリズムについては[オランダのコンピュータクラブ](https://en.wikipedia.org/wiki/Hobby_Computer_Club)の1982年の会誌に載っているらしいが、見つけることはできなかった。
`aaAaaa`や`P->p->P->p = P->p;`など、難読化自体は普通のように見えるが、何かを見落としているかもしれない。
