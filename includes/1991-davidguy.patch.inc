--- davidguy.c
+++ davidguy.c
@@ -6,7 +6,7 @@
 #define e j(u*)
 #define r register u
 #define R(b)write(A,T=h,4*b);
-#define S (u*)sbrk(Q*4+U*8)+U
+#define S (u*)malloc(Q*4+U*8)+U
 #define E(a,b,c)a=c&amp;1&lt;&lt;31|b/2;c=c*2|b&amp;1;
 #define V q=h^*L;L+=F;E(d,q,x)E(f,d,s)g=f&amp;q;f^=q
 #define W while(
@@ -20,8 +20,8 @@
 h;Y;y= *--T;H=2;}else{H=1;W*s)K=1+*s++;}connect(A=socket(a,1,0),T=h,24-a*4);H=
 17004;H=11;e=0;e=0;i=66==*h;R(3)read(A,h,8);e;H;read(A,h,4*H);T=h;e;F=e;e;e;I=
 11+H;f=H-6;K;U=K;i^=K;z=!K;T+=I/4*4+8*U;W y--){T+=39;I=K;W I--)H,T+=4+24*H;}I=
-e;e;B=(!e^**b&amp;1)-1;e;e;U=H/32;J=H/30*30;T+=14;M=K;f/=U;T=h;K=55;K;H=4;e=F;e=I;
-e=0;R(4)N=F+8192;K=53;K=M;H=4;e=N;e=I;H=U*32;H=J;R(4)K=2;K;H=4;e=I;e=1;e=N;R(4
+e;e;B=(!e^**b&amp;1)-1;e;e;U=H/32;J=H/30*30;T+=14;M=K;f/=U;T=h;K=55;K;H=6;e=F;e=I;
+e=12;e=-1;e=0;R(6)N=F+8192;K=53;K=M;H=4;e=N;e=I;H=U*32;H=J;R(4)K=2;K;H=4;e=I;e=1;e=N;R(4
 )Q=J*U;c=S;d=S;L(c);W 1){P}C}y=0;W y&lt;J){K=72;K=0;g=J-y;H=6+U*(g&gt;f?g=f:g);e=N;e
 =F;H=U*32;H=g;H=0;H=y;K=0;K=1;R(6)write(A,c+y*U,g*U*4);y+=g;}K=61;K=0;H=4;e=I;
 e=0;e=0;R(4)C}P}v(c,d);}}L(A)r*A;{r*T=A+Q,X=getpid();W A&lt;T)*A++=X=3*X^X/2;}v(n
@@ -29,5 +29,5 @@
 ){*L= *G;G++[F]=L++[F];}W i&lt;J){z=O+i*F;y=n+i*F-F;i+=30;L=y-1;A=L+U*32;W L&lt;A){L
 +=F;E(X,(*L^h),x)E(q,X,s)}X=0;W X++&lt;F){L=y++;G=z++;V;c=g|f&amp;d;I=f^d;V;W L&lt;=A){M
 =0;Z;N=d;T=f;v=g;V;Z;c^=I&amp;d;*G=h^c&amp;~M&amp;(I^d|N);G+=F;c=v|T&amp;N;I=T^N;}}}z=O;y=n;I=
-J;W--I!=-1){f= *z&gt;&gt;31;G=z+F;L=y+F;W G&gt;z){M= *--G;*--L=(M*2)+f;f=M&gt;&gt;31;}z+=F;y+
-=F;}}
+J;W--I!=-1){f= *z&gt;&gt;31;G=z+F;L=y+F;W G&gt;z){M= *--G;*--L=(M*2)+f;f=M&gt;&gt;31;}z+=F;y+=
+F;}}