#define P(X)j=write(1,X,1)
#define C 39
int M[5000]={2},*u=M,N[5000],R=22,a[4],l[]={0,-1,C-1,-1},m[]={1,-C,-1,C},*b=N,
*d=N,c,e,f,g,i,j,k,s;main(){for(M[i=C*R-1]=24;f|d&gt;=b;){c=M[g=i];i=e;for(s=f=0;
s&lt;4;s++)if((k=m[s]+g)&gt;=0&amp;&amp;k&lt;C*R&amp;&amp;l[s]!=k%C&amp;&amp;(!M[k]||!j&amp;&amp;c&gt;=16!=M[k]&gt;=16))a[f++
]=s;if(f){f=M[e=m[s=a[rand()/(1+2147483647/f)]]+g];j=j&lt;f?f:j;f+=c&amp;-16*!j;M[g]=
c|1&lt;&lt;s;M[*d++=e]=f|1&lt;&lt;(s+2)%4;}else e=d&gt;b++?b[-1]:e;}P(&quot; &quot;);for(s=C;--s;P(&quot;_&quot;)
)P(&quot; &quot;);for(;P(&quot;\n&quot;),R--;P(&quot;|&quot;))for(e=C;e--;P(&quot;_ &quot;+(*u++/8)%2))P(&quot;| &quot;+(*u/4)%2
);}