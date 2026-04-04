
#include &lt;stdio.h&gt;
#include &lt;math.h&gt;
#include &lt;X11/Xlib.h&gt;
#include &lt;X11/keysym.h&gt;

int main()
{
	Display *D;
	Window W;
	GC G;
	double l, r, a, b, o[7];
	int j, y, m, d;
	XWindowAttributes A;
	XEvent V;

	char n[444] =
		&quot;NfVS6&gt;7TYBC&gt;Rm=8K\\QWiAR98iBX13&gt;\\X[oN;W&quot;
		&quot;fXLULQJ^dS[PiLhDX`;&lt;iNbR&lt;4Xk5E7ZEY&gt;GF&quot;
		&quot;bZ000=N4R6:9?TDoQH2aiN6MK[Zh[doSKGi;N&quot;
		&quot;bZQQ84ROVaYP2&lt;BVVFM1eL:k&lt;&lt;[B?`TX_3gCK&quot;
		&quot;v^C?E_PSI\\XNLeQ:VIX=&lt;FO2Wb[P5CPZ`1cFT&quot;
		&quot;b`&lt;E?ePa[TlPI9jjYOUHBD&lt;Rb`WLe_bZnknBV&quot;
		&quot;sb&lt;`7fPOm\\GL^Q=8\\?;KP@[FJPZ]oVNZBWNfO&quot;
		&quot;fbhAc8L9F[NNnROJ^7jdX&gt;]MZI[O41c\\9VWNI&quot;
		&quot;bb7aRCXkd7b\\JW6:Z9O@6@fZ;5ZllOgZ0mFjI&quot;
		&quot;chMPc&lt;XoGl&gt;ZSi2FJ^_fG6`eS7_043Q^&gt;hG`T&quot;
		&quot;v00000&amp;15e0&amp;13e0&amp;13e\1&amp;e0&amp;e0&amp;e\1&amp;\\TQneTv00000&quot;, *c = n;

	for (j = DefaultScreen((D = XOpenDisplay(0))),
		G = XCreateGC(D, W = RootWindow(D, j), 0, 0); (*c++)--; );
	XMapWindow(D, W = XCreateSimpleWindow(D, W, 0, 0, 400, 400, 0,
		BlackPixel(D, j), WhitePixel(D, j)));
	XSelectInput(D, W, KeyPressMask|ExposureMask);
	j = scanf(n + 392, &amp;y, &amp;m, &amp;d);
	j &gt; m++ ? y--, m += 12 : j--;
	for (j = (int)(365.25 * y) + (int)(30.6001 * m) + d - 730550 +
		(1582 &gt; y || y == 0x62e &amp;&amp; (11 &gt; m || 11 == m &amp;&amp; d &lt; 5) ?
			0 : 2 - y / &#39;d&#39; + y / 400);
		XGetWindowAttributes(D, W, &amp;A) &amp;&amp; XClearWindow(D, W),
		b = floor((y = j + 0x8ead + (-152385 &lt; j ?
			(a = floor(j / 36524.25 + 1.9983778) + 14,
			1 + a - floor(a / 4)) : d)) / 365.25 + .802601),
		m = floor((l = y - floor(365.25 * b + .750001) + 416) / 30.6001),
		d = l - floor(30.6001 * m),
		y = b + 0x76c, 13 &lt; m-- ? m -= 12 : y--,
		!XDrawString(D, W, G, 0, 10, n + 0x1a0,
			sprintf(n + 416, n + 377, y, m, d));
		XNextEvent(D, &amp;V) || (j += -(V.type == KeyPress) &amp;
			((y = XLookupKeysym(&amp;V.xkey, d = 0)) == XK_Left ? -1 :
			y == XK_Right ? 1 :
			y == XK_Up ? 20 :
			y == XK_Down ? -20 : d)))
		for (m = !m; m++ ^ 12;
			!(m == 9 &amp;&amp; 150 &lt; fabs(j + 0x13d2) ||
					m == 10 &amp;&amp; fabs(j + 1005) &gt; 0x96) &amp;&amp;
			XDrawArc(D, W, G, d += r * cos(l) - 4,
				y -= r * sin(l) + 4, 8, 8, 0, 63 * 365 + 45) &amp;&amp;
			XDrawString(D, W, G, d + 7, ++y, c - &#39; &#39;, 2)) {
			for (d = !m; 7 &gt; d; d++[o] = (r + !!r) *
				exp2((*c - 0x2f &gt;&gt; 1) - 21) * (2 * (*c &amp; 1) - 1))
				for (r = 0, c = n + 37 * m + (y = 5) * d - 31;
					--y; r = (r - 47 + *c--) / 64);
			b = o[3] + o[4] * j;
			for (l = b + (a = o[1]) * sin(b); 1e-6 &lt; fabs(r);
				l += r = (b - l + a * sin(l)) / (1 - a * cos(l)));
			r = log1p(*o * (1 - a * a) / (1 + a * cos(
				l = 2 * atan(sqrt((1 + a) / (1 - a)) * tan(l / 2)))));
			r *= fmin(d = A.width / 2, y = A.height / 2) *
				cos(asin(sin(l += o[5]) * sin(o[2]))) / log(32);
			l = atan2(sin(l) * cos(o[2]), cos(l)) + o[6];
		}
	return 0;
}