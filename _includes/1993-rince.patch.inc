--- rince.c
+++ rince.c
@@ -50,7 +50,7 @@
 int _tty_ch;
 bool _echoit;
 bool _rawmode;
-SGTTY _tty;
+int _tty;
 #define U char
 #define G for(
 #define I )malloc(sizeof(
@@ -71,7 +71,7 @@
     (mvaddch(y,x,X[y][x]),++x^W-1)||(x=0,y++));
     k=y=- --x;
     G
-    refresh(),c=select(k,&amp;y,0,0,&amp;v)?getch():0;
+    refresh(),c=select(k,&amp;y,0,0,(v.tv_usec=1&lt;&lt;17,&amp;v))?getch():0;
     k?++x-W||(x=1,++y-Q||(--k,x=W-1,y=Q-1)):--x||(y--,x=W-1),k|y;
 )
 