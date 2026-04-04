
             /*                                     ,*/
            #include                              &lt;time.h&gt;
             #include/*                     _  ,o*/  &lt;stdlib.h&gt;
             #define  c(C)/*     -      . */return      ( C); /*    2004*/
              #include   &lt;stdio.h&gt;/*.   Moekan           &quot;&#39;   `\b-&#39;     */
                typedef/*  */char   p;p* u                     ,w       [9
                  ][128] ,*v;typedef  int _;_   R,i,N,I,A               ,m,o,e
             [9],  a[256],k    [9], n[               256];FILE*f       ;_ x   (_ K,_ r
        ,_ q){;   for(;                                         r&lt;     q    ; K       =((
     0xffffff)   &amp;(K&gt;&gt;8))^                                        n[255     &amp;        ( K
   ^u[0        +                                     r  ++      ]     )]);c          (K
  )}        _ E                           (p*r,    p*q  ){     c(          f         =
          fopen                     (r  ,q))}_   B(_ q){c(    fseek        (f,      0
        ,q))}_ D(){c(  fclose(f ))}_  C(  p    *q){c(  0-    puts(q    )   )}_/*   /
      */main(_ t,p**z){if(t&lt;4)c(   C(&quot;&lt;in&quot;       &quot;file&gt;&quot;    &quot;\40&lt;l&quot;   &quot;a&quot;  &quot;yout&gt; &quot;
     /*b9213272*/&quot;&lt;outfile&gt;&quot;   ) )u=0;i=I=(E(z[1],&quot;rb&quot;)) ?B(2)?0 :   (((o   =ftell
    (f))&gt;=8)?(u     =(p*)malloc(o))?B(0)?0:!fread(u,o,1,f):0:0)?0:  D():0      ;if(
   !u)c(C(&quot;      bad\40input  &quot;));if(E(z[2],&quot;rb&quot; )){for(N=-1;256&gt; i;n[i++] =-1   )a[
   i]=0;       for(i=I=0;   i&lt;o&amp;&amp;(R  =fgetc(   f))&gt;-1;i++)++a[R] ?(R==N)?( ++I&gt;7)?(n[
  N]+1       )?0:(n [N   ]=i-7):0:   (N=R)    |(I=1):0;A =-1;N=o+1;for(i=33;i&lt;127;i++
  )(        n[i   ]+  1&amp;&amp;N&gt;a[i])?    N= a     [A=i]     :0;B(i=I=0);if(A+1)for(N=n[A];
 I&lt;       8&amp;&amp;   (R  =fgetc(f ))&gt;    -1&amp;&amp; i   &lt;o        ;i++)(i&lt;N||i&gt;N+7)?(R==A)?((*w[I
 ]             =u [i])?1:(*w[I]=   46))?(a             [I++]=i):0:0:0;D();}if(I&lt;1)c(C(
              &quot;  bad\40la&quot; &quot;yout  &quot;))for(i            =0;256&gt;(R=  i);n[i++]=R)for(A=8;
             A  &gt;0;A --)   R  = ( (R&amp;1)==0)          ?(unsigned int)R&gt;&gt;(01):((unsigned
            /*kero  Q&#39;        ,KSS  */)R&gt;&gt;         1)^        0xedb88320;m=a[I-1];a[I
            ]=(m           &lt;N)?(m=   N+8):        ++        m;for(i=00;i&lt;I;e[i++]=0){
           v=w         [i]+1;for(R                      =33;127  &gt;R;R++)if(R-47&amp;&amp;R-92
           &amp;&amp;       R-(_)* w[i])*(                   v++)=    (p)R;*v=0;}for(sprintf
                  /*&#39;_  G*/  (*w+1,              &quot;%0&quot;     &quot;8x&quot;,x(R=time(i=0),m,o)^~
                0)   ;i&lt;       8;++           i)u      [N+ i]=*(*w+i+1);for(*k=x(~
                  0,i=0     ,*a);i&gt;-        1;      ){for (A=i;A&lt;I;A++){u[+a [ A]
                ]=w[A       ][e[A]]  ;     k     [A+1]=x (k[A],a[A],a[A+1]
              );}if     (R==k[I])      c(      (E(z[3  ],&quot;wb+&quot;))?fwrite(
             /* */   u,o,1,f)?D          ()|C(&quot;  \n    OK.&quot;):0    :C(
            &quot;  \n  WriteError&quot;            ))  for  (i  =+I-
           1  ;i &gt;-1?!w[i][++                 e[+ i]]:0;
             ) for( A=+i--;                 A&lt;I;e[A++]
             =0); (i &lt;I-4                 )?putchar
             ((_   )  46)                  | fflush
            /*&#39;      ,*/                  ( stdout
            ):       0&amp;                    0;}c(C
           (&quot;       \n                   fail&quot;)
           )      /*                    dP&#39; /
                 dP                    pd  &#39;
                &#39;                      zc
                                      */
                                     }