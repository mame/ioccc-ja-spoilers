#define processor x86

#include &lt;stdio.h&gt;
#include &lt;sys/stat.h&gt;

#define l int*
#define F char
 struct stat t;
#define c return
#define I (P+=4,*L(P-4,0))
#define G (signed F)E(*L(P++,0))
#define C(O,D)E (D[B+V(010)/4+O*10])
#define U R[4]=E(V(17)-4),*(l)V(021)=
F       M [99],Q[99],b[9999],*ss,*d=b,*z;
#define O =(n=*(l)V(021),R[4]=E(V(17)+4),n)
#define p(a,b,c) system((sprintf(a,b,k[1]),c)),z
#define                         g (y/010&amp;7)
#define                         R (B+13)
#define           x86           (F*)index\
(ss+V(i                         ),0100)
#define      D(y,n,a,m,i,c      )d+=sprintf( d,y,n,a,m,i,c ),(F*\
      )                         P
      l       B,i,n,a,r,y       ,
      P                         ;
#define     Tr(an,sl,at,or)     l an##i(d,sl){ c at? an##i(d,r):or; } \
l an(d,                         sl){ c \
r=V(014                         )&amp;63,an##i(d,sl); }
#define add(Ev,Gv) Ev(){ i=((a-=16)+C(r,4))/4,(\
Gv?Ev()    :0)   ; } Ev##n(){ a=C(r,5),Ev(); }
Tr(L,r, C(r,3)&amp;&amp;C(r,3)&lt;=d?(l)(((int)B)+d+C(r,4)-C(r,3)):(((int)B)^d)&gt;&gt;24&amp;&amp;--\
r,(l)d) Tr(Run,a,(ss=strcmp((F*)B+C((V(12)&gt;&gt;16),4)+C(--r,0),A(.strtab))?ss:(F\
*)B+C(r ,4),C(r,1)-2),0) add(Sca ,V(-~i)-P+2) add(ru,strcmp(ss+V(i),A(main)))
E(DX) { c *z? DX:DX &lt;&lt;030|(DX&amp;65280)&lt;&lt;010|DX&gt;&gt;8&amp;65280|DX&gt;&gt;24&amp;0377; } l K(k){
c L(E(k [(l)V(17)]),0); } V(v){ c E(B[v]); }


main (char *ck, char **k) {
  exit(E((ck?main((z?(stat(M,&amp;t)?P+=a+&#39;{&#39;?0:3:execv(M,k),a=G,i=P,y=G&amp;255,sprintf(Q,y/&#39;@&#39;-3?A(*L(V(%d+%d)+%d,0)):A(R[%d]),(y&amp;7),&#39;\r&#39;,y/0100-1?0:G),(a+127&amp;&amp;a+&#39;}&#39;&amp;&amp;a+1?(a+61&amp;&amp;a+24&amp;&amp;a+025?(P=a+&#39;H&#39;&amp;&amp;a%061&lt;=0?P:i,D(a&gt;0?&quot;                           R[%d]=E(~-E(R[%d])),\0               U R[%d],\0               R[%d] O,\0                                          U %d,\0R[%d]=0,&quot;+(a&amp;&#39;8&#39;)*3:a  &lt;-  &#39;c&#39;?&quot; %d, %c%s = R[%d], \0    %d, *R=%c%s==R[%d], \0          R[%d]=(int)%c%s,&quot;-a%&#39;w&#39;%&#39;j&#39;*5:&quot;%d,%d,%s=%d,&quot;,a&gt;0?a-&#39;h&#39;?a-49?a&amp;7:g:I:g,a&gt;0?a&amp;7:&quot;&amp; &quot;[a%3%2+1],a+72?Q:A(*R),a&gt;0|a&lt;-99?g:I,0)):(P=i,i=a+61?a+21?E(I):G:0,D(a%&#39; &#39;+29+&quot;P O,\0 U %d,P=%d,&quot;,P,P+i,0,0,0),p(d,&quot;A&#39;&quot;,b))):(n=g-4?g%5-1?a+127?G:I:0:(Scan(),*( x86?processor :d)=0,(int)(ss+V(i))),g%5&lt;2?D(g%5?&quot;    %s=E(~-E(%s)), \0    U %s,&quot;+4*g:&quot;%s=E(E(%s)%c%d),&quot;,Q,Q,&quot;+    -  &quot;[g],n,0):(a=G-&#39;u&#39;?&#39;!&#39;:&#39;=&#39;,D(g-4?&quot;P=%d%c=%s?%d:%d,&quot;:&quot;*R=E(((int(*)(l,l,l))%s)(K(1),K(2),K(3))),P O,&quot;,n,a,Q,P,P+G),p(d,&quot;A&#39;&quot;,b))))):(Run((z=(F*)&amp;ck,stat(k[1],&amp;t),B=(l)mmap(0,i=t.st_size,3,1,open(k[1],2),0))),magic((R[4]=E(B+i/4),run(),P=V(-~i),U 0)),sprintf(M,A(.%s%d),k[1],P),D(&quot;%s %s &#39;-DX=A(%s)&#39; -o %s &#39;-Dmagic=&quot;,X,__FILE__,X,M,fflush(0)))),k):p(M,A(rm -f .%s*),M),*R)));
}