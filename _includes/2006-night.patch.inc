--- night.c
+++ night.c
@@ -14,7 +14,7 @@
 #define TAG endwin()
 #define GCA clear()
 #define TCA clock()
-#define CCC rand()
+#define CCC 2461325420^7
 #define CC getch()
 #define GA return
 #define T(T) #T#T#T#T#T#T T