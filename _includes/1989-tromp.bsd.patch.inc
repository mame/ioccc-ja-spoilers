--- tromp.bsd.c
+++ tromp.bsd.c
@@ -1,4 +1,4 @@
-long h[4];t(){h[3]-=h[3]/3000;setitimer(0,h,0);}c,d,l,v[]={(int)t,0,2},w,s,I,K
+long h[4];t(){h[3]-=h[3]/3000;setitimer(0,h,0);}long c,d,l,v[]={0,0,2},w,s,I,K
 =0,i=276,j,k,q[276],Q[276],*n=q,*m,x=17,f[]={7,-13,-12,1,8,-11,-12,-1,9,-1,1,
 12,3,-13,-12,-1,12,-1,11,1,15,-1,13,1,18,-1,1,2,0,-12,-1,11,1,-12,1,13,10,-12,
 1,12,11,-12,-1,1,2,-12,-1,12,13,-12,12,13,14,-11,-1,1,4,-13,-12,12,16,-11,-12,
@@ -6,8 +6,8 @@
 ){Q[i]=k;if(i-++I||i%12&lt;1)printf(&quot;\033[%d;%dH&quot;,(I=i)/12,i%12*2+28);printf(
 &quot;\033[%dm  &quot;+(K-k?0:5),k);K=k;}Q[263]=c=getchar();}G(b){for(i=4;i--;)if(q[i?b+
 n[i]:b])return 0;return 1;}g(b){for(i=4;i--;q[i?x+n[i]:x]=b);}main(C,V,a)char*
-*V,*a;{h[3]=1000000/(l=C&gt;1?atoi(V[1]):2);for(a=C&gt;2?V[2]:&quot;jkl pq&quot;;i;i--)*n++=i&lt;
-25||i%12&lt;2?7:0;srand(getpid());system(&quot;stty cbreak -echo stop u&quot;);sigvec(14,v,
+*V,*a;{*v=(long)t;h[3]=1000000/(l=C&gt;1?atoi(V[1]):2);for(a=C&gt;2?V[2]:&quot;jkl pq&quot;;i;i--)*n++=i&lt;
+25||i%12&lt;2?7:0;srand(getpid());system(&quot;stty cbreak -echo stop u&quot;);sigaction(14,v,
 0);t();puts(&quot;\033[H\033[J&quot;);for(n=f+rand()%7*4;;g(7),u(),g(0)){if(c&lt;0){if(G(x+
 12))x+=12;else{g(7);++w;for(j=0;j&lt;252;j=12*(j/12+1))for(;q[++j];)if(j%12==10){
 for(;j%12;q[j--]=0);u();for(;--j;q[j+12]=q[j]);u();}n=f+rand()%7*4;G(x=17)||(c