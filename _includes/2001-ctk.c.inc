#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;unistd.h&gt;
#include &lt;sys/time.h&gt;
#include &lt;signal.h&gt;
#define m(b)a=b;z=*a;while(*++a){y=*a;*a=z;z=y;}
#define h(u)G=u&lt;&lt;3;printf(&quot;\e[%uq&quot;,l[u])
#define c(n,s)case n:s;continue
char x[]=&quot;((((((((((((((((((((((&quot;,w[]=
&quot;\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b&quot;;char r[]={92,124,47},l[]={2,3,1
,0};char*T[]={&quot;  |&quot;,&quot;  |&quot;,&quot;%\\|/%&quot;,&quot; %%%&quot;,&quot;&quot;};char d=1,p=40,o=40,k=0,*a,y,z,g=
-1,G,X,**P=&amp;T[4],f=0;unsigned int s=0;void u(int i){int n;printf(
&quot;\233;%uH\233L%c\233;%uH%c\233;%uH%s\23322;%uH@\23323;%uH \n&quot;,*x-*w,r[d],*x+*w
,r[d],X,*P,p+=k,o);if(abs(p-x[21])&gt;=w[21])exit(0);if(g!=G){struct itimerval t=
{0,0,0,0};g+=((g&lt;G)&lt;&lt;1)-1;t.it_interval.tv_usec=t.it_value.tv_usec=72000/((g&gt;&gt;
3)+1);setitimer(0,&amp;t,0);f&amp;&amp;printf(&quot;\e[10;%u]&quot;,g+24);}f&amp;&amp;putchar(7);s+=(9-w[21]
)*((g&gt;&gt;3)+1);o=p;m(x);m(w);(n=rand())&amp;255||--*w||++*w;if(!(**P&amp;&amp;P++||n&amp;7936)){
while(abs((X=rand()%76)-*x+2)-*w&lt;6);++X;P=T;}(n=rand()&amp;31)&lt;3&amp;&amp;(d=n);!d&amp;&amp;--*x&lt;=
*w&amp;&amp;(++*x,++d)||d==2&amp;&amp;++*x+*w&gt;79&amp;&amp;(--*x,--d);signal(i,u);}void e(){signal(14,
SIG_IGN);printf(&quot;\e[0q\ecScore: %u\n&quot;,s);system(&quot;stty echo -cbreak&quot;);}int main
(int C,char**V){atexit(e);(C&lt;2||*V[1]!=113)&amp;&amp;(f=(C=*(int*)getenv(&quot;TERM&quot;))==(
int)0x756E696C||C==(int)0x6C696E75);srand(getpid());system(&quot;stty -echo cbreak&quot;
);h(0);u(14);for(;;)switch(getchar()){case 113:return 0;case 91:case 98:c(44,k
=-1);case 32:case 110:c(46,k=0);case 93:case 109:c(47,k=1);c(49,h(0));c(50,h(1
));c(51,h(2));c(52,h(3));}}