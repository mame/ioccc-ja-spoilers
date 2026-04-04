#include &lt;X11/Xlib.h&gt;
#define M     typedef
#define N(	 a)=r=(a)+j
#define S f(; G; )D[B[R=i[--G]]=F+=F&lt;p]++
#define	f for
#define g [H]









  M short a;					       M int b; M
  unsigned  c ;					       M unsigned
  char*d; M XPoint				       *e; M void
  _; b*h,*i,j,k,l,m,n,o,p			       ; b O; d A
  ,B,C; _*q,*r,*calloc(); e s			       ,t; Window
  u,v; GC x[256]; b D[256]; b w,y,		       z;_ Q(b E)
  { XMapWindow(q,v=XCreateSimpleWindow(q,	      XRootWindow
  (q,z=XDefaultScreen(q)),!v*n,0,n,n,0,0,0));	      XSelectInput
  ( q,v,E); }	_ P(){ C N(h N(i N(s N(t N(A N(B=calloc(C-B+256,1)
  ) )) ))); }	      _ J(){ b F,G,H; c R =w %4; F=G=m; f(H=0; H&lt;j
  ; H++){ h g		     =l+(R-2?R?R-1?(G-F*F/n)+F*n:(G*G-F*F)
  /m*n+2*F*G/			    m: 2*(F*F- G*G)/m+4*F*G/m*n:G+
  F*n);( s g.				 x= m-F--,s +H) -&gt;y=m-G;F=
  F+m?F:(G--,				       m);}} _ K(){ b H,R;
  f(H=0;H&lt;j;H					   ++)D[ B g=(c)(R
  =h g+k)&lt; j?					       (A[ R]&lt;p)+A


				 [R
				 ]:
				 1]
				 ++
			    ; } _ I ( d F)
			     { F?(_)0:(_
			       ) (F=B,
				gets(
				 B))
				  ;

  y=atoi(F);}					       _ Y(){ b F,
  G; c R ; F = G					= 0; K( );
  f( R = k + l ; R &lt;					j &amp;&amp; ( F =
  B[ R ] ) &lt; p; R = h [R				] + k) { D
  [ F ] -- ; B [ i [ G ++ ] =R				] =p; } if
  ( R &gt;= j) F = 1; S; } _ L() { b H,			F,G; c R ;
  f( H =0; H &lt; j; H ++) B g =0; O =-1; f(		G = R = 0;
  R &lt; j; R++	 ){ f(; R &lt; j &amp;&amp; !( F = B[ R ]);	R = h[ R ]
  + k) B [i[	       G ++] = R ] = p; S; } } _ U() { e X [ 256 ]
  ,W; b H; W		     = t; f ( H = 0; H &lt; o; H ++ ) { X g =
  W; W +=D g			      ;} f( H =0; H &lt; j; H ++) if(
  A g - B g)				    * X[ B g ] ++ = s g; {
 XMotionEvent					   * V = r = t ; W
  = t; f ( H						= 0; H &lt; o
  ; H ++ ) {						XDrawPoints


									 (q ,
							      v		  ,x g,
							      W,X	g -W,
							      CoordModeOrigin
							      ) ;    W +=  D
							      g ;      D g

				= 0 ;
				} f(;
			    XPending(q)+!
			    ++O; V-&gt;type-
			    ButtonPress?(
				k =V
				-&gt;x+


			   V -&gt; y * n - l) : (
		    O = - 42 ) )  XNextEvent ( q , r
	      = V ) ; } } _ main ( b X , d * W ) { b H, F
	,G; c R; if ( X &lt; 3 ) { puts( &quot;tvr: mode size &lt; cmap&quot;
    ); exit(0);} P(); I(*++ W); w = y %12; I(*++ W); n = y *2; j
   = n * n ; P ( ) ; m =			 y ; l = j / 2 + m
  ; q=XOpenDisplay				     ( 0 ) ; Q ( 0 )
  ; u = v ; Q (					     PointerMotionMask
  |ButtonPressMask				      ) ; I ( 0 ) ; o
   =y ; p = o -1				     ; { XColor F ;
    Colormap G; f				   ( H = 0 ; H &lt; o
      ; H++){ I(0);				  XParseColor(q,G
       =XDefaultColormap		       ( q , z ) , r =
	    B ,	 &amp; F ) ;		       XAllocColor
		(q , G ,		       &amp; F ) ;










				      XSetForeground
				      (q,x g = XCreateGC
				      ( q, u ,0 , 0 ) , F
      .pixel	 ) ; } }		     P ( ); J (); f
      ( F =R	 = G =H = 0;			   H &lt; j; )
      if(++F	 &gt;= p || ( R =			     h [ R ]
      +G)&gt;=j	 ) { D [ B g = F		     ] ++; R
			 = l + k; G=		     ++H -R;
			    F =0; } H=j;	    U(); v=
			      u; f(F=w/4; ; A+=H-=H+H,B-=H
				)(O&lt;0?L:*(&quot;tvr@cs.hut.fi.&quot;
				    +7*F)?F^1?Y:K:L)()
				       ,(U)(); }