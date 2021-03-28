#		include				  &lt;X11/Xlib.h&gt;
#		include				    &lt;math.h&gt;
#		include				    &lt;time.h&gt;
#	      define W(f)			  f##Window(S,
#	      define  O ;			  break ; case
#	      define  _ *				s

        XID  w,r,l=45&lt;&lt;9,     d,v     =1,E;     GC V[2];	    typedef
       char  * K; Display     *S;   XGCValues   g; typedef        int Y; K j;
      double         *o,I    [99]   ,T=   0,t   ,_,   atof(     ); K	  X(K
     i){ for        (r=0  ; o=s-1  ,*i     ; i  ++       ) {   switch    (*i){
      struct        { K   Y; Y K,  t ;     XID  k ;      } Z;   K z=      j++;
     O  32L         :*o       *=_  --O     &#39;}&#39;  :*o      /=_    --O        73:
    *o += _        --O        61           :*o  -=_      --O   123
   :_=  sin        (_)       O 94         :_=   asin    (_)    O 47
  :_=   cos       (_)        O 45      : _=     fmod(_ ,2*     M_PI
  )O    076       :_=        sqrt      (_) O    33: t=*o;      *o=
  _;    _=t      O 48         :_=         cos   (_)     &lt;0 O   86
 :j=    i O      43:          X(z           =&quot;K I@I-&quot;     )O   93:
 X(z =&quot;/ =&quot;)O    60           : i  =++     r -  4 ?       j-1  :i O         79
 :XDrawArc(S,   d,V           [(Y  )_]     ,(Y  ) (       399   +14        _ [
        -2]     ),(           Y)(  *&quot;&#39;    &quot;+14  _ [      -1])   ,2,2      ,0,l
        ) ;    { Z.           Y =   i -   127   +r/    3*2 ;     Z.K=    r%3+
        r/3    +1;            Z.t   =0; Z.k=E   ; XDrawText       (S,d,*V,(Y
        ) (    399            +14     *1[s-=     strlen(z)           ]),20,

		   &amp;Z,1); } O 1:default:*i&gt;90?I[*i-32]=_--:(*++s
			  =I[*i+(*i&lt;73)*r]); } } } Y main
				  (Y G,K*A){ *A=

&quot; 8&lt;$ $li &gt;d# -d8Z&#39;Et#)wWP]WM C\\TI)#%!DcUAvz% H2&amp;08M\\%YaHAW}4+%g ;|XN%W|l!_Kz+$UgBix41r=H7b@_:X 4zS   EFo1i}= _D.%biA xF&gt;)k*T(7&amp;m \&quot;G~ )TY *.^@$0.#yl&lt;  66,/dI ;\\[![:- $u6 VnD  X+ )TY-L38 :%\&quot; )TY%8Z$ \&quot;G|BfCb &lt;Il8EC}  \&quot;b  \037ST I{kT I-lT I!K ImT I!K =-`LQ { !L{ I[MQ { !M{ Ip@;P=I`L]!LQ ][M]!MQ ]lLL ;; IL;Q  @]&gt;m@{;M} ^`K !T PIIIV[;I{ k;I/@{  K!=k;!={LM=M}  K!=jM!}T!=k@P=`+e+f+g+hK I-[K I-pEF=Q `FG=Q k@]aK]b;]cP]d@{ EIeK{ FIf;{ GIgP{ HIhVAE{ J{AE/  E0\117&lt;&quot;;

    w = DefaultScreen (						       S =
      XOpenDisplay(0)); W(					     XMap
	 )d =W(XCreateSimple					   ) W(
	   Root )w),0,0,800,80					,0,0
	      ,BlackPixel(S,w )))			      ; g.
		foreground=WhitePixel			   (S,w
		  ); *(Y *) &amp;g=6; for			 (; v
		    [V ]=XCreateGC( S,d		       ,4 +
		       v, &amp;g),!--v; ); for	    ( E=
			 XLoadFont(S,&quot;10x20&quot;	 ),81
			   [I]=2; I[84]=(      G&gt;2?
			     atof(2[A])     -2451545
			       :time	  (0 )/ 3.75
			     /l -	10957.5)+ (T+=G
			   &gt; 1?	      atof(A[1]):0); ){ t
			=5e4		*6013; s=I; for(j=*A
		      ;_++		   =pow (t,(j[ 2]*&#39;_&#39;-
		    3028		     +3[j])/t)*pow(6e-4+
		 1,j[			       sizeof* X(++j) ]+95
	       **j-				 3072.)-1; )j+=4; s-=
	    2; W				    (XClear)d); XFillArc
	  (S,d					      ,*V,385,25,0x1c,28,
	0,l)						; X( j+4); XSync(S,
     0) ;						   usleep(10000); } }