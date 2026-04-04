#define I int
#define c char *
#define G fscanf(f,
#define W while(
#define k return
#define Q if(
#define Z			512
#include &lt;errno.h&gt;
#include &lt;stdio.h&gt;
#include &lt;stdarg.h&gt;
#include &lt;string.h&gt;
#include &lt;netdb.h&gt;
#include &lt;sys/socket.h&gt;
#include &lt;netinet/in.h&gt;
#include &lt;sys/ioctl.h&gt;
FILE *f;
short w[4] = { 24, 80 };
I L, B, r, H;
c l[Z], b[Z], s[Z], S[Z][10], T[Z], h[Z];
I
e(c s)
{
	I n = 0;
	Q *s == &#39;#&#39;)	
		k (I) strtol(s+1, 0, 0);
	W n &lt; Z) {
		Q *S[n] &amp;&amp; !strcmp(s, S[n]+1))
			k *S[n];
		n++;
	}
	k &#39;?&#39;;
}
void
P(I x)
{
	Q x == &#39;\n&#39; || w[1] - 3 &lt; B) {
		b[B] = 0;
		b[B+1] = 0;
		B = printf(&quot;%s&quot;, b);
		B = snprintf(
			b, Z,
			&quot;\n   %s&quot;, 
			b + B + 1
		);
		r++;
	}
	Q b[B-1] != &#39; &#39; || !isspace(x)) {
		b[B++] = isspace(x) ? &#39; &#39; : x;
		Q w[1] - 3 &lt; B)
			*strrchr(b, &#39; &#39;) = 0;
	}
}
void
p(c t, ...)
{
	va_list x;
	va_start(x, t);	
	vsnprintf(s, Z, t, x);
	t = s;
	W *t)
		P(*t++);
	va_end(x);
}
I
X(c s)
{
	I x;
	c t = s;
	long m = ftell(f);
	W *t &amp;&amp; (x = fgetc(f)) != EOF) {
		Q *t == &#39;*&#39;)
			s = t++;
		Q tolower(x) != *t) {
			Q *s != &#39;*&#39;)
				break;
			t = s;
		}
		t++;
	}
	Q *t)
		fseek(f, m, SEEK_SET);
	k !*t;
}
void
d(c s)
{
	Q 4 &lt; B)
		P(&#39;\n&#39;);
	P(&#39;\n&#39;);
	Q *s == &#39;h&#39;)
		B = 1;
}
void
a(c s)
{
	*T = 0;
	G 
		ungetc(fgetc(f), f) == &#39;&quot;&#39; 
			? &quot;\&quot;%511[^\&quot;]&quot; 
			: &quot;&#39;%511[^&#39;]&quot;, 
		T
	);
	Q *s == &#39;a&#39; || *s == &#39;f&#39; || s[1] == &#39;f&#39;) {
		free(l[++L]);
		l[L] = strdup(T);
		p(&quot; [%d] &quot;, L);
	} 
	Q *s != &#39;a&#39;)
		p(&quot;%s%s\n&quot;, T, *s == &#39;b&#39; || s[1] == &#39;h&#39; ? &quot;&quot; : &quot;\n&quot;);
	X(&quot;*&gt;&quot;);
}
void *Y[] = {
	&quot;!--*--&gt;&quot;	,	0	,
	&quot;a *href=&quot;	,	a	,	
	&quot;ifr*src=&quot;	,	a	,
	&quot;fra*src=&quot;	,	a	,
	&quot;img*src=&quot;	,	a	,		
	&quot;p*&gt;&quot;		,	d	,	
	&quot;bl*&gt;&quot;		,	d	,
	&quot;br&quot;		,	a	,
	&quot;hr&quot;		,	a	,
	&quot;h*&gt;&quot;		,	d	,	
	&quot;/h&quot;		,	a	,
	&quot;/tr&quot;		,	a	,
	&quot;/dt&quot;		,	a	,
	&quot;/dd&quot;		,	a	,
	&quot;li*&gt;&quot;		,	d	,	
	&quot;*&gt;&quot;		,	0	,	
	0		,	0
};
I
main(I V, c *v)
{
	I x, n = 0;
	c t = v[1];
	ioctl(0, TIOCGWINSZ, w);
	f = fopen(&quot;entities.txt&quot;, &quot;r&quot;);
	Q f) {
		W G &quot;%s %d&quot;, S[n]+1, &amp;x) == 2)
			*S[n++] = x;
		fclose(f);
		n = 0;
	}	
	W t) {
		I m = 0;
		struct hostent *y;
		struct sockaddr_in A;
		L = 0;
		B = 1;
		Q !sscanf(t, &quot;http://%255[^/]%n&quot;, h, &amp;n) &amp;&amp; !*h) {
			Q !(f = fopen(t, &quot;rb&quot;)))
				k 1;
			goto e;
		}
		Q 0 &lt; sscanf(h, &quot;%*[^:]%n:%d&quot;, &amp;x, &amp;H))
			h[x] = 0;
		else
			H = 80;
		y = gethostbyname(h);
		Q !y)
			k 1;
		memcpy(&amp;A.sin_addr.s_addr, y-&gt;h_addr, y-&gt;h_length);
		A.sin_port = htons( (short) H);
		A.sin_family = y-&gt;h_addrtype;
		f = tmpfile();
		Q !f)
			k 1;
		W 
			connect(
				m = socket(
					A.sin_family, SOCK_STREAM, 0
				), (void *) &amp;A, sizeof A
			)
			|| errno == EINTR
		)
			;
		n = snprintf(
			b, Z, 
			&quot;GET %s%s HTTP/1.0\r\nHost: %s:%d\r\n\r\n&quot;, 
			t[n] == &#39;/&#39; ? &quot;&quot; : &quot;/&quot;, t+n, h, H
		);
		Q send(m, b, n, 0) == n) {
			W 0 &lt; (n = recv(m, b, Z, 0)))
				fwrite(b, 1, n, f);
		}
		close(m);
		rewind(f);
		 X(&quot;*\r\n\r\n&quot;);
e:
		r = 3;
		*b = &#39; &#39;;
		W r &lt; *w &amp;&amp; (x = fgetc(f)) != EOF) {
			Q x == &#39;&lt;&#39;) {
				void **p = Y;
				W *p) {
					Q X(*p)) {
						Q p[1])
							(* (void (*)(c ))
							p[1])(*p);
						break;
					}
					p += 2;
				}		
			} else {
				Q x == &#39;&amp;&#39;) {
					G &quot;%9[^;];&quot;, T);
					x = e(T);
				}
				P(isspace(x) ? &#39; &#39; : x);
			}
		}
		printf(&quot;\n? &quot;);
		fflush(stdout);
		fgets(T, Z, stdin);
		Q *T == &#39;\n&#39;)
			goto e;
		t = l[strtol(T, 0, 0)];
		fclose(f);
	}
	k 0;
}