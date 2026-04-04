--- williams.c
+++ williams.c
@@ -64,7 +64,6 @@
 w=RootWindow(d,0);
 R i--) XMapWindow(d,w=XCreateSimpleWindow(d,w,0,0,W,H,0,0,0));
 XSelectInput(d,w,4|1&lt;&lt;15);
-XMaskEvent(d,1&lt;&lt;15,&amp;e);
 g=XCreateGC(d,w,829,&amp;G);
 srandom(time(0));
 J();