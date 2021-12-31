---
id: 2020/endoh3
year: 2020
order: 4
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2020/endoh3/prog.c"
hint_url: "https://www.ioccc.org/2020/endoh3/index.html"
title: "IOCCC 2020: Most head-turning"
award_ja: "もっとも振り向かせる"
---

### 動作

実行すると、散髪屋の時計（左右反転した時計）が表示される。

```
$ gcc -o prog prog.c

$ ./prog
#define/**/Q(x,y)char*/*                               */q=y#x","#y")",*p,s[x;}
/*IOCCC'20*/#include/*                 SI                */<stdio.h>/*-Qlock-*/
int(y),x,i,k,r;Q(9/*         I                   II        */<<9];float(o)[03];
void(P)(){*o=r<0/*                                           */?r:-r;o[1]=39.5;
o[2]=22.5;for(k/*                                             */=0;++k<39;*o*=i
/6875.5/(k%2?k/*                                               */:-k))y=o[1+k%2
]+=*o;k=o[2];/*       S  ,,           ;                 OI      */p=s+y+k/2*80;
}int(main)()/*            '',,        ;                          */{for(p=s;+i<
1839;*q>32?k/*                ',       ;                         */=i++/80-11,y
=(750>r*r+k/*                   '',,   ;                          */*k*4)*4+y/2
,*p++=r<41?/*                       ',,;                          */y?"0X+0X+!"
[y-1]-1:+*q/*      E                   '                   e      */++:10:*q++)
r=i%80-38;;/*                                                     */;for(x=13,r
=20;i=3600*/*                                                     */--x,i;*p++=
"OISEA2dC8e"/*                                                   */[x%10],*p+=x
/10*41)P();r/*                                                   */=10;;sscanf(
__TIME__,"%d"/*       A                                 8       */":%d:%d",&k,&
x,&i);for(i+=(/*                                               */k*60+x)*60;18+
r;*p=k%2?*p%2?+/*                                             */59:44:*p>39?59:
39,i=!r--?i%3600/*           2                   C           */*12:i)P();puts(s
),"#define/**/Q(x"/*                                       */",y)char*q=y#x\","
"\"#y\")\",*p,s[x;}"/*                 d                 */"/*IOCCC'20*/#inclu"
"de<stdio.h>/*-Qlock-"/*                               */"*/int(y),x,i,k,r;Q(")
```

この出力はQuineになっていて、保存してコンパイル・実行することでまた同様に時計になる。

デモ動画。

{% include youtube.html src="FmxcnXhvJlo" desc="作者によるデモ動画" %}

### 解説

動作がすべて。

賞名の"head-turning"は「人を振り向かせる」「耳目を集める」という表現だけれど、文字通り「頭を回転させる」という意味で使っている。

[prog.alt.c](https://www.ioccc.org/2020/endoh3/prog.alt.c)はUnicodeの文字を使って、鏡文字をもうちょっとそれっぽい字にする。

{% include img.html src="2020-endoh3.png" desc="prog.alt.cの実行結果" %}
