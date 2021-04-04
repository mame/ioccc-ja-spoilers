--- bellard.c
+++ bellard.c
@@ -1,4 +1,6 @@
 #include &lt;stdio.h&gt;
+#include &lt;stdlib.h&gt;
+#include &lt;sys/mman.h&gt;
 #define k *(int*)
 #define a if(
 #define c ad()
@@ -6,7 +8,7 @@
 #define p while(
 #define x *(char*)
 #define b ==
-#define V =calloc(1,99999)
+#define V =mmap(NULL, 99999/16*16+16, PROT_EXEC | PROT_WRITE | PROT_READ, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0)
 #define f ()
 #define J return
 #define l ae(