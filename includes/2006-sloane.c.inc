_,x,y,o       ,N;char       b[1920]       ;p(n,c)
{for(;n       --;x++)       c==10?y       +=80,x=
o-1:x&gt;=       0?80&gt;x?             c       !=&#39;~&#39;?b
[y+x]=c       :0:                         0:0;}c(
       q,l,r)       char*l,*r;{while             (q&gt;=0)q
       =(&quot;E&quot;    &quot;?yYrIxC{e^}KhE&gt;[|LXbj}&quot;         &quot;dOVsJ&quot;
       &quot;@&quot;    &quot;idOV{Yab[bW}[bW}\\qFywyv{D&quot;       &quot;ma\\A&quot;
       &quot;&quot;   &quot;Ztq?Lyw&gt;e{|Zq&gt;Y\\gq\\qI[tYBe{w&quot;     &quot;yvDZE\
vBA[`_&quot;    &quot;Lo&gt;}KcqdYrWqKxzKtW]|DXRwsfcUaT\\\
KXw{Y&quot;   &quot;RsFwsFwsFw{zaqyaz|FmMpyaoyI\\]cuUw{J&quot;
[_/6]   -62&gt;&gt;_++%6&amp;1?r[q]:l[q])-99;return q;}E(a
){for   (o=x=a,y=0,_=0;_        &lt;1006;)a=&quot; /\\\n&quot;
       &quot;~|_.&quot;[c(6,&quot;b&quot;              &quot;cd\\a[g&quot;,&quot;^`&quot;   &quot;_e&quot;
       &quot;]fh&quot;)+8], p(   &quot;#$%&quot;        &quot;&amp;&#39;()*+,-.1&quot;[   c(11
      ,&quot;_ac[]\\YZi&quot;   &quot;jkm&quot;,         &quot;`bd^efghXWlV&quot; )+13
      ]-34,a);}main   (k,Z){         float z[1920]  ,A=0
,B=0  ,i,j; puts(&quot;&quot;         &quot;\x1b&quot;   &quot;[2J&quot;);for(;;
)  {  float e=sin(A         ),  n=   sin(B),g=cos(
A),m   =cos(B);for(k        =0;k&lt;   1840;k++)y=-k
/80-   10,o=41+(k%80-              40)*1.3/y+n,N=
        A-100.0/y, b[k]=        &quot;.#&quot;[o+N&amp;1],z[k]   =0;E(
        80-(int)(9*B)%250);for(j=0;6.28&gt;j;j+=0.07  )for(
         i=0;6.28&gt;i;i+=0.02) { float c=sin(i),d   =cos(j
           ),f=sin(j),h=d+2,D=15/(c*h*e+f*g+5    ),l=cos
(i),t=c     *h*g-f*e;x=40+2*D*(l*h*m-t*n),y=   12
+D*(l*h       *n+t*m),o=x+80*y,N=8*((f*e-c    *d*
g)*m-c*         d*e-f*g-l*d*n);if(D&gt;z[o]    )z[o]
=D,b[o]             =&quot; ..,,-++=#$@&quot;[      N&gt;0?N:0
       ]  ;  }                                   printf(
       &quot;\x1b[&quot;       &quot;H&quot;           );for(k       =1;1841
       &gt;k;k++)       putchar       (k%80?b       [k]:10)
       ;  A +=       0.053;B       +=0.037       ;  }  }