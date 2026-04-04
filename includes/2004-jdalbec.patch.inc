--- jdalbec.c
+++ jdalbec.c
@@ -1,10 +1,10 @@
 #define Nd Np define
-#define Ni(N) Np include &lt;std##N##.h&gt;
+#define Ni(N) Np include N
 #define Np ??=
 
-Ni(def)
-Ni(io)
-Ni(lib)
+Ni(&lt;stddef.h&gt;)
+Ni(&lt;stdio.h&gt;)
+Ni(&lt;stdlib.h&gt;)
 
 Nd Ba BC(B, I)
 Nd Be BC(Br, I)