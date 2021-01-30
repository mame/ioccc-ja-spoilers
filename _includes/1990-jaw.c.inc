#define C char
#define F X,perror(&quot;oops&quot;),1
#define G getchar()
#define I ;if(
#define P putchar
#define Q 256
#define W ;while(
#define X return 0
#include&lt;stdio.h&gt;
long M,N,c,f,m,o,r,s,w;y(l){o^=l;m+=l+1;f=f*2+l+(f&gt;&gt;31&amp;1);}int
O,S,e,i,k,n,q,t[69001];b(g){k=4 W g&lt;k)y(P((C)(w&gt;&gt;--k*8)&amp;255));w=0;}C D[Q*Q],h
[Q*Q];main(g,V)C**V;{I**V-97)X,a()W G-10)W(g=G)+1&amp;&amp;g-&#39;x&#39;)if(g-10){I
4&lt;k)b(0)I g&gt;32&amp;g&lt;&#39;v&#39;)w=w*85+g-33,++k;else{I
g-&#39;z&#39;|k)F;w=0;k=5;}}W G-78)I scanf(&quot;%ld%lx E%lx S%lx R%lx &quot;,&amp;M,&amp;N,&amp;c,&amp;s,&amp;r)-5)F
I M){b(g=3-(M-1&amp;3))W g--)y(0);}I(M-N|c-o|s-m|r-f)&amp;4294967295)F;X;}long
g(){C*p I m&lt;f&amp;n&lt;k&amp;&amp;(m=(1L&lt;&lt;++n)-1)||O&gt;=S){O=0;S=fread(D,1,n,stdin)*8 I
S&lt;8)X-1;S-=n-1;}p=D+O/8;q=O&amp;7;O+=n;X,(1&lt;&lt;8-q)-1&amp;*p&gt;&gt;q|m&amp;((15&lt;n+q)*p[2]*Q|p[1]&amp;
255)&lt;&lt;8-q;}a(){C*p=D+Q;G;G;k=G;e=k&gt;&gt;7&amp;1;k&amp;=31 I k&gt;16)F;w=Q
W w--)t[w]=0,h[w]=w;n=8;f=Q+e;i=o=w=g()I o&lt;0)X,1;P(i)W(w=g())+1){I
w==Q&amp;e){W w--)t[w]=0;m=n=8;f=Q I(w=g())&lt;0)X;}c=w
I w&gt;=f)*p++=i,w=o W w&gt;=Q)*p++=h[w],w=t[w];P(i=h[w])W
p&gt;D+Q)P(*--p)I(w=f)&lt;1L&lt;&lt;k)t[w]=o,h[f++]=i;o=c;}X;}