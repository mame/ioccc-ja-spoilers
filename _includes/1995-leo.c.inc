#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;unistd.h&gt;

#define N O-&gt;
#define Li(V,K)[(K)*Ga/32+V/32]
#define Mg(P,V,K)(P Li(V,K)&gt;&gt;(V&amp;31)&amp;1)
#define H(P,V,K)(P Li(V,K)|=1&lt;&lt;(V&amp;31))
#define U(P)calloc(P,1)
#define Au(V,K)Al[K|N U+V+V-1&amp;7]
#define Ti(V,I,K,Y)((V^I&amp;&amp;K^Y&amp;&amp;I&lt;Ga&amp;&amp;Y&lt;As)?D[0]=Mg(Au,(V&lt;I?V:I),K&lt;Y?K:Y),F&amp;2||H\
	(Au,(V&lt;I?V:I),K&lt;Y?K:Y),D[0]:0)
#define Mn (V=rand()%100,(V&gt;=Li/2)+(V&lt;Li)-(V&lt;Li/2))
#define Ge(P)P&amp;&amp;I[P]&lt;Ga&amp;&amp;Y[P]&lt;As&amp;&amp;!D[P]&amp;&amp;(Ge=Zr(I[P],Y[P],N T+1))&amp;&amp;!Mg(U,I[P],Y\
	[P])&amp;&amp;(Ag(I[P],Y[P],(N U+2*P-3)&amp;7,N T+1,F&amp;24?C:Ge),0)
#define W(P)4-2*P-D[8]&amp;&amp;(I[P]=N V+Au(P,0),Y[P]=N K+Au(P,8),D[P]=Ti(N V,I[P],N K\
	,Y[P]),printf(&quot;%d %d %lu %lu O &quot;,Au(P,0)&gt;&gt;D[P],Au(P,8)&gt;&gt;D[P], N V, N K))

    Ar *U, *Au, W, Li, F;

Mo Al[27];

S
{
  Ar V, K, U, T;
  S *H;
}
*C, *Zn;

S *
Zr (Mo V, Mo K, Mo T)
{
  S *O = C, *W = Zn;
  *(Mg(U, V, K)?&amp;W:&amp;O)=0;
  while (O)
    O = (W = !N T || (N T &amp;= -!!(N V - V | N K - K | !(T - N T ^ 1))) ? O : 0) ? N H : 0;
  return W;
}

void 
Ag (Mo V, Mo K, Mo P, Mo T, S * O)
{
  S *H = (O ? N H : C);
  *(H ? &amp;O : &amp;Zn) = O = *(O ? &amp;N H : &amp;C) = U (sizeof (S));
  N U = P; N T = T; N H = H; N V = V; N K = K;
  F &amp; 32 || H(U, V, K);
}

void 
main (Mo V, char ** O)
{
  char *H, Sg[106];
  srand (time (0));

  while (*++O &amp;&amp; (sscanf (*O, &quot;%lu&quot;, W ? &amp;Li : &amp;W) ||
    (--**O, F |= !((**O - 57) % 14) &lt;&lt; (**O - 57) / 14))
  );

  puts(&quot;%!\n/S{ 0 setlinewidth} /N{ showpage} /O{ moveto rlineto stroke} def def def S&quot;);
  for (V = 0; V &lt; 8; Al[8 | (V - 2) &amp; 7] = Al[V] = !!(V &amp; 3) * (1 - (V &amp; 4) / 2) * 4, V++);
  do
    {
      U = U (V = (As * Ga + 31) / 8);
      Au = U (V);
      for (*U = -W-1, H = U(W); ++*U; H[*U+W] = Mn);


      Ag (Ga / 2, As / 2, 5, 1, C);
      Ag (Ga / 2, As / 2, 1, 1, C);

      while (C) {
	Ar I[7], Y[5], D[13];
	S *Ge, *O = C;

	if (N T)
	  {
	    D[8] = (F &amp; 4 ? Mn : W ? H[N T % W] : (N T &amp; 85) % 3);
	    W ((!!C&gt;&gt;!C));
	    W ((!!C&lt;&lt;!!C));
	    Ge ((1 + D[8] / 2 + ((1 - ( F &amp; 24 &amp;&amp; (F &amp; 16 || N T &amp; 1))) &amp; D[8])));
	    Ge (((1 + (F &amp; 24 &amp;&amp; (F &amp; 16 || N T &amp; 1))) &amp; -(D[8] &amp; 1)));
	  }
	free((C = N H, O));
      }

      fgets(Sg, 2, stdin);
      puts (&quot;N S&quot;);
      fflush (stdout);
      free (H);
      free (U);
      free (Au);
    }
  while (!(!(W &gt;&gt; 1) | F &amp; 1));
}