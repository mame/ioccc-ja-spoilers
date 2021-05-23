					  #include /*!!TAB=4!*/&lt;stdio.h&gt;
					  #include /*{{ &quot;{{&quot; }}IOCCC2}}*/&lt;SDL.h&gt;
					  #define b/*{{ &quot;{{&quot; }}IOCCC257}}*/ if (
				#define a(b, c) for (b = 0 ; /*IOCCC/2014*/b&lt;d; b++,c)
				e,h,f,g,i,j,k,l,m,n,o,p=1,*q,r,s=5, t,*u,x,y,z,A,B, C[
				333*7],d=333; D,E,F,G [2 ],H, I, J, K, L, M,N= 1,O,P,Q
				,*R;char * S, **T;			  /*33*/	  ;
				SDL_Surface*U,* V;			  int*W(	  X
				){ u=C+X *7; b*u){			  u++; x	  =u[0]; y=u[1
		  ]; H=u	  [2]; z				  =(H%8)				 *
		  i; A=(	  H/8)*i				  ; B=u[				 3
		  ]/**/;	  return				  u; ; }				  return
		  0; } Y	  (){ O=50; r=					0; t=1				   ;
		  } Z (X 	  ,m, n,o)/**/					{ /**/				   ;
		  return	  W(X)&amp;&amp;B&amp;&amp;(m&lt;					x+i&amp;&amp;n				   &lt;
		  y+i&amp;&amp;x&lt;m+i&amp;&amp;						  y&lt;n+o); } int*ba(int*u){ int X
		  ,*bb=C; a(X,						  bb+=7){ b!*bb){ *bb=1; R
		  =bb +1; H=6;						  while(H--)*R++=*u++; /*W
					 N										   N
					 E  									   E
					 S										   S
				*/return bb; } } return 0; } bc(e){ q[2]=e; } bd
				(be,bf){ int X,bg; m+=be; n+=bf; I=e
				-i; m=m&lt;0?0:(m&gt;I?I:m); a(X,0){ b Z(X
				,m,n,o)){ bg=B&amp;1; b D&amp;&amp;bg) continue;
		  m-=be; n-=bf; b B&amp;8){ u[-1]=0; j=1; bc(8); b B&amp;32){ n-= i;
		  o=i*2; } } b B&amp;16&amp;&amp;!O){ bc(32+(o&gt;i?8:0)); Y(); u[- 1]=0; }
		  b(B&amp;128&amp;&amp;bf&amp;&amp;s&lt;0)||(B&amp;64))u[-1]=0; b bg&amp;&amp;!O){ b bf&amp;&amp;s &gt;0){
	u[2]--; u[3]=bf=0; s=-6; } else { b j){ bc(0); b o&gt;i) n+=o=i; D=30; j=0;
	} else { bc(24); Y(); L=-1; } } } b B&amp;4){ b bf&amp;&amp;s&lt;0){ int I[]={ x,y-i,u[
	5],u[4],rand()%2?1:-1,2} ; u[2]++; u[3]=2; ba(I); } } b bf)s=1; break; }
	}			} bh (m,e,k,	  bi){ H=k/ 2; 		G[bi]=m&gt;e-H?		   k
	-			e:(m&gt;H?H-m:0 	  ); } bj(X,be 		,bf){ int bk		   ;
	u 			[0]+=be; u[1 	  ]+=bf; W(X); 		E=x,F=y,I=0;		   a
	( 				  bk,0){ b I=(X!=bk&amp;&amp;Z(bk,E,F,i)&amp;&amp;(B&amp;6 				   )
	) 				  )break; } W(X); b I){ b bf)u[1]-=bf; 				   b
	be  			  ){ u[0]-=be; u[4]*=-1*be; } } W( X); 				   }
	bl 			(){ int bm=n,X; SDL_FillRect(U,0,M); X=4; while(		   X
	--			)bd(r,0); X=3; while(X--)bd(0,s); b n&gt;h&amp;&amp;!O)Y () 		   ;
	t 			=bm==n; q[0]=m; q[1]=n; bh(m,e,k,0); bh(n,h,l,1)		   ;
	a(X,0){ b W(X)){ b B&amp;9){ bj(X,u[4],0); bj(X,0,2); } b B&amp;1){ *u +=u[4]; b
				++u[5]&gt;20){ u[4]*= 			  -1; u[5]=0; }	z+=K
				%2?i:0; } J=i; b q 			  ==u){ J=o; b!O){ b
				r)z+=i*(K%2); b!t) 			  z=48; z+=p&lt;0?i*4:0
				; }} b q!=u||!(D&amp;&amp; 			  0==D%3)){ SDL_Rect
		  bn={ z,A,i,J} ,bo= 						{ G[0]+x,G[1]+y,i,
		  J}; SDL_BlitSurface 						(V,&amp;bn,U,&amp;bo); } }
		  } b(s+=2)&gt;2)s=2; K 						++; D-=D?1:0; b O)
		  b!-- O) exit(L); }						bp(X){ return strtol
	(T[X],0,0); } bq(int H ,						int*br,int bs ){ int bt;
	bt=Q-P; b bt&gt;bs) bt= bs;						SDL_MixAudio(br,S +P,bt,
	128); P+=bt; b P&gt;=Q)P=0;						} SDL_AudioSpec bu={8000
	,8,1,0,256,0,0,bq} ,bv ;						main(int bw,char**bx){ T


  =bx; int by,H=255,   bz=H&lt;&lt;8					,bA =bz   &lt;&lt;8,bB= bA&lt;&lt;8,
  bC=bp(5),bD=bp(6);   SDL_Event			  bE; o =i=   bC / 8; k = bp(1)
  ,l=bp(2),e=bp(3),h   =bp (4); M=			bp(9); /**/   SDL_Init(/*&lt;2053&quot;*/
  0xffff			   ); b!*(char*)	  &amp;N){ H=bB; bz   =bA; bA	   =bz&gt;&gt;8;
  bB=255			   ; } U=SDL_SetVideoMode(k,l,0,0);   V=/*NES	   HISTORY
  SANDRO			   */ SDL_CreateRGBSurface(1 &lt;&lt;15 ,   bC, bD,	   32,H,bz
  ,bA,bB); fread(V-&gt;   pixels,bC*bD*4,1,fopen(T [7],&quot;r&quot;   )); SDL_OpenAudio(&amp;
  bu,0); SDL_LoadWAV   (T[8],&amp;	   bv,&amp;S,&amp;Q		); /**/   SDL_PauseAudio(0);
  for(; ; ){ int u[6   ],*I; H		  =0		; while   (H &lt; 6) scanf(/*0*/
			  &quot;%d &quot;,   u+H++);					b u[5]&lt;   0)break	   ; I=ba(
			  u);b!u   [3]){ q					=I+1; m   =u[0 ];	   n=u[1];
			 } } for   (; ; ){					while/*   !MAFFIO	   DO.S*/(
  SDL_PollEvent(&amp;bE)   ) { by=					bE.type   ==3; b!O &amp;&amp;(by|| bE.
  type==2)){ I = bE.   key/**/					.keysym   .sym; b I== 276)r=
  by?0:(p=-1); b I==   275 )r=					by?0:(p   =1); b I==32)by?

  0:(t?(s=-9):0); b I==27)exit(0); } } bl(); SDL_Flip(U); SDL_Delay(60); } }