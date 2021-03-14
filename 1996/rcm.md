---
id: 1996/rcm
year: 1996
order: 6
authors: "Ron_McFarland"
orig_url: "https://www.ioccc.org/1996/rcm.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1996/rcm.hint"
title: "IOCCC 1996: Best RFC Obfuscation"
award_ja: "最高のRFC難読化"
---

## 動作

gzipを展開できる。

{: .wrap }
```
$ gcc -DJ='if(' -Ds='else J O==' -DU='B(' -DX='for(' -DH='unsigned' -Dn='struct x' -DA='0,0,0,0,' -DT='<stdio.h>' -DY='<stdlib.h>' -DR='malloc(sizeof(n))' -DM='%=K' -DK=32768 -DD='getchar()' -DN=putchar -o rcm rcm.c

$ ./rcm < rfc1951.gz | head -20






Network Working Group                                         P. Deutsch
Request for Comments: 1951                           Aladdin Enterprises
Category: Informational                                         May 1996


        DEFLATE Compressed Data Format Specification version 1.3

Status of This Memo

   This memo provides information for the Internet community.  This memo
   does not specify an Internet standard of any kind.  Distribution of
   this memo is unlimited.

IESG Note:
...
```

## 解説

RFC1951/RFC1952の展開を実装したもの。

コンパイルに必要な`-D`が多い。作者が書いたビルドファイルは184文字で、それに相当する分だけ、無駄に `{` `}` `;` の文字をコードに入れておいたとのこと（IOCCCのコードサイズ制限のルール上、空白が続くこれらの文字は0文字扱いとなる）。
ビルドファイルは残っていないので、正確なことはよくわからない。

このプログラムは3,100文字で、emacs-19.34b.tar.gzを展開するのに130秒かかったとのこと。
一方GNU gzipのinflate.cは31,613文字で、同ファイルの展開に25秒かかった。
展開時間1秒あたりのコード文字数で比較すると530%の改善、というよくわからないネタがrcm.hintに書かれていた。
