--- vik1.c
+++ vik1.c
@@ -17,6 +17,7 @@
                          Display*K; Pixmap M; char P[99]; int main
 #define                  Y(a,b)(a&lt;b?a:b)
                          (int S,char**T){
+struct timeval wait;
 #define                  X(a)\
 XDrawLine                J M,N,D+l a m,o,D+l a n,o),
 XEvent                   O I p=E/5; --S&amp;~1?
@@ -24,7 +25,8 @@
                          == ** ++ T,w=A==z[*T],B-=w[z+*T]%3,S:++S;
 XCopyArea                J M,L,N,0,0,e,D,0,0),
 XSync                    J 0),
-XFlush                   (K),select(0,0,0,0,U+1)){ I 3[H]=F; p==++r?K=
+wait.tv_sec = 0, wait.tv_usec = F,
+XFlush                   (K),select(0,0,0,0,&amp;wait)){ I 3[H]=F; p==++r?K=
 XOpenDisplay             (0),N=
 XCreateGC                J L=
 XCreateSimpleWindow      J RootWindow(K,0),0,0,e=D*2,D,0,0,0),0,0),