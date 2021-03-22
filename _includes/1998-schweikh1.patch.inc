--- schweikh1.c
+++ schweikh1.c
@@ -1,7 +1,7 @@
-&#x000c;&#x000b;%:define H(x) &lt;st%:%:x##.h&gt;
-&#x000c;&#x000b;#include H(dio)
-&#x000c;&#x000b;#include H(dlib)
-&#x000c;&#x000b;#include H(ring)
+&#x000c;&#x000b;
+&#x000c;&#x000b;#include &lt;stdio.h&gt;
+&#x000c;&#x000b;#include &lt;stdlib.h&gt;
+&#x000c;&#x000b;#include &lt;string.h&gt;
 
 &#x000b;&#x000c;#define x ) == 0 ?__LINE__:0){O =__LINE__;break;} }
 &#x000b;&#x000c;#define X(x) __LINE__ x __LINE__
@@ -22,7 +22,7 @@
 	char f[__LINE__][X(*)], K[X(*)], L[X(&lt;&lt;)],
 	e[X(&lt;&lt;)][3*__LINE__], n[X(&lt;&lt;)][3*__LINE__], F[__LINE__];
 
-	if (freopen (__FILE__, 5+__FILE__, stdin) == 0) return __LINE__-13;
+	if (freopen (__FILE__, &quot;r&quot;, stdin) == 0) return __LINE__-13;
 	for (c = 0;;) {
 #line		1 &quot;#\n&quot;
 		if (!fgets (f[c], (int)sizeof *f, stdin)) return __LINE__; if (*f[c] == 0[__FILE__]) continue; if (*f[c] != __LINE__[__FILE__]) { f[c][strlen (f[c]) - __LINE__] = 2[__FILE__];