--- dds.c
+++ dds.c
@@ -16,9 +16,9 @@
 =B+2,S()&amp;&amp;(p=q+4,l=S()-1))X&#39;P&#39;:B[5]==&#39;&quot;&#39;?*d=0,puts(B+6):(p=B+5,printf(&quot;%d\n&quot;,S
 ()))X&#39;G&#39;:p=B+4,B[2]==&#39;S&#39;&amp;&amp;(*C++=l,p++),l=S()-1 X&#39;F&#39;:*(q=Q(B,&quot;TO&quot;))=0;p=B+5;P[i
 =B[3]]=S();p=q+2;M[i]=S();L[i]=l X&#39;N&#39;:++P[*d]&lt;=M[*d]&amp;&amp;(l=L[*d]);}else p=B+2,P[
-*B]=S();l++;}X&#39;L&#39;:N printf(I)X&#39;N&#39;:N free(m[i]),m[i]=0	X&#39;B&#39;:_ 0 t(&#39;S&#39;,5,&quot;w&quot;,N
+*B]=S();l++;}X&#39;L&#39;:N printf(I)X&#39;N&#39;:N(free(m[i]),0),m[i]=0	X&#39;B&#39;:_ 0 t(&#39;S&#39;,5,&quot;w&quot;,N
 fprintf(f,I))t(&#39;O&#39;,4,&quot;r&quot;,while(fgets(B,R,f))(*Q(B,&quot;\n&quot;)=0,G()))X 0:default:G()
-;}_ 0;}G(){l=atoi(B);m[l]&amp;&amp;free(m[l]);(p=Q(B,&quot; &quot;))?strcpy(m[l]=malloc(strlen(p
+;}_ 0;}G(){l=atoi(B);m[l]&amp;&amp;(free(m[l]),0);(p=Q(B,&quot; &quot;))?strcpy(m[l]=malloc(strlen(p
 )),p+1):(m[l]=0,0);}O(S,J,&#39;=&#39;,==,&#39;#&#39;,!=)O(J,K,&#39;&lt;&#39;,&lt;,&#39;&gt;&#39;,&gt;)O(K,V,&#39;$&#39;,&lt;=,&#39;!&#39;,&gt;=)
 O(V,W,&#39;+&#39;,+,&#39;-&#39;,-)O(W,Y,&#39;*&#39;,*,&#39;/&#39;,/)Y(){int o;_*p==&#39;-&#39;?p++,-Y():*p&gt;=&#39;0&#39;&amp;&amp;*p&lt;=
 &#39;9&#39;?strtol(p,&amp;p,0):*p==&#39;(&#39;?p++,o=S(),p++,o:P[*p++];}