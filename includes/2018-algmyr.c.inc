#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#define M malloc(sizeof(
#define R fread(x,sizeof(float),Z*w,f)
#define E free(

char*G=
&quot;   &quot;
&quot;    &#39;&quot;
&quot;@(*AP(  &quot;
&quot;             &quot;
&quot;                     &quot;
&quot;                              &quot;
&quot;                                        &quot;
&quot;                                                   _&quot;
&quot;0   #@ .  \&quot;C^*/XH\&quot;Q2_U(D&amp;(5*E0C 4B54DV   X    \&quot;!9A@   89H$ !&quot;
&quot;0(/@@4 @(/@@(   #@T  @(\&quot; @(    P, , P# , #Y1244^   ?R 0#%)14,A#9)24$B 1&quot;
&quot;_)!0,$Y145%R Y145$^&amp;!81T! #9)24DV#Y)24DP  ;&amp;P     -C4 $$B% @ !04%!04 @4(D$ #!(1&quot;
&quot;4 @#U574$^&#39;^0D)!_&amp;Z1D9&#39;_$*!@8%^&#39;Z!@8&#39;_(&amp;1D9&#39;_(\&quot;0D)#_%Z1D8%^/\\0$!#_ \&quot;!_X$ /X! 0&quot;
&quot;$&amp;(-$*!#_ $! 0&#39;_/] ,$#_/\\&amp;&amp;&amp;#_&#39;Z!@8%^&amp;\&quot;0D)#_&#39;V\&quot;A8%^&amp;&gt;8D)#_$Z1D9%B(\&quot; _X\&quot; /X&quot;
&quot;! 0&#39;^/ , PSP/P#&#39; /\\,&lt;H$\&quot;C&#39;, @&#39;R# ,&amp;AD8F&#39;(&amp;!_P   ,,,,     _X&amp;!! @0\&quot; 0 &quot;
&quot;$! 0$!  @0(   \\5%14\&quot; X1$0G_!$1$1$./\\2$1$. T5%14. \&quot;0D&#39;\\ &#39;Y)&quot;
&quot;144X \\0$ C_  !7Q     7A$! $2# 3_ $!_H   \\0&#39;Q ? \\0&quot;
&quot;$! ? X1$1$.#A$1\&quot;1_&#39;](1$0X @0$ @? (5%14)&quot;
&quot;  1$?X0!\\\&quot; 0$&gt;!@&amp; 088!X!#@$&gt;&quot;
&quot;!$*! H1#X)!04X!$9%1,1&quot;
&quot;(&amp;!;A 0   _P &quot;
&quot; ! 0;H&amp;!&quot;
&quot; @$\&quot;&quot;
&quot;! (&quot;
&quot;\0&quot;;                            int s,p,e,c,t,r,a,l;   /* l e a k a g e */
 
                                                     int
                                                   F(int o
                                                ,int n, int t
                                             ){char*p=(o*(136-o)
                                           &gt;=1260)*7*(o-9)+G; for(
                                          n=!(o=-1); n=*p+++64*n-*G
                                        ,(o+=3)&gt;&gt;2&lt;5-t; ); return 255
                                       &amp;n&gt;&gt;2*o%8; } float L[0x400];int
                                     T(float a,float b,float l,float*e)
                                    {return L[0x3ff]||!(e[1]=b*a+l**e)||
                                   !T(l*a-b**e,b,l,e+1); } float f(int x)
                                  {int w=s&lt;&lt;!!T(1,6.135885e-3,-1.882472e-5
                                 +1,L); x=(x%w+w)%w&lt;&lt;9; return(L[x/s]*(s-x%
                                s)+L[x/s+1]*(x%s))/s; } int C(float*h,float*
                               i,int r,int P){ int x,y,c; for(y=0; h&lt;i; ++y,h
                               +=r){ c=P&lt;1; for(*h=x=0; x&lt;8; c+=(1&amp;P&gt;&gt;x&amp;&amp;P+(*
                              h+=f(e*(l+a*(2*x+1))*y)*f(s/2-e*a*y+e*a*y*y*(t/p
                             )/(s/p)))),++x); float z=f(y*t)*f(y*t); *h=z*(1+3*
                             z+2*z*z)/6**h/c; } return h-i-r+1; } void d(int w,
                            int n,FILE*f){int Z=s/t; int S[5]; float**P=M float*
                            )*c);for(r=0;r&lt;c;++r){ P[r]=M float)*Z); C(P[r],P[r]
                           +Z,1,r); } float*x=M float)*Z*w); for (; ; ){ for(r=0;
                r&lt;5        ; ++r){ int o=1; for(R,a=256; o&amp;&amp;--a; )for(o=t=0; t&lt;Z;        o+=
               P[a][       t]!=x[w*t+n],++t); S[r]=a; } if(R-Z*w)break; for(r=a= -      12;r&lt;
              5&amp;&amp;(a+=     a&lt;11?22:1)&lt;127; )for(r=-1; ++r&lt;5&amp;&amp;F(a,1,r)==S[r]; );if(a     &lt;127&amp;&amp;r
    ==5      )putchar(    a); } for(; --c; E P[c])); E P); fclose(f);}int main(int    q,char**v)      {s=
   44100     ;p=25; e=    55;c=256; t=75; r=q&gt;1?v[1][0]*c+v[1][1]:0; a=7;l=16;if(r    ==11620){d     (atoi
  (v[2]),   atoi(v[3]),  q&lt;5?stdin:fopen(v[4],&quot;r&quot;)); return 0; } char*H=malloc(c),*  h=H; sprintf   (H,&quot;\0&quot;
 &quot;Usage\n&quot;  &quot;    %s [-&quot;  &quot;h] [-d #c cid] file1 file2 ... (or stdin)&quot;+(q-1&amp;&amp;r==11624  ),v[0]);if(*  H)q=1;int
 w=2&gt;q?1:q -1; FILE**f=M FILE*)*w); f[0]=stdin; if(q&gt;1)for(r=0; r&lt;w; f[r]=fopen(v[r +1],&quot;r&quot;),++r); int l=s/t
 *w; float *b=M float)*l ),*t=b+l; int*i=M int)*w); for(; ; ){ int x=*h&amp;&amp;1&gt;ungetc(* H++,*f); for(r =w; r--;)
{ i[r]=getc (f[r]); if(i[r]&lt;0)i[r]=!++x; } if(x==w)break; while(++r&lt;6){ while(C(b++,t,w,F(*i++,r&lt; 5,r))); i-=
w; fwrite(b-=w,sizeof(float),l,stdout); } fflush(stdout); } while(fclose(f[--w]),w); E f); E b); E i); E h);}
