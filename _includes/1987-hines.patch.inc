--- hines.c
+++ hines.c
@@ -6,7 +6,7 @@
 {char *ogto,   tgoo[80];FILE  *ogot;  int    oogt=0, ootg,  otog=79,
 ottg=1;if (    togo==  ottg)   goto   gogo;  goto    goog;  ggot:
 if (   fgets(  tgoo,   otog,   ogot)) goto   gtgo;   goto   gott;
-gtot:  exit(); ogtg: ++oogt;   goto   ogoo;  togg:   if (   ootg &gt; 0)
+gtot:  exit(0);ogtg: ++oogt;   goto   ogoo;  togg:   if (   ootg &gt; 0)
 goto   oggt;   goto    ggot;   ogog:  if (  !ogot)   goto   gogo;
 goto   ggto;   gtto:   printf( &quot;%d    goto   \&#39;s\n&quot;, oogt); goto
 gtot;  oggt:   if (   !memcmp( ogto, &quot;goto&quot;, 4))     goto   otgg;