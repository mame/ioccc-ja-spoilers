---
id: 1990/westley
year: 1990
order: 10
patch: true
authors: "Brian_Westley"
orig_url: "https://www.ioccc.org/1990/westley.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1990/westley.hint"
title: "IOCCC 1990: Best Layout"
award_ja: "最高のレイアウト"
---

## 動作

花占いのプログラム。引数の数字の数だけ「`argv[0]` loves me（好き）」「`argv[0]` loves me, not（嫌い）」を出していく。

```
$ gcc -o westley westley.c

$ ./westley 3
./westley
loves me
./westley
loves me, not
./westley
loves me

$ ./westley 4
./westley
loves me
./westley
loves me, not
./westley
loves me
./westley
loves me, not
```

## 解説

プログラムの見た目がふつうの文章のようになっている。
`char*lie`（チャーリー）と`(char)lotte`（シャーロット）の掛け合いの脚本っぽい。

とぎれとぎれの通信のように読めとのこと。次は序盤部分を読みやすくしてみたもの。

```
char*lie;                                |  charlie,
        double time, me= !0XFACE,        |          doubletime me, OXFACE!
        not; int rested,   get, out;     |          not interested, get out
        main(ly, die) char ly, **die ;{  |          mainly die, charly, *die*
            signed char lotte,           |              signed charlotte
```

正直英語力が足りなくてわからないところがかなりあるけど、`love 1s *!(not= atoi(let`（love is not a toilet）は良い。
この制約の上で書かれていながら、意味のある動作をするのだから、ちょっと信じられない。圧巻の一言。

westleyの4作目。westley.hintにある作者コメントも知性に溢れている。

* Cの構文が英語風でないという批判に対する反例として書いた。
* Lintツールが文句ばかり言う。お気に入りの警告は "warning: eroticism unused in function main".
* `(char)lotte`と`(char*)lie`はどうみても非互換な型。

作者コメントにもあるとおり、ANSIコンパイラは`1s`を`short`型の整数とはしてくれないので、`1`に置き換える必要があった。
