main(n,i,a,m){while(i=++n)
for(a=0;a&lt;i?a=a*8+i%8,i/=8,m=a==i|a/8==i,1:(n-++m||printf(&quot;%o\n&quot;,n))&amp;&amp;n%m;);}