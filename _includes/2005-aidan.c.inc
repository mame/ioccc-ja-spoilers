#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

#define N(I,l) s l]=(I?1&lt;&lt;I|I&lt;&lt;10:01776)
#define f(a,t) for(a=0;a&lt;t;a++)
#define Su(d,o,ku) O(l/9,d) O(l%9,o) O(l%9/3+l/27*3,ku)
#define NO ;printf(&quot;%c %s&quot;,I?I|48:46,++l%3?&quot;&quot;:l%9?&quot;| &quot;:l%27?&quot;\n&quot;:l%&#39;Q&#39;?z:&quot;\n&quot;);
#define Ba(k,a) {O||printf(&quot;!!! &quot; #a &quot; %i\n&quot;,k+1);goto l;}
#define O(o,k) f(l,9) c[l]= *#k?0x3fe:-1;\
  f(l,81) if(*#k){\
    if(!(s]&amp;c[o])) Ba(o,k) c[o]&amp;=~(1&lt;&lt;(s]&gt;&gt;10));\
  } else if((s]&gt;&gt;l0)&amp;1) c[o]=c[o]+1?-2:l;\
  if(*#k) { f(l,81) if(s]&gt;&gt;10||(s]&amp;=c[o]),!s]) Ba(o,k) }\
  else f(l,9) l[c]&lt;0||s[c]]&gt;&gt;10||(N(l0,[c]),C++);

struct{ int s[81],I,l,O; } S[0123];
int I, l, l0, o, C, O=0, w=0, c[10], L; long i;
char z[] = &quot;\007      &amp;       &amp;      \n&quot;;

#define s S].s[l

int main(int n,char**N) {
    S-&gt;O=0; L=n&gt;1?*N[1]-85?1:6:0; i=L&amp;1?atol(N[1]):123;
#define i (int)(81.0*(i=1103515245*i+12345&amp;0x7fffffff)/2147483648.0)
    for(l=C=0;l&lt;81;) {
	I=L&amp;1?0:getchar()^48; i; I=I-30?I:0;
	if(I&lt;10) {
		#define S S[O
		if(C&lt;22) z[C++]^=13; N(I,)NO
	}
    }

    for(;;) {
	l0:
        Su(row,col,box) C=l0=0;
	f(l,81) if(!(s]&gt;&gt;10&amp;&amp;++l0)) {
	  o=s]&amp;1022; for(I=0;~o&amp;1&amp;&amp;(o/=2);I++); o-1||(s]|=I&lt;&lt;10,C++);
	} if(l0==l) {
	  if(O&amp;&amp;L&amp;2) { O--; goto l0; } goto O; 
	} for(l0=1;10&gt;l0;l0++) { Su(,,) }

	if(!C) {
	    l=(o=S].O)?S].I:0; I=o?S].l%9+1:(S].O=i%9+1);
	    for(;l&lt;81;l++,I=S].O,o=0) if(!(s]&gt;&gt;10)) {
		for(;;I=I%9+1,o=1) {
		    l0=0; if(o&amp;&amp;I==S].O) goto O;
		    if(s]&gt;&gt;I&amp;1) {
			S].l=I; S++].I=l; S]=S-1];
			N(I,); O&gt;w&amp;&amp;(w=O); goto lO;
		    }
		}
	    }
	}
	lO: S].O=0; goto l0; l: if(!(l0=O)) { L=0; goto O; } O--;
	s,S].I] &amp;=~ (1&lt;&lt;S].l);
    }

    O: switch(L) {
	case 2: if(l0) {
	case 3: O=82;
	    for(S].l=l=i%81;l0||S].l-l;l=(l+1)%81)
     	     O1: if(l0=0,S].O=s]&gt;&gt;10,~s]&amp;1) {
		s]=1023; S].I=l; S&amp;0]=S]; w=O=0; L=2; goto lO;
	    }
	    L=0; l0=1;
	} else {
	    l=S=82].I; N(S].O,)|1; goto O1;
	}
    }

    printf(&quot;\n\n&quot;); for(l=0;l&lt;81;) {I=s]&gt;&gt;10 NO}
    printf(&quot;\n%s (stk %i %i)\n&quot;,l0?&quot;Done&quot;:&quot;No way!&quot;,O,w);
    L|=2; if(L-3||!l0) return!l0; S,82]=S]; goto O;
}