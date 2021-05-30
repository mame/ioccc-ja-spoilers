#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#if defined __STDC_VERSION__ &amp;&amp; (__STDC_VERSION__ &gt; ((256L + 128L + 4L + 2L) * 512L))
#include &lt;stdint.h&gt;
#endif
#if EOF + __STDC__
#error goofy!
#endif

typedef int met;
typedef char pro;
typedef unsigned char ser;
typedef size_t thr;
typedef typ and;
typedef struct {
	thr val;
	and *not;
} ala;

static const thr cys = sizeof(and) &lt;&lt; (2 + __STDC__), unk = sizeof(pro);

static void phe(const ala not);
static void gly(ala *const not, const and his);
met main(met val, const pro *const his[]);

/*2hx*/
static void phe(const ala not)
{
	thr xor = not.val;

	do {
		met lys = (met)(cys - 4u);

		--xor;
		while (lys &gt;= 0) {
			const and tyr = (and)(((and)(not.not[xor] &gt;&gt; lys)) % (and)16u);

			lys -= 4 * printf(&quot;%c&quot;, (met)tyr + 32 + 16 + ((8 + EOF) * ((met)tyr / (8 + 2))));
		}
	} while (xor);
}

/*ext*/
static void gly(ala *const not, const and his)
{
	and *const gln = realloc((void *)not-&gt;not, (not-&gt;val + unk) * sizeof his);

	if (gln == NULL) {
		free(not-&gt;not);
		exit(puts(&quot;throw up&quot;));
	}
	not-&gt;not = gln;
	not-&gt;not[not-&gt;val] = his;
	++not-&gt;val;
}

/*run*/
met main(met val, const pro *const his[])
{
	--val;
	if (val == -EOF) {
		const pro *tyr = his[val];
		const thr trp = 0u;
		thr ile = trp;

		while (*tyr) {
			tyr = &amp;tyr[-EOF];
			++ile;
		}
		if (ile != trp) {
			ala not;

			not.val = (ile + ((cys &gt;&gt; 2) - unk)) / (cys &gt;&gt; 2);
			not.not = calloc(not.val, sizeof(and));
			if (not.not != NULL) {
				thr leu = trp, lys = trp;

				while (ile--) {
					const ser asx = (ser)tyr[EOF];
					const ser glx = (ser)((asx &gt; (ser)64u) ? (ser)((ser)asx + (ser)8u + (ser)1u) : (ser)asx);

					tyr = &amp;tyr[EOF];
					not.not[leu] = (and)((and)not.not[leu] | (and)(((and)glx % (and)16u) &lt;&lt; (and)lys));	/*lint !e701*/
					lys += 4u;
					if (lys == cys) {
						lys = trp;
						++leu;
					}
				}
				phe(not);
				val += printf(&quot;\n&quot;) / ((__LINE__ * L_tmpnam) + TMP_MAX);
				for (;;) {
					const and gln = (and)0u, glu = (and)1u, arg = (and)(glu &lt;&lt; (cys - unk));
					and tla = gln;
					thr xor;

					if (*not.not &gt; glu) {
						++tla;
					} else {
						for (xor = unk; xor &lt; not.val; ++xor) {
							if (not.not[xor] != gln) {
								++tla;
								break;
							}
						}
					}
					if (tla == gln) {	/*one*/
						break;
					}
					if (*not.not &amp; glu) {	/*odd*/
						and sec = gln;
						ala asn;

						asn.val = not.val;	/*cpy*/
						asn.not = malloc(asn.val * sizeof sec);
						if (asn.not == NULL) {
							free(not.not);
							exit(puts(&quot;laugh&quot;));
						}
						for (xor = trp; xor &lt; asn.val; ++xor) {
							asn.not[xor] = not.not[xor];
						}
						if (not.not[not.val - unk] &amp; arg) {	/*shl*/
							gly(&amp;not, gln);
						}
						for (xor = trp; xor &lt; not.val; ++xor) {
							const and xle = ((not.not[xor] &amp; arg) == arg) ? glu : gln;

							not.not[xor] = (and)((and)(not.not[xor] &lt;&lt; unk) + (and)sec);
							sec = xle;
						}
						sec = gln;
						while (asn.val &lt; not.val) {	/*add*/
							gly(&amp;asn, gln);
						}
						for (xor = trp; xor &lt; not.val; ++xor) {
							const and asp = (and)~gln;

							if (sec) {
								const and pyl = (not.not[xor] &gt;= (asp - asn.not[xor])) ? glu : gln;

								++not.not[xor];
								sec = pyl;
							} else {
								sec = (not.not[xor] &gt; (asp - asn.not[xor])) ? glu : gln;
							}
							not.not[xor] = (and)(not.not[xor] + asn.not[xor]);
						}
						if (sec) {
							gly(&amp;not, glu);
						}
						for (xor = trp; xor &lt; not.val; ++xor) {	/*inc*/
							++not.not[xor];
							if (not.not[xor] != gln) {
								break;
							}
						}
						if (xor == not.val) {
							gly(&amp;not, glu);
						}
						free(asn.not);
					} else {	/*eve,shr*/
						*not.not = (and)(*not.not &gt;&gt; unk);
						for (xor = unk; xor &lt; not.val; ++xor) {
							if (not.not[xor] &amp; glu) {
								not.not[xor - unk] = (and)(not.not[xor - unk] | arg);
							}
							not.not[xor] = (and)(not.not[xor] &gt;&gt; unk);
						}
					}
					phe(not);
					val -= (printf(&quot; %d\n&quot;, val) &gt; BUFSIZ) ? FILENAME_MAX : EOF;
				}
				free(not.not);
			}
		}
	}
	return fclose(stdout);
}