--- applin.c
+++ applin.c
@@ -1 +1 @@
-main(v,c)char**c;{for(v[c++]=&quot;Hello, world!\n)&quot;;(!!c)[*c]&amp;&amp;(v--||--c&amp;&amp;execlp(*c,*c,c[!!c]+!!c,!c));**c=!c)write(!!*c,*c,!!**c);}
+main(v,c)char**c;{for(v[c++]=strdup(&quot;Hello, world!\n)&quot;);(!!c)[*c]&amp;&amp;(v--||--c&amp;&amp;execlp(*c,*c,c[!!c]+!!c,!c));**c=!c)write(!!*c,*c,!!**c);}