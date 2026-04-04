#include &lt;err.h&gt;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;getopt.h&gt;
typedef struct e {
	int op;				int x;				int y;				long a;				long b;				struct e *n;
} E;
typedef struct {
	int y;
	E *e;
} X;
typedef struct {
	long q;
	unsigned long long y;
} h;
typedef struct {
	unsigned long z;
	unsigned long j;
	h b[1];
} H;
int I;
int P;
H *A, *B;
FILE *f, *g;
X *Q, *q;
H *
N(H *O)
{
	unsigned long z;
	H *Y;
	z = O ? O-&gt;z &lt;&lt; 1 : 65536;
	if (!(Y = realloc(O, sizeof (*O) + z * sizeof (O-&gt;b))))
		err(2, 0);
	Y-&gt;z = z;
	if (!O)
		Y-&gt;j = 0;
	return Y;
}
H *
F(FILE *Q)
{
	unsigned long long h;
	H *y;
	long L, o, n;
	unsigned char buf[65536], *b;
	y = N(0);
	L = 1;
	o = 0;
	h = 14695981039346656037ULL;
	y-&gt;b[L].q = o;
	while (0 &lt; (n = fread(buf, 1, sizeof (buf), Q))) {
		b = buf;
		while (0 &lt; n--) {
			h ^= *b;
			h += (h&lt;&lt;1) + (h&lt;&lt;4) + (h&lt;&lt;5) + (h&lt;&lt;7) + (h&lt;&lt;8) + (h&lt;&lt;40);
			o++;
			if (*b++ == &#39;\n&#39;) {
				y-&gt;b[L++].y = h;
				if (y-&gt;z &lt;= L)
					y = N(y);
				y-&gt;b[L].q = o;
				h = 14695981039346656037ULL;
			}
		}
	}
	y-&gt;j = L-1;
	rewind(Q);
	return y;
}
FILE *
O(char *u)
{
	int i;
	FILE *Q;
	if (!(Q = fopen(u, &quot;r&quot;)) &amp;&amp; !strcmp(&quot;-&quot;, u)) {
		if ((Q = tmpfile())) {
			while ((i = getchar()) != EOF)
				fputc(i, Q);
			rewind(Q);
		}
	}
	if (!Q) err(2, &quot;%s&quot;, u);
	return Q;
}
void
W(FILE *Q)
{
	int i;
	while ((i = fgetc(Q)) != EOF) {
		putchar(i);						
		if (i == &#39;\n&#39;)
			break;
	}
}
E *
R(E *K)
{
	E *a, *b;
	b = 0;
	while (K) {
		a = K-&gt;n;
		K-&gt;n = b;
		b = K;
		K = a;
	}
	return b;
}
void
D(E *K)
{
	E *a, *b;
	for (K = R(K); K; ) {
		b = K;
		if (K-&gt;op) {
			do {
				a = b;
				b = b-&gt;n;
			} while (b &amp;&amp; b-&gt;op &amp;&amp; a-&gt;y+1 == b-&gt;y);
			if (K-&gt;y &lt; a-&gt;y)
				printf(&quot;%da%d,%d\n&quot;, K-&gt;x, K-&gt;y, a-&gt;y);
			else
				printf(&quot;%da%d\n&quot;, K-&gt;x, K-&gt;y);
			fseek(g, K-&gt;b, SEEK_SET);
			for ( ; K != b; K = K-&gt;n) {
				printf(&quot;&gt; &quot;);
				W(g);
			}
		} else {
			do {
				a = b;
				b = b-&gt;n;
			} while (b &amp;&amp; !b-&gt;op &amp;&amp; a-&gt;x+1 == b-&gt;x);
			if (K-&gt;x &lt; a-&gt;x)
				printf(&quot;%d,%dd%d\n&quot;, K-&gt;x, a-&gt;x, K-&gt;y);
			else
				printf(&quot;%dd%d\n&quot;, K-&gt;x, K-&gt;y);
			fseek(f, K-&gt;a, SEEK_SET);
			for ( ; K != b; K = K-&gt;n) {
				printf(&quot;&lt; &quot;);
				W(f);
			}
		}
	}	
}
void
K(int k)
{
	X h = Q[k-1];
	X v = Q[k+1];
	int x, y, op;
	E *p;
	if (v.y &lt; h.y+1) {
		op = 1;
		y = h.y+1;
		p = h.e;
	} else {
		op = 0;
		y = v.y;
		p = v.e;
	}
	x = y - k;
	if (0 &lt; y || 0 &lt; x) {
		E *e = malloc(sizeof (*e));	
		e-&gt;x = x;
		e-&gt;y = y;		
		e-&gt;n = p;
		e-&gt;op = op ^ I;
		e-&gt;a = A-&gt;b[x].q;
		e-&gt;b = B-&gt;b[y].q;
		if (I) {
			long c = e-&gt;a;
			e-&gt;a = e-&gt;b;
			e-&gt;b = c;
			e-&gt;x = y;
			e-&gt;y = x;
		}
		Q[k].e = e;
	}
	while (x &lt; A-&gt;j &amp;&amp; y &lt; B-&gt;j &amp;&amp; A-&gt;b[x+1].y == B-&gt;b[y+1].y) {
		x++;
		y++;
	}
	Q[k].y = y;
}
int
T(void)
{
	int k, p, d;
	if (A-&gt;j &gt; B-&gt;j) {
		void *t = A;
		A = B;
		B = t;
		I = 1;
	}
	d = B-&gt;j - A-&gt;j;
	if (!(q = calloc(A-&gt;j + B-&gt;j + 3, sizeof (*Q))))
		err(2, 0);		
	for (k = 0; k &lt; A-&gt;j + B-&gt;j + 3; k++)
		q[k].y = -1;
	Q = q + A-&gt;j + 1;
	p = -1;
	do {
		p++;
		for (k = -p; k &lt; d; k++) {
			K(k);
		}
		for (k = d + p; d &lt;= k; k--) {
			K(k);
		}
	} while (Q[d].y != B-&gt;j);
	if (!P)
		D(Q[d].e);
	free(q);
	return d + 2 * p;
}
int
main(int x, char **y)
{
	int i;
	while ((i = getopt(x, y, &quot;d&quot;)) != -1) {
		switch (i) {
		case &#39;d&#39;:
			P = 1;
			break;
		default:
			optind = x;
			break;
		}
	}
	if (x &lt;= optind)
		errx(2, &quot;usage: %s [-d] file1 file2&quot;, *y);
	f = O(y[optind]);
	g = O(y[optind+1]);
	if (!(A = F(f)))
		err(2, &quot;%s&quot;, y[optind]);
	if (!(B = F(g)))
		err(2, &quot;%s&quot;, y[optind+1]);
	i = T();
	if (P) printf(&quot;%d\n&quot;, i);
	return 0 &lt; i;
}