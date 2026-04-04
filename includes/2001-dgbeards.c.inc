#include &lt;stdio.h&gt;
#include &lt;string.h&gt;
#include &lt;time.h&gt;
#define A(x,y) i[a++]=(N){c,c+x,y};
#define B(x,y) j[b++]=(N){c,c+x,y};
#define C(j,k) for (j=0; j&lt;k; j++){
#define D(x) C(_,8)if(!(c+x[_]&amp;136)){ if(p[c+x[_]]*p[c]&lt;0)B(x[_],0)else if(!p[c+x[_]])A(x[_],0)} }
#define J printf(
#define O(v) _=v; while(!(c+_&amp;136)){ x=p[c+_]*p[c]; if(x&lt;0){B(_,0)E; } else if(x&gt;0)E; else A(_,0)_+=v; }
#define X(x) G(x,L)
#define Z(x,y) memcpy(x,y,256);

typedef struct {
F a,b,c;
} N;

F g[]=&quot;KSLAU&quot;,
p[256],v[]=&quot;{ ; } ; { ; ; ; {   } ; { ; }   { ;   } {   } ; { ; ; ; { ; } ; } }   ; { ; ; { }   ; { } }   ; { ; ; { { ; ; { } }   ; } ; ; { }   ; { } }   ; { ; ; {   { ; { } }   ; { ; ; { }   ; {   { ; ;   { } ; ;   ; ;   { ; }   { {   ;   ; ;   { } ;   { ; ; &quot;;
F S[]=&quot;{}; &quot;,W[256],L[1024];
P q[]={-14,-31,-33,-18,14,31,33,18},r[]={-1,-17,-16,-15,1,17,16,15},_,a,b,c,d,e,t=1,x,y,z;
N i[500],j[500],*k,u;
P f(N *V) {
	a=b=0;
	C(d,8)
		C(e,8)
			c=d&lt;&lt;4|e;
			if(p[c]==0||p[c]*t&lt;0)continue;
			switch(p[c]&lt;0?-p[c]:p[c]){
				K 80:
					if(56+t*40==(c&amp;112)&amp;&amp;!p[c-32*t])
						A(t*-32,0)
					if(56+t*-40==(c&amp;112)){
						if(!(c-17*t&amp;136)&amp;&amp;p[c-17*t]*t&lt;0){
							C(_,5)
								B(-17*t,(g[_]^_)*t)}
						}
						if(!(c-15*t&amp;136)&amp;&amp;p[c-15*t]*t&lt;0){
							C(_,5)
								B(-15*t,(g[_]^_)*t)}
						}
						C(_,5)
							A(t*-16,(g[_]^_)*t)}
					}else{
						if(!p[c-16*t])
							A(t*-16,0)
						if(!(c-(17*t)&amp;136)&amp;&amp;p[c-17*t]*t&lt;0){
							B(-17*t,0)
						}
						if(!(c-(15*t)&amp;136)&amp;&amp;p[c-15*t]*t&lt;0){
							B(-15*t,0)
						}
					}
					E;
				K 78:D(q)E;
				K 81:
				K 66:O(17)O(-17)O(15)O(-15)
					if(p[c]==66||p[c]==-66)
						E;
				K 82:O(1)O(-1)O(16)O(-16)E;
				K 75:D(r)
			} ;
		}
	}
	if ( b &gt; 0 ) {
		C(_,b)V[_]=j[_]; }
		R b;
	} else {
		C(_,a)V[_]=i[_]; }
		R a;
	}
}
F *G(F *n, F *o){
	a=b=0;
	for(; n[b]; d=0){
		do{
			d*=4;
			d+=W[n[b++]];
		} while(++b&lt;8*a+8);
		o[a++]=d;
	}
	o[a]=0;
	R o;
}
m(N a){ p[a.b]=a.c?a.c:p[a.a]; p[a.a]=0; }
h(){
	J X(&quot;{ ; { { { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { { ; ; &quot;));
	c=0; C(c,120)c%8==0&amp;&amp;putchar(56-c/16);
 		if(p[c]&lt;0){
			J X(&quot;}     { { ; { { { ; ; ; { ; } } } ; {   &quot;),-p[c]);
		} else if(p[c]&gt;0)
			J X(&quot;}     { { ; { { { ; } } } ; {   { ; { { &quot;),p[c]);
		else
			J&quot;|   &quot;);
		c%8==7?J X(&quot;}     { { { ; ; { ; { { { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { ;   } { ;   } { ;   } { ; ;   { { ; ; &quot;)),c+=8:0;
	}
}
s() {
	b=0; C(a,256)
	if(v[b]==94){
		b++; C(c,v[b]-32)p[a++]=v[b+1]-120;}
		b+=2; a--;
	} else
		p[a]=v[b++]-120;
	}
}
P w() {
	P	v=0;
	C(_,120)
		p[_]&amp;&amp;(p[_]*t&gt;0&amp;&amp;v--,p[_]*t&lt;0&amp;&amp;v++);
	}
	v+=f(i); v-=b?100:0;t=-t; v-=f(i); v+=b?100:0;t=-t;

	R v;
}
P V(P n, P o) {
	P s=-I,G,H,Y;
	N M[500];
	F u[256];

  if(!(n+o))R w()+time(NULL)%9-4;
	if(!(H=f(M)))R I;
	H&lt;5?H==1?n++:(o&lt;6?o++:0):0;
	Z(u,p)
	C(G,H)
		Z(p,u)
		m(M[G]);
		t=-t;
		s=(e=-V(n-1,o))&gt;s?Y=G,e:s;
		t=-t;
	}
	e=Y;
	R s;
}
main(P db, F *bd[]){
	N o[500];
	F T[256];

  C(a,256)W[a]=-1; }
	C(a,4)W[S[a]]=a; }
	G(v,v); s();
	while(1){
		h();
		b=f(o);
		scanf(&quot;%s&quot;,L);
		if(strcmp(L,&quot;quit&quot;)==0)R 0;
		else if(strcmp(L,&quot;g&quot;)==0){
			Z(T,p)
			J G(&quot;} } } ; } ; { } } ;   { }   } } } ; } } { ; { { { ; } } } ; } { { { ; ; &quot;,L), V(db&gt;1?atoi(bd[1]):3,0));
			Z(p,T)m(o[e]); t=-t;
		}else{
			u.a=896-16*L[1];
			u.b=896-16*L[3];
			u.a+=L[0]-97;
			u.b+=L[2]-97;
			u.c=L[4]?L[5]:0;
			C(a,b)
				if(u.a==o[a].a&amp;&amp;u.b==o[a].b&amp;&amp;u.c==o[a].c)E;
			}
			a==b?J X(&quot;} { ; } } ;   { } ;   { } ; } } } ; }   } ; { } } ;   { { ; { { } ;   } } ;     }   } ; } ; } } { { ; ; &quot;)):(m(u),t=-t);
		}
	}
}