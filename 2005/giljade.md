---
id: 2005/giljade
year: 2005
order: 5
authors: "Gil_Dogon"
orig_url: "https://www.ioccc.org/2005/giljade/giljade.c"
hint_url: "https://www.ioccc.org/2005/giljade/hint.text"
title: "IOCCC 2005: Best 2D puzzle"
award_ja: "最高の2Dパズル"
---

## 動作

[箱入り娘](https://ja.wikipedia.org/wiki/%E7%AE%B1%E5%85%A5%E3%82%8A%E5%A8%98_%28%E3%83%91%E3%82%BA%E3%83%AB%29)のバリアントのソルバ。

```
$ gcc -m32 -o giljade giljade.c

$ ./giljade > out
```

出力は75行ごとに、プログラムを整形したものとして表示する。最初の75行は初期盤面。

```
$ head -75 out






                                    #define/**/F/***/for/*A*//*ddfhnd*/
                                    #define/***/H()f=*E<<4|*E,f=~(f|/*\
                                    */f<<1|E[3]|E[1]|E[1]<<4|E[2]|E[(2\
                                    )]<<(1));/**.F.***.fnr.*@*."ddfhn*/
                                    #define/***/I(x,d)F(;s;C()){s=s^(b\
                                    =s&s-1^s);F(N[4]=q=0;q<4;q++)N[q]=\
                                    E[q];N[5]=E-B;N[d]^=+b^(b)x;}/****/
                                    #define/**/o(p,t,i,m,a,l)u=(f&p)i(\
                                    m);s=u&E[3];I(t(m),3)s=(u)a&E[l];I\
                                    (t(m),l)u=u>>5-m&u;s=u&E[3-l];I(t(\
                                    m),3-l)s=(u)a&*E;I(t(m),(0))/*H((*/
                                    ;;char*A="#define/**/F/***/for/*A*"
                                    "/#define/***/H()f=*E<<4|*E,f=~(f|"

"f<<1|E[3]|E[1]|E [1]<<4|E[2]|E[(2)]<<(1));#define/** */I(x,d)F(;s;C()"
"){s=s^(b=s&s-1^s );F(N[4]=q=0;q<4;q++)N[q]=E[q];N[5] =E-B;N[d]^=+b^(b"
")x;}#define/**/o (p,t,i,m,a,l)u=(f&p)i(m);s=u&E[3];I (t(m),3)s=(u)a&E"
"[l];I(t(m),l)u=u >>5-m&u;s=u&E[3-l];I(t(m),3-l)s=(u) a&*E;I(t(m),(0))"
"#;/*echo/Line/%d ;sed/-n/-e/%d,%dp/%s>*//*c.c;cc/c.c /-c*/#;char*A=,*"
"_,*R,*Q,D[9999], *r,l[9999],T=42,M,V=32;long*E,k[999 9],B[1<<+21],*N="
"B+1234567,q=0,h= 3,j=2,O,b,f,u,s,c,a,t,e,d;C(){F(h=N [3];(B[h]&&+memc"
"mp(N,B+B[h],L4)) ;h=B[h]+4);B[h]||(B[h]=N-B,N=N+6);} main(char*U,int*"
"w[]){;;F(_=A;*_; _++)10-*_&&*_-V&&(*_-92)&&(k[q]=isa lnum(l[q]=*_),q+"
"+);M=47;*(E=N-6) =64;E[1]=289;E[2]=270336;F(E[3]=327 82;E<N;E=E+6){H("
")o(1048560,<<,>> ,4,>>4,1)o(+489335,>>,<<,1,,2)o(978 670,<<,>>,1,>>1,"
"2)o(+65535,>>,<< ,4,,1)if(8192&*E){F(N=B;E>B;E=B+E[5 ])*N++=E-B;F(;N>"
"B;){h=*(E=B+*--N );H()s=~(E[1]|h|h<<1);u=~(E[2]|h|h< <4);r=l;_=D;d=1;"
"a=2;O=8;F(q=74;"
"q;q--){F(b=0;b<7 2;b++){h=+1<<(q-1 )/14*4+(b-1)/18;j=b?(!(b%18)&&u&h)"
"|h&f|(!(q%14)&&s &h)?1:0:2;if(O<3) O?j?j-1&&(O-2&&d--,*R=34,O=2):(*_+"
"+=O-2?l[d]?l[d++ ]:(d=t,O=e=3,34): (O=1,34)):j||(*_++=d<t?l[d++]:(O=1"
",d=0,34));else{i f(O<6)if(j){j-2|e ||(_=R,O-4?d--:M-_[-1]||(_[-1]=l[d"
"++],O=3));c=0;if (k[d]&k[d-1])F(;k [d-1];++c)d--;!d||((h=l[d])^l[d-1]"
")+k[d]||!(+40-(h &62)&&h-125)||(c= 1,d--);c-1||(c=2,d--);c&&(_[-c]=M,"
"_[1-c]=T,O=4);j- 2|e||(*_++=+92);} else{h=*_++=O-4?O-5?l[d++]:(O=3,M)"
":(O=5,T),(_[-1]& &(35-h||!(a=+1))) ||(O=7,*(R=Q=_-(1))=M);}else{j?O-7"
"||(O=6,_[-1]=59) :(*_++=a-2?O-6?O- 7?126&*++r:(O=8,T):(O=7,M):(a=0,l["
"d]-100?(e=1,O=0) :(e=0,O=3,35)));i f(e==1){F(r=A=l+d;35-*A;++A)*A-M&&"
"*A-T||U-1&&(*A=V );d=d+A-r;if(U-1) {*A=0;F(j=2;13499>j&&(sprintf(l,r+"
"1,j,j,O=j+75,w[1 ]),j=O,!system(l) ););exit(j<+13499);}t=d+9;_[-1]=l["
"++d];}a-1|+j-2|| (R-Q<3?(*(Q<R?R-1 :R)=*Q=*R=59):(*R=M,R[-1]=T),a=2);"
                  "}}j?(*_++=j-2?V: 10,R):(R=_-1);}}R[-1]=T;*R=M;*_++="
"10;F(R=D;putchar (*R)&&_>++R;);}}} ;O-b-f-u-s-c-a-t-e;}",*_,*R,*Q,D[/*
*/9999],*r,l[9999 ],T=42,M,V=32;/*n */long*E,k[9999],B[1<<+21],*N=B+/*3
*/1234567,q=0,h=3 ,j=2,O,b,f,u,s,c, a,t,e,d;C(){F(h=N[3];(B[h]&&+memcmp
(N,B+B[h],L4));h= B[h]+4);B[h]||(B[ h]=N-B,N=N+6);}main(char*U,int*w[])
{;;F(_=A;*_;_++/* */)10-*_&&*_-V&&( *_-92)&&(k[q]=isalnum(l[q]=*_),q++)
;M=47;*(E=N-6)=64 ;E[1]=289;E[2]=/* */270336;F(E[3]=32782;E<N;E=E+6){H(
)o(1048560,<<,>>, 4,>>4,1)o(+489335 ,>>,<<,1,,2)o(978670,<<,>>,1,>>1,2)
o(+65535,>>,<<,/* */4,,1)if(8192&*E ){F(N=B;E>B;E=B+E[5])*N++=E-B;F(;N>
B;){h=*(E=B+*--N) ;H()s=~(E[1]|h|/* */h<<1);u=~(E[2]|h|h<<4);r=l;_=D;d=
1;a=2;O=8;F(q=74; q;q--){F(b=0;b<72 ;b++){h=+1<<(q-1)/14*4+(b-1)/18;j=b
?(!(b%18)&&u&h)|h &f|(!(q%14)&&s&h) ?1:0:2;if(O<3)O?j?j-1&&(O-2&&d--,*R
=34,O=2):(*_++=O- 2?l[d]?l[d++]:(d= t,O=e=3,34):(O=1,34)):j||(*_++=d<t?
l[d++]:(O=1,d=0/* */,34));else{if(O <6)if(j){j-2|e||(_=R,O-4?d--:M-_[-1
]||(_[-1]=l[d++],
O=3));c=0;if(k[d] &k[d-1])F(;k[d-1] ;++c)d--;!d||((h= l[d])^l[d-1])+k[d
]||!(+40-(h&62)&& h-125)||(c=1,d--) ;c-1||(c=2,d--);c &&(_[-c]=M,_[1-c]
=T,O=4);j-2|e||(* _++=+92);}else{h= *_++=O-4?O-5?l[/* */d++]:(O=3,M):(O
=5,T),(_[-1]&&(35 -h||!(a=+1)))||(O =7,*(R=Q=_-(1))=M );}else{j?O-7||(O
=6,_[-1]=59):(*/* */_++=a-2?O-6?O-7 ?126&*++r:(O=8,T) :(O=7,M):(a=0,l[d
]-100?(e=1,O=0):( e=0,O=3,35)));if( e==1){F(r=A=l+d/* */;35-*A;++A)*A-M
&&*A-T||U-1&&(*A= V);d=d+A-r;if(U-1 ){*A=0;F(j=2;/*49 */13499>j&&(/*rin
*/sprintf(l,r+1,j ,j,O=j+75,w[1]),j =O,!system(l));); exit(j<+13499);}t
=d+9;_[-1]=l[++d] ;}a-1|+j-2||(R-Q< 3?(*(Q<R?R-1:R)=* Q=*R=59):(*R=M,R[
-1]=T),a=2);}}j?( *_++=j-2?V:10,R): (R=_-1);}}R[-1]=T ;*R=M;*_++=10;F(R
=D;putchar(*R)&&_ >++R;);}}};O-b-f- u-s-c-a-t-e;}/*.* dbhn.Lhnd.$d:rdd.
,n.,d.$d,$dp.$r>* ..*b.b:bb.b.b.,b* .":bh`r*@<,*^,*R, *P,DZ8888\,*r,lZ8
888\,T<42,L,V<22: lnnf*D,jZ8888\,BZ 0<<*20\,*N<B*0224 466,p<0,h<2,j<2*/
```

次の盤面。初期盤面と比較すると、左上の縦長のパーツが上に動いた事がわかる。

```
$ head -150 out | tail -75






#define/**/F/***/                   for/*A*//*ddfhnd.**.F.***.fnr.*@**/
#define/***/H()f=                   *E<<4|*E,f=~(f|f<<1|E[3]|E[1]|E[1]\
<<4|E[2]|E[(2)]<<                   (1));/*ddfhnd.***.H((f<*D<<4|*D,f*/
#define/***/I(x,d                   )F(;s;C()){s=s^(b=s&s-1^s);F(N[4]=\
q=0;q<4;q++)N[q]=                   E[q];N[5]=E-B;N[d]^=+b^(b)x;}/*(f*/
#define/**/o(p,t,                   i,m,a,l)u=(f&p)i(m);s=u&E[3];I(t(m\
),3)s=(u)a&E[l];I                   (t(m),l)u=u>>5-m&u;s=u&E[3-l];I(t(\
m),3-l)s=(u)a&*E;                   I(t(m),(0))/*<<0|DZ2\|DZ0\|DZ0\<<*/
;;char*A="#define                   /**/F/***/for/*A*/#define/***/H()f"
"=*E<<4|*E,f=~(f|                   f<<1|E[3]|E[1]|E[1]<<4|E[2]|E[(2)]"
"<<(1));#define/*                   **/I(x,d)F(;s;C()){s=s^(b=s&s-1^s)"
";F(N[4]=q=0;q<4;                   q++)N[q]=E[q];N[5]=E-B;N[d]^=+b^(b"
")x;}#define/**/o                   (p,t,i,m,a,l)u=(f&p)i(m);s=u&E[3];"
"I(t(m),3)s=(u)a"
"&E[l];I(t(m),l)u =u>>5-m&u;s=u&E[3-l];I(t(m),3-l)s=( u)a&*E;I(t(m),(0"
"))#;/*echo/Line/ %d;sed/-n/-e/%d,%dp/%s>*//*c.c;cc/c .c/-c*/#;char*A="
",*_,*R,*Q,D[9999 ],*r,l[9999],T=42,M,V=32;long*E,k[9 999],B[1<<+21],*"
"N=B+1234567,q=0, h=3,j=2,O,b,f,u,s,c,a,t,e,d;C(){F(h =N[3];(B[h]&&+me"
"mcmp(N,B+B[h],L4 ));h=B[h]+4);B[h]||(B[h]=N-B,N=N+6) ;}main(char*U,in"
"t*w[]){;;F(_=A;* _;_++)10-*_&&*_-V&&(*_-92)&&(k[q]=i salnum(l[q]=*_),"
"q++);M=47;*(E=N- 6)=64;E[1]=289;E[2]=270336;F(E[3]=3 2782;E<N;E=E+6){"
"H()o(1048560,<<, >>,4,>>4,1)o(+489335,>>,<<,1,,2)o(9 78670,<<,>>,1,>>"
"1,2)o(+65535,>>, <<,4,,1)if(8192&*E){F(N=B;E>B;E=B+E [5])*N++=E-B;F(;"
"N>B;){h=*(E=B+*- -N);H()s=~(E[1]|h|h<<1);u=~(E[2]|h| h<<4);r=l;_=D;d="
"1;a=2;O=8;F(q=74 ;q;q--){F(b=0;b<72;b++){h=+1<<(q-1) /14*4+(b-1)/18;j"
"=b?(!(b%18)&&u&h )|h&f|(!(q%14)&&s&h)?1:0:2;if(O<3)O ?j?j-1&&(O-2&&d-"
"-,*R=34,O=2):(*_ ++=O-2?l[d]?l[d++]:(d=t,O=e=3,34):( O=1,34)):j||(*_+"

                  "+=d<t?l[d++]:(O= 1,d=0,34));else{if(O<6)if(j){j-2|e"
                  "||(_=R,O-4?d--:M -_[-1]||(_[-1]=l[d++],O=3));c=0;if"
                  "(k[d]&k[d-1])F(; k[d-1];++c)d--;!d||((h=l[d])^l[d-1"
                  "])+k[d]||!(+40-( h&62)&&h-125)||(c=1,d--);c-1||(c=2"
                  ",d--);c&&(_[-c]= M,_[1-c]=T,O=4);j-2|e||(*_++=+92);"
                  "}else{h=*_++=O-4 ?O-5?l[d++]:(O=3,M):(O=5,T),(_[-1]"
                  "&&(35-h||!(a=+1) ))||(O=7,*(R=Q=_-(1))=M);}else{j?O"
                  "-7||(O=6,_[-1]=5 9):(*_++=a-2?O-6?O-7?126&*++r:(O=8"
                  ",T):(O=7,M):(a=0 ,l[d]-100?(e=1,O=0):(e=0,O=3,35)))"
                  ";if(e==1){F(r=A= l+d;35-*A;++A)*A-M&&*A-T||U-1&&(*A"
                  "=V);d=d+A-r;if(U -1){*A=0;F(j=2;13499>j&&(sprintf(l"
                  ",r+1,j,j,O=j+75, w[1]),j=O,!system(l)););exit(j<+13"
                  "499);}t=d+9;_[-1 ]=l[++d];}a-1|+j-2||(R-Q<3?(*(Q<R?"
                  "R-1:R)=*Q=*R=59) :(*R=M,R[-1]=T),a=2);}}j?(*_++=j-2"
"?V:10,R):(R=_-1) ;}}R[-1]=T;*R=M;* _++=10;F(R=D;putchar(*R)&&_>++R;);"
"}}};O-b-f-u-s-c- a-t-e;}",*_,*R,*Q ,D[9999],*r,l[9999],T=42,M,V=32;/*n
*/long*E,k[9999], B[1<<+21],*N=B+/* */1234567,q=0,h=3,j=2,O,b,f,u,s,c,a
,t,e,d;C(){F(h=N[ 3];(B[h]&&+memcmp (N,B+B[h],L4));h=B[h]+4);B[h]||(B[h
]=N-B,N=N+6);}/*i */main(char*U,int *w[]){;;F(_=A;*_;_++)10-*_&&*_-V&&(
*_-92)&&(k[q]=/*a */isalnum(l[q]=*_ ),q++);M=47;*(E=N-6)=64;E[1]=289;E[
2]=270336;F(E[3]= 32782;E<N;E=E+6){ H()o(1048560,<<,>>,4,>>4,1)o(+/*933
*/489335,>>,<<,/* */1,,2)o(978670/* */,<<,>>,1,>>1,2)o(+65535,>>,<<,4,,
1)if(8192&*E){F(N =B;E>B;E=B+E[5])* N++=E-B;F(;N>B;){h=*(E=B+*--N);H()s
=~(E[1]|h|h<<1);u =~(E[2]|h|h<<4);r =l;_=D;d=1;a=2;O=8;F(q=74;q;q--){F(
b=0;b<72;b++){h=+ 1<<(q-1)/14*4+(b- 1)/18;j=b?(!(b%18)&&u&h)|h&f|(!(q/*
*/%14)&&s&h)?1:0: 2;if(O<3)O?j?j-/* */1&&(O-2&&d--,*R=34,O=2):(*_++=O-2
?l[d]?l[d++]:(d=t ,O=e=3,34):(O=1/* */,34)):j||(*_++=d<t?l[d++]:(O=1,d=
0,34));else{if(O<
6)if(j){j-2|e||(_ =R,O-4?d--:M-_[-1 ]||(_[-1]=l[d++], O=3));c=0;if(k[d]
&k[d-1])F(;k[d-1] ;++c)d--;!d||((h= l[d])^l[d-1])+k[d ]||!(+40-(h&62)&&
h-125)||(c=1,d--) ;c-1||(c=2,d--);c &&(_[-c]=M,_[1-c] =T,O=4);j-2|e||(*
_++=+92);}else{h= *_++=O-4?O-5?l[/* */d++]:(O=3,M):(O =5,T),(_[-1]&&(35
-h||!(a=+1)))||(O =7,*(R=Q=_-(1))=M );}else{j?O-7||(O =6,_[-1]=59):(*/*
*/_++=a-2?O-6?O-7 ?126&*++r:(O=8,T) :(O=7,M):(a=0,l[d ]-100?(e=1,O=0):(
e=0,O=3,35)));if( e==1){F(r=A=l+d/* */;35-*A;++A)*A-M &&*A-T||U-1&&(*A=
V);d=d+A-r;if(U-1 ){*A=0;F(j=2;/*49 */13499>j&&(/*rin */sprintf(l,r+1,j
,j,O=j+75,w[1]),j =O,!system(l));); exit(j<+13499);}t =d+9;_[-1]=l[++d]
;}a-1|+j-2||(R-Q< 3?(*(Q<R?R-1:R)=* Q=*R=59):(*R=M,R[ -1]=T),a=2);}}j?(
*_++=j-2?V:10,R): (R=_-1);}}R[-1]=T ;*R=M;*_++=10;F(R =D;putchar(*R)&&_
>++R;);}}};O-b-f- u-s-c-a-t-e;}/*.* dbhn.Lhnd.$d:rdd. ,n.,d.$d,$dp.$r>*
..*b.b:bb.b.b.,b* .":bh`r*@<,*^,*R, *P,DZ8888\,*r,lZ8 888\,T<42,L,V<2*/
```

これを繰り返していき、最後はクリアの盤面になる。

```
$ tail -75 out






                  #define/**/F/***/for/*A*//*ddfhnd.* *.F.***.fnr.*@**/
                  #define/***/H()f=*E<<4|*E,f=~(f|f<< 1|E[3]|E[1]|E[1]\
                  <<4|E[2]|E[(2)]<<(1));/*ddfhnd.***. H((f<*D<<4|*D,f*/
                  #define/***/I(x,d)F(;s;C()){s=s^(b= s&s-1^s);F(N[4]=\
                  q=0;q<4;q++)N[q]=E[q];N[5]=E-B;N[d] ^=+b^(b)x;}/*(f*/
                  #define/**/o(p,t,i,m,a,l)u=(f&p)i(m );s=u&E[3];I(t(m\
                  ),3)s=(u)a&E[l];I(t(m),l)u=u>>5-m&u ;s=u&E[3-l];I(t(\
                  m),3-l)s=(u)a&*E;I(t(m),(0))/*<<0|D Z2\|DZ0\|DZ0\<<*/
                  ;;char*A="#define/**/F/***/for/*A*/ #define/***/H()f"
                  "=*E<<4|*E,f=~(f|f<<1|E[3]|E[1]|E[1 ]<<4|E[2]|E[(2)]"
                  "<<(1));#define/***/I(x,d)F(;s;C()) {s=s^(b=s&s-1^s)"
                  ";F(N[4]=q=0;q<4;q++)N[q]=E[q];N[5] =E-B;N[d]^=+b^(b"
                  ")x;}#define/**/o(p,t,i,m,a,l)u=(f& p)i(m);s=u&E[3];"
                  "I(t(m),3)s=(u)a&E[l];I(t(m),l)u=u"
                  ">>5-m&u;s=u&E[3-l];I(t(m),3-l)s=(u )a&*E;I(t(m),(0)"
                  ")#;/*echo/Line/%d;sed/-n/-e/%d,%dp /%s>*//*c.c;cc/c"
                  ".c/-c*/#;char*A=,*_,*R,*Q,D[9999], *r,l[9999],T=42,"
                  "M,V=32;long*E,k[9999],B[1<<+21],*N =B+1234567,q=0,h"
                  "=3,j=2,O,b,f,u,s,c,a,t,e,d;C(){F(h =N[3];(B[h]&&+me"
                  "mcmp(N,B+B[h],L4));h=B[h]+4);B[h]| |(B[h]=N-B,N=N+6"
                  ");}main(char*U,int*w[]){;;F(_=A;*_ ;_++)10-*_&&*_-V"
                  "&&(*_-92)&&(k[q]=isalnum(l[q]=*_), q++);M=47;*(E=N-"
                  "6)=64;E[1]=289;E[2]=270336;F(E[3]= 32782;E<N;E=E+6)"
                  "{H()o(1048560,<<,>>,4,>>4,1)o(+489 335,>>,<<,1,,2)o"
                  "(978670,<<,>>,1,>>1,2)o(+65535,>>, <<,4,,1)if(8192&"
                  "*E){F(N=B;E>B;E=B+E[5])*N++=E-B;F( ;N>B;){h=*(E=B+*"
                  "--N);H()s=~(E[1]|h|h<<1);u=~(E[2]| h|h<<4);r=l;_=D;"

"d=1;a=2;O=8;F(q= 74;q;q--){F(b=0;b <72;b++){h=+1<<(q-1)/14*4+(b-1)/18"
";j=b?(!(b%18)&&u &h)|h&f|(!(q%14)& &s&h)?1:0:2;if(O<3)O?j?j-1&&(O-2&&"
"d--,*R=34,O=2):( *_++=O-2?l[d]?l[d ++]:(d=t,O=e=3,34):(O=1,34)):j||(*"
"_++=d<t?l[d++]:( O=1,d=0,34));else {if(O<6)if(j){j-2|e||(_=R,O-4?d--:"
"M-_[-1]||(_[-1]= l[d++],O=3));c=0; if(k[d]&k[d-1])F(;k[d-1];++c)d--;!"
"d||((h=l[d])^l[d -1])+k[d]||!(+40- (h&62)&&h-125)||(c=1,d--);c-1||(c="
"2,d--);c&&(_[-c] =M,_[1-c]=T,O=4); j-2|e||(*_++=+92);}else{h=*_++=O-4"
"?O-5?l[d++]:(O=3 ,M):(O=5,T),(_[-1 ]&&(35-h||!(a=+1)))||(O=7,*(R=Q=_-"
"(1))=M);}else{j? O-7||(O=6,_[-1]=5 9):(*_++=a-2?O-6?O-7?126&*++r:(O=8"
",T):(O=7,M):(a=0 ,l[d]-100?(e=1,O= 0):(e=0,O=3,35)));if(e==1){F(r=A=l"
"+d;35-*A;++A)*A- M&&*A-T||U-1&&(*A =V);d=d+A-r;if(U-1){*A=0;F(j=2;134"
"99>j&&(sprintf(l ,r+1,j,j,O=j+75,w [1]),j=O,!system(l)););exit(j<+134"
"99);}t=d+9;_[-1] =l[++d];}a-1|+j-2 ||(R-Q<3?(*(Q<R?R-1:R)=*Q=*R=59):("
                  "*R=M,R[-1]=T),a"
"=2);}}j?(*_++=j- 2?V:10,R):(R=_-1) ;}}R[-1]=T;*R=M;* _++=10;F(R=D;put"
"char(*R)&&_>++R; );}}};O-b-f-u-s-c -a-t-e;}",*_,*R,* Q,D[9999],*r,l[/*
*/9999],T=42,M,V= 32;long*E,k[9999] ,B[1<<+21],*N=B/* */+1234567,q=0,h=
3,j=2,O,b,f,u,s,c ,a,t,e,d;C(){F(h= N[3];(B[h]&&+/*mc */memcmp(N,B+B[h]
,L4));h=B[h]+4);B [h]||(B[h]=N-B,N= N+6);}main(char*U ,int*w[]){;;F(_=A
;*_;_++)10-*_&&*_ -V&&(*_-92)&&(k[q ]=isalnum(l[q]=*_ ),q++);M=47;*(E=N
-6)=64;E[1]=289;E [2]=270336;F(E[3] =32782;E<N;E=E+6) {H()o(1048560,<<,
>>,4,>>4,1)o(+/*9 */489335,>>,<<,/* */1,,2)o(978670/* */,<<,>>,1,>>1,2)
o(+65535,>>,<<,/* */4,,1)if(8192&*E ){F(N=B;E>B;E=B+E [5])*N++=E-B;F(;N
>B;){h=*(E=B+*--N );H()s=~(E[1]|h|h <<1);u=~(E[2]|h|h <<4);r=l;_=D;d=1;
a=2;O=8;F(q=74;q; q--){F(b=0;b<72;b ++){h=+1<<(q-1)/* *//14*4+(b-1)/18;
j=b?(!(b%18)&&u&h )|h&f|(!(q%14)&&s &h)?1:0:2;if(O<3) O?j?j-1&&(O-2&&/*
*/d--,*R=34,O=2): (*_++=O-2?l[d]?l[ d++]:(d=t,O=e=3/* */,34):(O=1,34)):
j||(*_++=d<t?l[/*                                     */d++]:(O=1,d=0/*
*/,34));else{if(O <6)if(j){j-2|e||(_=R,O-4?d--:M-_[-1 ]||(_[-1]=l[d++],
O=3));c=0;if(k[d] &k[d-1])F(;k[d-1];++c)d--;!d||((h=l [d])^l[d-1])+k[d]
||!(+40-(h&62)&&h -125)||(c=1,d--);c-1||(c=2,d--);c&& (_[-c]=M,_[1-c]=T
,O=4);j-2|e||(*/* */_++=+92);}else{h=*_++=O-4?O-5?l[d ++]:(O=3,M):(O=5,
T),(_[-1]&&(35-/* */h||!(a=+1)))||(O=7,*(R=Q=_-(1))=M );}else{j?O-7||(O
=6,_[-1]=59):(*/* */_++=a-2?O-6?O-7?126&*++r:(O=8,T): (O=7,M):(a=0,l[d]
-100?(e=1,O=0):(e =0,O=3,35)));if(e==1){F(r=A=l+d;35- *A;++A)*A-M&&*A-T
||U-1&&(*A=V);d=d +A-r;if(U-1){*A=0;F(j=2;13499>j&&/* */(sprintf(l,r+1,
j,j,O=j+75,w[1]), j=O,!system(l)););exit(j<+13499);}t =d+9;_[-1]=l[++d]
;}a-1|+j-2||(R-Q< 3?(*(Q<R?R-1:R)=*Q=*R=59):(*R=M,R[- 1]=T),a=2);}}j?(*
_++=j-2?V:10,R):( R=_-1);}}R[-1]=T;*R=M;*_++=10;F(R=D ;putchar(*R)&&_/*
*/>++R;);}}};O-b- f-u-s-c-a-t-e;}/*.*dbhn.Lhnd.$d:rdd .,n.,d.$d,$dp.$r>
*..*b.b:bb.b.b.,b *.":bh`r*@<,*^,*R,*P,DZ8888\,*r,lZ8 888\,T<42,L,V<2*/
```

viで開いて、縦の行数を75行に合わせてCtrl+Fで見ると見やすい、とのこと。

## 解説

コードは、主題のパズルの形状に整形されている。
他の遊びとしては、`O,b,f,u,s,c,a,t,e ,d`や`O-b-f-u -s-c-a-t-e;`が仕込まれている。

75行ごとのコードは、基本的にはgiljade.cと同じ挙動をするけれど、以下の違い（改善）があるとのこと。

* giljade.cはレイアウトに違反がある（10行目に`\`がある）が、75行ごとのコードはそういう違反がない。
* giljade.cをビルドして得られるバイナリはgiljade.cを`fopen`するが、75行ごとのコードはチートせず真面目にQuineする。
* 75行ごとのコードのほうがコメントが多い（といってもパディングのためのゴミばかり）。

75行ごとのコードを全自動でテストする機能がgiljade.cに実装されているらしい。

`#include <stdio.h>`なしで`fopen()`を呼んでいるため、そのままではポインタが暗黙的に`int`にキャストされて動かない。
`-m32`を与えれば動く。
64ビットのまま動かすためには、コード中に1箇所ある`16`を`32`に置き換えればよい。

---

hint.textでは、`s=s^(b=s&s-1^s)`という式の意味を解き明かすことが求められている。
実のところ、ビット演算の知識があればそれほど難しくはない。
`s&s-1`は一番下の位置にある1のビットを消すイディオム。
`s&s-1^s`はそれとのxorなので、つまり一番下のビットだけ取り出す。
たとえば`s == 0b1111_1000`なら、`(s&s-1) == 0b1111_0000`になり、`(s&s-1^s) == 0b0000_1000`となる。
ということで、`s=s^(b=s&s-1^s)`は、変数`s`の中で一番下にある1のビットを`b`に移しつつ、`s`からは消すという式である。

このビット操作から、おそらく盤面はビット列で表現されているだろうと当たりがつく。
そして`*E=64; E[1]=289; E[2]=270336; E[3]=32782`という初期化に注目し、それぞれの数値を2進数にして観察する。

```
    64 : 0000 0000 0000 0100 0000
   289 : 0000 0000 0001 0010 0001
270336 : 0100 0010 0000 0000 0000
 32782 : 0000 1000 0000 0000 1110
```

64は1の数が1個、289は3個、270336は2個、32782は4個。そしてどれも同じ位置にない。
そして、ピースの形状を考えると、次の仮説が成り立つ。

* `*E=64`は2x2のピースの位置を表している
* `E[1]=289`は1x2（縦長）のピースの位置を表している
* `E[2]=270336`は2x1（横長）のピースの位置を表している
* `E[3]=32782`は1x1のピースの位置を表している

これを元に読みすすめると、`s`は空きマスの位置を表すビット列になっていて、`s=s^(b=s&s-1^s)`は空きマスを1つずつ取り出して処理するための式であるとわかる。
