#include &lt;stdio.h&gt;
#define PO(o,t)\
(((o&gt;64)&amp;&amp;(o&lt;91))?(((t&gt;96)&amp;&amp;(t&lt;123))?(t-32):(t)):(((t&gt;64)&amp;&amp;(t&lt;91))?(t+32):(t)))

      void main() {                                       char *poo= &quot;poot&quot;,
      *Poo=&quot;pootpoot&quot;      ,O[9];int      o,t,T,p;(t=p   =0)||(*O=&#39;\0&#39;);while
      ((o=       getc(   stdin   ))!=(   EOF))if  ((p==   0)&amp;&amp; (((o&gt;64 )&amp;&amp; (
      o&lt;91       )) ||   ((o&gt;     96 )   &amp;&amp;(o&lt;     123)        ))) (
      t!=8       )&amp;&amp;(O   [t]=     o)&amp;&amp;   (O[++     t] =        &#39;\0&#39;)
      ;else {if (t&gt;7)    {for     (T =   0 ; T     &lt;=7;        T++ )
      printf(&quot;%c&quot;,       PO(*(   O+T),   *(Poo+   T)));       printf
      (&quot;%c&quot;,              o);}else if     (t&gt;3){for (T        =0;T&lt;=
      3;T++)                                                  printf
      (&quot;%c&quot;,                                                  PO(*(O
      +T),*(                                                  poo+T)

) ) ; printf( &quot;%c&quot; , o ) ; } else  printf ( &quot;%s%c&quot; , O , o )  ; ( t =  0 ) || (
* O =  &#39;\0&#39; ) ; ( o == 60 ) &amp;&amp; ( ++p ) ; ( o == 62 ) &amp;&amp; (p!=0) &amp;&amp; ( --p ) ; } }