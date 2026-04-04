#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;math.h&gt;

#define H 20

#define X for
#define F(v,b) X(k = 0; k &lt; 3; k++) v[k] = b;

typedef double R, V[3], U[4], (*J)(R);
typedef void Z;
typedef int _;

V o, d, v;
R (*q)[H][6], C[4*H][H][6], sr = 15, br = 25, A, s, t;
_ P, Q, g, S, k, e = 256, (*u)(_) = putchar, D[64];
J f = cos, Y = sin;
char B[256];

Z
T(_ *p, _ k, _ n)
{
	_ g;

	*p = n;

	X(g = 0; k &amp;&amp; g &lt; 4; g++)
		T(p + (9 &amp; (g * 4|g))*(1&lt;&lt;k - 1), k - 1,
		  n + (1&lt;&lt;6-2 * k)*(4 - g&amp;3));
}

Z
O(_ c)
{
	B[++S] = c,

	(S &gt; e-2 || c==129) &amp;&amp; (*B = S, S = fwrite(B, S+1, 1, stdout) - 1);
}





    
					                       Z N
					                  (R*v){R w=sqrt
					                (*v**v +1[v]*v[1]
					              +v[2]*2[v]);F(v,v[k]
					             /w)}Z         K(_ j){V
					             n,p            ;R*b=(*
					            q)              [j],w=f
					                             (A),x=
					                             Y(A);
					                             F(p,
					                           br*o[
						                 k]+sr
		      * (n[                  k]               =f(t)*k[v]+
		Y(t)*(v[(k+1)%3]*           d[(            k+2)%3]-v[(k+2)%
	     3]*d[(k+1)%3])))*b++=p[1      ]+e/                2,*b++=-*p*x+
	   p[2]*w-e*e,*b++=(*p*w+p[2]*x)+e/2;F(                    b,fabs(*n
	  *!!k+n[1]*(        k&lt;2)+n[2])/sqrt(2+                      !(k-1)))
	}Z M(R*a,_                s,Z(*m)(_)){_                        i;R d=
       pow(25/log                   (36),4)/s/                         377;X(
     *a=i=0;i&lt;s                      ;i++,*a+=d                        )m(i);
      }Z G(_ i                         ){R w=-Y                        (P*s),
     x=f(P*s),                          y=Y(Q*s                        ),z=f
     (Q*s);F(                            v,k[o]                       =(k&lt;2
    )*(x+3)*(                            k?y:z)     -!(k-2          )*w)N(
    v);F(d,P*                             (k?k-    1?x:w*y:w*z   )+Q*(k?
    k-1?0:*o:-                            o[1])     )N(d),w=*d**v+d[1]
    *v[1]+d[2]                             *v[2       ];F(v,k[v]-w
    *d[k])N(v),q                           =&amp;C[
    i],M(&amp;t,H,K);                          }Z W
     (char*s){*s&amp;&amp;(                         W(s
     +1),u(*s-98*(*s&gt;
      97)));}Z E(_ z){R
       *r,*a,*b;U*q,l,x,d
	,I[256];_ i,j,m,c,y,
	 w,h,Y=sizeof l;fputc(
	  46,stderr),M(&amp;s,4*H,G),
	    W(&quot;ibcbcbbbbb,&quot;),g=130,
	     O(e/2);X(y=0;y&lt;e;y++){X(i
		=e;i;)*(I[--i])=0;X(;i&lt;4
		  *H*H;i++)X(*l=k=0;k-5;k++
		     ,a=b)if(b=C[(i/H+((k^k/
		       2)&amp;1))%(4*H)][(i+(k/2&amp;1
			 ))%H],k&amp;&amp;y&lt;*a^y&lt;*b){X(
			    h=0;h&lt;4;h++)h[x]=a[h
			      +2]+(b[h+2]-a[h+2])
				*(y-*a)/(*b-*a),h?
				   *l&amp;&amp;(d[h]=(l[h]
     -h                             [x])/w):(w=1+
     fabs                            (*l-(*x=(_)*x)
     ) );                              X(q=I+(_)*x;
     *l&amp;&amp;                                w--;q+=2*(
     *x&lt;*                                l)-1)X(**q
     &gt;C[i                                /H][i%H][1
     ]&amp;&amp;(                                memcpy(*q,
     x,Y),*                              *q=C[i/H][
     i%H][1                              ]),h=1;h&lt;
     4;h++)x                            [h]+=h[d];
     memcpy(l                           ,x,Y);}X(
     i=0;i&lt;e;i++                        ,O(*r?c:
     127),g=g&lt;e-1                    ?g+1:(O(e/
     2),130))X(r=&amp;I[               i][3],c=0,j
     =2;j+1;j--,r--)k=3|!(    j-1)*4,m=*r*k+
     (63*( *r*k-(_)(*r*k))&gt;D[(y*8&amp;56)+(i&amp;7)
     ]),        c&lt;&lt;=k/4+2,c|=(m|-(m&gt;k))&amp;
     k;}            O(129);u(0);}_
    
    
	
main(_ c, char **v)
{
	if (c &lt; 3)
		return fprintf(stderr, &quot;Usage: %s P Q [F]\n&quot;, *v), 1;

	P = atoi(v[1]),
	Q = atoi(v[2]),

	T(D, 3, 0);

	W(&quot;bb\346cbcba98FIG&quot;);

	X(; k &lt; 384; k++)
		u(k / 3&lt;&lt;(&quot;gdb&quot;[k%3] - 97) | 31 | (k % 3!=1)&lt;&lt;5);

	W(&quot;bbbce0.2EPACSTEN\x0b\xff!&quot;),

	M(&amp;A, c &gt; 3 ? atoi(v[3]) : 40, E),

	u(59);
	
	return 0;
}

/* vi:set ts=8: */