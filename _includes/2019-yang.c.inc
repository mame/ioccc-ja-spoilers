#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;/*
e=nil;ARGF.each_char{|c|print c;e=e ?c&lt;&quot;A&quot;||c&gt;&quot;Z&quot;:c==&quot;\e&quot;?1:!(sleep 0.1)};%q{*/
#define T(_,S,C,R,A,M,B,L,E) _ V,i,o,l,e,t=1,n[4],I[22]={4352,95,4554,1,2902,4\
46,2,29839,1841,11171,8541,511,785,9,23,63,145,96,128,6,61466,135167},g=240,H,\
h,p,q,x,y;typedef struct{_ x,y,z;}b;b*U,u;FILE*f;A m(_ p,_ q){_ d=(p+q)/2;C(d-\
p){m(p,d);m(d,q);S(i=p,o=d,y=H+p;y&lt;H+q;y++)x=i&gt;=d||(o&lt;q&amp;&amp;U[i].y*1e6+U[i].x&gt;U[o\
].y*1e6+U[o].x)?o++:i++,B;S(y=p,x=H+p;y&lt;q;x++,y++)B;}}A v(){S(i=l=0;i&lt;22&amp;&amp;(o=l\
+I[i++],l=o+I[i],e&lt;o||e&gt;l);i++);x+=2-i/22;}A a(){C(H+2&gt;t)U=(b*)realloc(U,(t*=2\
)*24);U[H].x=x;U[H].y=y;U[H++].z=e;p=p&gt;y?y:p;q=q&lt;y?y:q;v();}A P(_ p){n[o=0]=e=\
p;C(p&gt;&gt;7){S(;p&gt;63&gt;&gt;o;p&gt;&gt;=6)n[o++]=(p&amp;63)|128;n[o]=(g*8&gt;&gt;o&amp;g)|p;}S(;o&gt;-1;)fputc\
(n[o--],f);}A Q(_ O){O?fprintf(f,&quot;\33[%d%c&quot;,abs(O),V+(O&gt;0)):0;V^=2;}R d[2]=&quot;r&quot;\
;_ main(_ O,R**Z){f=stdin;C(--O&amp;&amp;(**++Z-45||1[*Z])&amp;&amp;--Z&amp;&amp;L)M;S(*d|=5;(e=fgetc(\
f))&gt;0;h=h&lt;0?e-91?e&lt;48||e&gt;59?l*=(e&amp;2)-1,e&gt;64&amp;&amp;e&lt;67?y+=l,0:e&lt;69&amp;&amp;(x+=l)&lt;0?x=0:0:\
~(l=l*10+e-48):h:h?(e=l=l&lt;&lt;6|(e&amp;63),!--h)?a(),h:h:(e&amp;224)==192?l=e&amp;31,1:(e&amp;g)=\
=224?l=e&amp;15,2:(248&amp;e)==g?l=e&amp;7,3:e-27?e==10?y++,x=0:e-32?e==9?x=(x+8)&amp;~7:e&gt;32?\
a(),h:h:x++,h:~(l=0))V+=(V+e)&lt;&lt;10,V^=V&gt;&gt;6;E;f=stdout;C(U){C(O&lt;1){m(0,U[H].x=H)\
;S(h=x=0,y=p;h&lt;H;v()){S(;y&lt;U[h].y;y++,x=0)P(10);S(;x&lt;U[h].x;x++)P(32);S(;h&lt;H&amp;&amp;\
U[++h].y==y&amp;&amp;U[h].x==x;);P(U[h-1].z);}C(x)P(10);}else{srand(V);S(x=H;--x;B)y=r\
and()%-~x;C(--O?L:O++)M;S(t=h=0,y=q+1;h&lt;H&amp;&amp;t&lt;O;E){C(t&amp;&amp;L)M;C(!t)S(h=q-p+2;--h;\
)P(10);S(V=65;h&lt;H*-~t/O;y=U[h++].y)Q(U[h].y-y),Q(x-U[h].x),P(U[h].z),x=U[h].x,v
T(int,for,if,char,void,goto X,(u=U[x],U[x]=U[y],U[y]=u),((f=fopen(*++Z,d))?0:-(
perror(*Z),1)),fclose(f))();Q(q-y);P(10);y=q+1;x=!++t;}}}O=0;X:return O;}/*}#*/