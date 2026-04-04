#include    &lt;stdio.h&gt;
#include   &lt;string.h&gt;
#include    &lt;fcntl.h&gt;
#include &lt;sys/stat.h&gt;
#include &lt;sys/mman.h&gt;

#define 		W 48
#define 		b &#39;\b&#39;
#define 		q R[2]==
#define			R __DATE__
#define 		n 1073741824ul
#define 		L (V) l[++S] &lt;&lt; b * S
#define 		D (R[7]-W)*1000+(R[b]-W)*100+(R[9]-W)*10+R[10]-W
#define k q&#39;p&#39;?9:q&#39;y&#39;?5:q&#39;n&#39;?(R[1]==&#39;u&#39;?6:1):q&#39;b&#39;?2:q&#39;r&#39;?(*R==&#39;M&#39;?3:4):q&#39;g&#39;?8:q&#39;t&#39;?10:q&#39;v&#39;?11:q&#39;l&#39;?7:12
#define 		Z B |= (V) *l++ &lt;&lt; u++ * b;
#define 		g for(a=0;a&lt;5;a++)
#define			o     25
#define 		G a+

typedef unsigned long			       long V;V _=1ULL   &lt;&lt;               63;  V d=1UL&lt;&lt;037;                     unsigned int x[
n/16]; V m,F,u,T,a,r,H			      ,B,I; int main(int P,               char *U[]){union{V                     K[o];  unsigned
char E[1]; }c ;   const                      unsigned char *f, *l ;               V X,i,e,z,A,Q,M=-~9,                   Y; struct  stat
J; void *p; r++ ;V t,y=                     0,v[5];const void*j[ ]=               {&amp;&amp;laajavuori,&amp;&amp;ruka,                  &amp;&amp;puijo,&amp;&amp;lahti
,&amp;&amp;vuokatti,&amp;&amp;virpiniemi,                  &amp;&amp;ounasvaara};V N[o]={r,		  P,6,M,15,21, 28,36,45,                 55,2,14, 27,41,
56,b,o,43, 62,18,39,61,20,                44};for(;U[r][a]; a++)T=T               *M+U[!u][a]-W; T &gt;&gt;=P ;                X=open(U[--P],F
); V w[o]= {_|d|32776,d|r,               _|32896,_| d |32897,_|d|M,               32778,_+128,_ |32770,_ |		 32771,_ |32905,
_ |139, d| 32907 ,   d|M,d|	         32777,136,138,_|32777,_|d|               32897,d|1,32907,_|d|32768	         ,_|32906,32898,
r,_}; i=  fstat (X,&amp;J); V O             [o ]={M,7,11,17,18,3,5,16,b               ,21,24,4,15,23,19,13, 12,P,	         20,14,22,9,6,r}
; Y=H=J./*****/ st_size; p=            mmap(/*TODO: FIX THIS */NULL               ,H,r,r,X, u  ); memset(&amp;c,0,	         200 ) ; z = b &amp;
7; r =  T/11     [O]; l=p ;           for(I=2; I&lt;=  Y; x[I++&gt;&gt;4]|=(               1&lt;&lt;(I&amp;4[N])) ); goto C; ruka:	         for(I=b*3; I--;
) { g v[ a ] =c   .K[a]^c.K[G        b-3]^ c.K[G    M] ^ c.K[G 15]^               c.K[G M+M] ;  g  {t =  v[(G 4)         %5]^(v[(G   1)%
5]&lt;&lt;1|v[(G 1  )   %5] &gt;&gt; &#39;?&#39;) ;     for(A =0; A&lt;    o; A+= 5)c.K[ G               A]^=t;}t=c  .K[   1] ; for  ( a        =0; a-24; a ++)
A =O[a],*v =  c    .K[A],c.K[A]    =t&lt;&lt;N[a]|t&gt;&gt;     (0100-N[a]),t=*               v;for(A    =!o;    A^o; A += 5 )       {g v[a] = c.K[G
A]; g c .K[G A]     ^= ~v[( G 1)   %5]&amp;v[(G P)      %5];}c.K[!1] ^=               w[I];    } goto     *j[Q];C:for(       I=P; I   &lt;=Y/P;
y=I*P) {  while      ( y &lt;= Y   ) x[y&gt;&gt;4]&amp;=~(1      &lt;&lt;(y&amp;O[12])), y               +=I; do    I++;      while(~x[I&gt;&gt;4     ]&amp;(1&lt;&lt;(I&amp;15)));
}if(H&lt;z){ while       (H-- )    Z goto $ ;  }       if (z){ H -= z;               Q= P; while(z--       )Z c.K[F]^=B;    B=u=i; if(o-r==
++F){goto*j[!!b        ]; puijo:F=!o; } }m=H        /b; e=H - m*b ;               for(; i&lt;m; l+=b        ){i++; V S=~    -!W; t=/*foob*/
L|L|L|L|L|L|L|L         ;c.K[F] ^= t; if(++F        ==o-r) { Q=-~P;               goto * j [ !0];         lahti: F=!r ;  }}while  (e--)Z
$: c.K[F]^=(B ^         ((V) ((V)(P | 1 &lt;&lt;          P)&lt;&lt; u* b) )) ;               Q^=Q; c.K[o-r-1          ]^=w[ ~ -o ]; goto*j[-~(P-P)]
; laajavuori: f          =c.E; _= d=I =~-P          ; a = D; Q = k;               goto*j[4+(23*Q/           9+(Q&gt;P?a-P:a --)+(R[4]==32?0
:((R[4]-W)*M))+           R[5]-45+a  /4+a           /0620-a/0x64)%	          3]; ounasvaara:            for ( I = 2 ;  I&lt;= Y; I ++)
if (x[I&gt;&gt;4]&amp; (1            &lt;&lt;(15&amp; I) ) )            printf( &quot;%llu &quot;               , I);goto http;             virpiniemi:for( I= !I; I-T
; ){ char s[30]             ={W,W,&#39;\0&#39;}             ;X=!!W;for(e=f[               I++]; e^0; e&gt;&gt;=              4)P = e &amp; 15, s[X--]= P &lt;
M ? W | P : P +	            &#39;W&#39;; printf	            ( &quot;%s&quot;  , s); }               /*  addr(ioccc)               */ http://www.ioccc.org/
return /******/				            puts(&quot;&quot;); /***/               vuokatti:for(;I                ^&#39;^&#39;;++I,printf(&quot;%llx &quot;
,_),t =_+d,_=d,                                     d = t) ;   goto               http;/*m=  o/i;                  v[a]=a+n;return 0;*/}
























