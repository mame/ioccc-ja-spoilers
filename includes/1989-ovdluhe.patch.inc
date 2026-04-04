--- ovdluhe.c
+++ ovdluhe.c
@@ -1,21 +1,21 @@
 #include &lt;string.h&gt;
 typedef char ape
 #define D define
-#D EA register
-#D EP unsigned
-#D A 1
-#D AP (A&lt;&lt;A)
-#D P (A&lt;&lt;AP)
-#D AE ((P&lt;&lt;P)&lt;&lt;A)
-#D PE (((A&lt;&lt;P)&lt;&lt;P)&lt;&lt;P)
-#D E ((EP)A&gt;&gt;A)
-#D APE {EA EP ape ea=AE;while(ea--) e[ea]=E;}
+#define EA register
+#define EP unsigned
+#define A 1
+#define AP (A&lt;&lt;A)
+#define P (A&lt;&lt;AP)
+#define AE ((P&lt;&lt;P)&lt;&lt;A)
+#define PE (((A&lt;&lt;P)&lt;&lt;P)&lt;&lt;P)
+#define E ((EP)A&gt;&gt;A)
+#define APE {EA EP char ea=AE;while(ea--) e[ea]=E;}
 ;ape a[PE+A],ap,*ae,p[P+A],e[AE];
 main(){ape pe,*ep=a;srand((EP)time((long)E));
 while(((*(ep++)=getchar())!=-A)&amp;&amp;((ep-a)&lt;PE));
 *(ae= --ep)=E;for(ap=E;ap&lt;=P;){APE;if(pe=PA())
 {putchar(pe);if(ap&lt;P){p[ap]=pe;ap++;}else{
-ep=p+A;while(*ep) *(ep-A)= *(ep++); *(ep-A)=pe;}}else break;}}
+ep=p+A;while(*ep) *(ep-A)= *(ep),ep++; *(ep-A)=pe;}}else break;}}
 PA(){EA ape pe,*ep=a,pa,Ap=E;for(ep=a;ep&lt;ae-P;ep++)
 if(!strncmp(ep,p,ap)){e[*(ep+ap)]++;Ap++;}if(!Ap)return(Ap);
 pa=rand()%Ap+A;pe=~E,Ap=!Ap;while((Ap+=e[++pe])&lt;pa);return(pe);}