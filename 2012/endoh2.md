---
id: 2012/endoh2
year: 2012
order: 4
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2012/endoh2/endoh2.c"
hint_url: "https://www.ioccc.org/2012/endoh2/hint.html"
title: "IOCCC 2012: PiE in the sky award"
award_ja: "絵空事で賞"
---

## 動作

実行するとπの絵が出てくる。

```
$ gcc -o endoh2 endoh2.c

$ ./endoh2
#include<stdio.h>/*Spigot_Quine*//*int*e,i,j,k,n;char*q,*a,*d,**/
#include<stdlib.h>/*_IOCCC2012_*//*k,n;char*q,*a,*d,*z,*p=G1%%x*/
int*e,i,j,k,n;char*q,*a,*d,*z,*p="G1%%xJ{;Q7wunmuGuu%%uu#include"
"<stdio.h>/*Spigot_Quine*/#include<stdlib.h>/*_IOCCC2012_*/int*e"
",i,j,k,n;char*q,*a,"                          "*d,*z,*p=%s%c;in"
"t%cmain(){a=callo"                            "c(1,1e4+n*2);;fo"
"r(*a=3,z=d=a+n+1"     ",j"  "=n*8-7"    ";k=0,j-1;j-=2){for(a[1"
"]+=2;--z-a;*z=k%"   "%10,"  "k/=10)"    "k+=j/2**z;;for(;k=k%%j"
"*10+*++z,z<d;*z="  "k/j);"  ";;}d+="    "sprintf(q=d-20,p,p,34,"
"32,n+1)+2;;;;for(n=n*20-4"  "00;k<n"    ";++k%%n?j=+puts(d)<0:("
"d++[j]=47,d[j-2]=42),k%%2"  "0<1?pu"    "ts(d-1),a++:0){for(i=-"
"1;i++<32;!*z?q[662]=0,z="   "q+207:"    "*z+z[1]<65?z+=11:*z==3"
"4?p=0:0)d[i]=((k/20-1?27"   "5*q[*a"    "+10]-8*q[*a+0]-8:128)>"
">(i/11+k/4%%5*3))&1?k/3*"  "!j&&p?j"    "=34:(j=i+1,*z++):32;k/"
"3*j--&&p?d[z--,j]=34:0;"   "}}int*y"    ",n=%d;/*..~";int main()
{a=calloc(1,1e4+n*2   )     ;;for(*a=    3,z=d=a+n+1,j=n*8-7;k=0,
j-1;j-=2){for(a[1]         +=2;--z-a;      *z=k%10,k/=10)k+=j/2**
z;;for(;k=k%j*10+*        ++z,z<d;*z=          k/j);;;}d+=sprintf
(q=d-20,p,p,34,32,n      +1)+2;;;;for(        n=n*20-400;k<n;++k%
n?j=+puts(d)<0:(d++[j]=47,d[j-2]=42),k%20<1?puts(d-1),a++:0){for(
i=-1;i++<32;!*z?q[662]=0,z=q+207:*z+z[1]<65?z+=11:*z==34?p=0:0)d[
i]=((k/20-1?275*q[*a+10]-8*q[*a+0]-8:128)>>(i/11+k/4%5*3))&1?k/3*
!j&&p?j=34:(j=i+1,*z++):32;k/3*j--&&p?d[z--,j]=34:0;}}int*y,n=24;
```

これをコンパイル・実行すると、縦書きで"3.14"が出てくる。

```
$ ./pi
#include<stdio.h>/*Spigot_Quine*/
#include<stdlib.h>/*_IOCCC2012_*/
int*e,i,j,k,n;char*q,*a,*d,*z,*p=
"G1%%xJ{;Q7wunmuGuu%%uu#include<"
                      "stdio.h>/"
                      "*Spigot_Q"
                      "uine*/#in"
                      "clude<std"
"lib.h>/*_IOCCC2012_*/int*e,i,j,"
"k,n;char*q,*a,*d,*z,*p=%s%c;int"
"%cmain(){a=calloc(1,1e4+n*2);;f"
"or(*a=3,z=d=a+n+1,j=n*8-7;k=0,j"
                      "-1;j-=2){"
                      "for(a[1]+"
                      "=2;--z-a;"
                      "*z=k%%10,"
"k/=10)k+=j/2**z;;for(;k=k%%j*10"
"+*++z,z<d;*z=k/j);;;}d+=sprintf"
"(q=d-20,p,p,34,32,n+1)+2;;;;for"
"(n=n*20-400;k<n;++k%%n?j=+puts("









           "d)<0:(d++"
           "[j]=47,d["
           "j-2]=42),"
           "k%%20<1?p"









           "uts(d-1),"
           "a++:0){fo"
           "r(i=-1;i+"
           "+<32;!*z?"
"q[662]=0,z=q+207:*z+"
"z[1]<65?z+=11:*z==34"
"?p=0:0)d[i]=((k/20-1"
"?275*q[*a+10]-8*q[*a"
           "+0]-8:128"
           ")>>(i/11+"
           "k/4%%5*3)"
           ")&1?k/3*!"
           "j&&p?j=34"
           ":(j=i+1,*"
           "z++):32;k"
           "/3*j--&&p"
"?d[z--,j]=34:0;}}int*y,n=%d;/*."
".~";int main(){a=calloc(1,1e4+n*
2);;for(*a=3,z=d=a+n+1,j=n*8-7;k=
0,j-1;j-=2){for(a[1]+=2;--z-a;*z=

k%10,k/=10)           k+=j/2**z;;
for(;k=k%j*           10+*++z,z<d
;*z=k/j);;;           }d+=sprintf
(q=d-20,p,p           ,34,32,n+1)
+2;;;;for(n           =n*20-400;k
<n;++k%n?j=           +puts(d)<0:
(d++[j]=47,           d[j-2]=42),
k%20<1?puts           (d-1),a++:0
){for(i=-1;i++<32;!*z?q[662]=0,z=
q+207:*z+z[1]<65?z+=11:*z==34?p=0
:0)d[i]=((k/20-1?275*q[*a+10]-8*q
[*a+0]-8:128)>>(i/11+k/4%5*3))&1?
                      k/3*!j&&p?j
                      =34:(j=i+1,
                      *z++):32;k/
                      3*j--&&p?d[
                      z--,j]=34:0
                      ;}}int*y,n=
                      25;/*..~int
                      *e,i,j,k,*/
```

この出力も実行可能。保存して実行すると、"3.141"と1桁増える。	

```
$ ./pi > 314.c
$ gcc -o 314 314.c
$ ./314
#include<stdio.h>/*Spigot_Quine*/
#include<stdlib.h>/*_IOCCC2012_*/
int*e,i,j,k,n;char*q,*a,*d,*z,*p=
"G1%%xJ{;Q7wunmuGuu%%uu#include<"
                      "stdio.h>/"
                      "*Spigot_Q"
                      "uine*/#in"
                      "clude<std"
"lib.h>/*_IOCCC2012_*/int*e,i,j,"
"k,n;char*q,*a,*d,*z,*p=%s%c;int"
"%cmain(){a=calloc(1,1e4+n*2);;f"
"or(*a=3,z=d=a+n+1,j=n*8-7;k=0,j"
                      "-1;j-=2){"
                      "for(a[1]+"
                      "=2;--z-a;"
                      "*z=k%%10,"
"k/=10)k+=j/2**z;;for(;k=k%%j*10"
"+*++z,z<d;*z=k/j);;;}d+=sprintf"
"(q=d-20,p,p,34,32,n+1)+2;;;;for"
"(n=n*20-400;k<n;++k%%n?j=+puts("









           "d)<0:(d++"
           "[j]=47,d["
           "j-2]=42),"
           "k%%20<1?p"









           "uts(d-1),"
           "a++:0){fo"
           "r(i=-1;i+"
           "+<32;!*z?"
"q[662]=0,z=q+207:*z+"
"z[1]<65?z+=11:*z==34"
"?p=0:0)d[i]=((k/20-1"
"?275*q[*a+10]-8*q[*a"
           "+0]-8:128"
           ")>>(i/11+"
           "k/4%%5*3)"
           ")&1?k/3*!"
           "j&&p?j=34"
           ":(j=i+1,*"
           "z++):32;k"
           "/3*j--&&p"
"?d[z--,j]=34:0;}}int*y,n=%d;/*."
".~";int main(){a=calloc(1,1e4+n*
2);;for(*a=3,z=d=a+n+1,j=n*8-7;k=
0,j-1;j-=2){for(a[1]+=2;--z-a;*z=

k%10,k/=10)           k+=j/2**z;;
for(;k=k%j*           10+*++z,z<d
;*z=k/j);;;           }d+=sprintf
(q=d-20,p,p           ,34,32,n+1)
+2;;;;for(n           =n*20-400;k
<n;++k%n?j=           +puts(d)<0:
(d++[j]=47,           d[j-2]=42),
k%20<1?puts           (d-1),a++:0
){for(i=-1;i++<32;!*z?q[662]=0,z=
q+207:*z+z[1]<65?z+=11:*z==34?p=0
:0)d[i]=((k/20-1?275*q[*a+10]-8*q
[*a+0]-8:128)>>(i/11+k/4%5*3))&1?
                      k/3*!j&&p?j
                      =34:(j=i+1,
                      *z++):32;k/
                      3*j--&&p?d[
                      z--,j]=34:0
                      ;}}int*y,n=
                      26;/*..~int
                      *e,i,j,k,n;

           char*q,*a,*
           d,*z,*p=%s%
           c;int%cmain
           (){a=calloc
(1,1e4+n*2);;for(*a=3,
z=d=a+n+1,j=n*8-7;k=0,
j-1;j-=2){for(a[1]+=2;
--z-a;*z=k%%10,k/=10)k
           +=j/2**z;;f
           or(;k=k%%j*
           10+*++z,z<d
           ;*z=k/j);;;
           }d+=sprintf
           (q=d-20,p,p
           ,34,32,n+1)
           +2;;;;for(n
=n*20-400;k<n;++k%%n?j=+puts(d)<0
:(d++[j]=47,d[j-2]=42),k%%20<1?pu
ts(d-1),a++:0){for(i=-1;i++<32;!*
z?q[662]=0,z=q+207:*z+z[1]<65?z*/
```

以下、繰り返すごとに1桁ずつ増えていく。

---

最初のプログラムに引数として`"e"`を渡すと、[ネイピア数](https://ja.wikipedia.org/wiki/%E3%83%8D%E3%82%A4%E3%83%94%E3%82%A2%E6%95%B0)（2.71828...）で同様のことを行う。

```
$ ./endoh2 e
#include<stdio.h>/*Spigot_Quine*//*int*e,i,j,k,n;char*q,*a,*d,**/
#include<stdlib.h>/*_IOCCC2012_*//*k,n;char*q,*a,*d,*z,*p=G1%%x*/
int*e,i,j,k,n;char*q,*a,*d,*z,*p="G1%%xJ{;Q7wunmuGuu%%uu#include"
"<stdio.h>/*Spigot_Quine*/#include<stdlib.h>/*_IOCCC2012_*/int*e"
",i,j,k,n;char*q,*a,*d,*z,*"           "p=%s%c;int%cmain(){a=cal"
"loc(1,1e4+n*2);;for(*a=2"     ",z"      "=d=a+n*2,*z=1,j=0;++j<"
"n;){for(;k=k%%j*10+*z,"     "a-z;*z"      "--=k/j)a++;for(k=0;z"
"-d;*a--=k%%10,k/=10)k"     "+=*++z+*"      "a;}d+=sprintf(q=d-2"
"0,p,p,34,32,n+1)+2;;;"    ";for(n=n*2"     "0-400;k<n;++k%%n?j="
"+puts(d)<0:(d++[j]=4"     "7,d[j-2]=4"     "2),k%%20<1?puts(d-1"
"),a++:0){for(i=-1;i+"                      "+<32;!*z?q[662]=0,z"
"=q+207:*z+z[1]<65?z+"     "=11:*z==34?p=0:0)d[i]=((k/20-1?275*q"
"[*a+10]-8*q[*a+0]-8:"     "128)>>(i/11+k/4%%5*3))&1?k/3*!j&&p?j"
"=34:(j=i+1,*z++):32;"     "k/3*j--&&p?d[z--,j]=34:0;}}int*y,n=%"
"d;/*..~";int main(){a=     calloc(1,1e4+n* 2);;for(*a=2,z=d=a+n*
2,*z=1,j=0;++j<n;){for(      ;k=k%j*10+*z,  a-z;*z--=k/j)a++;for(
k=0;z-d;*a--=k%10,k/=10)       k+=*++z+*   a;}d+=sprintf(q=d-20,p
,p,34,32,n+1)+2;;;;for(n=n*              20-400;k<n;++k%n?j=+puts
(d)<0:(d++[j]=47,d[j-2]=42),k%         20<1?puts(d-1),a++:0){for(
i=-1;i++<32;!*z?q[662]=0,z=q+207:*z+z[1]<65?z+=11:*z==34?p=0:0)d[
i]=((k/20-1?275*q[*a+10]-8*q[*a+0]-8:128)>>(i/11+k/4%5*3))&1?k/3*
!j&&p?j=34:(j=i+1,*z++):32;k/3*j--&&p?d[z--,j]=34:0;}}int*y,n=24;
```

## 解説

もともとのコード形状は蛇口。
これは、数学定数を1桁ずつ無限に出力していく[スピゴット（蛇口）アルゴリズム](https://en.wikipedia.org/wiki/Spigot_algorithm)を意図している（ただしこのプログラム自身はスピゴットアルゴリズムを利用していない）。

0から9までの数字の3x5ビットマップフォントが`"G1%xJ{;Q7wunmuGuu%uu"`の20バイトに圧縮されているところが審査員の琴線に触れたみたい。
この文字列は[ベズーの等式](https://ja.wikipedia.org/wiki/%E3%83%99%E3%82%BA%E3%83%BC%E3%81%AE%E7%AD%89%E5%BC%8F)を元にブルートフォースで見つけたもので、この文字列`s`に対して数字nのフォントは`275*s[n+10] - 8*s[n] - 8`で得られる。

賞名の"pie in the sky"は「絵空事」の慣用表現だが、"PiE"なので円周率piとネイピア数eがかかっている。
