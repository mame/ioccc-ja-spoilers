---
id: 2004/burley
year: 2004
order: 3
authors: "Brent_Burley"
orig_url: "https://www.ioccc.org/2004/burley.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/burley.hint"
title: "IOCCC 2004: Best Calculated Risk"
award_ja: "最高の計算されたリスク"
---

## 動作

ポーカー。最初の所持金は$100。まずは賭け金を入力する。

```
$ gcc -m32 -o burley burley.c

$ ./burley
100
```

すると手札が配られる。

```
$ ./burley
100
J 4 5 Q 8
D D S D D
```

ダイヤのジャック、ダイヤの4、スペードの5、ダイヤのQ、ダイヤの8と読む。残したい札の位置を指定する。

```
1245
J 4 2 Q 8
D D D D D
$600 (600)
```

無事フラッシュができたので賭け金の6倍が帰ってきた。負けると当然減る。ちなみに借金は可能。役ごとの倍率はburley.hintを参照のこと。

## 解説

「勝てる賭け金の戦略は？」という問いがあるが、負の金額を賭ければよい。ただし`-1`と入力してもマイナスをスキップするコードがあるのでダメ。
`4294967295`とすれば、オーバーフローして-1となり、負けたときに$1得ることができる（勝ったら当然減る）。

コードは、グローバル変数宣言と、1つの`return`文だけの`main`関数のみ。
`main`関数の中は`setjmp()`と`longjmp()`を使ってループを実現している。
`main`の再帰呼び出しをしているようにみえるが、実際には`longjmp()`によって戻るので再帰呼び出しはしていない。
無意味に式を複雑にしているところも多い。

`gets`の返り値のポインタを`int`型で扱っているので`-m32`が必要。
`char *gets(char *);`というプロトタイプ宣言を追加してもよい。
