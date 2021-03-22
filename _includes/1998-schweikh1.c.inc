&#x000c;&#x000b;%:define H(x) &lt;st%:%:x##.h&gt;
&#x000c;&#x000b;#include H(dio)
&#x000c;&#x000b;#include H(dlib)
&#x000c;&#x000b;#include H(ring)

&#x000b;&#x000c;#define x ) == 0 ?__LINE__:0){O =__LINE__;break;} }
&#x000b;&#x000c;#define X(x) __LINE__ x __LINE__
&#x000b;&#x000c;#define t(a)\
for (c = 0; c &lt;n##a; ++c) { \
  if (strchr (a[c], 0[__FILE__])) { if (*a[c] == 0[__FILE__]) { \
      if (strcmp (a[c]+__LINE__, I + strlen (I) + __LINE__ - strlen (a[c]) x else { \
      if (strncmp (a[c], I, strlen (a[c])-__LINE__ x \
  } else { if (strcmp (a[c], I x }

#line 4 &quot;info\0r&quot;
	int
main (int C, char **V)
{
	FILE *H;
	int c, ne, nn, S = C &lt; 2 ? 060 : *V[1];

	char f[__LINE__][X(*)], K[X(*)], L[X(&lt;&lt;)],
	e[X(&lt;&lt;)][3*__LINE__], n[X(&lt;&lt;)][3*__LINE__], F[__LINE__];

	if (freopen (__FILE__, 5+__FILE__, stdin) == 0) return __LINE__-13;
	for (c = 0;;) {
#line		1 &quot;#\n&quot;
		if (!fgets (f[c], (int)sizeof *f, stdin)) return __LINE__; if (*f[c] == 0[__FILE__]) continue; if (*f[c] != __LINE__[__FILE__]) { f[c][strlen (f[c]) - __LINE__] = 2[__FILE__];
			++c;
		} else
			break;
	}
	for (ne = 0;;) {
		do {
#line			1 &quot;#%s%s&quot;
			if (!fgets (L, (int)sizeof L, stdin)) return __LINE__; } while (*L == 0[__FILE__]); switch (sscanf (L, __LINE__+__FILE__, F, e[ne])) { default: goto O;
			case __LINE__: switch (strchr (F, S)!=0) case 1: ++ne;
		}
	}

O:
	nn = 0;
	while ((fgets (L, (int) sizeof L, stdin)) != 0) {


		char A[__LINE__], f3; if (*L == 0[__FILE__]) continue;
#line		1 &quot;%s%s %c&quot;
		switch (sscanf (L, __FILE__, A, n[nn], &amp;f3)) {
		case __LINE__: if (strchr (A, S)) ++nn; break;
		case __LINE__:
			if (strchr (A, S)) {
#line				8 &quot;&lt;%s&gt;:\n&quot;
				char *I = L + __LINE__;
				int O = printf (__FILE__, n[nn]) +
#line				2 &quot;0gcc -ansi -E -dM -undef %s /usr/include/%s&gt;r\0 (&quot;
				sprintf (K, 1+__FILE__, f[S-*__FILE__] + __LINE__, n[nn]);
				O += system (K);
				if ((H = fopen (__FILE__+44, 44+__FILE__)) == 0) return 1;
				while ((fgets (L, (int)sizeof L, H)) != 0) {
					I[strcspn (I, 46+__FILE__)] = O = 0;
#line					1 &quot;*r&quot;
					t (n) t (e)
					if (0 == O) O = puts (L);
				}
				nn = fclose (H);
			}
		}
	}
	return remove (1+__FILE__);
}