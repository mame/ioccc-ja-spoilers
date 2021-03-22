---
id: 1998/schweikh1
year: 1998
order: 10
patch: true
authors: "Jens_Schweikhardt"
orig_url: "https://www.ioccc.org/1998/schweikh1.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1998/schweikh1.hint"
title: "IOCCC 1998: CPP Abuse"
award_ja: "CPP悪用"
---

## 動作

Cコンパイラのconformance testとして書かれたプログラム。
よくわからない出力が出てくるだけ。
終了コードが0なら成功なのだと思う。

```
$ cp data info

$ gcc -o schweikh1 schweikh1.c

$ ./schweikh1
<errno.h>:
#define e
<stddef.h>:
<assert.h>:
#define asse
<locale.h>:
#define NULL ((void
<math.h>:
#define M_SQRT1_2 0.70710678118654752440
...
```

## 解説

`#include`の引数をマクロの結合で生成したり、`#line`のファイル名にNUL文字を挿入したり、[digraph](https://en.wikipedia.org/wiki/Digraphs_and_trigraphs)を利用したりして、当時のCコンパイラのバグ挙動をつきまくったプログラムとのこと。

ただ、当時から審査員コメントに「元のコードはgccでは動くがISO C89違反」のような記述があり、どこまで信用していいのかわからない。
とりあえず`stdio.h`をマクロの結合で生成するのは現代のgccでも禁止されていた。
また`#line`に`info\0r`を置くのは可能だが、`\0`より先は`__FILE__`では参照できなかった。
これらを修正して終了コードが0になるようになったが、これで想定通りに動いているのかどうかはわからない。
