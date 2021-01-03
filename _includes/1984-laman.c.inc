a[900];		b;c;d=1		;e=1;f;		g;h;O;		main(k,
l)char*		*l;{g=		atoi(*		++l);		for(k=
0;k*k&lt;		g;b=k		++&gt;&gt;1)		;for(h=		0;h*h&lt;=
g;++h);		--h;c=(		(h+=g&gt;h		*(h+1))		-1)&gt;&gt;1;
while(d		&lt;=g){		++O;for		(f=0;f&lt;		O&amp;&amp;d&lt;=g
;++f)a[		b&lt;&lt;5|c]		=d++,b+=	e;for(		f=0;f&lt;O
&amp;&amp;d&lt;=g;		++f)a[b		&lt;&lt;5|c]=		d++,c+=		e;e= -e
;}for(c		=0;c&lt;h;		++c){		for(b=0		;b&lt;k;++
b){if(b		&lt;k/2)a[		b&lt;&lt;5|c]		^=a[(k		-(b+1))
&lt;&lt;5|c]^=	a[b&lt;&lt;5		|c]^=a[		(k-(b+1		))&lt;&lt;5|c]
;printf(	a[b&lt;&lt;5|c	]?&quot;%-4d&quot;	:&quot;    &quot;		,a[b&lt;&lt;5
|c]);}		putchar(	&#39;\n&#39;);}}	/*Mike		Laman*/