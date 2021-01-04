---
id: 1984/decot
year: 1984
order: 3
patch: true
authors: "Dave_Decot"
orig_url: "https://www.ioccc.org/1984/decot/decot.c"
hint_url: "https://www.ioccc.org/1984/decot/hint.html"
title: "IOCCC 1984: Second place award"
award_ja: "第2位賞"
---

## 動作

ゴミデータを出力するだけ。

```
$ gcc -m32 -traditional-cpp -o decot decot.c -lm

$ ./decot
'",x);  /*
\
```

## 解説

素朴に人間の認知に挑戦する感じ。
型名やキーワードをマクロで置き換えたり、`do`～`while`の`while`が単独`while`文のように見えたり。

コメントがややこしい書き方になっているが、当時の意図はよくわかっていない。
当時のコンパイラではコメントを入れ子にできるものもあったらしいが、このプログラムのコメントを入れ子として解釈するとコンパイルエラーになると思う。

おそらくこの作品がきっかけで、1986年の第2回IOCCCからは、「何かしら興味深い動作をするコードに加点をする」というルールが追加された。

現代で動かすポイントは次の通り。

* `extern int floor;`を、標準関数`double floor(double x);`へのポインタを`int`にキャストするので、64ビット環境では情報が落ちてしまって動かない。`-m32`をつければ回避できる。
* `#define x =`という難読化は現代のC規格では違反なので、`-traditional-cpp`をつける。
* `int*`と`double`の足し算がエラーになるので適当に`k+sin`を`(int)k+sin`とするパッチを適用する（下記）。
