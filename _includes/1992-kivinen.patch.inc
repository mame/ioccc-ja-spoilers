--- kivinen.c
+++ kivinen.c
@@ -36,4 +36,4 @@
       XUnmapWindow		   (d,s[w])		  ,s[w]=0,c--:
       0,l=1; if(!x&amp;&amp;l)j=			    -j,l=0; if(l&amp;x&amp;&amp;!v
       )u=~19,c--,l=0;t=(!x||!v)		     &amp;&amp;(y&lt;5&amp;&amp;t&lt;0||y&gt;95&amp;&amp;t&gt;0)?0
-	  :t;s[1]?X(1,y+=x&amp;v?t:t/(x+1),130):ext(++c);};return(c);}
+	  :t;s[1]?X(1,y+=x&amp;v?t:t/(x+1),130):ext(++c);usleep(30000);};return(c);}