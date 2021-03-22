#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

int main(int a,char     **A){FILE*B;typedef     unsigned long C;C b
[8]; if(!(a==7&amp;&amp;(B=     fopen(1[A],&quot;rb&quot;))))     return 1;for(7[b]=0
;7[b]&lt;5;7[b]++)b[7[     b]]=strtoul(A[2+7[b     ]],0,16-!7[b]*6);5[
b]=3[b]                 ; while     ((6[b]=     getc(B)
)!=(C)-                 1){if(2     [b])for     (7[b]=0
;7[b]&lt;4                 ;7[b]++     )if(((6     [b]&gt;&gt;7[
b])^(6[                 b]&gt;&gt;(7-7[b])))&amp;1)6[     b] ^=(1
&lt;&lt;7[b])                 ^(1&lt;&lt;(7-7[b]));5[b]     ^= 6[b]
&lt;&lt;(0[b]                 -8);for(7[b]=0;7[b]     &lt;8;7[b]
++)if((                 5[b]&gt;&gt;(0[b]-            1))&amp;1)5
[b]=(5[                 b]&lt;&lt;1)^ 1[b];           else 5[
b]&lt;&lt;=1;                 }5[b]&amp;=((((C)1          &lt;&lt;(0[b]
-1))-1)                 &lt;&lt;1)|1; if(2[b]         )for(7[
b]=0;7[                 b]&lt;(0[b  ]&gt;&gt;1);7        [b] ++)
if(((5[b]&gt;&gt;7[b])^(5     [b]&gt;&gt;(0   [b]-1-7       [b])))&amp;1)5[b]^=((C)
1&lt;&lt;7[b])^((C)1&lt;&lt;(0[     b]-1-7[    b]));5[      b]^=4[b];fclose(B);
printf(&quot;%0*lX\n&quot;, (     int)(0[     b]+3)&gt;&gt;     2,5[b]); return 0;}