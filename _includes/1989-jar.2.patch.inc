--- jar.2.c
+++ jar.2.c
@@ -1,20 +1,20 @@
 #define d define
-#d a include
-#a &lt;stdio.h&gt;
-#a &lt;string.h&gt;
-#a &lt;ctype.h&gt;
-#d p char*
-#d P ,(p)
-#d T(E) !strcmp(E,&quot;()&quot;)
-#d U return
-#d W while
-#d X sbrk(199)
-#d z atof
-#d e isspace
-#d D A(_)
-#d E S(C(_))
-#d B(y) p y(_)p _;{
-#d G(y,V) B(y)p i;U sprintf(i=X,&quot;%lf&quot;,z(E)V z(S(C(D)))),i;}
+#define a include
+#include &lt;stdio.h&gt;
+#include &lt;string.h&gt;
+#include &lt;ctype.h&gt;
+#define p char*
+#define P ,(p)
+#define T(E) !strcmp(E,&quot;()&quot;)
+#define U return
+#define W while
+#define X sbrk(199)
+#define z atof
+#define e isspace
+#define D A(_)
+#define E S(C(_))
+#define B(y) p y(_)p _;{
+#define G(y,V) B(y)p i;U sprintf(i=X,&quot;%lf&quot;,z(E)V z(S(C(D)))),i;}
 
 	    p sbrk(),*S(),*j(),*O,*H;K,Y,M=14;double
 	  z();Q(_)p _;{int V=0;W(e(*_))_++;H=_;W(V|!(e
@@ -28,11 +28,11 @@
 
 i,*s;{U isdigit(*i)		?         z(i)!=z(s):strcmp(i,s);}
   B(b)U L(E,S(C(D)))?&quot;()&quot;:&quot;t&quot;;}B(R)U E;}B(o)U z(E)&lt;z(S(C(D)))?
-    &quot;t&quot;:&quot;()&quot;;}G(f,+)G(g,-)G(h,*)p r[4][2]={&quot;function&quot;   P R,
-      &quot;quote&quot;P C,&quot;lambda&quot;P Z,&quot;defun&quot;P j};B(j)U r[M][1]=D,*
-	r[M++]=C(_);}p not[99][2]={&quot;if&quot;P F,&quot;equal&quot;P b,&quot;&lt;&quot;
-	  P o,&quot;+&quot;P f,&quot;-&quot;P g,&quot;*&quot;P h,&quot;car&quot;P c,&quot;cdr&quot;P q,
-	    &quot;cons&quot;P t,&quot;t&quot;,&quot;t&quot;};B(S)int Li,s;p u;if(
+    &quot;t&quot;:&quot;()&quot;;}G(f,+)G(g,-)G(h,*)p r[99][2]={&quot;function&quot;  P R,
+      &quot;quote&quot;P C,&quot;lambda&quot;P Z,&quot;defun&quot;P j,&quot;if&quot;P F,&quot;equal&quot;P b
+	,&quot;&lt;&quot;P o,&quot;+&quot;P f,&quot;-&quot;P g,&quot;*&quot;P h, &quot;car&quot;P c, &quot;cdr&quot;P q,
+	  &quot;cons&quot;P t,&quot;t&quot;,&quot;t&quot;};B(j)U r[M][1]=D,*r[M++]=
+	    C(_);;;;;;;;;;;;;;}B(S)int Li,s;p u;if(
 	      isdigit(*_)|T(_))U _;for(Y=M;Y--;)
 		if(!strcmp(_,*r[Y]))U r[Y][1]
 	      ;u=E,_=D;if(*u-&#39;(&#39;)U(*((p(*)())u)