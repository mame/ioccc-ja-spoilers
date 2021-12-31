%:include					    &lt;stdio.h&gt;
%:include					    &lt;ctype.h&gt;
%:include					   &lt;string.h&gt;
%:include					   &lt;stdlib.h&gt;
%:define J(x)		  do(*x)=getchar(); while((*x)==&#39;\n&#39;)

%:define A(y)				  *(&amp;Y&lt;:7:&gt;&lt;:1:&gt;+(y))
%:define D					      strchr(
%:define q(s,x)					D(s),(x))-(s)

%:define n					      isalpha
%:define V(k)				    E = q(Y&lt;:8:&gt;,(k))
%:define K				      fprintf(stderr,
%:define l(c)				     (c)=toupper((c))
%:define W(a,b)			 (a)&lt;:(q((a),(b)) + 1) % 26:&gt;
%:define O(a)		      k = Y&lt;:8:&gt;&lt;:(E - (a) + 26)%26:&gt;
%:define d(a,b)                           v=(a)&lt;:(E+(b))%26:&gt;
char*M,*R&lt;:3:&gt;,Y&lt;:20:&gt;&lt;:27:&gt;=&lt;% &quot;EKMFLGDQVZNTOWYHXUSPAIBRCJ&quot;,
&quot;AJDKSIRUXBLHWTMCQGZNPYFVOE&quot;  , &quot;BDFHJLCPRTXVZNYEIWGAKMUSQO&quot;,
&quot;ESOVPZJAYQUIRHXLNFTGKDCMWB&quot;  , &quot;VZBRGITYUPSDNHLXAWMJQOFECK&quot;,
&quot;YRUHQSLDPXNGOKMIEBFZCWVJAT&quot;  , &quot;FVPJIAOYEDRZXWGCTKUQSBNMHL&quot;,
&quot;ABBBCCQEVJZ&quot;,&quot;ABCDEFGHIJKLMNOPQRSTUVWXYZ&quot;, &quot;Mjqq&quot;, &quot;Lcxvago&quot;
,&quot;Huwfnbgt&quot;,&quot;Hdoqhmket fbvy&quot;,&quot;Mcromlhxo&quot;} ,*S,*r; int *z=(int
&lt;:13:&gt;){ 0} ,*e,*g,*P; size_t L; char Z(char x){ for(*g=0; *g
&lt;10;++*g) {r&lt;:-2:&gt;=Y&lt;:14:&gt;&lt;:*(e+1):&gt;; r&lt;:-3:&gt;=Y&lt;:15:&gt;&lt;:1&lt;:e:&gt;
:&gt;; if(r&lt;:-3:&gt; &amp;&amp; r&lt;:-2:&gt; == r&lt;:-1:&gt;)return r&lt;:-3:&gt;; if (r&lt;:-
2:&gt;&amp;&amp;r&lt;:-3:&gt;==r&lt;:-1:&gt;)return r&lt;:-2:&gt;; }return x; } void  w  (
char *s, int k, int v) {  for(e&lt;:2:&gt; = 0; s&lt;:*P:&gt;; ++e&lt;:2:&gt;){
v = s&lt;:e&lt;:2:&gt;:&gt;; if(v &gt; 64 &amp;&amp; v &lt; 91) s&lt;:e&lt;:2:&gt;:&gt; = (((v - 65
+k) % 26) + 65); } } void Q(void) { for(*g = 0; *g &lt; 3; ++*g)
{ *Y&lt;:16+e&lt;:1:&gt;:&gt;=S&lt;:e&lt;:e&lt;:1:&gt;-3:&gt;:&gt;;R&lt;:e&lt;:1:&gt;:&gt;=Y&lt;:e&lt;:-3+e&lt;:
1:&gt;:&gt;:&gt;; w(R[*g],*(e+e&lt;:1:&gt;-6)=q(Y&lt;:8:&gt;,*Y&lt;:7:&gt;),*g); } }void
m(char*x){ char*p=x,a=A(0),b=A(2),c=A(4); int f,E; for( ; *p;
++p) { int u = islower(*p); if(n(l(*p))){char k=*p, v; f = 0;
c == *Y&lt;:18:&gt; &amp;&amp; (f = 1) ; c=W(Y&lt;:8:&gt;,c); if (f) {f = 0; b ==
*Y&lt;:17:&gt; &amp;&amp; (f = 1); b = W(Y&lt;:8:&gt;,b); f &amp;&amp;(f = 0 &amp;&amp; (a= W(Y&lt;:
8:&gt;,a))); }else if(b==*Y&lt;:17:&gt;){ b = W(Y&lt;:8:&gt;,b); a= W(Y&lt;:8:&gt;
,a); } k = Z(r&lt;:-1:&gt; =k); e&lt;:-6:&gt; = q (Y&lt;:8:&gt;,a); e&lt;:-5:&gt; = q
(Y&lt;:8:&gt;,b); e&lt;:-4:&gt;=q( Y&lt;:8:&gt;,c); V(k); d(R&lt;:2:&gt;,e&lt;:-4:&gt;); V(
v); O(e&lt;:-4:&gt;); V(k); d(R&lt;:1:&gt;,e&lt;:-5:&gt;); V(v); O(e&lt;:-5:&gt;); V(
k); d(*R,e&lt;:-6:&gt;); V(v) ; O(e&lt;:-6:&gt;);(Y&lt;:e&lt;:-10:&gt;+ 5:&gt;&lt;:k-&#39;A&#39;
:&gt;)&amp;&amp;(k=Y&lt;:e&lt;:-10:&gt;+5:&gt;&lt;:k-&#39;A&#39;:&gt;); V(k); d(Y&lt;:8:&gt;,e&lt;:-6:&gt;); E
=q(*R,v); O(e&lt;:-6:&gt;); V(k); d(Y&lt;:8:&gt;,e&lt;:-5:&gt;); E= q (R&lt;:1:&gt;,v
); O(e&lt;:-5:&gt;); V(k); d(Y &lt;:8:&gt;,e&lt;:-4:&gt;); E = q(R&lt;:2:&gt;,v); O(e
&lt;:-4:&gt;); k = Z(r&lt;:-1:&gt;=k); *p = u? tolower(k):k; } } } void E
(char*x, int s, int i){ if (n(l(s))) x&lt;:i:&gt;=s; } int p(char x
) {return D 14&lt;:Y:&gt;,x)||D Y&lt;:15:&gt;,x); }int main(int i, char**
v) { int j; e = z + 10; S = Y&lt;:7:&gt; + 6; r = S + 10 ; g = e +1
; P=g+1; for (j=-3; j &lt; 0; ++j) e&lt;:j:&gt; = j+3; Q(); for (j +=9
; j &lt; 14; ++j) m(Y&lt;:j:&gt;); if (!(v&lt;:1:&gt; &amp;&amp; *v&lt;:1:&gt;==&#39;-&#39;)) goto
k; for (i = 0; i &lt; 3; ++i) { K&quot;%s %d: &quot;,Y&lt;:9:&gt;, i+1); J(&amp;j) ;
j = j - &#39;0&#39;; e&lt;:i-3:&gt;=(j &lt;1 ?  1 : (j&gt;5?5:j))-1; K&quot;%s %d: &quot;,Y
&lt;:10:&gt;,i+1); J(&amp;j); E(Y&lt;:7:&gt;, j, i+i%3); K&quot;%s %d: &quot;,Y&lt;:11:&gt;,i
+1); J(&amp;j); E(Y&lt;:7:&gt;, j,i+i+1); }K&quot;%s: &quot;,Y&lt;:13:&gt;); J(&amp;j); e&lt;:
-10:&gt; = (j &lt; 1 ? 1:(j&gt;1?2:j))-1; for (i = 0; i&lt;10; ++i) { int
a, b; K&quot;%s %d: &quot; , Y&lt;:12:&gt;,i+1); J(&amp;a); J (&amp;b);if  (n(l(a))&amp;&amp;
n(l(b))&amp;&amp;a!=b&amp;&amp;!p(b)&amp;&amp;!p(a)) { Y&lt;:14:&gt;&lt;:i:&gt; = a; 15&lt;:Y:&gt;&lt;:i:&gt;
= b; } %&gt;k: Q(); if(getdelim(&amp;M, &amp;L, EOF, stdin) &gt; 0) &lt;%m(M);
printf(&quot;%s&quot;,M) ;} free	(M)        ;%&gt;