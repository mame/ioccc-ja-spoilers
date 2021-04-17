#include&lt;math.h&gt;
#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#include&lt;sys/time.h&gt;
#include&lt;X11/Xlib.h&gt;
#include&lt;X11/keysym.h&gt;
Window L;
GC N;
Display *K;
XEvent O;
XImage *Q;
float w, x, y[7 &lt;&lt; 16];
struct timeval S, U;
int a, b, c, d =
  92, e, f, g, h, i, j, k, l, m, n, o, p, *q[96], r[7 &lt;&lt; 16], s[96], *t,
  *u = r, *v, P = 256, R[64], T, J = 12288;
struct
{
  int a, b, c, d, e;
} A[9999], *B, *G, *H;
unsigned char C, D[9999], *E = D, F[] = &quot; .bmp&quot;;
FILE *I;

#define Q(o,X,Y,C)B-&gt;b=b+32*o,B-&gt;c=c+32*X,B-&gt;d=Y,B-&gt;e=C,B++-&gt;a=l,
#define D(o,X)(int)((X*(B-&gt;b-e)-o*(B-&gt;c-f))/(x*B-&gt;e-w*B-&gt;d))

int
main (int X, char **Y)
{
  for (j = J &lt;&lt; 8, x = y[i], w = y[i + 32], B = A; k = D (x, w), B-&gt;b;
       k &gt;&gt; 8 ? 0 : (l = D (B-&gt;d, B-&gt;e), l &gt; 0
		     &amp;&amp; l &lt; j) ? j = l, h = k, g = B-&gt;a : 0, B++);
  for (;
       X
       &amp;&amp; (p =
	   1 | 3 * (o = (--X &lt; 2 || 119 - 1[Y[1]] ? 320 : atoi (2[Y]))) / 4);)
    {
      for (e = f = J / 2, K = XOpenDisplay (0); m &lt; o &lt;&lt; 8;
	   y[m] =
	   sin ((m &amp; 255) / 20.4 + asin ((m / P - o / 2) / 3.2 / o)),
	   D[m &amp; 511] = 10 + d * !(1 &amp; (m &gt;&gt; 3 &amp; m)), r[m++] =
	   m / 18 &lt;&lt; (16 &amp; (m &gt;&gt; 6 ^ m)));
      for (N =
	   XCreateGC (K, L =
		      XCreateSimpleWindow (K, RootWindow (K, 0), 0, 0, o, p,
					   0, 0, 0), 0, 0), ((I =
							      fopen (X ?
								     Y[X]
								     : &quot;&quot;,
								     &quot;r&quot;)) ?
							     fread (E + 1,
								    1,
								    1 &lt;&lt; 15,
								    I),
							     fclose (I) :
							     0), B = G =
	   A + J / 3; *++E; f = l == 32 ? e = b + 99, c + 99 : f)
	for (l = *E - 10, *F = *E, k = !l, b *= !k, c += P * k, b += P;
	     l &gt; 54 &amp;&amp; l &lt; 96
	     &amp;&amp; (Q (0, 0, 1, 0) Q (8, 0, 0, 1) Q (8, 8, -1, 0)
		 Q (0, 8, 0, -1)
		 ! q[l] &amp;&amp; (s[l] = 1, q[l] = u, I = fopen (F, &quot;r&quot;))); l = J)
	  for (q[l] = ++u + 19, m = 2;
	       n = (m++ % 3 ? n : 0 ** ++u) &gt;&gt; 8 | C &lt;&lt; 16, *u =
	       n, 0 &lt; fread (&amp;C, 1, 1, I)
	       || (m /= J, s[l] = m ? m : 1) * fclose (I););
      for (XMapWindow (K, L),
	   XSelectInput (K, L, KeyPressMask | KeyReleaseMask), H = A; G-&gt;b;
	   *H = *G++, H += !B-&gt;b)
	for (B = A + J / 3;
	     B-&gt;b &amp;&amp; !(B != G &amp;&amp; B-&gt;b == G-&gt;b - 128 * (B-&gt;d - G-&gt;d)
		       &amp;&amp; B-&gt;c == G-&gt;c - 128 * (B-&gt;e - G-&gt;e)); B++);
      for (Q =
	   XCreateImage (K, DefaultVisual (K, 0), DefaultDepth (K, 0),
			 ZPixmap, 0, (char *) (v =
					       malloc (4 * o * p)), o, p,
			 32, 0);
	   d = (d + R[19] - R[17]) &amp; 127, n = R[18] - R[20], n ? (i =
								  o * 128 +
								  d + (n &lt;
								       0) *
								  64, main (0,
									    Y)
								  &gt;
								  200) ? e +=
	   (int) (y[i] * 64), f += (int) (y[i + 32] * 64) : 1 : 1;
	   XSync (K, 0), gettimeofday (&amp;S, 0), m = T - S.tv_usec)
	{
	  for (T -=
	       (m &gt; 0
		&amp;&amp; m &lt; J * 4 ? U.tv_usec =
		m, select (0, 0, 0, 0, &amp;U) : m) - 4 * J, a =
	       a + 1 &amp; -1 &gt;&gt; 1, m = 0;
	       k =
	       1 +
	       (int) (p * 512 /
		      ((i = m * P + d, g = n =
			0, main (0, Y)) * y[m * P + 32])), m &lt; o; m++)
	    for (t = g ? c =
		 64 * s[g], q[g] + h / 4 + 64 * (a / 3 % s[g]) : t;
		 l = 32 - (17 &lt;&lt; (k &lt; 2)) * (2 * n - p) / k, n &lt; p;
		 v[m + o * n++] = l &gt;&gt; 6 ? 4477904 &lt;&lt; (l &lt; 0) : t[c * l]);
	  for (XPutImage (K, L, N, Q, 0, 0, 0, 0, o, p); XPending (K);
	       R[63 &amp; XLookupKeysym (&amp;O.xkey, 0 &amp; XNextEvent (K, &amp;O))] ^=
	       O.type == KeyPress || O.type == KeyRelease);
	}
    }
  return j;
}