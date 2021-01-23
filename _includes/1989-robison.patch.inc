--- robison.c
+++ robison.c
@@ -6,7 +6,7 @@
 #define Y(_,A)B _(d,e)B d,e;X(A)
 #define Z(P)C P(f,g,h,i)C f,g,h,i;X(P)
 #define c(_)(b=(B)malloc(sizeof(*b)),b-&gt;d=_,b-&gt;e=d,b)
-#define _(D,E,F,G,H)B D();Y(D/**/f,E)Y(D/**/g,F)Y(D/**/h,G)Y(D/**/i,H)Y(D,(*(*d-&gt;d)(D/**/f,D/**/g,D/**/h,D/**/i))(d,e))
+#define _(D,E,F,G,H)B D();Y(D##f,E)Y(D##g,F)Y(D##h,G)Y(D##i,H)Y(D,(*(*d-&gt;d)(D##f,D##g,D##h,D##i))(d,e))
 Z(f)
 Z(g)
 Z(h)