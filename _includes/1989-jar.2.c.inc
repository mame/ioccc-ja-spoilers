#define d define
#d a include
#a &lt;stdio.h&gt;
#a &lt;string.h&gt;
#a &lt;ctype.h&gt;
#d p char*
#d P ,(p)
#d T(E) !strcmp(E,&quot;()&quot;)
#d U return
#d W while
#d X sbrk(199)
#d z atof
#d e isspace
#d D A(_)
#d E S(C(_))
#d B(y) p y(_)p _;{
#d G(y,V) B(y)p i;U sprintf(i=X,&quot;%lf&quot;,z(E)V z(S(C(D)))),i;}

	    p sbrk(),*S(),*j(),*O,*H;K,Y,M=14;double
	  z();Q(_)p _;{int V=0;W(e(*_))_++;H=_;W(V|!(e
	(*H)|*H==&#39;)&#39;||(*H==&#39;(&#39;&amp;&amp;H-_)))V+=(*H==&#39;(&#39;)-(*H==
      &#39;)&#39;),H++;U H-_;}B(C)U _++,Y=Q(_),_=strncpy(X,_,Y),_[
    Y]=0,_;}B(A)_++,_+=Q(_);W(e(*_))_++;U O=X,*O=&#39;(&#39;,strcpy(
  O+1,_),O;}B(Z)U _;}B(c)U C(E);}B(q)U A(E);}B(t)p i=E;U H=S(C
(D)),sprintf(O=X,T(H		         )?&quot;(%s)&quot;:&quot;(%s %s&quot;,i,H+1)

	     ,O;}B(F)U S(C(A(T(E)?D:_)));}L(i,s)p

i,*s;{U isdigit(*i)		?         z(i)!=z(s):strcmp(i,s);}
  B(b)U L(E,S(C(D)))?&quot;()&quot;:&quot;t&quot;;}B(R)U E;}B(o)U z(E)&lt;z(S(C(D)))?
    &quot;t&quot;:&quot;()&quot;;}G(f,+)G(g,-)G(h,*)p r[4][2]={&quot;function&quot;   P R,
      &quot;quote&quot;P C,&quot;lambda&quot;P Z,&quot;defun&quot;P j};B(j)U r[M][1]=D,*
	r[M++]=C(_);}p not[99][2]={&quot;if&quot;P F,&quot;equal&quot;P b,&quot;&lt;&quot;
	  P o,&quot;+&quot;P f,&quot;-&quot;P g,&quot;*&quot;P h,&quot;car&quot;P c,&quot;cdr&quot;P q,
	    &quot;cons&quot;P t,&quot;t&quot;,&quot;t&quot;};B(S)int Li,s;p u;if(
	      isdigit(*_)|T(_))U _;for(Y=M;Y--;)
		if(!strcmp(_,*r[Y]))U r[Y][1]
	      ;u=E,_=D;if(*u-&#39;(&#39;)U(*((p(*)())u)
	    )(_);s=Li=M;W(!T(_))r[M][1]=E,*r[M++]
	=&quot;&quot;,_=D;O=C(u);W(!T(O))*r[Li++]=C(O),O=A(O);U O=S
    (C(A(u))),M=s,O;}main(){H=O=X,Y=0;W(Y|!e(K=getchar()))K==
    EOF?exit(0):0,Y+=(K==&#39;(&#39;)-(K==&#39;)&#39;),*H++=K;*H=0,puts(S(O))
				,
 		main();{printf(&quot;XLISP 4.0\n&quot;);}}