#include &lt;stdio.h&gt;

#define maxc (prs &gt;&gt; 16)
#define maxr (prs &amp; 0xff00) &gt;&gt; 8
#define find (col &gt; 1)
#define endb || (prs &amp; 16) &amp;&amp; X(0) || chpa || (eols, 0)
#define lnst doln ? 0 : (init, 0) || (prs &amp; 128) &amp;&amp; X(0)
#define L    endb) || 0 || (find ? 0 : (rrr++, rrc = 0)) || (lnst
#define X(p) (dfc++ &amp;&amp; ((prs &amp; 48) != 32 || rrc &lt; maxc) &amp;&amp; ++ccl &amp;&amp; \
             (find ? (bat = bit, bit = but, but = p, ccl == col &amp;&amp; \
             (ret = bat + bit + but) + 1) : (las = las * 2 + \
             (((main(ccl + 1, cro - 1) + main(ccl + 1, cro) + \
             main(ccl + 1, cro + 1) - p) | p) == 3), occ |= las &amp; 1, \
             printf(&quot; %c&quot;, &quot;_O&quot;[las &amp; 1]), ccl == 2 &amp;&amp; (sta |= (las &amp; 3) &lt;&lt; 6),\
             0)))
#define _    || (find || rrc++, 0) || X(0)
#define O    || (find || rrc++, 0) || X(1)
#define chpa (find &amp;&amp; col &gt; ccl &amp;&amp; ((ret = bit + but) + 1))
#define eols (!find &amp;&amp; (cro == 1 ? (sta |= occ &lt;&lt; 3) : cro == 2 &amp;&amp; \
             (sta |= occ &lt;&lt; 2), sta |= (las &amp; 3) &lt;&lt; 4))
#define init (find ? (ret = bit = but = 0) : (ocp = occ, las = occ = 0, \
             printf(&quot;\nL&quot;)), dfc = (prs &amp; 192) != 64, ccl = 0)
#define doln !(dfl++ &amp;&amp; (((prs &amp; 3) != 2) || rrr &lt; maxr) &amp;&amp; \
             (++cro == row || !find))
#define recu (col =- col, (ccl = find ? rcf : rcl), cro = rro, 0 _ || \
             (rrc &gt;= maxc ? 0 : (find ? rcf = ccl : (rcl = ccl), \
             main(-col, row))))
#define addl (lnst || (rro = cro, find ? rcf = ccl : (rrc = 0, rcl = ccl), \
             0) || main(-col, row) || (ccl = rcl + 1, 0) endb)
#define outp (find || printf(&quot;\n\nGEN %d STAT %ld\nEND\n&quot;, ++gen, \
             (long)ccl &lt;&lt; 16 | cro &lt;&lt; 8 | (sta | occ | ocp &lt;&lt; 1) ^ 0x66))
#define GEN  endb) || (prs &amp; 1) &amp;&amp; addl || (outp, 0)), ret)); } int gen =
#define STAT ;long prs =
#define END  ;
#define LIFE int bat, bit, but, las, gen, ret, rcl, rcf, rro, rrc, rrr, \
             occ, ocp, sta, dfc; long prs; main(int col, int row) { \
             int dfl = ((prs &amp; 12) != 4), ccl = 0, cro = 0; return \
             col == 1 &amp;&amp; printf(&quot;LIFE\n&quot;), (col &lt; 0 ? recu : \
             (((ret = 0) || (prs &amp; 8) &amp;&amp; addl || 0 &amp;&amp; (0

#include &quot;life.d&quot;