#include &lt;time.h&gt;
#include &lt;curses.h&gt;
#define P(A,B,C,D,E) mvaddch(b+A,a+B,(q[y]&amp;C)?D:E);
#define O(A,B,C) case A:if(q[x]&amp;B)C;break;
#define R rand()
#define U 0,1,4,5
#define J(x) (1&lt;&lt;x)
#define V &#39; &#39;


int r[27]                     ={0,J(0)
,2,1 ,3,J                     (2),5,U,
U,U,U,U},                     u[6]={-1
,7,49,-49,-7,1},q[343],x,y,d,l=342,a,b
,j=&#39;#&#39;;int main(){srand(time(0));for(x
=0;x&lt;343;x++)q[x]=0;x=R%343;while(l){d
=r[R%27];if(((x%7==(x+u[d])%7)+(x/0x31
==(x+u[d]                     )/0x31)+
(((x/7)%7                     )==(((x+
u[d])/7)%                     7))==J(1
))&amp;&amp;(x+u[d]&gt;=0)&amp;&amp;(x+u[d]&lt;343)){if(!q[x
+u[d]]){q[x]+=J(d);x+=u[d];q[x]+=J(5-d
);l--;}else if(R&lt;R/0x7){do{x=R%0x157;}
while(!q[x]);}}}x=294+R%0x31;initscr()
;noecho(                      );crmode
();clear                      (/*|*/);
refresh(                      );while(
x&gt;0){move(J(0),60);printw(&quot;Level %d&quot;,(
x/0x31)+J(0)); q[x]|=J(J(3));for(y=(x/
0x31)*0x31;y&lt;(J(0)+x/0x31)*0x31;y++)if
(q[y]&amp;J(J(3))){a=J(0)+(3*((y/7)%7));b=
J(0)+(3*                      (y% 7));
mvaddch(                      J(1)+((y
%7)*3),J                      (1)+(((y



/7)%7)*3                      ),V);P(0
,0,0,0,j                      )P(3,0,0
,0,j)P(0,3,0,0,j)P(3,3,0,0,j)P(0,J(0),
J(0),V,j)P(0,J(1),J(0),V,j)P(J(0),3,J(
1),V,j)P(J(1),3,J(1),V,j)P(J(1),J(0),4
,&#39;U&#39;,V)P(J(1),J(1),J(3),&#39;D&#39;,V)P(J(0),0
,J(4),V,                      j)P(J(1)
,0,J(4),                      V,j)P(3,
J(0),J(5                      ),V,j)P(
3,J(1),J(                    5),V, j)}
 mvaddch(J                  (1)+((x%7
  )*3),J(1)                +(((x/7)%
   7)*3),&#39;@&#39;)            ;refresh()
    ;switch(getchar()){O(&#39;k&#39;,J(0),
      x--)O(&#39;j&#39;,J(5),x++)O(&#39;l&#39;,J
        (1),x+=J(3)-J(0))O(&#39;h&#39;
          ,J(4),x-=7)O(&#39;u&#39;,4


,(x+=49,    clear()))O(&#39;d&#39;,8,(x-=49,clear
()))case   &#39;q&#39;:x=-1;break;}}clear();refresh
(/*v*/);   nocrmode ();echo();endwin();if(!
x)printf    (&quot;You Escaped!\n&quot;);exit(0);}