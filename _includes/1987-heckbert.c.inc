#include &lt;ctype.h&gt;
#include &lt;stdio.h&gt;
#define _ define
#_ A putchar
#_ B return
#_ C index
char*r,c[300001],*d=&quot;&gt;=&lt;=!===||&amp;&amp;-&gt;++--&gt;&gt;&lt;&lt;&quot;,*i,*l,*j,*m,*k,*n,*h,*y;e,u=1,v,w,
f=1,p,s,x;main(a,b)char**b;{p=a&gt;1?atoi(b[1]):79;r=c+read(0,j=l=i=c,300000);v=g(
j,&amp;m);for(k=m;v!=2;j=k,m=n,v=w,k=m){w=g(k,&amp;n);if(v==1&amp;&amp;m-j==1&amp;&amp;*j==35)e&amp;&amp;A(10),
e=f=0;if(!f&amp;&amp;v==3&amp;&amp;(char*)C(j,10)&lt;m)A(10),e=0,f=1;else if(v&gt;2&amp;&amp;(u||w)&amp;&amp;(f||u)&amp;&amp;
(l-i&gt;1||*i!=61||n-k&gt;1||!C(&quot;-*&amp;&quot;,*k)))continue;else if(v==3)if(f&amp;&amp;e+1+n-k&gt;p&amp;&amp;e)A
(10),e=0;else A(32),e++;else{if(f&amp;&amp;e+m-j&gt;p&amp;&amp;e)A(10),e=0;e+=m-j;k=j;while(k&lt;m)A(
*k++);}i=j;l=m;u=v;}e&amp;&amp;A(10);}g(j,m)char*j,**m;{if(j&gt;=r)B*m=j,2;s=isdigit(*j)||
*j==46&amp;&amp;isdigit(j[1]);for(h=j;h&lt;r;h++)if(!isalnum(*h)&amp;&amp;*h!=95&amp;&amp;(!s||*h!=46)&amp;&amp;(!
s||h[-1]!=101&amp;&amp;h[-1]!=69||!C(&quot;+-&quot;,*h)))break;if(h&gt;j)B*m=h,0;x=1;for(h=j;h&lt;r&amp;&amp;C(
&quot; \t\n&quot;,*h);h++);if(h&gt;j)h--,x=3;if(*j==34||*j==39)for(h=j+1;h&lt;r&amp;&amp;*h!=*j;h++)if(
*h==92)h++;for(y=d;*y&amp;&amp;strncmp(y,j,2);y+=2);if(*y)h=j+1;if(!strncmp(&quot;/*&quot;,j,2)){
h=j+2;while(*++h!=42||*++h!=47);x=4;}*m=h+1;B x;}