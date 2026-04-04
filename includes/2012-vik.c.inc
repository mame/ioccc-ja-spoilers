#include &lt;stdio.h&gt;
#include &lt;string.h&gt;
#include &quot;zlib.h&quot;




      int
    i,j,k,l
  ,m,n,Q,W,H,
 B,Z,Y,X,O=1&lt;&lt;24
  ; char*A[999],x[
   1&lt;&lt;24],z[1&lt;&lt;24],
     s[1&lt;&lt;24],t[2&lt;&lt;24
         ],w[2&lt;&lt;24],*E;
           uLong N;  FILE
             *f ; int  main(
                int c,char**v){
                  unsigned char**V
                     =(unsigned char
                        **)v; for(m=0;
                            c==-11&amp;&amp;m&lt;H
                              ; m++, (*v)
                                +=m%3==0&amp;&amp;
                                (B&amp;4) ,V[4]
                                 ++) n=m%W,
                                  l=n?l:*(*V
                                  )++,*V[4]=
                                   !(B&amp;2)&amp;&amp;
                                    n%3?V[4
                                    ][-1]:
                                     (i=
                                    n&lt;3?0:
                                  V[4][-3],j
                                =m/W?V[4][-W
                               ]:0,Z=k=!(m/W)
                              ||n&lt;3?0:V[4][-3
                             -W],*(*V)+++(l?l
                             -1?l-2?l-3?(X=j-
                             Z,X=X&gt;0?X:-X,Y=i-
                            Z,Y=Y&gt;0?Y:-Y,Z=i+j
                            -Z-Z,Z=Z&gt;0?Z:-Z,X&gt;Y
                           ||X&gt;Z?Y   &gt;Z?k:j:i):
                           (i+j)    /2:j:i:0));
                          for(     E=t+O; *v-1[v]
                         &amp;&amp;c==   -16; ++*v)n=**v,n
                         -62?   n-60?n  -91?n-93||!
                        m||    !*E?*    v:(*v=A[--m+9
                       ]):    (A[9+    m++]=*v-1):--E
                      :++       E      ,n-43?n-44?n-45?
                     n-        46    ?0:putchar(*E):--*E
                   :(*       E=     getchar()):++*E; for(;
                   7&lt;       -c     &amp;&amp;11&gt;-c&amp;&amp;*v!=5[v]; ++*v)
                 **V      =c     +8?c+9?*V[1]++&lt;&lt;6|56:**V|~3
                &amp;*V     [1]     ++:**V&gt;&gt;6; for(; m&lt;n*2; m+=2)c
              +18?    c+19      ?0:(V[1][m/8]+=(*V[0] ++-56)&gt;&gt;m
             %8)     :(*       V[1]++=V[0][m/8]&lt;&lt;m%8 ); return !
           c?c:     c&gt;0       ?n=main(-7,(Q=**++v,N=0x49444154,*A
         =s+4,    main      (-128   ,A),A[1]=*++v,A  [4]=z,*A=x,A))
        ,c=A[    6]         -x-    12,Q-101?main(-19,(main(-10,(A[5]=
       t+n,    *A=          t,   A[1]=z,A)),*A=t,A  [1]=w,A)):main(-9,(
      main(   -8                ,((n=main(-7,(A[1]   =*++v,A[4]=t,*A=s+4,
    A)))&lt;0               ?      main     (-18,(n=  -n,*A=s,A[1]=t,A)):0,A[
    5]=t+n            ,*A=     t,A)      ),*A=t,  A[1]=z,A)),98-Q?E=memcmp(
   w,s,4              )?      n+=       main(-22  ,(*A=z,A[1    ]=t,A[2]=t+n
  ,A)),            N=n=     main     (-23,(*A=t, A[1]=z,A[2       ]=z+n,A)),
  memmove         (x+      c+n+12   ,x+c,12),memcpy(x+c+8,t,     n),main(-128
  ,(*A=          x+c       +4,A))   ,N=crc32(    0,memcpy(x       +c+4,s,4),n
 +4),           main       (-128,   (*A=x+c+     n+12,A)),n       +=c+24,x:(n=
 strlen         (w        +4),w+4),fwrite(E     ,1,n,stdout):  main(-16,(*A=w,
 A[1]=w    +H, A))       :-c&gt;31?main(c+=32     ,(*--*v=N,N&gt;&gt;=8,v)):-++c&lt;4?(-c)
 [*V]+256*main(c,v    ):c+23?c+22?c+21?c+6?c+5?c+4?0:(N=O,uncompress(*v=s+4,&amp;N
  ,v[3],v[2]-v[3]   ),main(c-7,v),H):(n-=l=main(-4,v)+12,5[*v]-68?(v[6]=(*v+=
  l)):(memcpy(v[2],*v+8,l-12),v[2]+=l-12,memmove(*v,*v+l,n)),main(c-(n&gt;8),v))
  :(n=  main(-24,v),main(-4,v)-0x89504e47?-H:main(c,(*v+=16,W=main(-4,v)*3,*v
   +=       4,H=main(-4,v)*W,B=(*v)[5],(*v)[5]=2,N=crc32(0,*v-    8,17),*v+=
    13         ,main(-128,v),v[3]=v[2]=w+O,*v-=21,v))):(*      *v=0,memcpy
     (++*v            ,v[1],W),*v+=W,v[1]+=W,                1+main((v[1]
      !=v[2])                                            *--c,v)):(N=O
         ,compress(*v,&amp;N,                    v[1],v[2]-v[1]),N):(f=
              fopen(v[1],&quot;rb&quot;))?fclose((n=fread(*v,1,O,f),f)),
                      n[*v]=0,n:(strcpy(*v,v[1]),0); }