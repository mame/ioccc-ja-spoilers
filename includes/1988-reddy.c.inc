#include&lt;stdio.h&gt;
#include&lt;ctype.h&gt;
#define w printf
#define p while
#define t(s) (W=T(s))
char*X,*B,*L,I[99];M,W,V;D(){W==9?(w(&quot;`%.*s&#39; is &quot;,V,X),t(0)):W==40?(t(0),D(),t(41)):W==42?(t(0),D(),w(&quot;ptr to &quot;)):0;p(W==40?(t(0),w(&quot;func returning &quot;),t(41)):W==91?(t(0)==32?(w(&quot;array[0..%d] of &quot;,atoi(X)-1),t(0)):w(&quot;array of &quot;),t(93)):0);}main(){p(w(&quot;input: &quot;),B=gets(I))if(t(0)==9)L=X,M=V,t(0),D(),w(&quot;%.*s.\n\n&quot;,M,L);}T(s){if(!s||s==W){p(*B==9||*B==32)B++;X=B;V=0;if(W=isalpha(*B)?9:isdigit(*B)?32:*B++)if(W&lt;33)p(isalnum(*B))B++,V++;}return W;}