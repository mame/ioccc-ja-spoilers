typedef unsigned char B;char*x[]={
#include &quot;dict.h&quot;
0};typedef struct L{B*s;struct L*n;}L;
L*h[128],*l[128],*s[128],Z[sizeof x/sizeof*x],*F=Z;int c[256],m,a=1;
int k(B*q){int g=0;B*p=q;while(*p)g|=!c[*p++]--;return g-1&amp;p-q;}
void u(B*p){while(*p)c[*p++]++;}
void S(int N,int r,int t,L*W){L*w;int i,n;
 for(n=r&lt;N?r:N;n&gt;0;n--)for(w=n==N?W:h[n];s[t]=w;u(w-&gt;s),w=w-&gt;n)if(k(w-&gt;s))
  if(n==r){if(t==m-1)for(i=a=0;i&lt;=t;i++)printf(&quot;%s%c&quot;,s[i]-&gt;s,i&lt;t?&#39; &#39;:&#39;\n&#39;);}
  else if(t&lt;m-1)S(n,r-n,t+1,s[t]=w);}
int main(int C,B**A){int i=0,g,n=0;B*p;while(--C)for(p=*++A;n&lt;127&amp;&amp;*p;)c[*p++]++,n++;
 for(;p=x[i++];u(p))if(g=k(p))(l[g]=*(l[g]?&amp;l[g]-&gt;n:&amp;h[g])=F++)-&gt;s=p;
 while(++m&lt;128)S(127,n,0,h[127]);
 return a;}