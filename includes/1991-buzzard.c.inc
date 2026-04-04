#include &lt;stdio.h&gt;
#define X(s) (!(s&amp;3)-((s&amp;3)==2))
#define W while
char Z[82][82],A,B,f,g=26;z(q){return atoi(q);}m(d,l){return
Z[   B       +    X      (   f     +
3) * d+l *X(f+ 2 )][ A+X ( f ) * d +
l* X           (     f     + 3 ) ] ;}int
h= 0;D(p,s)char*s; {W(h&gt;&gt;3&lt;p&gt;&gt; 3 ) {putchar(&#39;\t&#39;
);           h =       (       h   +8
)&amp;~7 ;}W(h &lt; p ){putchar(&#39; &#39;);++h; }(void)printf(
&quot;%s&quot;   ,   s                 )     ;h+=strlen(s);}main(x,a)char **a; {
# define P(x) (x?(5-(x))*(6-(x ))/2:11)
int b; { char b[256],i,  j=0;  FILE*F;F=fopen(x-1?a[1]:&quot;buzzard.c&quot;,&quot;r&quot;);W(
fgets( b ,256 ,F)){for(i=0;b[ i];++ i)
Z[j][i ] =( b [     i   ]     ==&#39; &#39;?1:2*(b[i]==(x&gt;2?*a[2]:&#39;\\&#39;)));++j;}fclose
(F);}A   =4 ; B = 3 ; f = 1;x &gt;3? A=z(a[3]),B=z(a[4]):0;b=&#39;\n&#39;;do{if(b==&#39;\n&#39;
){int y ,     s , d , p   , q       ,i;for
(y=-11; y&lt;= 11;++ y){ for(s = 1 ,d=0;s+3;s-=2){for
(;d!=2    +       3   * s     ;     d+=s){
if(m(d,0) !=1 ){p=P (d) ;if (abs( y )
   &lt;p&amp;&amp;   !   m       (       d   , 0 )||abs(y)&gt;p)break;for
(i  =-p;i&lt;p;++i)D(g+i*2,&quot;--&quot;);D(0,&quot;\-&quot;);break;}if(d==5)continue;
p=P(d+1);q=P(d);if
(abs(y)		&gt;q)continue;if 
(abs(y)		&lt;p)D(g-s*(2*p+1),&quot;|&quot;);else if(m(d,s)){if
(abs(y)		&lt;=p)for(i=(s==1?-q:p);i!=(s==1?-p:q);
(abs(y)		),++i)D(g+2*i+(s==-1),&quot;--&quot;);}else if
(abs(y)		==p)D(g-s*(2*p+1),&quot;|&quot;);else D(g-
(abs(y)		*s*2),(s==1)^(y&gt;0)?&quot;\\&quot;:&quot;/&quot;);}d-=s;}puts(
&quot;&quot;);h=0;}}f+=(b==&#39;r&#39;)-(b==&#39;l&#39;);f&amp;=3;if(b==&#39;f&#39;){if(!m(1,0))continue;
A+=X(f);B+=X(f-1);}}W((b=getchar())!=-1&amp;&amp;m(0,0)==1);return 0;}