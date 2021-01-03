#include &quot;stdio.h&quot;
#define	e 3
#define	g (e/e)
#define	h ((g+e)/2)
#define	f (e-g-h)
#define	j (e*e-g)
#define k (j-h)
#define	l(x) tab2[x]/h
#define	m(n,a) ((n&amp;(a))==(a))

long tab1[]={ 989L,5L,26L,0L,88319L,123L,0L,9367L };
int tab2[]={ 4,6,10,14,22,26,34,38,46,58,62,74,82,86 };

main(m1,s) char *s; {
    int a,b,c,d,o[k],n=(int)s;
    if(m1==1){ char b[2*j+f-g]; main(l(h+e)+h+e,b); printf(b); }
    else switch(m1-=h){
	case f:
	    a=(b=(c=(d=g)&lt;&lt;g)&lt;&lt;g)&lt;&lt;g;
	    return(m(n,a|c)|m(n,b)|m(n,a|d)|m(n,c|d));
	case h:
	    for(a=f;a&lt;j;++a)if(tab1[a]&amp;&amp;!(tab1[a]%((long)l(n))))return(a);
	case g:
	    if(n&lt;h)return(g);
	    if(n&lt;j){n-=g;c=&#39;D&#39;;o[f]=h;o[g]=f;}
	    else{c=&#39;\r&#39;-&#39;\b&#39;;n-=j-g;o[f]=o[g]=g;}
	    if((b=n)&gt;=e)for(b=g&lt;&lt;g;b&lt;n;++b)o[b]=o[b-h]+o[b-g]+c;
	    return(o[b-g]%n+k-h);
	default:
	    if(m1-=e) main(m1-g+e+h,s+g); else *(s+g)=f;
	    for(*s=a=f;a&lt;e;) *s=(*s&lt;&lt;e)|main(h+a++,(char *)m1);
	}
}