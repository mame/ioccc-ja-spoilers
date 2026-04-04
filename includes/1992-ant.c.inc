#define W while
#define S strspn 
#define R return 
#define F fprintf(stderr,
#define C continue;

#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;
#include &lt;string.h&gt;
#include &lt;sys/stat.h&gt;

#ifndef RULES
#define RULES	500
#endif

#define N(p, i)	(p += i, p += S(p, w), i = strcspn(p, w))

char *b, l[BUFSIZ], *t[RULES], *d[RULES], *c[RULES], w[] = &quot;\n\t &quot;;

time_t M();
int T();
void U();


time_t
M(f)
char *f;
{
	int j, x;
	size_t i = 0;
	struct stat s;
	N(f, i);
	x = f[i];
	f[i] = 0; 
	j = stat(f, &amp;s);
	f[i] = x;
	R j &lt; 0 ? 0 : s.st_mtime;
}

int
T(f)
char *f;
{
	char *q;
	size_t i = 0, j, k = 1;
	N(f, i);
	W ((q = t[k])) {
		j = 0;
		W (N(q, j)) {
			if (i == j &amp;&amp; !strncmp(f, q, i))
				R k;
		}
		++k;
	}
	R 0;
}

void
U(f)
char *f;
{
	time_t t = M(f);
	size_t i = 0, j = !t, k = T(f);
	char *p = d[k], *q = c[k];
	if (!N(p, i) &amp;&amp; q &amp;&amp; *q != &#39;\t&#39; &amp;&amp; j) {
		F &quot;am: Don&#39;t know how to make &#39;%s&#39;.\n&quot;, f);
		exit(1);
	}
	W (0 &lt; i) {
		U(p);
		if (t &lt; M(p))
			j = 1;
		N(p, i);
	}
	if (j &amp;&amp; q &amp;&amp; *q == &#39;\t&#39;) {
		sleep(1);
		W (*q++ == &#39;\t&#39;) {
			i = j = 1;
			W (0 &lt; S(q, &quot;-+@&quot;)) {
				if (*q == &#39;@&#39;)
					
					i = 0;
				if (*q++ == &#39;-&#39;)
					
					j = 0;
			}
			if (i)
				puts(q);
			if (system(q) &amp;&amp; j) {
				F &quot;am: Error making &#39;%s&#39;\n&quot;, f);
				exit(1);
			}
			q += strlen(q) + 1;
		}
		c[k] = 0;
	}
}

int
main(u, v)
int u;
char **v;
{
	FILE *f;
	struct stat s;
	size_t i, j, k;
	char *m, *n, *p, *q, *r;
	if (u &lt; 2) {
		F &quot;usage: am &lt;makefile&gt; [target]\n&quot;);
		R 2;
	}
	if (stat(*++v, &amp;s) || !(f = fopen(*v, &quot;r&quot;)))
		R 3;
	q = b = malloc(2*s.st_size);
	if (!b)
		R 4;
	i = 1;
	k = 0;
	m = 0;
	*t = *d = *c = &quot;&quot;;
	W ((r = fgets(l, BUFSIZ, f))) {
		if (RULES &lt;= i) {
			F &quot;am: Number of target-rules exceeds %d.\n&quot;, RULES);
			R 1;
		}
		if (k) {
			*q++ = &#39; &#39;;
			r += S(r, w);
		} else {
			if (t[i])
				c[i++] = q;
			if (m &amp;&amp; putenv(m))
				F &quot;am: No more environment space.\n&quot;);
			m = 0;
			if (*l == &#39;#&#39; || *l == &#39;\n&#39;)
				C
			p = q;
		}
		W (!(k = *r == &#39;\\&#39; &amp;&amp; r[1] == &#39;\n&#39;) &amp;&amp; *r) {
			if (*r == &#39;$&#39;) {
				if (r[1] == &#39;(&#39;) {
					n = r+2;
					r += strcspn(r, &quot;)&quot;);
					*r++ = 0;
					n = getenv(n);
					if (n) 
						q = strcpy(q, n) + strlen(n);
					C
				}
				if (*r == r[1])
					++r;
			} 
			if (*r == &#39;=&#39; &amp;&amp; *l != &#39;\t&#39; &amp;&amp; !m) {
				*q = 0;
				m = p;
				j = 0;
				q = N(m, j) + m;
				*q++ = *r;
				j = 1;
				if (!N(r, j))
					*q++ = 0;
				C
			}
			if (*r == &#39;:&#39;) {
				t[i] = p;
				*r = 0;
				d[i] = q+1;
			}
			if (*r == &#39;\n&#39;)
				*r = 0;
			*q++ = *r++;
		}
	}
	fclose(f);
	U(2 &lt; u ? *++v : t[1]);
	R 0;
}
