#include &lt;stdio.h&gt;
int r=0,x,y=0,    /*
nt                 /
c
lx  /\ / \ /|\ /|\
u,  \/ \\/ \-/ \ /
dn                        ]
e= ||| /|\  /\  /\        =                     p p
 0  \/ \ / |||  \/        f        f       f    r r
&lt;,                        tw       t       s s  i i
sy  || /|\      /\     i  eh       e       e c  n n
t= /-  \ /     |||     n  li       l       e a  t t
d0     |||             t  ll       l  {&lt;   k n  f f
i,  ||     /|\ /|\        (e s     (  fr   ( f  ( (
o    _ ||\ \ / \-/     tu s( t    usw o; i s (  &quot; &quot;
.   || - /           c [[ tg rv   [th rx=f t &quot;  % \
h                   mh111 de{l)   +di (+&#39;( d+%  c n+
&gt;                   aa000 itte; &gt; +il x+ n inc  &quot; &quot;+
 /                  ir000[ns[nytyrrne&lt;=)&#39;&lt;xn,&quot;  , );
 */                 n         =             0     ;
               main        (       )   {
                char       v   [
                100    ]                   ,  s;
          int t[100     ]                    ,
              u[100               ]     ;  u
                  [                   0
      ]=ftell(stdin        )       ;
         while(gets (v    )                 )
                 {t  [         r ]=
             strlen                 (
               v);y=
                 t[         r             ]
                 &gt;y             ?        t [
                  r         ]    :   y;
              u[++r   ]     =      
        ftell(stdin )   ;                          }
              while          (                    n
                  &lt;              y        )
            {for(x=0             ;         x
            &lt;r;x++) {                           s
               =&#39; &#39;       ;              
              if(n&lt;             t        [
                  x            ]     )    {
        fseek(stdin    ,u       [     x    ]
                 +n   ,  0 )                     ;
        scanf(&quot;%c&quot;,                          &amp;
                                       s        )
                   ;                             }
       printf(&quot;%c&quot;,   s                       )
                                            ;      }
      printf(&quot;\n&quot;);                 n
                 ++   ;            }           }