				#include  &lt;math.h&gt;
			  #include		&lt;time.h&gt;
		     #include			   &lt;unistd.h&gt;
		  #include			  &lt;netinet/in.h&gt;
	       typedef				float F,A[3]; F D,M
	     [999]={			 LT} ,*L=NL+M,*P,b,t,*h,*i; A
	   #define S(x,y,z)F  x(F*d,F z s){ F t=y; t+=y; return t+=y; }
	 E,Q,U,V,C,c,I={ EY} ; unsigned char g[2414],*p=g,*e; int j,k,s,m
	,n,x,y; S(B,*d++=*s++,*)S(o,*d+++=*s++,*)S(a,*d++-=*s++,*)S(H,*d++
      **s++,*)S(X,*d++*=s,)S(v,*d+++=s,)int w(int c){ return*p++=c; } F W(F*
     d){ return sqrt(H(d,d)); } void r(uint32_t u){ w(u&gt;&gt;24); w(u&gt;&gt;16); w(u&gt;&gt;
    8); w(u); } F  O(F*d){ return X(d,1/W(d));  } char*z,*f; void u(char*s){ *
   s&amp;&amp;w((u(1+s),*s)); } F G(F x,int p){  for(z=p*46+f; 12^*z; x+=.5){ for(D=-4;
  5&gt;D; D++)if(9-*z++){ *P++=x; *P++=D/2; *P++=0; } } return p; } void K(){ write
  (k,g,p-g); p=g; } F*d(){ h=0; D=1e9; a(E,Q); O(E); 2[E]&amp;&amp;0&gt;(t=(1+2[Q])/2[E])&amp;&amp;
 (D=-t,h=P); for(i=M; P&gt;i; i+=3){ B(C,i); a(C,Q); b=H(E,C); (t=b*b-H(C,C)+(i&lt;L?99
 :.6))&gt;=0&amp;&amp;0&lt;(t=b&lt;t?t+b:b-t)&amp;&amp;D&gt;t&amp;&amp;(D=t,h=i); } return h; } void Y(int N){ F*h,*i
; A p,n; if(!(h=d()))*c=1[c]=(2[c]=2[E]/2)/2; else if(h&lt;L){ X(c,0); v(c,1); } else
{ B(p,E); X(p,D); o(p,Q); if(h-P){ B(n,p); a(n,h); O(n); } else{ X(n,0); ++2[n]; }
B(Q,n); X(Q,1e-4); o(p,Q); X(c,0); if(N&lt;8){ B(Q,n); X(Q,2*H(n,E)); a(E,Q); o(E,p);
B(Q,p); Y(1+N); X(c,h-P?.8:.2); } for(i=M; L&gt;i; ++i){ B(E,i); B(Q,p); d()-i||v(c,(
h-P?.1:.5)*H(n,E)); } v(c,0.05); h-P||(2[c]*=.3,c[1&amp;lrint(*p)^lrint(1[p])&amp;1]*=.2);
} } void Z(char*s){ K(); p+=4; u(s?s:&quot;TADI&quot;); } void J(){ uint32_t c=~0; e=p; p=g;
r(e-p-8); while(p!=e){ c^=*p++; for(j=0; 8&gt;j; j++)c=c/2^c%2*3988292384; } r(~c); K
 (); } void q(int c){ w(c); m+=c; m%=c=65521; n+=m; n%=c; } void T(F c){ c=.5+255
 *c; q(0&gt;c?0:c&gt;255?255:c); }  struct sockaddr_in R;  int main(){ time_t i; struct
  tm*b; R.win_port=8224;  s=socket(R.sin_family=AF_INET,SOCK_STREAM,0);  bind(s,
  (void*)&amp;R, sizeof R); listen(s,1); for(; ; ){ k=accept(s,0,0); for(; ; ){ ++j;
   read(k,p,1); if(*p==&#39;\n&#39;)  { if(3&gt;j)break;  j=0; } }  m=1; u(&quot;\n\032\n\rGNP&quot;
    &quot;\211\n\r\n\r1 :hserfeR\n\rKO 002 0.1/PTTH&quot;); Z(&quot;RDHI&quot;); r(800); r(600); w
     (8); r(33554433); J(); Z(0); w(120); w(1); J(); i=time(0); b=localtime(&amp;
      i); x=b-&gt;tm_sec; *I=45&lt;x?x-60:15&gt;x?x:30-x; *U=-I[1]; 1[U]=*I; *V=2[I]*
	*I; 1[V]=2[I]*1[I];2[V]=-*I**I-1[I]*1[I];  O(U); O(V); X(U,D=W(I)/
	 1e3); X(V,D);  P=L;y=1+(11+b-&gt;tm_hour)%12; 9&lt;y&amp;&amp;G(-14,y/10); G(-
	   10,y%10); G(-6,10); y=b-&gt;tm_min;  G(-2,y/10);G(2,y%10); G(6,
	     10); G(10,x/10);  G(14,x%10);  for(z=&quot;xxxdtrb!  d r y &quot;;    9[z]; ++z){
	       for(y=7&amp;8[z]; 600&gt;y; y+=14&amp;*z){ Z(0); w(0); p+=4; q(    0); for(x=7&amp;9[z]; 800&gt;x;
		  x+=15&amp;1[z]){ B(Q,V); X(Q,y-300); B(E,U); X(E,x    -400); o(E,Q); B(Q,I); Y(0);
		     T(*c); T(1[c]); T(2[c]); } j=p-g-13; 12[    g]=~(10[g]=j&gt;&gt;8); 11[g]=~(9[g]=
			  j);  J(); } }  Z(0); w(1);  r(    65535); r(n&lt;&lt;16|m); n=0; J(); Z(
				&quot;DNEI&quot;); J(); j=0;    close(k); } } char*f=

&quot;	       	 							  							  							 	       	&#x000c; 					 		 						 	          								 								&#x000c;   				 	 		 				  			 			  			 			  				   	&#x000c;	 					 	 			 			  			 			  			 			 	   	   	&#x000c;				   						 		 					 			          				 				&#x000c;	 		      			 			  				 		  				 		 	    			 &#x000c;	      		 		 			 	 			 			  			 			 	   			 	&#x000c;								   						 		  				 				  		 						   &#x000c;	   	   	 			 			  			 			  			 			 	   	   	&#x000c;					   	 			 			  			 			 	 			 		 		      	&#x000c;																				 			 																				&#x000c;&quot;;