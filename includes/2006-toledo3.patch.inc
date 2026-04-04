--- toledo3.c
+++ toledo3.c
@@ -1,6 +1,6 @@
 #include &lt;X11/Xlib.h&gt;
 char *l=&quot;dbcefcbddabcddcba~WAB+  +BAW~              +-84HLSU?A6J57IKJT576,&quot;,
-*F=&quot;          ,&gt;&gt;,&gt;  xl~w/?  ,&gt;&gt;&gt;,s  m\177&gt;&gt;\177\177  mm2&gt;&gt;&gt;  &gt;uk&gt;&gt;&gt; &quot;,*f;y,u;
+*F=&quot;          ,&gt;&gt;,&gt;  xl~w/?  ,&gt;&gt;&gt;,s  m\177&gt;&gt;\177\177  mm2&gt;&gt;&gt;  &gt;uk&gt;&gt;&gt; &quot;,*f;long y,u;
 #define v for (i=0,b=0;b&gt;511?b=0,i+=64:0,i&lt;512;b+=64) A=i/64*10+b/64+21,XCopy\
 Plane(d, r[I[A]+7+14*(i+b&gt;&gt;6&amp;1)+28*(A==z)],w,C,0,0,64,64,b,i,1); XFlush(d);
 #define _(a) *f++=a&amp;*F?-(z%14&lt;7):&quot;U\252U\0DDDD&quot;[z/14*2|u&amp;1],
@@ -11,10 +11,12 @@
 #define H while(
 #define D ;if(
 
+long
+
 I[304],b,i,z;main(x,W)                   char**W; { Display *d =
  XOpenDisplay(&quot;&quot;); Window               w = XCreateSimpleWindow
   (d, DefaultRootWindow(d),            64,64,512,512,2,G(Black)
-   ,G(Black)); XGCValues g;           XButtonEvent e; int A,r
+   ,G(Black)); XGCValues g;           XButtonEvent e; long A,r
     [56],Z,* m = I , C ,Y;           XSelectInput(d,w,32772);
      XMapWindow( d, w); g.          foreground = G(White);
       C=XCreateGC(d,w,4,&amp;g);       F+=48; H f=I,i=0,z&lt;56){