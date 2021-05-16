---
id: 1998/fanf
year: 1998
order: 8
patch: true
authors: "Tony_Finch"
orig_url: "https://www.ioccc.org/1998/fanf.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1998/fanf.hint"
title: "IOCCC 1998: Most Obfuscated Translator"
award_ja: "もっとも難読化された変換器"
---

## 動作

[ラムダ式](https://ja.wikipedia.org/wiki/%E3%83%A9%E3%83%A0%E3%83%80%E8%A8%88%E7%AE%97)から[SKIコンビネータ](https://ja.wikipedia.org/wiki/SKI%E3%82%B3%E3%83%B3%E3%83%93%E3%83%8D%E3%83%BC%E3%82%BF%E8%A8%88%E7%AE%97)の式に変換する。

```
$ gcc -E fanf.c > fanftmp1.c

$ gcc -E fanftmp1.c > fanftmp2.c

$ gcc fanftmp2.c -o fanf

$ echo '((\a(\b(\c(d)))) e)' | ./fanf
((K(K(Kd)))e)

$ echo '(\f\g\x
          (
            (g x) (f x)
          ) K K z
        )' | ./fanf
(((((S(K(SS)))K)K)K)z)

$ echo '(\f(\f\g\x( (f((\a(g(b))) e)) (g x) ) K K z))' | ./fanf
(K(((((S((S(KS))((S(K(S(KS))))((S(K(S(KK))))((S((S(KS))K))(K((S((S(KK))((SI)(Kb))))(Ke))))))))(KI))K)K)z))

$ echo '(Y\f\n
          ((= n 0)
           1
           (* n (f (- n 1)))
          )
        )' | ./fanf
(Y((S(K(S((S((S=)(K0)))(K1)))))((S(K(S*)))((S((S(KS))K))(K((S-)(K1)))))))
```

## 解説

おそらく、関数型プログラミングを主題とした初の作品。

このプログラムは2部構成になっている。
前半はOFL（Obfuscated Functional Language）の処理系、後半は上記の式変換を行うOFLプログラム。
`l ef E(EOF)`の行より前が前半で、後が後半。

OFLは、SKIコンビネータに入出力のプリミティブやYコンビネータなどを加えた感じの言語で、C言語のマクロで表現される。
ただし、カッコの付き方に制約がある（`(a b c)`と`((a b) c)`は通常のSKIコンビネータ式では同じ意味だが、このプログラムで後者のように書くと動かなかった）。

後半部を`(Y(S(K G)(S(K(S P))K)))`に置き換えると入力をエコーするだけのプログラムになる（一番最後の`e`は残す必要がある）。

ビルドでは2段階でプリプロセスを行う必要がある。
つまりプリプロセスを行うと、またプリプロセスを行う必要のあるCコードが出力される。
しかし、`l ef E(EOF)`のプリプロセス結果が次のように改行まじりになってしまい、壊れた`#define`文でエラーになった。
そのため`EOF`を`-1`に置き換える修正を行った。

```
 #define ef E(
# 85 "fanf.c" 3 4
      (-1)
# 85 "fanf.c"
         )
```

[[[2013/endoh1]]]({{ site.baseurl }}{% link 2013/endoh1.md %})が少しネタかぶりしている。
