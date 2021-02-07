---
year: 1991
title: "IOCCC 1991の解説"
layout: contest
---
## 全体の印象

プログラムの挙動を練り込んだ作品が主流となった。
初のX11作品から、自作言語や自作パズルゲームなどのオリジナル性の高い挙動をするものまで、多彩な作品が揃っている。

一方で、難読化はまだ主にコードを圧縮しただけのものが中心である。
その中で、[[[1991/buzzard]]]({{ site.baseurl }}{% link 1991/buzzard.md %})は粗削りではあるが迷路マップをコード中に埋め込んだ迷路ゲームという、難読化にある種の必要性がある作品が出てきたことは興味深い。
また、[[[1991/westley]]]({{ site.baseurl }}{% link 1991/westley.md %})はコード形状自身を枠として使った○×ゲームという超絶技巧が実現されている。

READMEによると、この年は単独の一等賞を決めず、[[[1991/westley]]]({{ site.baseurl }}{% link 1991/westley.md %})と[[[1991/dds]]]({{ site.baseurl }}{% link 1991/dds.md %})と[[[1991/brnstnd]]]({{ site.baseurl }}{% link 1991/brnstnd.md %})の3作品がそれぞれGrand Prize、Most Well Rounded、Best Of Showとして優秀作品となったとのこと。
代わりに、"Best Layout"や"Worst Abuse of the Rules"と言った定番枠は今回はなし。また、今後の方針について、ANSI Cで禁止された`#define X define`して`#X foo bar`するのは今後は認めないことや、X Window Systemは多くのシステムで利用可能になったので今後はポータブルと認めるとのこと、サイズ制限をさらに緩めることなどが書かれている。

ANSI Cが規格化されたことにより、比較的現代でも修正少なめでビルド・実行できることが増えてきた。
