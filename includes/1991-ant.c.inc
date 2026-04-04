#include &lt;ctype.h&gt;
#include &lt;curses.h&gt;
#define T isspace(*(t=Z(p)))&amp;&amp;
#define V return
#define _ while
int d,i,j,m,n,p,q,x,y;char*c,b[BUF],*f,*g=b,*h,k[]=&quot;hjklHJKL[]tbixWRQ&quot;,*t;
char*Z(a){if(a&lt;0)V b;V b+a+(b+a&lt;g?0:h-g);}P(a)char*a;{V
a-b-(a&lt;h?0:h-g);}S(){p=0;}bf(){n=p=P(c);}Q(){q=1;}C(){clear();Y();}
G(){t=Z(p);_(t&lt;g)*--h= *--g;_(h&lt;t)*g++= *h++;p=P(h);}B(){_(!T b&lt;t)--p;_(T
b&lt;t)--p;}M(a){_(b&lt;(t=Z(--a))&amp;&amp;*t-&#39;\n&#39;);V
b&lt;t?++a:0;}N(a){_((t=Z(a++))&lt;c&amp;&amp;*t-&#39;\n&#39;);V
t&lt;c?a:P(c);}A(a,j){i=0;_((t=Z(a))&lt;c&amp;&amp;*t-&#39;\n&#39;&amp;&amp;i&lt;j){i+= *t-&#39;\t&#39;?1:8-(i&amp;7);++a;}V
a;}L(){0&lt;p&amp;&amp;--p;}R(){p&lt;P(c)&amp;&amp;++p;}U(){p=A(M(M(p)-1),x);}
D(){p=A(N(p),x);}H(){p=M(p);}E(){p=N(p);L();}
J(){m=p=M(n-1);_(0&lt;y--)D();n=P(c);}K(){j=d;_(0&lt;--j)m=M(m-1),U();}
I(){G();_((j=getch())-&#39;\f&#39;){if(j-&#39;\b&#39;)g-h&amp;&amp;(*g++=j-&#39;\r&#39;?j:&#39;\n&#39;);else
b&lt;g&amp;&amp;--g;p=P(h);Y();}}X(){G();p=h&lt;c?P(++h):p;}
F(){j=p;p=0;G();write(i=creat(f,MODE),h,(int)(c-h));close(i);p=j;}W(){_(!T
t&lt;c)++p;_(T
t&lt;c)++p;}int(*z[])()={L,D,U,R,B,J,K,W,H,E,S,bf,I,X,F,C,Q,G};
Y(){m=p&lt;m?M(p):m;if(n&lt;=p){m=N(p);i=m-P(c)?d:d-2;_(0&lt;i--)m=M(m-1);}
move(0,0);i=j=0;n=m;_(1){p-n||(y=i,x=j);t=Z(n);if(d&lt;=i||c&lt;=t)break;
if(*t-&#39;\r&#39;)addch(*t),j+= *t-&#39;\t&#39;?1:8-(j&amp;7);if(*t==&#39;\n&#39;||COLS&lt;=j)
++i,j=0;++n;}clrtobot();++i&lt;d&amp;&amp;mvaddstr(i,0,&quot;&lt;&lt; EOF &gt;&gt;&quot;);move(y,x);
refresh();}main(u,v)char**v;{h=c=b+BUF;if(u&lt;2)V
2;initscr();d=LINES;raw();noecho();idlok(stdscr,1);if(0&lt;(i=open(f= *++v,0))){
g+=read(i,b,BUF);g=g&lt;b?b:g;close(i);}S();_(!q){Y();i=0;j=getch();
_(k[i]&amp;&amp;j-k[i])++i;(*z[i])();}endwin();V 0;}