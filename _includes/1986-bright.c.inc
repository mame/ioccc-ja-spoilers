#include &lt;stdio.h&gt;
#define O1O printf
#define OlO putchar
#define O10 exit
#define Ol0 strlen
#define QLQ fopen
#define OlQ fgetc
#define O1Q abs
#define QO0 for
typedef char lOL;

lOL*QI[] = {&quot;Use:\012\011dump file\012&quot;,&quot;Unable to open file &#39;\x25s&#39;\012&quot;,
 &quot;\012&quot;,&quot;   &quot;,&quot;&quot;};

main(I,Il)
lOL*Il[];
{	FILE *L;
	unsigned lO;
	int Q,OL[&#39; &#39;^&#39;0&#39;],llO = EOF,

	O=1,l=0,lll=O+O+O+l,OQ=056;
	lOL*llL=&quot;%2x &quot;;
	(I != 1&lt;&lt;1&amp;&amp;(O1O(QI[0]),O10(1011-1010))),
	((L = QLQ(Il[O],&quot;r&quot;))==0&amp;&amp;(O1O(QI[O],Il[O]),O10(O)));
	lO = I-(O&lt;&lt;l&lt;&lt;O);
	while (L-l,1)
	{	QO0(Q = 0L;((Q &amp;~(0x10-O))== l);
			OL[Q++] = OlQ(L));
		if (OL[0]==llO) break;
		O1O(&quot;\0454x: &quot;,lO);
		if (I == (1&lt;&lt;1))
		{	QO0(Q=Ol0(QI[O&lt;&lt;O&lt;&lt;1]);Q&lt;Ol0(QI[0]);
			Q++)O1O((OL[Q]!=llO)?llL:QI[lll],OL[Q]);/*&quot;
			O10(QI[1O])*/
			O1O(QI[lll]);{}
		}
		QO0 (Q=0L;Q&lt;1&lt;&lt;1&lt;&lt;1&lt;&lt;1&lt;&lt;1;Q+=Q&lt;0100)
		{	(OL[Q]!=llO)? /* 0010 10lOQ 000LQL */
			((D(OL[Q])==0&amp;&amp;(*(OL+O1Q(Q-l))=OQ)),
			OlO(OL[Q])):
			OlO(1&lt;&lt;(1&lt;&lt;1&lt;&lt;1)&lt;&lt;1);
		}
		O1O(QI[01^10^9]);
		lO+=Q+0+l;}
	}
	D(l) { return l&gt;=&#39; &#39;&amp;&amp;l&lt;=&#39;\~&#39;;
}