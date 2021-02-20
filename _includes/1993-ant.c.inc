#define D ++*p
#define B **p
#define W while
#define R return 
#define E else
#define Q if
#define G fprintf(stderr,


#include &lt;stdio.h&gt;

#ifndef A
#define A	512
#endif

typedef int I;
typedef char C;
typedef void V;

I z;
I f;
I x;
I a[A], b;


I d[A][A];
I m[A], n, o;

I N();
I M();
I P();
I U();
V X();
V T();
V F();
V L();
V O();

I
main(c, p)
I c;
C B;
{
	I i;
	FILE *j;
	C *k, l[BUFSIZ+1];

	Q (--c &lt; 1) {
		G &quot;usage:  ag &lt;pattern&gt; [js...]\n&quot;);
		R 2;
	}

	
	N(-3);
	N(-6-b);
	N(0);
	N(-3-b);

	X(&amp;(*++p));

	*l = &#39;\n&#39;;
	o = 1;
	i = 1;
	do {
		k = &quot;-&quot;;
		j = stdin;
		Q (1 &lt; c &amp;&amp; **++p != &#39;-&#39;) {
			Q (!(j = fopen(k = *p, &quot;r&quot;))) {
				G 
					&quot;ag: Failed to open &#39;%s&#39;.\n&quot;, k);
				i = 3;
				continue;
			}
		}
		W (fgets(l+1, BUFSIZ, j)) {
			Q (M(l)) {
				printf(&quot;%s:%s&quot;, k, l+1);
				i = 0; 
			}
		}
		fclose(j);
	} W (1 &lt; --c);
	R i;
}


V
X(p)
C B;
{
	I i, j;
	i = N(-3);
	T(p);
	W (B == &#39;|&#39;) {
		D;
		j = N(-3);
		N(&#39;\n&#39;);
		a[i] = -4-b;
		i = N(-3);
		T(p);
		a[j] = -4-b;
	}
}


V
T(p)
C B;
{
	W (B != &#39;|&#39; &amp;&amp; (!x || B != &#39;)&#39;)  &amp;&amp; B)
		F(p);
}


V
F(p)
C B;
{
	I i = N(-3);
	Q (B == &#39;^&#39;) {
		D;
		N(&#39;\n&#39;);
	} E Q (B == &#39;$&#39;) {
		D;
		N(&#39;\n&#39;);
	} E Q (B == &#39;(&#39;) { 
		D; 
		++x;
		X(p); 
		Q (B != &#39;)&#39;) { 
			G &quot;ag: Missing &#39;)&#39;.\n&quot;); 
			exit(3); 
		}
		--x;
		D;
	} E {
		L(p);
	}
	Q (B == &#39;*&#39;) {
		D;
		a[i] = -4-b;
		N(-5-i);
	} E Q (B == &#39;?&#39;) {
		D;
		a[i] = -4-b;
	}
}


V
L(p)
C B;
{
	I i, j;
	Q (B == &#39;.&#39;) {
		N(0);
	} E Q (B == &#39;[&#39;) {
		D;
		i = N(-2);
		Q (B == &#39;^&#39;) {
			D;
			a[i] = -1;
		}
		Q (B == &#39;]&#39;) {
			D;
			N(&#39;]&#39;);
		}
		W ((i = B) != &#39;]&#39;) {
			Q ((*p)[1] == &#39;-&#39; &amp;&amp; i &lt; (j = (*p)[2])) {
				W (i &lt;= j)
					N(i++);
				*p += 3;
			} E {
				N(i);
				D;
			}
		}
		N(&#39;\n&#39;);
	} E {
		Q (B == &#39;\\&#39;)
			D;
		N(B);
	}
	D;
}


I
N(c)
I c;
{
	Q (A &lt;= b) {
		G &quot;ag: Pattern too long.\n&quot;);
		exit(3);
	}
	a[b] = c;
	R b++;
}


V
O(p)
I p;
{
	I i = n;
	Q (b &lt;= p)
		R;
	Q (a[p] &lt; -2) {
		Q (a[p] != -3)
			O(-4-a[p]);
		O(p+1);
	} E Q (!a[p] || a[p] == z || P(&amp;p)) {
		
		W (i &lt; o)
			Q (m[i++] == p)
				R;
		
		f = U(p+1);

		Q (A &lt;= o) {
			G &quot;ag: Out of space.\n&quot;);
			exit(3);
		}
		
		m[o++] = p;
	}
}


I
P(p)
I *p;
{
	I i = 0, j = 0;
	Q (a[*p] == -2 || (j = a[*p] == -1)) {
		W (a[D] != &#39;\n&#39;)
			Q (a[*p] == z)
				i = 1;
	}
	R i ^ j;
}


I
U(p)
I p;
{
	R (
		f || p == b || (
			a[p] &lt; -2 &amp;&amp; (
				(a[p] != -3 &amp;&amp; U(-4-a[p])) 
				|| U(p+1)
			)
		)
	);
}


I
M(p)
C *p;
{
	I c, i, j, k;
	f = c = 0;
	W (*p &amp;&amp; 0 &lt;= c) {
		Q (0 &lt; (i = d[c][*p])) {
			
			c = i;
		} E {
			
			z = *p;
			i = d[c][0];
			j = n = o;
			do 
				O(m[i++]+1);
			W (m[i] != 2);

			
			i = k = 0;
			W (i &lt; n) {
				Q (m[i] == 2) {
					j = n;
					++k;
				}
				Q (m[i++] == m[j]) {
					Q (o &lt;= ++j) {
						j = n;
						Q (m[i] == 2) {
							
							o = n;
							break;
						}
					}
				} E {
					j = n;
				}
			}
			Q (n &lt; o) 
				
				d[++k][0] = n;
			c = d[c][*p] = f ? -1 : k;
		}
		++p;
	}
	R c &lt; 0;
}
