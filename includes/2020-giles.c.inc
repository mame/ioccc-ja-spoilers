#ifdef _WIN32
#define _CRT_SECURE_NO_WARNINGS
#include &lt;io.h&gt;
#include &lt;fcntl.h&gt;
#define X ;_setmode(_fileno(h),_O_BINARY)
#else
#define X
#endif

#include &lt;stdint.h&gt;
#include &lt;stdio.h&gt;
#include &lt;string.h&gt;

#define a [l+z]
#define m(aa) z=aa;z=z;;
#define g(g,a)memset(g,0,a);
#define e2(a,g)!fread(a,g,1,h)
#define aa(a)fprintf(stderr,&quot;%s\n&quot;,a);return 1;
#define n(n) b=n-i;b=b&lt;0?1+b:1-b;d[n+2]+=b&gt;0?b*c*aa:0;
#define t(t) z=t;b=(1-6[d])*d[2]+2*17 a*0 a-1 a*d[6];1 a=0 a;0 a=b*6[d];
#define f(f,aa) x=0; f(2)aa f(10)aa f(6)aa f(12)aa f(4)aa f(8)aa f(14)aa f(0)aa
#define j if(w){b=-1;char j=0;f(m,if(32 a&gt;b){b=32 a;j=k[z];}if(33 a&gt;b){b=33 a;j=k[z+1];})putchar(j);}

const char*t=

&quot;Dual-tone multi-frequency signaling&quot;
&quot;(DTMF) is a telecommunication signaling&quot;
&quot;system using the voice-frequency band&quot;

         &quot;Invalid WAV input\0Read &quot;
      &quot;error\0Cannot read dtmf.bin\0rb\0&quot;+111;
    int main(int m,char**f){double aa,c,d[8]={[
   6]=--m?1:0.994,[7]=1e-4},g,i=0,l[&#39;0&#39;]={0},b,
  e2=0,x;char k[&#39;:&#39;+&#39;s&#39;];FILE*h;if(!(h=fopen(t+
 &#39;)&#39;,t+&#39;2&#39;))){memcpy: aa(t+&#39;A&#39;-&#39;$&#39;)}uint32_t p=
 e2(k+&#39;U&#39;,&#39;,&#39;)||e2(l+16,&#39;C&#39;+&#39;=&#39;)||e2(k,&#39;Q&#39;),w=0
 ,o[2],z,n;fclose(h);if(p)goto memcpy;setvbuf(h
=m?stdout:stdin,0,_IOFBF,65536)X;uint16_t e,v;
int16_t r;if(m){m(6400*strlen(*++f))mem\
cpy(k+&#39;+&#39;+&#39;R&#39;,&amp;z,4);z+=&#39;$&#39;;me\
mcpy(k+&#39;Y&#39;,&amp;z,4);fwrite(k+&#39;U&#39;,
&#39;,&#39;,1,h);while(**f){char*c=st\
rchr(k,*(*f)++);g(l,&#39;F&#39;+&#39;:&#39;)if
(c){w=c-k;double*n=l+w%4*2;*n
=n[16];n=l+8+(w/4)%4*2;*n=n[
16];}for(w=3200;w;--w){f(t,x
+=b*e2*49e2;)r=x;fwrite(&amp;r,2
,1,h);e2+=(w&gt;1300?1:-1)*3e-2
;e2=(e2&gt;1?1:(e2&gt;0?e2:0));}}}
else{ if(e2(k+&#39;+&#39;+&#39;V&#39;,&#39;,&#39;)){
fread:aa(t+18)}if( memcmp(k+
&#39;+&#39;+&#39;^&#39;,k+&#39;]&#39;,14)){ int_16t:
aa(t)}memcpy(&amp;n,k+&#39;+&#39;+&#39;n&#39;,4)
;c=16e3/n;n=c; if(n!=c)++n;c
/=n;memcpy( &amp;v,k+43+&#39;x&#39;,2);v
/=8; memcpy(&amp;e,k+&#39;+&#39;+&#39;v&#39;,2);
if(!e||!v||v&gt;4)goto int_16t;
e-=v;while(!e2(k+&#39;Q&#39;,v)){m(e
)while(z-- &amp;&amp; getc(h)&gt;=0);if
(v&gt;1){memcpy(&amp;r,k+v+&#39;O&#39;,2);g=r/512\
.0/&#39;@&#39;;} else g=(unsigned char)k[&#39;Q&#39;]/128.0-1;
 for(p=n;p;--p){aa=(e2-g)*p/n+g;n(0)n(1)n(2)i+=
 c;if(i&gt;=1){g(d,16)g(o,8) f(t,b=0 a-d[6]*17 a*1
  a;aa=d[6]*1 a*16 a;aa=b*b+aa*aa;x+=aa;if(aa&gt;=d
  [z/8]){o[z/8]=z/2;d[z/8]=aa;})if( (r=w?x&gt;d[7]*
   0.45:x&gt;d[7]*0.6)){if(!w)g(l+32,128)if(x&gt;d[7])
    d[7]=x; /* x= (-b+sqrt(b*b-4*a*c))/(2*a); */
++   l[16+o[1]*4+*o];}else j w=r;memmove(d+2,d+3
      ,24);--i;}}e2=g;}if(ferror(h))goto fread
        ;j puts(&quot;0123456789&quot;+10);}return 0;}