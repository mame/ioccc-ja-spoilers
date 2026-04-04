--- wall.c
+++ wall.c
@@ -13,7 +13,7 @@
 cc)
 C
 cc;
-{
+{ cc=strdup(cc);
 C
 cccc=
 cc;int
@@ -50,7 +50,7 @@
 }main(,cc)
 C
 #define O write(1,
-c=&quot;O&quot;;
+c=strdup(&quot;O&quot;);
 O_(sy) keyboard));
 main(;;,for);
 read(0,