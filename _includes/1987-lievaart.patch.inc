--- lievaart.c
+++ lievaart.c
@@ -1,12 +1,12 @@
 #define D define
-#D Y return
-#D R for
-#D e while
-#D I printf
-#D l int
-#D C y=v+111;H(x,v)*y++= *x
-#D H(a,b)R(a=b+11;a&lt;b+89;a++)
-#D s(a)t=scanf(&quot;%d&quot;,&amp;a)
+#define Y return
+#define R for
+#define e while
+#define I printf
+#define l int
+#define C y=v+111;H(x,v)*y++= *x
+#define H(a,b)R(a=b+11;a&lt;b+89;a++)
+#define s(a)t=scanf(&quot;%d&quot;,&amp;a)
 l V[1100],u,r[]={-1,-11,-10,-9,1,11,10,9},h[]={11,18,81,88},ih[]={22,27,72,77},
 bz,lv=60,*x,*y,m,t;S(d,v,f,a,b)l*v;{l c=0,*n=v+100,bw=d&lt;u-1?a:-9000,w,z,i,zb,q=
 3-f;if(d&gt;u){R(w=i=0;i&lt;4;i++)w+=(m=v[h[i]])==f?300:m==q?-300:(t=v[ih[i]])==f?-50