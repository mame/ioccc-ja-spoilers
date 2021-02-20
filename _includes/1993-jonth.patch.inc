--- jonth.c
+++ jonth.c
@@ -1,4 +1,5 @@
-  G	int i,j
+#include &lt;X11/Xlib.h&gt;
+  G	long i,j
   K	case
   R	return 0
   S(	x,y) for(x=0; x&lt;y; x++)
@@ -35,7 +36,7 @@
 	setitimer(0,_,0);
 }
 main(){
-	G,*_=(int*)X;
+	G,*_=(long*)X;
 	char*c=
 &quot;*{{ &quot;{{&quot; }}{ {}{{ &quot;{{&quot; }}*{{ &quot;{{&quot; }}{ {}* {    {{ &quot;{{&quot; }}*{{ &quot;{{&quot; }}{   *{{ &quot;{{&quot; }}{ {* {* * {  {{ &quot;{{&quot; }} {  { *{* {   {* *{{ &quot;{{&quot; }}{ *{{ &quot;{{&quot; }}{ {   * {  { *{{ &quot;{{&quot; }}{ {{ &quot;{{&quot; }}  *{{ &quot;{{&quot; }} {  {{ &quot;{{&quot; }}* {   {*{{ &quot;{{&quot; }} {{ &quot;{{&quot; }} {{ &quot;{{&quot; }} {* { {*{{ &quot;{{&quot; }} {  *{{ &quot;{{&quot; }}{{ &quot;{{&quot; }}    *{{ &quot;{{&quot; }} {{ &quot;{{&quot; }} &quot;;
 	for(; *c; )
@@ -45,6 +46,7 @@
 	D=XOpenDisplay(0);
 	L[1]=L[2]=XWhitePixel(D,j=XDefaultScreen(D));
 	XMap@p=XCreate@XRoot@j),0,0,200,470,2,0,1,0,2056,L));
+	XSelectInput(D,p,ExposureMask|KeyPressMask);
 	T W;
 	L[2]=XBlackPixel(D,j);
 	J W;{
@@ -85,7 +87,7 @@
 lK(){
 	XNextEvent(D,o);
 	switch(*o){
-		K 2:R+o[2]?0:XX k){
+		K 2:R+o[2]?0:XKeycodeToKeysym(D,((XKeyEvent*)o)-&gt;keycode,0);K 12:Y();}R;}d H 19;}M(J,4)}N H 20;}M(T,4)}q(m,w,k){
 			G=1;switch(k){
 				K 1:z+l]=1;
 				d(m);R+1;