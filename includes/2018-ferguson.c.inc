    #include&lt;stdio.h&gt;
    #include&lt;stdlib.h&gt;
    #include&lt;string.h&gt;
    #include&lt;ctype.h&gt;
    #include&lt;time.h&gt;
    #include&lt;stdint.h&gt;
    Q unsigned d; Q char E; Q int k;
    Q long u; Q size_t t; Q const char U;
    #define L toupper
    #define M SIZE_MAX-1
    #ifndef S
    #define S 38
    #elif S &lt; 38
    #undef S
    #define S 38
    #elif S &gt; M
    #undef S
    #define S M
    #endif
    #define l S-1
    #define Y strlen
    #define Z printf
    #define K static
    #define z do{
    K E W[]=&quot;stqvvwxzwtzuvvryusuxvtrqsruxttrxvwqxq&quot;; K E T[S]= {77,69,84,72,73,78,75,83,32,73,84,32,73,83,32,76,73,75,69,32,65,32,87,69,65,83,69,76,0} ;
    K U C[] =&quot; !\&quot;#$&lt;%:&gt;&amp;&#39;()*+,-./0123456789;=?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`{|}~&quot;;
    /*NO*/
    K E P[2][sizeof(T)]; K t G=0;
    #ifndef N
    #define N 25
    #elif N &lt; 4
    #undef N
    #define N 3
    #elif N &gt; M
    #undef N
    #define N M
    #endif
    /*BLOB*/
    K u R=1; K d D=0; K k X(k f,k t){ return (rand()%((t)-(f)+1)+(f)); }
    K E c() {return C[X(0,(k)Y(C)-1)];%&gt; Q struct x { E G[sizeof T];
    t F; } x; K x O[N];
    /* Special C main() handler (encapsulation): */
    #define r(main) main
    r(k main(k a, E **V)) { x x; E*b;
    U *A=T; k h=0,s,q=0,m=0,y=0,n=N==97,J=0; t i,j,

    /* prototype for special C parser H() below */
    F H(); H(&lt;% H(for (s = 1; s &lt; a &amp;&amp; *V[s++]; ) H(&lt;%
    H(E *v=V[s-1]; H(if (*v!=&#39;-&#39;||h) H(g(o) w(f) H(
    while (*++v) H(switch (*v) { w(case &#39;-&#39;) h=1; g(f)
    w(case &#39;r&#39;) H(if ((R=strtol(v+1,&amp;b,0)) &lt; 1 || R &gt; 100)/*CODING*/
    &lt;% Z(&quot;mutation rate out of range\n&quot;) ; m=1); %&gt; else m=0; g(f)
    w(case &#39;q&#39;) q=1; Z(&quot;quiet output\n&quot;) ; g(f) w(case &#39;m&#39;) J=1;
    g(f) w(default) g(f) %&gt;); H(continue))); H(w(o) H(y=1; 
    H(i = Y(V&lt;:s-1]); H(if(i &gt; l) i=l; H( strncpy(T,V[s-1:&gt;,i)
    ; H(T[i]=&#39;\0&#39;)))))))); })); }); H(H(if (n&amp;&amp;!y) for (j=0
    ; j&lt;37; ++j) T[j]=W[j]-&#39;A&#39;); H(for ( ; *A &amp;&amp; strchr(C, L(*A))
    ; ++A)); H(if (*A) &lt;% Z(&quot;&#39;%c&#39; not in keyboard \&quot;%s\&quot;\n&quot;, *A,C)
    ; return 1; })/*THIS*/); H(srand((d)time(0)); memset(&amp;x, 0, sizeof x);
    memset(O,0,sizeof O)); H(Z(/*IS*/&quot;target &#39;%s&#39;\n&quot;, T); H(Z(
    &quot;mutation rate %ld\n&quot;, R)); H(if((m=(m||J||N&lt;4)))
    Z(&quot;monkey at typewriter\n&quot;); H(for ( j=0; j&lt;N; ++j) H(for
    (i=0; i&lt;Y(T); ++i) O[j].G[i]=c())))); H(while (!D) { H(if (++

    G==M) {Z(&quot;Too many attempts, blaming the monkey Eric even if &quot;
    &quot;he isn&#39;t typing or doesn&#39;t exist. Bye.\n&quot;); return 1; } H(for
    (j=0; j&lt;N&amp;&amp;!D; ++j) { F = 0;/*NOT*/ H(for (i =0; i &lt; Y(T); ++i)) { H(
    if (L(O[j].G[i]) == L(T[i]))) ++F; } /*A*/ O[j].F=F; H(if (((D=(F==Y(T)))
    ||G==1)&amp;&amp;(!q||D)) Z(&quot;Generation %4zu\tOffspring %2zu: %s\n&quot;,G
    -1,j+1,O[j] .G); })); H(if (D)break;); s=0; /*COMPACT*/ H(if (m) g(p) else H(z
    s=1; H(for(i=0; i&lt;N-1; ++i) { H(if (O&lt;:i].F &gt;= O[i+1].F) g(h)) x=O[
    i+1:&gt;; O[i]=O[i+1]; O[i+1]=x; s=0; w(h); }); }while(!s))); w(p
    ) H(strcpy(P[0],O[0].G); strcpy(P[1],O[1].G)); H(for (j=0; j&lt;N; ++j)
    { H(for (i=0;!m&amp;&amp;i&lt;Y(T); ++i) H(if ( X(0,9)&lt;5) O[j] .
    G[i]=P[0][i]); H(else O[j] .  G[i]=P[1][i];)); /*BLOB*/ H(if (!
    q) Z(&quot;Generation %4zu\tOffspring %2zu: %s -&gt; &quot; ,G,j+1,O[j].
    G); H(for/*OF*/ (i=0; i&lt;Y(T); ++i) { H(if (X(1,100) &lt;= R || m)
    O[j].G[i]=c(); })); H(if (!q) Z(&quot;%s (%s)\n&quot;,O[j].G,m
    ?&quot;monkey typing&quot; : &quot;mutation&quot;))); /*OCTETS*/ }); H(if (!
    q) Z(&quot;**\n&quot;)); })); return 0; }