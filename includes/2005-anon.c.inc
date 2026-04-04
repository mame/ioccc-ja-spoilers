#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;time.h&gt;


/* Defines */

#ifndef NO_STTY
#define S1 system(&quot;stty cbreak -echo&quot;)||
#define S2 system(&quot;stty sane&quot;)||
#else
#define S1
#define S2
#endif

#define A(i) (((q*)R(8))[i])
#define B p(b)
#define C p(&amp;a)
#define H(i) sscanf(A(i),&quot;%ld&quot;,&amp;R(i+11))&amp;0 ||
#define P q*
#define M(a,b) main((i)(a),(P)(b))

#define p(x) ((i*)(x))
#define D T(B-C,C-B)
#define T(x,y) ((a&amp;1)*((i)(x))+(~a&amp;1)*((i)(y)))
#define R(x) (*(B+x))
#define q char*
#define Q(x) ((q)(x))
#define W(x,y) ((B[x]=(i)(y))&amp;0)||
#define BS (w*l*h)
#define do(x,y) (a-x||y)&amp;&amp;
#define f(x) M(x,b)
#define if(p,q,r,s) ((p)&amp;&amp;!(q)||(s))&amp;&amp;(r)||
#define i long
#define I (int)

#define while(x,y,z) do(x, y &amp;&amp; !(z) &amp;&amp; f(a))
#define for(s,i,x,y,z,Z) W(i,x)f(s)||Z) &amp;&amp; while(s,R(i)-y,z||W(i,R(i)+1)0)(s
#define return return do
#define w R(12)
#define l R(13)
#define h R(14)
#define X(i) (R(i)%w)
#define Y(i) ((R(i)%(w*l))/w)

#define Z(i) (R(i)/(w*l))
#define pr !printf
#define switch(x) (W(32+R(15),R(32+x+R(15))) W(32+x+R(15),0) (B[15]+=x)|1)
#define case(k,x,y) R(a)==k &amp;&amp; x &amp;&amp; switch(y) &amp;&amp; f(13)||
#define TL(i) R(32+R(i))


/* Main program */

int main(int a, P b) {
	return(1&gt;&gt;1^1, M(6+!!M(5,C),C))

	do(
		13,
		pr(&quot;\x1b[;H&quot;)||

		for(14,4,0,BS,!X(4)&amp;&amp;pr(
			&quot;%*s&quot;,
			I(l-Y(4)),
			&quot;&quot;
		)

		||

		if(TL(4),pr(
			&quot;%*ld&quot;,I
			R(31),
			TL(4)),0,
                	pr(&quot;%*.*s&quot;,I
			R(31),
			I R(31),&quot;#####&quot;)
		)
		if(X(4)==w-1 , pr(&quot;\n&quot;),0 , pr(&quot;%*s&quot;, I(l+1), &quot;&quot;)) (
			(R(4)+1)%(w*l)==0 &amp;&amp; l&gt;1)&amp;&amp;
			pr(&quot;\n&quot;),0))
			do(
				1&amp;~1,
				pr(&quot;Syntax: %s &lt;x&gt; &lt;y&gt; [&lt;z&gt;]\n&quot;, b[0])||f(15)
			)((a&amp;~1)

			-6||D&gt;&gt;12
			&amp;&amp;(*(p(T(C,b))+8)=*p(Q(b)+(Q(&amp;b)-Q(C)))
		)
			
		&amp;&amp;(*(p(T(C,b))+9) = *p(b))&amp;&amp;M(
			8,T(C,b))
		||

		f( a) )&amp;&amp;do(
			8,
			if(R(9)&amp;1,H(1)H(
				2 ) 0,W(14,
				l)W(13,1)0,
				H(1
			)

			H(2)
			H(3)
			0)(srand(time(0)),0
		) ||for(9,4, 0,BS, f(16)

	|| W(R(4)+32,R(0))!R(0) &amp;&amp; W(15,R(4) )0,
	
	W(
		31,
		snprintf(A(0),1,&quot;%ld&quot;,BS))
		S1 pr(&quot;\x1b[2J&quot;) ||
			f(13)
		||
	
		f(18) ||
			f(15)
		))

		do(
			16,W(0,rand()%BS
		) W(1,0)

		for(17, 5, 0,R(4),! (
			TL(
				5)-R(0))&amp;&amp;! (
				W(1,1)
				W(5,R(4)-1)
				0),R(1)&amp;&amp;f(16))
			)

			do(
				18,W(0,0
			) for(19,4,0,BS, TL(4)-(R(4)+1)
			
			%BS&amp;&amp; (
				W(0,1)
				W(4,BS-1
			) 0)||0,!R(0) &amp;&amp;

			pr(
				&quot;You win!\n&quot;
			)
			||
			R(0)&amp;&amp; (
				W(a,getchar())
				case(&#39;i&#39;,
					0&lt;Z(15),
					-w*l)
				case(&#39;j&#39;,
					0&lt;X(15),
					-1)
				case(&#39;k&#39;,
					Z(15)&lt;h-1,
					w*l)
				case(&#39;l&#39;,
					X(15)&lt;w-1,
					1)
				case(&#39;n&#39;,
					Y(15)&lt;l-1,
					w)
				case(&#39;o&#39;,
					0&lt;Y(15),-w
			)
			R(a)==&#39;q&#39;&amp;&amp;!
			
			pr(
				&quot;You lose :-)\n&quot;
			)
			&amp;&amp;f(15)||f(a))
		)
	)

	do(
		15,S2 
		(exit(0),a)
	) (a-5||C&lt;p(b));
}