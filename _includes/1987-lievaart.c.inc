#define D define
#D Y return
#D R for
#D e while
#D I printf
#D l int
#D C y=v+111;H(x,v)*y++= *x
#D H(a,b)R(a=b+11;a&lt;b+89;a++)
#D s(a)t=scanf(&quot;%d&quot;,&amp;a)
l V[1100],u,r[]={-1,-11,-10,-9,1,11,10,9},h[]={11,18,81,88},ih[]={22,27,72,77},
bz,lv=60,*x,*y,m,t;S(d,v,f,a,b)l*v;{l c=0,*n=v+100,bw=d&lt;u-1?a:-9000,w,z,i,zb,q=
3-f;if(d&gt;u){R(w=i=0;i&lt;4;i++)w+=(m=v[h[i]])==f?300:m==q?-300:(t=v[ih[i]])==f?-50
:t==q?50:0;return w;}H(z,0){if(GZ(v,z,f,100)){c++;w= -S(d+1,n,q,-b,-bw);if(w&gt;bw
){zb=z;bw=w;if(w&gt;=b||w&gt;=8003)Y w;}}}if(!c){bz=0;C;Y-S(d+1,n,q,-b,-bw);}bz=zb;Y
d&gt;=u-1?bw+(c&lt;&lt;3):bw;}main(){R(;t&lt;1100;t+=100)R(m=0;m&lt;100;m++)V[t+m]=m&lt;11||m&gt;88
||(m+1)%10&lt;2?3:0;V[44]=V[55]=1;V[45]=V[54]=2;I(&quot;Level:&quot;);s(u);e(lv&gt;0){do{I(&quot;Yo\
u:&quot;);s(m);}e(!GZ(V,m,2,0)&amp;&amp;m!=99);if(m!=99)lv--;if(lv&lt;15&amp;&amp;u&lt;10)u+=2;I(&quot;Wait\n&quot;)
;I(&quot;Value:%d\n&quot;,S(0,V,1,-9000,9000));I(&quot;move: %d\n&quot;,(lv-=GZ(V,bz,1,0),bz));}}GZ
(v,z,f,o)l*v;{l*j,q=3-f,g=0,i,h,*k=v+z;if(*k==0)R(i=7;i&gt;=0;i--){j=k+(h=r[i]);e(
*j==q)j+=h;if(*j==f&amp;&amp;j-h!=k){if(!g){g=1;C;}e(j!=k)*((j-=h)+o)=f;}}Y g;}