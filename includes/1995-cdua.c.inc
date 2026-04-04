#define r return 

char*u0=&quot;&lt;RET&gt; to begin... &quot;,*u1=&quot;Already been here!&quot;,*u2=&quot;Found a wall! \
    &quot;,*u3=&quot;Walking...        &quot;,*u4=&quot;Finished.         &quot;,*u5=&quot;Going back..\
.     &quot;,*o=&quot;\033[23;1HDone!!\n&quot;,*x=&quot;\033[2J&quot;,*y=&quot;\033[1;1H&quot;,*z=&quot;\033[%d;%\
dH%c&quot;,*w=&quot;\033[1;1H%s&quot;,*v=&quot;\033[%d;%dH%c\033[%d;%dH%c\033[%d;%dH%c&quot;,b[1841
];int c,d,e,f,g;typedef int(*h)();h i,j,k,l,m,n;int printf(),srand(),rand(
),time(),getchar();int main(int a){i=printf,j=srand,k=rand,l=time,m=getchar,
n=main;if(!c)for(j(l(0)),g=a=1000,--d;++d&lt;1840;b[c=d]=&quot; #\n&quot;[d%80==79?2:d/80
&amp;&amp;d%80&amp;&amp;d/80-22&amp;&amp;d%80-78]);if(!(c-1839))++c,i(&quot;%s%s%s&quot;,x,y,b);k:if(!(c-1840)
&amp;&amp;(b[a+2]+b[a-2]+b[a+160]+b[a-160]-4*&#39; &#39;)){while(b[a+(f=(e=k()%4)?e-1?e-2?-1
:1:-80:80)*2]!=&#39;#&#39;);b[a]=b[a+f]=b[f+a+f]=&#39; &#39;;i(v,a/80+1,1+a%80,&#39; &#39;,(a+f)/80+
1,1+(a+f)%80,&#39; &#39;,(f+a+f)/80+1,1+(f+a+f)%80,&#39; &#39;);n(f+a+f);goto k;}else if(!(g
-a))c=1,a=162,i(w,u0),m();if(c-1){}else r b[a]!=&#39; &#39;?(i(w,b[a]==&#39;.&#39;?u1:u2),0)
:(b[a]=&#39;.&#39;,i(w,u3),i(z,a/80+1,1+a%80,&#39;.&#39;),a==1676?(i(w,u4),i(o),1):n(a+1)||n
(a+80)||n(a-80)||n(a-1)?1:(b[a]=&#39; &#39;,i(w,u5),i(z,a/80+1,1+a%80,&#39; &#39;),0));r 0;}