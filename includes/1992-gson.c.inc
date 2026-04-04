#include &lt;stdio.h&gt; 

long a
[4],b[
4],c[4]
,d[0400],e=1;
typedef struct f{long g
,h,i[4]	   ,j;struct f*k;}f;f g,*
l[4096		     ]; char h[256],*m,k=3;
		     long n	(o, p,q)long*o,*p,*q;{
		     long r		  =4,s,i=0;for(;r--;s=i^
		     *o^*p,			    i=i&amp;*p|(i|*p)&amp;~*o++,*q
		     ++=s,p			    ++);return i;}t(i,p)long*p
		     ;{*c=d		  [i],n(a,c,b),n(p,b,p);}u(j)f*j;{j-&gt;h
		     =(j-&gt;g	=j-&gt;i[0]|j-&gt;i[1]|j-&gt;i[2]|j-&gt;i[3])&amp;4095;}v(
j,s)f*		     j; {int i; for(j-&gt;k-&gt;k&amp;&amp;v(j-&gt;k, &#39; &#39;),fseek(
stdin,	   j-&gt;j, 0);i=getchar(),putchar(i-&#39;\n&#39;?i:s),i-
&#39;\n&#39;;);}w(o,r,j,x,p)f*o,*j;long p;{f q;int 
s,i=o-&gt;h;q.k=o;r&gt;i?j=l[r=i]:r&lt;i&amp;&amp;
(s=r&amp;~i)?(s|=s&gt;&gt;1, s|=s
&gt;&gt;2,s|=s&gt;&gt;4,s
|=s&gt;&gt;8
,j=l[r
=((r&amp;i
			 |s)&amp;~(s&gt;&gt;1))-1&amp;i]):0;--x;for
		 (;x&amp;&amp;!(p&amp;i);p&gt;&gt;=1);for(;!x&amp;&amp;j;n(o-&gt;i,j-&gt;i,q.
	    i),u(&amp;q),q.g||(q.j=j-&gt;j,v(&amp;q,&#39;\n&#39;)),j=j-&gt;k);for(;x;j=x
	 ?j-&gt;k:0){for(;!j&amp;&amp;((r=(r&amp;i)-1&amp;i)-i&amp;&amp;(r&amp;p)?2:(x=0));j=l[r]);!
      x||(j-&gt;g&amp;~o-&gt;g)||n			      (o-&gt;i,j-&gt;i,q.i)||(
    u(&amp;q), q.j=j					      -&gt;j,q.g?w(&amp;q
   ,r,j-&gt;k,x							  ,p):v(&amp;q,
  &#39;\n&#39;));							     }}y(){f
 j;char								       *z,*p;
for(;m									? j.j=
ftell(									stdin)
,7,(m=			     gets(m					))||w(
&amp;g,315			     *13,l[					4095]
 ,k,64*			     64)&amp;0:				       0;n(g
  .i,j.i,		     b)||(u				    (&amp;j),j.
   k=l[j.h],l[j.h]= &amp;j,y())){for(z=				p=h;*z&amp;&amp;(
    d[*z++]||(p=0)););for(z=p?n(j.i			  ,j.i,j.i)+h:&quot;&quot;;
  *z;t(*z++,j.i));}}main(o,p)char**		 p; {for(;m = *++p;)for(;*m-
&#39;-&#39;?*m:(k= -atoi(m))&amp;0;d[*m]||(d[*m		 ]=e,e&lt;&lt;=1),t(*m++,g.i)); u(&amp;
			     g),m=h
			     ,y();}