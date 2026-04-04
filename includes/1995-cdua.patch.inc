--- cdua.c
+++ cdua.c
@@ -5,7 +5,7 @@
 .     &quot;,*o=&quot;\033[23;1HDone!!\n&quot;,*x=&quot;\033[2J&quot;,*y=&quot;\033[1;1H&quot;,*z=&quot;\033[%d;%\
 dH%c&quot;,*w=&quot;\033[1;1H%s&quot;,*v=&quot;\033[%d;%dH%c\033[%d;%dH%c\033[%d;%dH%c&quot;,b[1841
 ];int c,d,e,f,g;typedef int(*h)();h i,j,k,l,m,n;int printf(),srand(),rand(
-),time(),getchar();int main(int a){i=printf,j=srand,k=rand,l=time,m=getchar,
+),time(),getchar();int main(int a){usleep(10000);i=printf,j=srand,k=rand,l=time,m=getchar,
 n=main;if(!c)for(j(l(0)),g=a=1000,--d;++d&lt;1840;b[c=d]=&quot; #\n&quot;[d%80==79?2:d/80
 &amp;&amp;d%80&amp;&amp;d/80-22&amp;&amp;d%80-78]);if(!(c-1839))++c,i(&quot;%s%s%s&quot;,x,y,b);k:if(!(c-1840)
 &amp;&amp;(b[a+2]+b[a-2]+b[a+160]+b[a-160]-4*&#39; &#39;)){while(b[a+(f=(e=k()%4)?e-1?e-2?-1