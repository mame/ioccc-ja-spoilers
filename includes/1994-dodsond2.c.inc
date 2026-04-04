#include &lt;ctype.h&gt;
#include &lt;stdio.h&gt;
#define A { E&quot;Your score is %d\n&quot;,j);exit(0);}
#define B(x,y) K(x&lt;y){p=x;x=y;y=p;}
#define C do{p=random()%N;}F(c[p]||d[p]);
#define D random()%N
#define E printf(
#define F while
#define G int
#define H return
#define I for
#define J(r,j) a[r][j]
#define K if
#define L else
#define M isdigit
#define N 30
#define P getchar()
G a[N][3],b[N],c[N],d[N],e[N],f[N],g[N],i,j=0,k,l=0;
main(){m();n();A;}m(){G o;srandom(getpid());do{I(o=0;
o&lt;N;e[o++]=3){J(o,0)=J(o,1)=J(o,2)=-1;c[o]=d[o]=g[o]=0;
b[o]=N*2;}r(0);s();}F(s());t();}s(){G o,p;I(o=0;o&lt;N;o++){
B(J(o,2),J(o,1))B(J(o,1),J(o,0))B(J(o,2),J(o,1))K(J(o,0)==-1)H(1);
}H(0);}t(){G o,p;I(o=0;o&lt;N;o+=8){C c[p]=1;C d[p]=1;}w(D,0);I(o=0;
o&lt;3;o++){do{p=D;}F(c[p]||d[p]||f[p]||!b[p]);f[p]=1;}do{k=D;}
F((c[k])||(d[k])||(b[k]==0));}w(o,d)G o,d;{G x;b[o]=d;I(x=0;
x&lt;3;x++)K(b[J(o,x)]&gt;d)w(J(o,x),d+1);}G r(x)G x;{G y,t=0,u;
F(e[x]){u=3;(e[x])--;do{y=D;K(t++&gt;1000)H(0);K(t%100==0)u--;}
F((y==x)||(e[y]&lt;=0)||(y==J(x,2))||(y==J(x,1))||(e[y]&lt;u));(e[y])--;
J(x,e[x])=y;J(y,e[y])=x;K(!r(y)){J(x,e[x])=J(y,e[y])=-1;(e[y])++;
(e[x])++;}L t=0;}H(1);}n(){G r,n;char v;do{r=D;}
F(c[r]||d[r]||(b[r]&lt;3)||d[J(r,0)]||d[J(r,1)]||d[J(r,2)]||
c[J(r,0)]||c[J(r,1)]||c[J(r,2)]);F(1){E&quot;You are in room %d\n&quot;,r);
K(f[r]){i++;E&quot;You found an arrow\n&quot;);j+=20;f[r]=0;}K(b[r]==0){
E&quot;Wumpus meat\n&quot;);j-=100;A;}K(d[r]){E&quot;You fell in a pit\n&quot;);j-=50;
A;}K(r==k){K(i){i--;l++;j-=20;E&quot;You are missing an arrow!\n&quot;);
}K(l==3){E&quot;You catch the robber and recover all 3 arrows!\n&quot;);
i=3;j+=200;k=-1;}L{E&quot;The robber scurries away\n&quot;);do{k=D;}
F((c[k])||(d[k])||(b[k]==0)||(k==r));}}K(c[r]){c[r]=0;c[D]=1;r=D;
E&quot;The bats pick you up and drop you in room %d\n&quot;,r);j-=10;}L{
K(b[r]&lt;3)E&quot;You smell a wumpus\n&quot;);
K(d[J(r,0)]||d[J(r,1)]||d[J(r,2)])E&quot;You feel a breeze\n&quot;);
K(c[J(r,0)]||c[J(r,1)]||c[J(r,2)])E&quot;You hear a rustling sound\n&quot;);
E&quot;Passageways to room %d, %d, and %d\n&quot;,J(r,0),J(r,1),J(r,2));
K(!g[r]){j+=10;g[r]=1;}do{v=P;K(v==&#39;s&#39;)q(r);K(v==&#39;l&#39;)break;
K(v==&#39;i&#39;)E&quot;You have %d arrow%c\n&quot;,i,i-1?&#39;s&#39;:&#39; &#39;);K(v==&#39;q&#39;)A;}
F(!M(v));K(M(v)){n=v-&#39;0&#39;;v=P;K(M(v))n=n*10+v-&#39;0&#39;;
K((J(r,0)==n)||(J(r,1)==n)||(J(r,2)==n))r=n;}}}}q(r)G r;{G z,n;
char v;K(i==0){E&quot;You have no arrows\n&quot;);H;}i--;
E&quot;Shoot into which rooms?  &quot;);I(z=0;z&lt;4;z++){j-=20*z;do{v=P;
K((v==&#39;\n&#39;)&amp;&amp;(i&gt;0)){j-=50;E&quot;You have %d arrows\n&quot;,i);H;}}F(!M(v));
n=v-&#39;0&#39;;v=P;K(M(v))n=10*n+v-&#39;0&#39;;K((J(r,0)==n)||(J(r,1)==n)||(J(r,2)
==n)){r=n;K(b[r]==0){E&quot;You have killed the Wumpus!\n&quot;);j+=500+i*100;
A;}}L K(random()%3==1){E&quot;The arrow bounces back and kills you\n&quot;);
j-=100;A;}L{I(n=0;n&lt;N;n++)b[n]=2*N;w(D,0);j-=100;}K(v==&#39;\n&#39;){j-=50;
E&quot;You have %d arrows\n&quot;,i);H;}}}