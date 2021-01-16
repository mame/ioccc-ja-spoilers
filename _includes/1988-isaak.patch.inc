--- isaak.c
+++ isaak.c
@@ -1,8 +1,20 @@
-main(){}&#x000c;
+main(){exit(0);}&#x000c;
 #define P define
-#P U ifdef
-#P main Si
-#U y
+#define U ifdef
+#define main Si
+#ifdef y
+
+// shim
+#include &lt;stdarg.h&gt;
+char *old_bsd_sprintf(char *dest, const char *format, ...) {
+    va_list list;
+    va_start(list, format);
+    vsprintf(dest, format, list);
+    va_end(list);
+    return dest;
+}
+// shim end
+
 #undef y
 #include &quot;isaak.c&quot;
 Pb
@@ -12,23 +24,41 @@
 ,S[5202],*B=&quot;oA9BA6iN`]`Ph&gt;5F4::M6A69@6I{g[Za__]NPV``aV\177E4C5CG;4C&lt;BEJG;\
 ?LGlSZ[Y_!oYi@uXPzLFyPOYP][]`RTaQo86564CAHCG4ES&quot;,*F,N;int Bk,V;Y
 #endif
-#P C K/16-2
-(){char*H;F O=&#x000c;-263;for(H=&quot;$+---+|||&quot;;*++H;)*(F O=(*H+5&amp;129)+1)= *H;F
-#P W sprintf(
-O= -132;}I/**/r(){if((N= *I&#x000c;O/**/O%(21 O -5)+81 O 16)==107)N+=
+#define C K/16-2
+
+// shim
+#undef OO
+#undef Oeq
+#undef Ir
+#if (O 1) == 1
+#  define OO ++
+#  define Oeq +=
+#  define Ir Kr
+#else
+#  define OO --
+#  define Oeq -=
+#  define Ir Br
+#endif
+// shim end
+
+(){char*H;F Oeq&#x000c;-263;for(H=&quot;$+---+|||&quot;;*++H;)*(F Oeq(*H+5&amp;129)+1)= *H;F
+#define W old_bsd_sprintf(
+Oeq -132;}Ir(){if((N= *I&#x000c;OO%(21 O -5)+81 O 16)==107)N+=
+
 #undef I
 *K++&amp;15;*F++&#x000c;=N;return*K;}
 #undef O
-#P I K
-#P O +
-#U N
+#define I K
+#define O +
+#ifdef N
 exit(N){F=W&#x000c;H=S,&quot;%5060d&quot;)+385;while(Br(),++B,Kr())F+=(N=
 *B++/26-1)?(&quot;)21[&quot;[N]-46)*N*4-22:-3194;while(*--K!=9){while(!(*++H+5&amp;64));
 F=(40-&quot;(\206/&quot;[((H-S)%130+45)/57]&lt;&lt;3)+H;*F++=&#x000c;*H++;*F=
 *H==106?32:*H;Y();W W&#x000c;F-131,&quot;%-3d&quot;,++Bk)+260,&quot;%3d&quot;,V+=
-*C?*C:&quot;hijpqv&quot;[*--C]-106);Pb();}for(H=S;*H||(int)_exit(0);H+=130)write(1,1+W
+*C?*C:&quot;hijpqv&quot;[*--C]-106);Pb();}for(H=S;*H||(int)(_exit(0),0);H+=130)write(1,1+W
 F+3,&quot;%c%-73.73s\n&quot;,0,H),74);}
 #endif
 #undef U
-#P U ifndef
+#define U ifndef
+#define N N
 #include &lt;stdio.h&gt;