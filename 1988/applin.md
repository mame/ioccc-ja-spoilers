---
id: 1988/applin
year: 1988
order: 9
authors: "Jack_Applin"
orig_url: "https://www.ioccc.org/1988/applin.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1988/applin.hint"
title: "IOCCC 1988: Best of show"
award_ja: "最優秀賞"
---

## 動作

Cプリプロセッサによる計算で素数を列挙する。
ビルドオプションがいっぱい必要。

{: .wrap }
```
$ gcc -E '-DM=#include "z.c"' '-DR=#include' '-DF=#if' '-DI=#ifdef' '-DL=#else' '-DE=#endif' '-DN=#ifndef' '-DD=#define' '-DU=#undef' applin.c > z.c

$ gcc -E z.c > large.c

$ gcc -o applin large.c

$ ./applin
2
3
5
7
11
13
17
19
23
29
31
...
439
443
449
```

## 解説

第1のポイントは、自分自身を再帰的に`#include`すること。

```
#ifndef z
#define z
#include "z.c"
#include "z.c"
#include "z.c"
...
#include "z.c"
#endif
```

これにより、このコードを何回もプリプロセスすることになる。

第2のポイントは、次のギミックが肝となっている。

```
#ifdef a
#undef a
#else
#define a
#endif
```

これは、マクロ`a`が定義されていたら`#undef`し、定義されていなかったら`#define`する。
よって、このコードをプリプロセスのたびにマクロ`a`の定義状態が反転するようになる。
これで1ビットを表現する。

こういうマクロをいくつも入れ子にすることで、カウンタを構築している。
このカウンタからvv=1,3,5,...,1023とff=1,3,5,...31を作り、各vvについてどのffでも割り切れなかったらprintf文を出す。

除算の判定はプリプロセッサの整数演算によって普通に行える（この点は[[[2004/vik2]]]({{ site.baseurl }}{% link 2004/vik2.md %})によってさらにストイックに改良がなされる）。

最終的な出力であるlarge.cを`grep -v "#"`したら、次のような感じのコードが観察できる。
インデントは適当に入れた。

```
main(){
  printf("%d\n", 2);
  printf("%d\n", (0 +0 +0 +0 +0 +0 +0 +0 +(1<<1)+1));
  printf("%d\n", (0 +0 +0 +0 +0 +0 +0 +(1<<2)+0 +1));
  printf("%d\n", (0 +0 +0 +0 +0 +0 +0 +(1<<2)+(1<<1)+1));
  printf("%d\n", (0 +0 +0 +0 +0 +0 +(1<<3)+0 +(1<<1)+1));
  printf("%d\n", (0 +0 +0 +0 +0 +0 +(1<<3)+(1<<2)+0 +1));
  printf("%d\n", (0 +0 +0 +0 +0 +(1<<4)+0 +0 +0 +1));
  printf("%d\n", (0 +0 +0 +0 +0 +(1<<4)+0 +0 +(1<<1)+1));
  ...
}
```

初のBest of Show受賞作。
Cプリプロセッサ、つまりコンパイル時に非自明な計算を行う、初期の事例だと思われる。
applin.hintでは、当時の計算機でプリプロセスに75分かかったとか、プリプロセッサのバグが見つかったとか、審査員の興奮が伺える。
残念ながら、現代のコンパイラでは一瞬で処理できてしまうので、情緒が足りない。
