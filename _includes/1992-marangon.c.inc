#include &lt;stdio.h&gt;
#include &lt;curses.h&gt;

#define ST strchr
#define SRD srand48
#define RD lrand48
#define ext(a) (exit(a),0)

#define Q return
#define W wrefresh(r)
typedef int i;

#define Z(d,a) (RD()%((a)-(d)+1)+(d))
i f[3][3] = {15,52,36,20,-39,48,60,0,-25};

char z[6][6];
#define Y(x) (4*(x)+3)
#define X(x) (2*(x)+1)
#define I for
WINDOW *r=NULL;
#define K endwin()

char *g =&quot;\
Use l-h-k-j for move.\nUse + for increment. Use - for decrement.\nUse Q to quit.&quot;;

i (*d())();
nt()
{
long time();
SRD(time((i *)0));
memset(z,5,36);
initscr();
cbreak();
noecho();
nonl();
if (COLS&lt;80||LINES&lt;24)
K,ext(1);
if (!(r=newwin(X(6),Y(6),
(LINES-X(6))/2,(COLS-Y(6))/2)))
K,ext(1);
mvaddstr(LINES-5,0,g);
refresh();
}
i ci()
{
i x,y=0;
I (;y&lt;6;++y)
I(x=0;x&lt;6;++x)
mvwaddch(r,X(y),Y(x),z[x][y]+&#39;0&#39;); Q(0);
}
void main()
{
char *ST();
i a=0,b=0,c,q,t,s,x,sc=0;
i(*(*p)())()=(nt(),d);
I(x=0 ; x++&lt;20; )d(Z(0,5),Z(0,5),Z(1,2));
I(t=Z(0,2),q=s=0; q&lt;3; s+=f[q][t]*f[q++][t]);
I(box(r,&#39;|&#39;,&#39;-&#39;),ci(),wmove(r,X(a),Y(b)),
W; (ST (&quot;+-Qlkjh&quot;,(char)(c=wgetch(r))))&amp;&amp;
((i)((i)(q^=s%=Y(q),s/=2)!=(i)(s^=q)&amp;&amp;c&amp;64&amp;&amp;(!(c&amp;7|0)&amp;&amp;--b&lt;0&amp;&amp;
(b=q^s)&amp;0|| c&amp;4&amp;&amp;++b==6&amp;&amp;c&amp;4&lt;(~b&amp;23?q^=s,b^=b
:b&amp;12?b=3:b|2)||c&amp;2&amp;&amp;~c&amp;1&amp;&amp;++a==++q/2+1&amp;&amp;c&amp;16&gt;(
!a|12?a=7,a&amp;=~a:a|4?a=2:a&amp;2)||~c&amp;4&amp;&amp;c&amp;
1&amp;&amp;--a&lt;0&amp;&amp;(a+=6)&amp;0)||~c&amp;64&amp;&amp;(**p(b,a,~c))()||
c&amp;16)?K,ext(0):1)||c; sc==36?ci(),W,K,ext(0):wmove(r,X(a),Y(b)),
W)
I(t=Z(0,2),q=s=0; q&lt;3; s+=f[q][t]*f[q++][t])
I(sc=0; sc&lt;36&amp;&amp;*((char *)z+sc++)==5; );
}
i (*d(a,b,c))()i a,b,c;
{
i x,y;
I(x=a&gt;0?a-1:0; x&lt;=(a&lt;5?a+1:5); ++x)
I(y=b&gt;0?b-1:0; y&lt;=(b&lt;5?b+1:5); ++y)
if(x==a&amp;&amp;y==b&amp;&amp;z[x][y]==(c&amp;2?1:9)||z[x][y]==(c&amp;2?9:1)&amp;&amp;(x!=a||y!=b))Q(ci);
I(x=a&gt;0?a-1:0; x&lt;=(a&lt;5?a+1:5); x++)
I(y=b&gt;0?b-1:0; y&lt;=(b&lt;5?b+1:5)&amp;&amp;(x==a&amp;&amp;y==b&amp;&amp;(z[x][y]+=(c&amp;2?-1:1))||(z[x][y]+=(c&amp;2?1:-1))); y++); Q(ci);
}