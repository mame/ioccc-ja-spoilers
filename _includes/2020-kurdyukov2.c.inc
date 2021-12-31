#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;stdint.h&gt;
#include &quot;jpeglib.h&quot;
#define J(x) jpeg_##x;
#define A B(p=t+Z*b+y*S;l=w*h;for(u=j=0;l&amp;&amp;j&lt;b;p++)X-&gt;c[j\
++]=(p[w*b+h*S]-p[w*b]-p[h*S]+*p+l/2)/l,-),u+=z*z; X-&gt;d=u;}
#define G(h,n) D.comp_info[0].h##_samp_factor=1;D.image_##n;
#define B(e,f) {int x,Z=X-&gt;x,y=X-&gt;y,w=X-&gt;w,h=X-&gt;h;e;for(;h--\
;y++)for(x=Z;x&lt;w+Z;x++)for(j=0;j&lt;b;j++)z=d[y*s+x*b+j]f X-&gt;c[j]
#define H(W,H,w,h,B,i) for(B=z=i=0;++z&lt;w;u&gt;B?B=u,i=z:0)for(u=j\
=0;p=t+x*b+y*S+j,j&lt;b;j++)K=p[z*W+h*H]-p[z*W],Q=N-&gt;c[j]*h,L=p[w*\
W+h*H]-p[w*W]-K-Q*(w-z),K-=p[h*H]-*p+Q*z,u+=L&lt;0?-L:L,u+=K&lt;0?-K:K;
#define W(r,X,a,o,Y,b,c,S) {S J(error_mgr E)S J(c##_##S D);D.err=\
J(std_error(&amp;E))if(!(F=fopen(*++V,#r)))break;J(create_##c(I=&amp;D))J(\
stdio_##o(I,F))Y;J(start_##c X)while((y=D.a##_scanline)&lt;h)R=d+y*s,J\
(b##_scanlines(I,O=&amp;R,1))J(finish_##c(I))J(destroy_##c(I))fclose(F);}
int main(int c,char**V){while(c==4){intptr_t w,h,s,b,S,j,i,x,y,v,q,z,k
,l,g=JCS_RGB,n=atoi(*++V);uint8_t*d;void*O,*R,*F,*I;int64_t*p,e,f,u,K,L
,*t,Q,U=1;struct{uint16_t x,y,w,h;uint8_t c[4];int64_t d;}*P,*N,*X,o={0}
;W(rb,(I);w=D.output_width;h=D.output_height;b=D.output_components;L=n=n
&lt;1?1:n&gt;w*h?w*h:n;K=S=(s=w*b)+b;K=sizeof(o)*L+(u=K*h+K)*9;if((L=(size_t)K
)-K||!(t=malloc(K)))break;X=P=O=t+u;d=O=P+n,output,src,J(read_header(I,U
))D.do_fancy_upsampling=0;D.out_color_space=g,read,decompress,struct)fo\
r(i=j=0;j&lt;b;j++)for(x=j-S,z=j-b;x&lt;S*h;x+=b)t[x+S]=x&lt;0?y=0:t[x]+(u=y--?u+
d[z+=b]:(y=w,0));;o.w=w;o.h=h;*X=o;A for(;N=X=P,U&amp;&amp;++i&lt;n;){for(U=j=0;j++
&lt;i;X++)U=X-&gt;d&gt;U?(N=X)-&gt;d:U;;o=*N;v=o.w;q=o.h;x=o.x;y=o.y;H(b,S,v,q,e,k)H
(S,b,q,v,f,l)e&lt;f?o.y+=N-&gt;h=l,o.h-=l:(o.x+=N-&gt;w=k,o.w-=k);*X=o;A X=N;A}f\
or(;i--;X++)B(,=);}W(wb,(I,1),next,dest,D.input_components=b;D.in_color\
_space=g;J(set_defaults(I))G(h,width=w)G(v,height=h)J(set_quality(I,100,
D.optimize_coding=1)),write,compress,struct)free(t);return 0;}return 1;}
