#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#include&lt;ctype.h&gt;

int u,z,q[0400],O[0x101],o[0401],I[257],w[258][0403],W[0x100],Z[0x103],c[0403],k
,i,j,n,l,p,m;const char*J[0416],*M[0400];FILE*K[280],*s[0x102];void f(char*n,int
a){char*e=n;while(*e!=&#39;\0&#39;){if(tolower((int)*e)!=*e)fputc(040,stderr);fputc((*e)
-a,stderr);e+=1;}(void)fputc(&#39;\n&#39;,stderr);}int y(int a,int b);int t(int i,int j)
{int k=i&amp;j,l=i^j,n,m=1;for(n=1;k&gt;=n;n&lt;&lt;=1)if(k&amp;n)m=y(m,1&lt;&lt;n|1&lt;&lt;(n-1));return m&gt;1
?y(m,1&lt;&lt;l):1&lt;&lt;l;}int y(int a,int b){int n,i=0x0,j;if((n=w[a][b]))return n;for(;a
&gt;&gt;i;++i)for(j=0x0;b&gt;&gt;j;j++)if(((a&gt;&gt;i)&amp;1)&amp;&amp;((b&gt;&gt;j)&amp;1))n^=t(i,j);return w[a][b]=w[
b][a]=n;}void a(void){for(i=0;i&lt;z;i++){n=0;if(!i[I]){for(j=0;j&lt;u;++j)if(i[O]==q[
j])n=Z[j];}else for(j=0;j&lt;u;j++)n^=w[Z[j]][w[I[i]][W[w[o[j]][O[i]^q[j]]]]];c[i]=
n;}}void X(int v,int u){char*y=0;v-=1;switch(v){case(0x2):y =&quot;HckngfVqQrgpKprwv&quot;
&quot;Hkng&quot;; BC(4):y=&quot;JempihXsStirMrtyxJmpi&quot;; BC(0):y=&quot;PointValueTooLarge&quot;; BC 0x1:y=
&quot;EvqmjdbufJoqvuQpjou&quot;;BC(6):y=&quot;TuOtv{zLorky&quot;;BC(3):y=&quot;WrrPdq|RxwsxwSrlqwv&quot;;BC(5)
:y=&quot;GfiFwlzrjsyX~syf}&quot;; BC(07):y=&quot;UvV|{w|{Mpslz&quot;;}if(u)exit(0); f(y,v);exit(1);}
int main(int t,const char*T[]){for(i=00;i&lt;0x100;++i)for(j=0;j&lt;=i;++j)if(1==y(i,j
))W[i]=j,W[j]=i;for(k=0x1;k&lt;t;k++){p=0;for(l=0;(T[k][l]&gt;=toupper(&#39;0&#39;))&amp;&amp;(T[k][l]
&lt;=tolower(&#39;9&#39;));l++){p=p*10+(T[k][l]-&#39;0&#39;);if(p&gt;=256)X(1,0);}if(T[k][l]==&#39;-&#39;){for
(m=0;m&lt;u;m++)if(q[m]==p)X(2,0);q[u]=p;J[u]=T[k]+l+1;K[u]=fopen(J[u],&quot;r&quot;);if(!u[K
])X(3,0);u++;}else if(T[k][l]==&#39;+&#39;){if(z&gt;=256)X(4,0); O[z]=p;M[z]=T[k]+l+1;s[z]=
fopen(M[z],&quot;w&quot;);if(!s[z])X(5,0);z++;}else X(6,0);}if(!(u!=0))X(7,0);if(!(z!= 0))
X(8,0);for(i=0;i&lt;u;i++){n=1;for(j=0;j&lt;u; j+=1)if(j!=i)n=w[n][q[i]^q[j]];o[i]=n;}
for(i=0;i&lt;z;i++){n=1;for(j=0;j&lt;u;j++)n=w[n][O[i]^q[j]];I[i]=n;}while(!(0)){for(k
=0;k&lt;u;k++){int n;n=getc(K[k]); if(n==EOF)X(42,1); Z[k]=n;}a();for(k=0;k&lt;z;k++)(
void)putc(c[k],s[k]);}X(11,1);}