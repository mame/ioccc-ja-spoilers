#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;
#include &lt;string.h&gt;
#include &lt;ctype.h&gt;
#define t(x) typedef x
#define G return
#define Y(x) x;x
#define e(s) exit(s);
#define b(x,o) x o x
#define Z while
#define y fclose
#define end static

t(signed)char U;t(struct) b(O,);

t(						    U*)
H;						    t(O
*)						    *o;
struct O{ O* l, **h; void* L; } ; t(int)i; i P(U g) { G
isspace(g); } H D(H s){H p,r;if(!s)G 0;for(p=(H)s;*p &amp;&amp;
!P(*p); p++); if(r=malloc(p-s))for(p=r; *s&amp;&amp;! P(*s);p++
,s++)b(*,p=) s; G r;} void l(o p,O*x){*(o)x=* p; *p=x;}
#define m(x) do{ if(!(q = malloc(sizeof(O)))) e(1)q-&gt;l\
=0						    ;q\
-&gt;						    L=\
		    x ; } while (0)
		i(*R)(i) =putchar;i h(
	    o f,H d,U c){O*q; f+=c;Z(d&amp;&amp;*d)
	  { m(D(d)); l(f++, q); Z(*d &amp;&amp; !P(*d
	)) d++; Z(*d &amp;&amp; P(*d)) d++; } G b(,0);}
     void k() { static U b(c,;) ?R(c):(c=&#39;\n&#39;); }
     i main (i Q,		     H *l){static o
   X;i t,j;				   switch (Q
 ){ case				       1: { H
 *p, I						 [] ={
&quot;aH&quot;						   &quot; &quot;
&quot;B&quot;						    &quot;0&quot;
&quot; &quot;						    &quot;B&quot;
&quot;&quot;						    &quot;B&quot;
&quot;&quot;						    &quot; &quot;
&quot;B&quot;						    &quot;,&quot;
&quot; &quot;						   &quot;,&quot;
 &quot; `&quot;						  &quot;0 &quot;
 &quot;b0 &quot;						 &quot;@, &quot;
  &quot;0 Hb,&quot;				      &quot; B2 &quot;
   &quot;H0 b, B b&quot;				&quot;H HB b`, &quot;
     &quot;H, @ 2 `, &quot;		     &quot;@2 H2 BH Bb&quot;
      &quot; b@&quot;,&quot;AH B0 BB B, , `0 b0 @, 0 Hb, B2 H0&quot;
	&quot; b, B bH HB b`, H, @ 2 `, @2 H2 BH Bb&quot;
	  &quot; b@&quot;,&quot;0bHb, HbH `H2 @b, @H @0 B@ &quot;
	      &quot;b@ bH0 bHB&quot;,&quot;.HHH&quot;,&quot;?`H0&quot;,
		&quot;,b@b,&quot;,&quot; +&quot;, 0}; p=I;

		    if (!(X=calloc(
		6&lt;&lt;6,sizeof(O*))))e(1)
	    do{h(X,(*p)+1,**p);} Z(*(++p));
	  D: if ((t = getchar()) &gt;= 0) { k();
	goto u;}e(0)}case 2:{U *p,e[33]; b(i, )
     ,w;for(i=0;i&lt;34;i++)i[e]=b(0,;w=);p=e; Z(1){
    t = (w == 200) ?		     10:getchar();
   switch(t) {				   case 0xa:
 case EOF:				       if(w--
 ){R(1[l					 ][0])
;for(i						   =0,
p=e;i						    &lt;=w
;i+=						    6){
R (						    *p+
&#39;+&#39;						    );*
p++						    =0;
 ;}						    R(
 0xa						   );w
  =-1						 ;}p=
    e-					      1;case
      32:				    if (t&lt;0) e(
	0)				    break; /*/*
	  /*/				    default : *
	    p
		    |=(001&lt;&lt;(w%6));
		}if((++w%6)==0)p++;}e(
	    0)}case 3:{O*u,*q,*x;U s[0400];
	  i i;FILE*F; j:j=1;if(!(X=calloc(6&lt;&lt;
	6,sizeof(O*)))) e(1) if(!(F=fopen(j[l],
     &quot;r&quot;)))e(1)Z(fgets(s,j&lt;&lt;8,F))(*s)&amp;&amp;h(X,s+j,*s
    );j=b(i,=)&amp;0xff;		     i:u=0;x=X[i];
   Z(x){q=Y(*(				   o)x)=Y(u)
 =Y(x)=q;}				       i[X]=u
 ;i=(i-2					 +9)%(
sizeof						   (s))
;if(i						    ^j)
goto						    i;;
y(F)						    ; }
case						    4:{
end						    i i
 ;if						    (!
 X){						   i=j
  =1;						 goto
    j;}					      if(i){O
      **x				    ,*m=*(x=X);
	do*				    x=1[x];Z(++
	  x&lt;X				    +255);*x=m;
	    }		
		    }default:if(!(t
		=*2[l]++))break;case 0
	    :{H p;i i,c,n;O *a;u:c=n=0;Z(c&lt;
	  10){c++b(;,n:n++)}if(n&lt;=&#39;&amp;&#39;){c-=(n%
	7);goto n;}else n++;a=*(X+t);Z(a){p=(H)
     a-&gt;L;Z(*p&gt;=n){i=(*p++)-n;for(c=0;c&lt;6;c++,i=i
     &gt;&gt;1){ if(b(!, i		     &amp;&amp;)(*p &gt;= n))
   break;R(32+				   (i&amp;1)*3);
 }}R(10);a				       =a-&gt;l;
 }if(Q&lt;2					 )goto
D;if(*						   l[2
]){R(						    10)
;main						    (4,
l);						    }}}
Z(Q						    ++&lt;
1){						    X+=
 t;						    if
 ((t						   &amp;7)
  &gt;3)						 goto
    i;					      else {
      t--				    ;putchar(t)
	;t				    =(t&amp;7)?t:t-
	  &#39;*&#39;				    ;}}exit(0);
	    }