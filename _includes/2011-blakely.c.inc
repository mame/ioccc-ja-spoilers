d b,x,h;o q[9802],f[9802];void w(d i){fflush(stdout);printf(
&quot;%c&quot;  ,   (  i&gt;b)?(i%b&gt;0?q[i-b-1]:10):5*(b==i?2:9));if(i&lt;x+b
-      1     )w(i+1) ; } d p(o*e,d i ) { e +=i;n h = ( - b-1
)         [                 e ] %         2 + ( -          b
)  [ e  ] %     2                                          +
(-b+1)[ e            ]  % 2         +(       -     1  ) [  e
]  %  2+  e  [1   ]% 2 +b [  e   -  1]% 2  +    b[ e ]% 2  +
b     [      e+1 ]     %2      ;}d m (  d      i     ){    n
(  i  == x -       1      )      ?0     :(  f    [      i  +
1  ]=m                 (i +       1) ) ,32           +3 /  (
(    p( q  ,   i  )&gt;  3      ||    h &lt;  2       )?  7      :
( ( h                   ==        2 &amp;&amp;q[ i ]          ==  32
      )?    8 :             1 )     );}d                   y
(       d                          i ){ d   j , s , t ,a  ,u
;if (     x - 1== i ) n 1 ;if ( f            [i]==2)       {
f [i ]     &lt;&lt;=4;if(y( i))n 1;f[i           ]-=- 3 ; if     (
y(i )       )n 1;n  0 ; };if((i % b              )     ==   
             0 ||(       i % b          )   ==            b-
1         )               n        y (i+1           )     ;j
=    -1 ; l           :           ;    j   =j     + 1 ;     
if   (  j    &gt;=    (  i  -      i   /  b +        2         
   == b          ? 1 :   i       &gt;     2       * b ?i%   b!=
    1    ?2       :    2          *   1&lt;&lt;     1 :8 ))   goto
c;     u       =   p(  f,   i  ) ; if  (        i          &lt;
x  - 2*b - 1   )  { a =( s       =((  t=i       %   b==     
       1)           ?    1      :    i % b          !=     b
   - 2     )   )      &amp;&amp;     i   &lt;            2 * b;u+=    (
a                ? (                                j&amp; 4   )
&gt;&gt;    2 : 0 ) +  (t  ?    ( j &amp; 2 ) / 2 : 0)  +            (
s? (   j&amp;1):0);}else a =t=s=0;if((u&amp;2)+(u&amp;4)!=          2 &amp;&amp;
(q[   i]&amp; 2 ) ==2||u==2&amp;&amp; (f[i]+q[i]) % 2   ==1          ||u
== 3            &amp;&amp; ( q [   i]&amp;2)== 0                    )   
                             goto             l      ;     b
[i        +   f          ]     ^=       !          t ?     0
 :   b[ i +       f ]  ^ (         10 + (      j &amp;      2  )
/    2  )     * 3+2;b[ i    + f    +  1    -    b  ]  ^=   !
a  ?0 :           b  [i  +  f    +1 -          b]^   (10+  (
j   &amp;    4)          /            4    )*  3   +2 ;    b [ i
+f     +       1  ]  ^= ! s   ?0     :       b  [i+ f  +   1
]  ^ (10 + (   j  &amp;1)            ) *3+ 2 ;      if  ( y (  i
+      1)           ){ n  1  ;       };          (  a      ?
i  + 1     :     0 )             [ f     ]            =(   t
?                    i+                           b       :0
)       [ f                 ] =       (     s ?           i 
   + b +1:0) [ f ] =     2 ;goto l ;       c:n 0 ; }       d
  main(d c,o**v){d i; x=b=0;while((q[x++]=getchar()   )   !=
  EOF ){x-=(q[x-1]==10)? b+=1,1:0;q[x-1]^= (q[x-1]        ==
32)? 0  :  q [   x  -        1 ] ^ 35  ; } ; w (   0      );
for                           (                        ;   ;
)       {         z    ( f            ,         2 ,  x *    
     k  (  o       )  )  ;   for   (  i  =    0;i&lt;=x -    1;
i  = i +   b  )q [   i /    b]   = q [   x      -  b+  i  /b
]   =    q       [ i  ]=  q       [    i           -       (
(i   ==  0)           ?            0:  1)       ]  =f [ i  /
b   ] = f[ x      -b -1+ i/  b]   = f [i ]      =f[         
      i    -          (             (    i        == 0  )  ?
0       :1        ) ]  =        32;   if       ( c        ==
1           ) m (         0                        );   else
if          (y (     b                      +             1)
==0)n 1;f[0]&lt;&lt;=1&lt;&lt;2;memcpy(q,f,x*k(o));w(0);sleep(1);};n 0;}