---
id: 2013/endoh2
year: 2013
order: 6
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2013/endoh2/endoh2.c"
hint_url: "https://www.ioccc.org/2013/endoh2/hint.html"
title: "IOCCC 2013: Most recyclable"
award_ja: "もっともリサイクル可能"
---

## 動作

自分自身を標準入力に与えて実行するとCコードが出力される。

```
$ gcc -o endoh2 endoh2.c

$ ./endoh2 < endoh2.c
char*p="@@@sssss8]][[[[a#@@sss0['w}8|v}a<{av}a@{av}j>~{v}j8|c[sa?|{8[|#~}[j#@ra>~}sa!{>}|#r0l}sao8}[a'f8|r'"
"8[j?x[?@<[j?@[j?@[s?>|;[[[j!>b'8'a@<cb@>?c$kg/@<b#0pf<#keab{/b0|c0#d#0#|'o{i<!8dr,f/{#rg{baiderh{er0}|'{0{"
"ic.df?'o|j{lim0'{i?#c0b|c#kg!}r!8lp1g!|i/ar<[#0g|h/}ieg>|/ah|sr<|i[[[}s#f@}[{@u~~~r@[|#|{ssss{a}|0~{?}|<{?"
"}|qj?}s@[/}j0]][[[[a/@@@sssss<[[?>=sln5+a[so#,g-0aw;#*a>*abwa.*+da9=n?<6-'7%71>e/?>a[j;e=;scdet?>shd??a;5&"
"6:=[ch@aw[sf;[#<[                                                                       [j>k7//?>>d>==n'6+"
"7*abcdnh3a/jhw                                                                             b6;73;b#<ww<7bc"
"w7d+;&i=cn?c                                                                                >=#d5;8w3;nawn"
"#<;;77//ra?                                                                                   8hi1abcww#>="
"=<[;k7[wn7                                                                                     [=,>ab[a@s["
"='b,.[8.?>                                                                                     >fdjn(/2$a8"
"c8[[j/8.=                                                                                       B6+b8]]]]]"
"]]]]j1;7/              sj<[[af;7sjd][j/<7!=a>d7/j8d.ab[hybm?>=;ei7aws1d!ebn/,?>0ak              a[#;5+7!?a"
"c;7/wa7{;             a3/bjcna>a<;bs8;7j-=cabh?97/sj['-5*j[!;5+a7[1wb[!wBb7w?0wb/?a             n+&e/|j'4a"
"<70v;7d.k             d8wa?.=:a-wwm=:;[e5*-=fwn7rab[c.j#eaw#c>>>bml;mtdekssaezqtd[3             9<u/char*p"
"=$,w[1399             7],*h=w,*q,*r/****/;#include/*ioccc*2013*/<stdio.h>/*-                           -20"
"13-ioccc-             2013-ioccc-2013--*/#define@n(d);c((d)>>8);c(d);*B=32;B                           [y="
"1]=22.627             400;B[2]=16;/*-ioccc-2013-ioccc-2013-ioccc-201*/int@a,b,                       d,e,s"
",t,g,z,y;             double@f,B[3],i,j,k,l;void@m(int@z){for(j=k=l=y=1;y<99;y+=                   2+0)l*="
"z*z*.0385             53,k*=-y*(y+1),j+=l/k;i*=j;}int@c(int@d){return@putchar(d)/2               55;}intma"
"in(){for(             ;*p;p++)*p<33?0:(*h++=*p-32);q=h;for(p=w;p<w+823;p++)for(d=*p-           56,e=-1+0;+"
"+e<(d<00?             5:d<6?d>4     ?160:30:d>35?27<<(d-36):d/9*6);q++)*q=d<0?*p>>e&1         :d<6||q[d>35"
"?-108:d%9*-12-12];for(q=h;g++<       6156;q++)*q?*q=*p-4?e=*p++,e-32?e:0:r&&*r?g%108<2?     2:*r++:(r=r?p+"
"+:w,2):0;n(g=8*8187)n(g+8)n(16)     n(19014)n(18758);for(;s<10;s++)c(s<3?s:0)n(g+3)n(67)f or(;t<65;)c(t++>"
"0)n(g-24)n(11)c (8)n(612)n(656)n(257)n(4352)n(g+0-20)n(5*42);;for(;y++<207;)c(y<31?y<19?y>6:30-y:y<47?y<32"
"||y>36?16:0:y     <48?2:y%16*16     +13-y       /       16)n(64*9            60)n(g+5)        n      (4)n("
"1)n(g+2)n(8        )n(257)n(0)       n(2*                 8064)                for(;                 b<404"
"096;b++){e           =32<a?63-       a:a;                  for       (f=d       =t=                  s=0;e"
">t;)e-=+              +t;e=t%2       ?e:t       -e;;       ;f        or(d        =a       >31?       e=7-e"
",14-t-e                 :t-e;s       <64;       t=f-=      i*                    B[      !d+!e       ])z=b"
"/64%8                     2*8+       s/8-       4,y=b      /5                    24      8*8+s       %8+7,"
"i=z                        <0|       |z>6       47||       y%1       1>9?1:q[h[z/6+                  y/11*"
"108                         ]*       60+y                  %11                  *6+z                 %6]*2"
"-1,m(s/8*             2*d+d),m       (s++                 %8*2*e               +e);s=2               +t*t;"
";for(d=2;             s>3;s/=4       )d*=       2       ;;s=8<<(a?           12:9);   s-=d*2<<       !!a*4"
";s|=t>0?t             :t-1+          d;c(       s/256)?c(0):0;c(s)?c(0):0;if(a++>62       ){n        (g-8+"
"b/64%8)a=             0;}}           n(g+       1)return@0+0;}",w[13997],*h=w,*q,*r                 /****/;
#include/*             ioccc         *2013       */<stdio.h>/*--2013-ioccc-2013-ioccc-              2013--*/
#define n(             d);c((d)>>8);c(d);*B=32;B[y=1]=22.627400;B[2]=16;/*-ioccc-2013-ioccc-2013-ioccc-201*/
int a,b,d,             e,s,t,g,z,y;double f,B[3],i,j,k,l;void m(int z){for(j=k=l=y=1              ;y<99;y+=2
+0)l*=z*z*             .038553,k*=-y*(y+1),j+=l/k;i*=j;}int c(int d){return putchar(             d)/255;}int
main(){for             (;*p;p++)*p<33?0:(*h++=*p-32);q=h;for(p=w;p<w+823;p++)for(d=*             p-56,e=-1+0
;++e<(d<00             ?5:d<6?d>4?160:30:d>35?27<<(d-36):d/9*6);q++)*q=d<0?*p>>e&1:d             <6||q[d>35?
-108:d%9*-             12-12];for(q=h;g++<6156;q++)*q?*q=*p-4?e=*p++,e-32?e:0:r&&*r?             g%108<2?2:*
r++:(r=r?p              ++:w,2):0;n(g=8*8187)n(g+8)n(16)n(19014)n(18758);for(;s<10;              s++)c(s<3?s
:0)n(g+3)n                                                                                       (67)for(;t<
65;)c(t++>0                                                                                     )n(g-24)n(11
)c(8)n(612)                                                                                     n(656)n(257)
n(4352)n(g+0                                                                                   -20)n(5*42);;
for(;y++<207;                                                                                 )c(y<31?y<19?y
>6:30-y:y<47?y<                                                                             32||y>36?16:0:y<
48?2:y%16*16+13-y/                                                                       16)n(64*960)n(g+5)n
(4)n(1)n(g+2)n(8)n(257)n(0)n(2*8064)for(;b<404096;b++){e=32<a?63-a:a;for(f=d=t=s=0;e>t;)e-=++t;e=t%2?e:t-e;;
;for(d=a>31?e=7-e,14-t-e:t-e;s<64;t=f-=i*B[!d+!e])z=b/64%82*8+s/8-4,y=b/5248*8+s%8+7,i=z<0||z>647||y%11>9?1:
q[h[z/6+y/11*108]*60+y%11*6+z%6]*2-1,m(s/8*2*d+d),m(s++%8*2*e+e);s=2+t*t;;for(d=2;s>3;s/=4)d*=2;;s=8<<(a?12:
9);s-=d*2<<!!a*4;s|=t>0?t:t-1+d;c(s/256)?c(0):0;c(s)?c(0):0;if(a++>62){n(g-8+b/64%8)a=0;}}n(g+1)return 0+0;}
```

これを保存して実行する。

```
$ ./endoh2 < endoh2.c > jpeg.c

$ gcc -o jpeg jpeg.c

$ ./jpeg > jpeg.jpg
```

次のように、jpeg.cのコードが埋め込まれたJPEG画像が出力される。

{% include img.html src="2013-endoh2.png" desc="jpeg.cの内容を埋め込んだJPEG画像（jpeg.jpg）" %}

## 解説

自分自身のソースコードを描いたJPEG画像を出力するQuine。

JPEGは、PNGやGIFやBMPのようなよくある画像フォーマットの中ではもっとも複雑。
最小でも次の3つを実装しなくてはならない。

* ピクセルがジグザク順（[WikipediaのJPEGの解説](https://en.wikipedia.org/wiki/JPEG)）
* [離散コサイン変換](https://ja.wikipedia.org/wiki/%E9%9B%A2%E6%95%A3%E3%82%B3%E3%82%B5%E3%82%A4%E3%83%B3%E5%A4%89%E6%8F%9B)
* [ハフマンエンコーディング](https://ja.wikipedia.org/wiki/%E3%83%8F%E3%83%95%E3%83%9E%E3%83%B3%E7%AC%A6%E5%8F%B7)

おそらく世界最小のJPEGエンコーダだと思うが、それでもIOCCCのサイズルールを満たせなかったので、この年の`iocccsize -i`がコメントを無視するという仕様（バグ？）を悪用している。
本体のコードはすべてコメントの中に埋め込まれている。
自分自身を標準入力に与えて起動することでコメントからコードを取り出し、整形して表示している。
