---
id: 2014/endoh1
year: 2014
order: 3
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2014/endoh1/prog.c"
hint_url: "https://www.ioccc.org/2014/endoh1/hint.html"
title: "IOCCC 2014: Most square (YODA award)"
award_ja: "もっとも四角い（ヨーダ賞）"
---

## 動作

QRコードのエンコーダ。

実行するとCコードが出力される。

{: .wrap }
```
$ gcc -o prog prog.c

$ ./prog
#include<stdio.h>
int H[99999],*s,*c,d,t;int main(int n,char*v[]){for(s=c=H+39999;(*++s="nsu{AntynCnuq}Bnu{sEotln>b)+c^g+@`+]_osk{;j@bkg&c<'^or'Q]bh'lvQ^kg&c:%n|N]_optj9lwg+)d:bkg$c8#^#g+)d8`a%g+)d8`_g&;bh'oqQ^)g+&kcNlyMc+)d8`a`g+@u)|d8ak=bl}(Q^og(O{MK6lML(rRpOpM866OsRlmN(qQ]##OsR#M_(lQoOaN9$mvOwwRor~}(cNmkM:q(Q]%_(uU]}_{8b%mRh#S^`#mOaaD%/RI4$4SNH$%N4RlMG/2MJ24O3NF(tQ?1lN*N+Q]lmq9l8b$^#h$#.d,dxv#mSOPmR8`/lM;bh&^/lM:k8b%&Q^-h%c9.#,/&N$McPc%-d8,$c8``7:b%^h%:79b$^%$7ON8r%Qrh$QOn%qN%O~M$qN$OMpRmPQO%rQ$rQMkQN77O#dj#Nkd$7O%d8``(rRmM:(luN](%mRMmO%lNRmO_loa8%%O<b(lQh'lQO^ln;b'%N&O^6sN#M9slltwzh&TmS$'%R#ON$oNS&pRM7O$'%S#ON$oNS&pSMd9``(tpkO9$:nk8b#^%}kx#O%lMtpk#OQOP:#mR8`}(qQO<b'7M{N^kh'Q]7sN'M8q;k'N_7vN'nSM8'nR;$%M'TamS&7O#d#7O&d8`z9b$^h$rQ]6yN$_$$pQaM8m{px$TmSt6O#NsM$nRmUd#7Osd77sNOsd8`j=nk;|8k9b1g(Q^)$c:%]k*Q]g$9%_h*]+wnS_+sTaa:&%{RM<%{S{O_&<#wkP8#a;'(0d:`184>b)^15)OM:23h)QN<'/M=b(^'h(Q]0h#c_kah%0d9`b'/O(Q^(/SlM90%M(/RM;&$c&kckQ,-$c.&kccMcOP$&d9g(=``6:69j=b5g(Q^3(2lNUO<b4'Q^s;b&^%%pQM8k$7O#cQ]0(2(Q]'2O3'Q]'_3aN_1'5OMaMch&T$mR#nRMPmSkU$7O#d8_a%%mS]l_%mRmS]$]h$9j_la_$6N]g$9j_laaaN:`g'<``7oM:6%N9b%g$Q^6%N8b%g#Q^lpeoqemtemw#jQ7#QO$jQO7$QOk#$7OMQ]k_#$7OckQaOrONepneluelue`lpeoqempepneue`kf_a`lf))*+,**,*)-)/),0).0(6/2+667,(&$###;=@D*0;#include<stdio.h>@int H[9`%.],*s,*c,d,t;`;'main(`-9n,char*v[]){for(s=c=H+3`XI;(*++s=Q[d++]););for(;n>1&&(*++s=v[1][tgANs=H;d=*c++%93,d-9;){int v=*s,g[]={n+v,v-n,n*_,#^_,,<v,n?v/n:0`,#%`,,v>>n,v==n}ay>t=0;d<4&&d>=2*!!n&&(c-=d/3*2_KK3+*c++,t||v!=98+d);)t+=v++/6-16?0:v/2%3-1cq*d-14;t>0_t$<3_z(105<*c_X'=t*21aq@-106;n=d>76?s--,g[d-77]:d>55?H_1)21]=n,*_@_8(9?*++s_4&12>d_C`f3]+=21-d*2:d<34?t:_Zadat57<d?putchar(n),v:6<a](g+99]=a{d2#:`xa6,n;}return _."[d++]););for(;n>1&&(*++s=v[1][t++]););for(s=H;d=*c++%93,d-9;){int v=*s,g[]={n+v,v-n,n*v,v^n,n<v,n?v/n:0,n?v%n:0,v>>n,v==n};for(t=0;d<4&&d>=2*!!n&&(c-=d/3*2,v=3+*c++,t||v!=98+d);)t+=v++/6-16?0:v/2%3-1;for(t=d-14;t>0&&d<34&&105<*c;)t=t*21+*c++-106;n=d>76?s--,g[d-77]:d>55?H[d-21]=n,*s--:d>9?*++s=n,12>d?H[*c++]+=21-d*2:d<34?t:H[d]:d>5?s--,7<d?putchar(n),v:6<d?H[*g+99]=*s--:H[*g+99]:2>d?*s--:n;}return n;}
```

これを保存して次のように実行する。

```
$ ./prog > main.c

$ gcc -o main main.c

$ ./main "Hello, world!"
```

大きめの端末で実行すること。次のような出力がなされるはず。

{% include img.html src="2014-endoh1-1.png" desc="Hello, world!をエンコードしたQRコード" %}

---

`./main`を無引数で実行すると、自分自身のソースコードをQRコードにしたものを出力する。
相当巨大な出力になるので、フォントサイズを極小にすること。
読み取れるかどうかは、QRコードのスキャナの性能に強く依存する。

{% include img.html src="2014-endoh1-2.png" desc="main.c自身をエンコードしたQRコード" %}

## 解説

Q(uine)Rコード生成器。

QRコードの仕様は意外と複雑で、IOCCCのサイズルールに合う形で実装するのが非常に大変だった。
[リード・ソロモン符号](https://ja.wikipedia.org/wiki/%E3%83%AA%E3%83%BC%E3%83%89%E3%83%BB%E3%82%BD%E3%83%AD%E3%83%A2%E3%83%B3%E7%AC%A6%E5%8F%B7)や[BCH符号](https://ja.wikipedia.org/wiki/BCH%E7%AC%A6%E5%8F%B7)などの符号化を実装する必要があるが、それよりも、不規則な数表や、人間向きのパターン配置などがショートコーディング的には厳しい。
実際、最初に素のC言語で実装したときは2500バイト程度になり、サイズルールをクリアできる見込みが薄かった。
また、Quineにするためにはコードを複製する必要があり、実質的にサイズルールは倍に厳しくなる（実はマクロを使えば複製を避けることができるのだけれど、当時は知らなかった）。

どうしたかというと、QRコードの生成に必要最小限の命令セットを持つ専用VMを設計した。
スタックベースのバイトコードは短くなる傾向があるので、同じ処理をCで書くよりも短くすることができた。
このVMは、21個のレジスタ、加減乗除と剰余とxorと比較と右シフト、即値のプッシュ、ヒープのロードとストア、分岐とループ、`putchar()`と`exit()`を備えている。
このVM用のバイトコードを手書きするのは厳しかったので、独自のコンパイラとアセンブラを実装した。
詳細は添付されているsrc.zipを見てほしいが、元のコードはRubyで書かれていて（と言っても文法を借用しただけでRubyとして実行はできない）、これをパースして中間表現にし、アルファ変換やレジスタ割当を行い、VMのバイトコードに変換する。

元のコードもQRコードの形状。
main.c自体をQRコード形状にする余裕がなかったので、main.cを生成するコードを一段挟むことでごまかした。

賞名の"YODA award"の意味はよくわかっていない。
特に作品のテーマには関わっていないので、2012年から立て続けに複数作品を入賞させた同作者をヨーダと呼んでいるのだろうか。
