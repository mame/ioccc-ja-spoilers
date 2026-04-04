--- schnitzi.c
+++ schnitzi.c
@@ -13,7 +13,7 @@
 do sprintf(a[0][j],&quot;%s&quot;,m,
 sprintf   (a[1][j],&quot;%s&quot;,l));
 while     (++j&lt;20);
-scanf     (&quot;%d %d\n&quot;,&amp;r,&amp;s);
+scanf     (&quot;%d %d\n&quot;,&amp;r,&amp;s);s*=10;
 gets      (d);
 do        {
 sscanf    (d,&quot;%d %d %f %f %f %f %d %d %d&quot;,&amp;o[b],&amp;p[b],&amp;u[b],&amp;v[b],&amp;w[b],&amp;z[b],&amp;x[b],&amp;y[b],&amp;q[b],j=n[b]=i=0);