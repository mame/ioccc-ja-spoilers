--- eldby.c
+++ eldby.c
@@ -1,7 +1,7 @@
 float s=1944,x[5],y[5],z[5],r[5],j,h,a,b,d,e;int i=33,c,l,f=1;int g(){return f=
 (f*6478+1)%65346;}m(){x[i]=g()-l;y[i]=(g()-l)/4;r[i]=g()&gt;&gt;4;}main(){char t[1948
 ]=&quot; `MYmtw%FFlj%Jqig~%`jqig~Etsqnsj3stb&quot;,*p=t+3,*k=&quot;3tjlq9TX&quot;;l=s*20;while(i&lt;s)
-p[i++]=&#39;\n&#39;+5;for(i=0;i&lt;5;i++)z[i]=(i?z[i-1]:0)+l/3+!m();while(1){for(c=33;c&lt;s;
+p[i++]=&#39;\n&#39;+5;for(i=0;i&lt;5;i++)z[i]=(i?z[i-1]:0)+l/3+!m();while(1){usleep(30000);for(c=33;c&lt;s;
 c++){c+=!((c+1)%81);j=c/s-.5;h=c%81/40.0-1;p[c]=37;for(i=4;i+1;i--)if((b=(a=h*x
 [i]+j*y[i]+z[i])*a-(d=1+j*j+h*h)*(-r[i]*r[i]+x[i]*x[i]+y[i]*y[i]+z[i]*z[i]))&gt;0)
 {for(e=b;e*e&gt;b*1.01||e*e&lt;b*.99;e-=.5*(e*e-b)/e);p[c]=k[(int)(8*e/d/r[i])];}}for