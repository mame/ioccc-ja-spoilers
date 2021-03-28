---
id: 2000/dhyang
year: 2000
order: 5
authors: "Don_Yang"
orig_url: "https://www.ioccc.org/2000/dhyang.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/dhyang.hint"
title: "IOCCC 2000: Best Layout"
award_ja: "最高のレイアウト"
---

## 動作

実行すると「あく」が出てくる。

```
$ gcc -o dhyang dhyang.c

$ ./dhyang
char*d=")35E!'1cA,,!""2kE`*!-s@d(!(k(f//g&!)f.e5'f(!+a+)f%2g*!?f5f,!=f-*e/!<d"
"6e1!9e0'f3!6f)-g"       "5!4d*b+e6!0f%k)d7!+~^'c7!)z/d-+!'n%a0(d5!""%c1a+/d4"
"!2)c9e2!9b;e1!8b"       ">e/!7cAd-!5fAe+!7fBe(!8hBd&!:iAd$![7S,Q"    "0!1bF7"
"!1b?'_6!1c,8b4!2"       "b*a,*d3!2n4f2!${4f.'!%y4e5!&f%d-^-d7!4"       "c+b)"
"d9!4c-a'd:!/i('`"       "&d;!+l'a+d<!)l*b(d=!'m-a&d>!&d'`0_&c"           "?!"
"$dAc@!$cBc@!$b<^"       ""              "&d$`:!$d9_&l++^$!%f3"          "a'n"
"1_"                                   "$!&f/c(o/_%!(f+c)q*c%"         "!*f&d"
"+f$"                                "s&!-n,d)n(!0i-c-k)!3d/"        "b0h*!H`"
"7a,!["                      "7X0[!4cM,!4cK`*!4cJc(!4cHg&!4"       "c$j8f'!&~"
"]9e)!'"                 "|:d+!)""rAc-!*m*:d/!4c(b4e0!1r"        "2e2!/t0e4!-"
"y-c6!+|,c6!)f$b("       "h*c6"      "!(d'b(i)d5!(b*a'"         "`&c)c5!'b+`&"
"b'c)c4!&b-_$c"                      "'d*c3!&a.h'd+d"         "1!%a/g'e+e0!%b"
"-g(d.d/!&c*"                        "h'd1d-!(d%g)"         "d4d+!*l,d7d)!,h-"
"d;c'!.b0c"                             ">d%!A`Dc$"       "![7*i]5471[=ohr&o*"
"t*q*`*d"                                "*v*r;027"       "*~=h./}tcrsth&t:r9"
"b].,b"          ""      "-725"            "-.t--/"       "/#r[<t8-752793?<.~"
";b]."        "t--"      "+r/#"             "537-r"        "[/9~X.v90<6/<.v;-"
"52/="      "{kgoh."     "/}q"    ";u"       "vtohr"       "`.i*$engt$$,b;$/="
"t;v"      ";6=`it."    "`;"      "7=`"       ":,b-7"       "25=/o`..d;b]`--["
"/+"      "55/}o`.d:"   ""       "-?5"        "/}o`.'"       "v/i]q--[;52=`it"
".o"     ";53-.v96<7"            "/=o"        ":d=o--/"        "i]q--[;h./=i]"
"q"     "--[;v9h./<-"           "52="         "{cjuc&`"         "it.o;?4=o:d="
"o"      "--/i]q--["           ";54="        "{cjuc&i]q-"        "-[;76=i]q[;"
"6="       "vsru.i"            "/={"        "=),BihY_gha,)"        "",o[3217];
int i,        r,w           ,f,b,p,        t=641,x;n(){return         r<t?d[(*
d+143+(r                ++))%t]:r>        +1341?59:(x=d[(r++-t)        %351+t]
)?x^(p?6:0            ):(p=+34);}        main(){w=sprintf(o,"char"       "*d="
);r=p=0;for(      f=1;f<*d+143;)       if((b=d[f++])-33){if(b<+93){        if(
!p)o[w++]=34;for(i=35+(p?0:1);i    <b;i++)o[w++]=n();o[w++]=p?n():+34       ;}
else for(i=92;i<b;i++)o[w++]=32;}else o[w++]=10;o[w]=0;puts(o);};/*Don_Yang*/;
```

これを保存してコンパイル・実行すると「そく」が出てくる。

```
$ ./dhyang > aku.c

$ gcc -o aku aku.c

$ ./aku
char*d="S,Q0!1bF7!1b?'_""6!1c,8b4!2b*a,*d3""!2n4f2!${4f.'!%y4e5!&f%d-^-d7!4c+"
"b)d""9!4c-a'd:!/i("       "'`&d;!+l'a+d<!)l*b(d=!'m-a&d>""!&d'`0_&""c?!$dAc@"
"!$cBc@!$b<^&d$"               "`:!$d9_&l++^$!%f3a'n1_$!&f/c(o/_%"    "!(f+c)"
"q*c%!*f&d"                       "+f$s&!-n,d)n(!0i-c-k)!3d/b0h"        "*!H`"
"7a,!"               "[7X0"          "[!4cM,!4cK`""*!4cJc(!4cH"           "g&"
"!4c$j"          "8f'!&~]9e)"         "!'|:d+!)rAc-!*m*:""d/!"          "4c(b"
"4e0!1r2"     "e2!/t0e""4!-y-"          "c""6!+|,c6!)f$b(h"           "*c6!(d"
"'b(i)d5!(b*a'`&c)c5!'b+`&b'"          "c)c4!&b-_$c'd*c3!"          "&a.h'd+d"
"1!%a/g'e+e0!%b-g(d.d/!&c*"          "h'd1d-!(d""%g)d4d"         "+!*l,d7d)!,"
"h-d;c'!.b0c>d%!A`Dc$![7)"        "35E!'1cA,,!2kE`*!-"         "s@d(!(k(f//g&"
"!)f.e5'f(!+a+)f%2g*!?"         "f5f,!=f-*e/!""<d6"          "e1!9e0'f3!6f)-g"
"5!4d*b+e6!0f%k)d7!"          "+~^'c""7!)z/d-+!"           "'n%a0(d5!%c1a+/d4"
"!2)c9e2!9b;e1!8b"        ">e/!7c"      "Ad-!5fA"         "e+!7fBe(!8hBd&!:iA"
"d$![7*i]5471"          "["               "=ohr&"        "o*t*q*`*d*v*r;027*~"
"=h./}tc"                                    "rst"       "h&t:r9b].,b-725-.t-"
"-//#r"                              "[<t8-752793"        "?<.~;b].t""--+r/#5"
"37-"                  "r"     "[/9~X.v90<6/""<.v;"        "-52/={kgoh./}q;uv"
"t"       "ohr`.i*$engt$"     "$,b;$/=""t;v;6=`it.`"        ";7=`:,b-725=/o`."
".d;b]`--[/+55/""}o`.d"       ":-?5/}o`.'v/i]q--[;52"         "=`it.o;53-.v96"
"<7/=o:d=o--/i]q--[;h."      "/=i]q--[;v9h./<-52={cju"         "c&`it.o;?4=o:"
"d=o--/i]q--[;54={cju"      "c&i]q--[;76=i]q[;6=vsru.i/"         "={=),BihY_g"
"ha,)",o[3217];int i,       r,w,f,b,p,t=641,x;n(){return r<        t?d[(*d+143
+(r++))%t]:r>+1341?          59:(x=d[(r++-t)%351+t])?x^(p?6:         0):(p=+34
);}main(){w=sprintf(o          ,"char""*d=");r=p=0;for(f=1;f<*d         +143;)
if((b=d[f++])-33){if(b            <+93){if(!p)o[w++]=34;for(i=35+(        p?0:
1);i<b;i++)o[w++]=n();o[             w++]=p?n():+34;}else for(i=92;i        <b
;i++)o[w++]=32;}else o[w++]=10;o[w]=0;puts(o);};/*Don_Yang*/;;;;;;;;;;;;;;;;;;
```

これを保存してコンパイル・実行すると「ざん」が出てくる。

```
$ ./aku > soku.c

$ gcc -o soku soku.c

$ ./soku
char*d="X0[!4cM,""!4cK`*!4cJc(!4cHg&!4c$j8f'!&~]9e)!'|:d+!)rAc-""!*m*:d/!4c(b"
"4e0!1r2e2!/t0"      "e4!-y-c6!+|,c6!)f$b(h*c6!(d'b(i)d5""!(b*a'`&c)c5!'b+`&b"
"'c)c4!&b-_$c'"      "d*c3!&a.h'd+d1!%a/g'e+e0!%b""-g("   "d.d/!&c*h'd1d-!(d%"
"g)d4d+!*l,d7d"       ")!,h-d;c""'!.b0c>d%!A`Dc$![7)3"      "5E!'1cA,,!2kE`*!"
"-s@d(!(k(f//g&"      "!)f.e5"     "'f(!+a+)""f%2g*!"        "?f5f,!=f-*e/!<d"
"6e1!9e0'f3!6f)"                  "-g5!4d*b+e6!0f%k"          ")d7!+~^'c7!)z/"
""                               "d-+!'n%a0(d5!%c1"          "a+/d4!2)c9""e2!"
"9"                             "b;e1!8b>e/!7cAd-"         "!5fAe+!7fBe(!8hBd"
"&!"          ":"        "iAd$![7S,"  "Q0!1bF7!1"        "b?'_6!1c,8b4!2b*a,*"
"d3!2n4f2!${4f.'!"       "%y4e5!&"      "f%d-^"        "-d7!4c+b)d9!4c-a'd:!/"
"i('`&d;!+l'a+d<!"       ")l*b(d=!'"     "m-a"        "&d>!&d'`0_&c?!$dAc@!$c"
"Bc@!$b<^&d$"             "`:!$""d9_"    "&l"        "++^$!%f3a'n1_$!&f/c(o/_"
"%!(f+c)"                "q*c"     "%!*f&d+"        "f$s&!-n,d)n(!0i-c-k)!3d/"
"b0h*!"                "H`7a,!"      "[7*i"        "]5471[=ohr&o*t*q*`*d*v*r;"
"027"                 "*~=h./}tc"     "rs"        "th&t:r9b].,b-725-.t--//#r["
"<t"        "8-7"    "52793?<.~;b]"   ".t"       "--+r/#537-r[/9~X.v90<6/<.v;"
""        "-52/={kgoh./}q;uvtohr`.i*$eng"       "t$$,b;$/=t;v;6=`it.`;7=`:,b-"
""       "725=/o`..d;b]`--[/+55/}o`.d:-?"       "5/}o`.'v/i]q--[;52=`it.o;53-"
""      ".v96<7/=o:d=o--/i]q--[;h"  "./"        ""    "=i]q--[;v9h./<-52={cju"
""        "c&`it.o;?4=o:d=o--/i]"   "q-"                "-[;54={""cjuc&i]"  ""
"q"          "--[;76=i]q[;6=v"     "sru"                  ".i/={=),BihY_"   ""
"gh"          "a,)",o[3217]       ;int i                   ,r,w,f,b,p,t=   641
,x;n()          {return r       <t?d[(*                     d+143+(r       ++)
)%t]:r>+          1341        ?59:(x=d[          (r                       ++-t
)%351+t])?x                  ^(p?6:0):(        p=+34);                  }main(
){w=sprintf(o,             "char""*d="       );r=p=0;for               (f=1;f<
*d+143;)if((b=d[f        ++])-33){if(b      <+93){if(!p)o[            w++]=34;
for(i=35+(p?0:1);i<b;i++)o[w++]=n();o[    w++]=p?n():+34;}else      for(i=92;i
<b;i++)o[w++]=32;}else o[w++]=10;o[w]=0;puts(o);};/*Don_Yang*/;;;;;;;;;;;;;;;;
```

これを保存してコンパイル・実行すると、「あく」に戻る。

```
$ ./soku > zan.c

$ gcc -o zan zan.c

$ ./zan
char*d=")35E!'1cA,,!""2kE`*!-s@d(!(k(f//g&!)f.e5'f(!+a+)f%2g*!?f5f,!=f-*e/!<d"
"6e1!9e0'f3!6f)-g"       "5!4d*b+e6!0f%k)d7!+~^'c7!)z/d-+!'n%a0(d5!""%c1a+/d4"
"!2)c9e2!9b;e1!8b"       ">e/!7cAd-!5fAe+!7fBe(!8hBd&!:iAd$![7S,Q"    "0!1bF7"
"!1b?'_6!1c,8b4!2"       "b*a,*d3!2n4f2!${4f.'!%y4e5!&f%d-^-d7!4"       "c+b)"
"d9!4c-a'd:!/i('`"       "&d;!+l'a+d<!)l*b(d=!'m-a&d>!&d'`0_&c"           "?!"
"$dAc@!$cBc@!$b<^"       ""              "&d$`:!$d9_&l++^$!%f3"          "a'n"
"1_"                                   "$!&f/c(o/_%!(f+c)q*c%"         "!*f&d"
"+f$"                                "s&!-n,d)n(!0i-c-k)!3d/"        "b0h*!H`"
"7a,!["                      "7X0[!4cM,!4cK`*!4cJc(!4cHg&!4"       "c$j8f'!&~"
"]9e)!'"                 "|:d+!)""rAc-!*m*:d/!4c(b4e0!1r"        "2e2!/t0e4!-"
"y-c6!+|,c6!)f$b("       "h*c6"      "!(d'b(i)d5!(b*a'"         "`&c)c5!'b+`&"
"b'c)c4!&b-_$c"                      "'d*c3!&a.h'd+d"         "1!%a/g'e+e0!%b"
"-g(d.d/!&c*"                        "h'd1d-!(d%g)"         "d4d+!*l,d7d)!,h-"
"d;c'!.b0c"                             ">d%!A`Dc$"       "![7*i]5471[=ohr&o*"
"t*q*`*d"                                "*v*r;027"       "*~=h./}tcrsth&t:r9"
"b].,b"          ""      "-725"            "-.t--/"       "/#r[<t8-752793?<.~"
";b]."        "t--"      "+r/#"             "537-r"        "[/9~X.v90<6/<.v;-"
"52/="      "{kgoh."     "/}q"    ";u"       "vtohr"       "`.i*$engt$$,b;$/="
"t;v"      ";6=`it."    "`;"      "7=`"       ":,b-7"       "25=/o`..d;b]`--["
"/+"      "55/}o`.d:"   ""       "-?5"        "/}o`.'"       "v/i]q--[;52=`it"
".o"     ";53-.v96<7"            "/=o"        ":d=o--/"        "i]q--[;h./=i]"
"q"     "--[;v9h./<-"           "52="         "{cjuc&`"         "it.o;?4=o:d="
"o"      "--/i]q--["           ";54="        "{cjuc&i]q-"        "-[;76=i]q[;"
"6="       "vsru.i"            "/={"        "=),BihY_gha,)"        "",o[3217];
int i,        r,w           ,f,b,p,        t=641,x;n(){return         r<t?d[(*
d+143+(r                ++))%t]:r>        +1341?59:(x=d[(r++-t)        %351+t]
)?x^(p?6:0            ):(p=+34);}        main(){w=sprintf(o,"char"       "*d="
);r=p=0;for(      f=1;f<*d+143;)       if((b=d[f++])-33){if(b<+93){        if(
!p)o[w++]=34;for(i=35+(p?0:1);i    <b;i++)o[w++]=n();o[w++]=p?n():+34       ;}
else for(i=92;i<b;i++)o[w++]=32;}else o[w++]=10;o[w]=0;puts(o);};/*Don_Yang*/;
```

## 解説

Quineの変種。
わかりやすくインパクトがあるので、IOCCCの中では有名な作品だと思う。Quineに興味を持った人は読解すべき。

最初のコード形状は、[『るろうに剣心』](https://ja.wikipedia.org/wiki/%E3%82%8B%E3%82%8D%E3%81%86%E3%81%AB%E5%89%A3%E5%BF%83_-%E6%98%8E%E6%B2%BB%E5%89%A3%E5%AE%A2%E6%B5%AA%E6%BC%AB%E8%AD%9A-)に出てくるキャラクター、斎藤一。「悪・即・斬」は、斎藤一が作中で述べる信念のこと。

[アスキーアートプログラムがいっぱいあるサイト](http://uguu.org/sources.html)で有名なDon Yang (omoikane)の初作品。
