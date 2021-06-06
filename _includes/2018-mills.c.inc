#include&lt;fcntl.h&gt;
#include&lt;unistd.h&gt;
#include&lt;termios.h&gt;
#include &lt;sys/time.h&gt;
#include  &lt;sys/mman.h&gt;
# define L } if(!i -- ){
struct timeval F,G; struct termios H,U={ T} ; enum{ N=64,a=N&lt;&lt;7,b=a-1,c=a*32,d
=c-1,    e=c/    2,f=    a*2,    g=a/2,h =g/2,j =h/ 2,Q=V*j*5} ; char*s=P,K,M;
int*      p,      l[      a]      ,m,n,J,o=A,    O=j,E,R,i,k,t,r,q,u,v,w,x,y,z
,B,C,    *D,Z    ;int    main    (){ for(D=mmap(D,4*Q,3,W,open(I,2 ),K); *s; o
++[ l]=k|=* s++%N){ k=* s++%N&lt;&lt;12; k|=*s++% N*N; } tcgetattr(q,&amp; H); tcsetattr
(y,2,    &amp;U);    for(    fcntl(B,4,4); ; o&amp;=b){ if(k&amp;    c){ q=- --k%N; if(!q)
k-=c      ;i      =k      /N&amp;7; { L L if(J&amp;1)    m+=      t; J|=m%N*c; J/=2; m
/= 2;    if(!    q&amp;&amp;r    ^n){ m^=d; J^= d; n=0; } L L    J+=J; J|=m&gt;=0; if(q){
m+=m; m|=J/c; m+=m&lt;0?t:-t; } else{ m+=(m&lt;0)*t; if(r)m^=d; if(n^r)J^= d; n=0; }
L if(    (m^2    *m)/    e%2)    k&amp;=d; else{ J+=J; m+=m; m|=J/c; } L m|=n*c; J
|= m      %N      *c      ;m      /=2; J /=2;    L m+=m; J+=J; J|=n; m|=J/c; L
m+=m;    m|=n    ;  }    J&amp;=d    ; } else{ i=k/f; t=i?k&amp;b:16; p=l+t; if(k&amp;a)p=
l+((*p+=13&gt;i&amp;&amp;7&lt;t&amp;&amp;16&gt;t)&amp;b); { L i=1; L*p=m; L*p++=o|n*e; o=p-l; L*p=0; L m=*p
; L m ^=*p ; L t=m; m    +=*p; m+=d&lt;m    ; n|=((m^t)&amp;    (m^*p))/e; L    m+=*p
; n=m/c; L k=*p; if(      !Z||k/f-8)      /*$    %*/      continue ;      k=-k
; L++*p; o +=!(*p&amp;=d)    ; L m&amp;=*p; L     if(m!=*p)++    o; L o=p -l;    L if(
k&amp;a)n=m/e; if(k&amp;g)J= 0; r=k&amp;h&amp;&amp;m&amp;e; if(k&amp;j)J|=m; else if(r)m^=d; if(k&amp;512)m=0;
i=k/N    &amp;7; { L if(k    &amp;4)J    ^=d; if(k&amp;2)m|=J; if    (k&amp;1    )m|=    q;  }
else      { if(k%N)k      +=      c; { L t =o    ++[      l]      ;       if(r
)J^=d;   L L t=o++[l];   if(r    )J^=d; m-=t; if(m&gt;=0    ){ k    -=c;     n=1;
++o; } } i=2; } L if(Z)k=-1; else{ if(k&amp;8)m=0; t=r=0; i=k/N%N; if(i==27){ if(k
&amp;2)u=v=w=Z=0;    } if    (i==57){ i=k/16&amp;3; { L w =1;    if(k&amp;1)x =0;    if(k&amp;
2) { t= z/N;      t=      t/80*/*/*/100+t% 80;   r=0      ; while(t)      {  r
+=t%10*w; t/=    10;w    &lt;&lt;=4; } m|=r; } if(k&amp;4){ r=m    ; t=0; while    (r) {
t+=r%16*w; w*=10; r&gt;&gt;=4; } r=t/100; t%=100; if(V&lt;=r||79&lt;t)x|=c/8; else z=(r*80
+t)*N    ;  }    w=0;    L if(k&amp; 1&amp;&amp;x    &amp;(e|g) )++o;    if(k&amp; 2)m|=x    |y;if
(k&amp;4      )C      =-      m&amp;65535; L      if(    k&amp;1      )x=y=0; if      (k&amp;2
)B=m;    if (    k&amp;4)    { y^=m&amp;(h|j|    j/2); if(y&amp;j    ){ y^=j;x|=g    ; do{
B&amp;=b; if(y&amp;j/2)z[D]=B[l]; else B[l]=z[D]; ++z; z%=Q; ++B; } while(-- C); } } }
x%=e;    if(x    /a)x    |=e;    if(x&amp;(e|g)&amp;&amp;y&amp;h)u|=c    ; else u%=c;    L if(
k&amp;1)      t=      h;      if      (k&amp;2 )r= e;    if(      k&amp;4){ r=j;      u&amp;=~
h ; }    if(k    &amp;16)    Z=f*    2; L L L t=f; if(k&amp;2    )m|=M|Y; if(    k&amp;4)m
|=u|v; L t=a; if(k&amp;4){ K=m&amp;~Y; write(1,&amp;K,1); u|=t; t=0; } } i=2; if(t){ if(k&amp;
1&amp;&amp;u&amp;t)++ o; if(k&amp;2)u    &amp;=~ t; } if(    r){ if(k&amp;32)    w=r;    else v&amp;=~r; }
} L if(k&amp;a)m=k; else      { t=0; if(      k &amp;    N)t      |=      m/e%2; if(k&amp;
128)t|=!m; if(k&amp;256)t    |= n; if( k&amp;    512 )t=!t; o    +=t;    if(k&amp; h)n =0;
if(k&amp;g)m=0; if(k&amp;1)m^=d; if(k&amp;2)n^=1; if(k&amp;4)m|=S; if(k&amp;8){ m|=n*c; m+=m; if(k
&amp; j)m    +=m;    m|=m    /a/N    ; n=m/c; } if(k&amp;16){ m|=n*c;    m|=m    *2%N*
c; m      /=      2;      if      (k&amp;j) m/=2;    n=m/c; } if      (k      &amp;32)
{ if(    Z)k=    -1 ;    else    break; } } } } n&amp;=1; if(k&lt;c)    {  m    &amp;= d;
o &amp;=b; if(!R--){ if (~u&amp;f &amp;&amp;read(0, &amp;M,1)&gt;0){ if(X&amp;&amp; M== X)break; R=0; u|=f; }
gettimeofday(&amp;G,0); G.tv_usec/=16667; if(G.tv_sec&gt;F.tv_sec||F.tv_usec&lt;G.
tv_usec){ F=G; if(v&amp;j){ p=l+7; ++*p; *p&amp;=d; if(!*p)u|=h; } R=0; } if
(!R){ E=O/4; O=4; } O+=R=E; } if(!++k||(v&amp;e&amp;&amp;u)){ *l=o|n*e|Z;v%=
e; o=1+!k; Z=0; } v|=w; w=0; k=o++[l]; } }tcsetattr(w,1,&amp;H); }