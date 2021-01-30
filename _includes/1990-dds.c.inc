#define O(b,f,u,s,c,a)b(){int o=f();switch(*p++){X u:_ o s b();X c:_ o a b();default:p--;_ o;}}
#define t(e,d,_,C)X e:f=fopen(B+d,_);C;fclose(f)
#define U(y,z)while(p=Q(s,y))*p++=z,*p=&#39; &#39;
#define N for(i=0;i&lt;11*R;i++)m[i]&amp;&amp;
#define I &quot;%d %s\n&quot;,i,m[i]
#define X ;break;case
#define _ return
#define R 999
typedef char*A;int*C,E[R],L[R],M[R],P[R],l,i,j;char B[R],F[2];A m[12*R],malloc
(),p,q,x,y,z,s,d,f,fopen();A Q(s,o)A s,o;{for(x=s;*x;x++){for(y=x,z=o;*z&amp;&amp;*y==
*z;y++)z++;if(z&gt;o&amp;&amp;!*z)_ x;}_	0;}main(){m[11*R]=&quot;E&quot;;while(puts(&quot;Ok&quot;),gets(B)
)switch(*B){X&#39;R&#39;:C=E;l=1;for(i=0;i&lt;R;P[i++]=0);while(l){while(!(s=m[l]))l++;if
(!Q(s,&quot;\&quot;&quot;)){U(&quot;&lt;&gt;&quot;,&#39;#&#39;);U(&quot;&lt;=&quot;,&#39;$&#39;);U(&quot;&gt;=&quot;,&#39;!&#39;);}d=B;while(*F=*s){*s==&#39;&quot;&#39;&amp;&amp;j
++;if(j&amp;1||!Q(&quot; \t&quot;,F))*d++=*s;s++;}*d--=j=0;if(B[1]!=&#39;=&#39;)switch(*B){X&#39;E&#39;:l=-1
X&#39;R&#39;:B[2]!=&#39;M&#39;&amp;&amp;(l=*--C)X&#39;I&#39;:B[1]==&#39;N&#39;?gets(p=B),P[*d]=S():(*(q=Q(B,&quot;TH&quot;))=0,p
=B+2,S()&amp;&amp;(p=q+4,l=S()-1))X&#39;P&#39;:B[5]==&#39;&quot;&#39;?*d=0,puts(B+6):(p=B+5,printf(&quot;%d\n&quot;,S
()))X&#39;G&#39;:p=B+4,B[2]==&#39;S&#39;&amp;&amp;(*C++=l,p++),l=S()-1 X&#39;F&#39;:*(q=Q(B,&quot;TO&quot;))=0;p=B+5;P[i
=B[3]]=S();p=q+2;M[i]=S();L[i]=l X&#39;N&#39;:++P[*d]&lt;=M[*d]&amp;&amp;(l=L[*d]);}else p=B+2,P[
*B]=S();l++;}X&#39;L&#39;:N printf(I)X&#39;N&#39;:N free(m[i]),m[i]=0	X&#39;B&#39;:_ 0 t(&#39;S&#39;,5,&quot;w&quot;,N
fprintf(f,I))t(&#39;O&#39;,4,&quot;r&quot;,while(fgets(B,R,f))(*Q(B,&quot;\n&quot;)=0,G()))X 0:default:G()
;}_ 0;}G(){l=atoi(B);m[l]&amp;&amp;free(m[l]);(p=Q(B,&quot; &quot;))?strcpy(m[l]=malloc(strlen(p
)),p+1):(m[l]=0,0);}O(S,J,&#39;=&#39;,==,&#39;#&#39;,!=)O(J,K,&#39;&lt;&#39;,&lt;,&#39;&gt;&#39;,&gt;)O(K,V,&#39;$&#39;,&lt;=,&#39;!&#39;,&gt;=)
O(V,W,&#39;+&#39;,+,&#39;-&#39;,-)O(W,Y,&#39;*&#39;,*,&#39;/&#39;,/)Y(){int o;_*p==&#39;-&#39;?p++,-Y():*p&gt;=&#39;0&#39;&amp;&amp;*p&lt;=
&#39;9&#39;?strtol(p,&amp;p,0):*p==&#39;(&#39;?p++,o=S(),p++,o:P[*p++];}