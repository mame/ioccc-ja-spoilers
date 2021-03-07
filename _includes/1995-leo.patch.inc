--- leo.c
+++ leo.c
@@ -60,7 +60,7 @@
   for (V = 0; V &lt; 8; Al[8 | (V - 2) &amp; 7] = Al[V] = !!(V &amp; 3) * (1 - (V &amp; 4) / 2) * 4, V++);
   do
     {
-      U = U (V = (As * Ga + 31) / 8);
+      U = U (V = (As * Ga + 31) / 8 * 2);
       Au = U (V);
       for (*U = -W-1, H = U(W); ++*U; H[*U+W] = Mn);
 