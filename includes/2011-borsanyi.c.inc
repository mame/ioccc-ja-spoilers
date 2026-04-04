#     include                              &lt;math.h&gt;
#     include                              &lt;stdio.h&gt;
#     define                               d double
d     a,s;int     n;p(d t                  ,d M,d x)
{     return      x&gt;0?x&gt;1     &amp;&amp;!fork(     )?p(t,s+=
a     ,x-1):0     :scanf(     &quot;%lf&quot;,&amp;x     )-1?a=(M-
t     )/22,s=     pow(10,     (int)(       log10(a))                /*It is
a     simple      tool to     quickly      analyze                  data. */
-     2),s=t-     (a =s*(     int)(a/s     ))/2,p(t,                s,(int)(
(     a+M-t)/     a)):p(t     &gt;M|x&lt;t?x     :t,t&gt;M|x     &gt;M?x:M      ,--n)+(x
&gt;     s&amp;&amp;x &lt;=     s+a); }     main(j){     j==1?j=p     (1,0,0)     ,printf(
&quot;%+12g %4d&quot;,s+a/2,j,wait(NULL)),main(j*400/n):putchar(35-25*!j)&amp;&#39; &#39;&amp;&amp;main(j+1);}