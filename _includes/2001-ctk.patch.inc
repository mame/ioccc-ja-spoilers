--- ctk.c
+++ ctk.c
@@ -10,7 +10,7 @@
 &quot;\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b&quot;;char r[]={92,124,47},l[]={2,3,1
 ,0};char*T[]={&quot;  |&quot;,&quot;  |&quot;,&quot;%\\|/%&quot;,&quot; %%%&quot;,&quot;&quot;};char d=1,p=40,o=40,k=0,*a,y,z,g=
 -1,G,X,**P=&amp;T[4],f=0;unsigned int s=0;void u(int i){int n;printf(
-&quot;\233;%uH\233L%c\233;%uH%c\233;%uH%s\23322;%uH@\23323;%uH \n&quot;,*x-*w,r[d],*x+*w
+&quot;\x1b[H\x1b[L\x1b[;%uH%c\x1b[;%uH%c\x1b[;%uH%s\x1b[22;%uH@\x1b[23;%uH \n&quot;,*x-*w,r[d],*x+*w
 ,r[d],X,*P,p+=k,o);if(abs(p-x[21])&gt;=w[21])exit(0);if(g!=G){struct itimerval t=
 {0,0,0,0};g+=((g&lt;G)&lt;&lt;1)-1;t.it_interval.tv_usec=t.it_value.tv_usec=72000/((g&gt;&gt;
 3)+1);setitimer(0,&amp;t,0);f&amp;&amp;printf(&quot;\e[10;%u]&quot;,g+24);}f&amp;&amp;putchar(7);s+=(9-w[21]