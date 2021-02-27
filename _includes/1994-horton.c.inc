#define S(r, c) f[r][c] = 1;

char f[96][160]; main(argc, argv) char **argv; { double x, y, atof(); int
r									,
c									,
bi									,
bj									,
i			       ; for (i=10; i&lt;=80			;
i			    ++) { S(i, 18); S(i, 152)			;
}		for (i=18; i&lt;=152; i++) { S(10, i); S(80, i)		;
}	    for (x=-20;				   x&lt;=10; x += .05)	{
y							=atof(argv[1])  *
x						   * x * x + atof(argv	[
2						])*x*x+atof(argv[3])	*
x					 + atof(argv[4])		;
r				 = (500 - y)*.07+10			;
c					 =(x+20)*4.33333		+
20						; if(r&gt;=10 &amp;&amp; r&lt;=80 &amp;&amp;	c
&gt;=							  20 &amp;&amp; c&lt;=150)	S
(							   r, c); } for (
r							=0; r &lt; 24; r  ++
)	    for (c=0; c				     &lt;80; c++) { bi	=
4		*r;bj=2*c;			 i=(((f[bi][bj]&lt;&lt;	3
)		     +(f[bi+1][bj]&lt;&lt;2)+(f[bi+2][bj]&lt;&lt;1)+(f[bi		+
3			][bj]&lt;&lt;0))*16+ (f[bi][bj+1]&lt;&lt;3)+(		f
[			    bi+1][bj+1]&lt;&lt;2)+(f[bi+2][bj			+
1				]&lt;&lt;1)+(f[bi+3][bj+			1
]				  &lt;&lt;0)+1)*(c&lt;79				)
;					putchar				(

&quot;\n ..,.;:j&#39;::;&#39;;!|._:,;;;j/;;;jjjj.,-,r&lt;jq/;I;/|I|,,rx///d///d///d.:\\;\
-=vq&#39;:&lt;|&#39;:++;;&gt;;==gg&#39;:SS///+:\\\\\\r&lt;wq/&lt;64//d+lL+by[pg/&lt;/6///+`::;`\\\\\
\\\&quot;::;`\\YT;;;;`2&gt;\\:=;;??]]:;;;&gt;2&gt;\\F;O;7?]7;;;;?2&gt;b;;;;??]#&#39;\\\\\\`\\\
\\\\&#39;&#39;&lt;5\&quot;\&quot;Vq;\\\\\\`=\\\\&#39;&#39;55\&quot;?ggILLLD\\bfF[[[P?#M|||||#+#T[FFP?PM&#39;&quot;
[i]); } }