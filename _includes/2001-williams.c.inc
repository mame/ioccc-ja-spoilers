#include &lt;X11/Xlib.h&gt;
#include &lt;unistd.h&gt;
typedef long O; typedef struct                    { O b,f,u,s,c,a,t,e,d; } C;
Display *d; Window w; GC g; XEvent e;
char Q[] = &quot;Level %d   Score %d&quot;, m[222];
#define N(r) (random()%(r))
#define U I[n++]=L[n]=l; n%=222
#define K c=-l.u; l=I[i]; l.t=0; c+=l.u
#define E l.e--&amp;&amp;!--L[l.e].d&amp;&amp;(L[l.e].t=3)
#define M(a,e,i,o) a[0]=e,(a[1]=i)&amp;&amp;XFillPolygon(d,w,g,(void*)a,o,1,1)
#define F return
#define R while(
#define Y if(l.t


                      O p                                           ,B,
                   D,A=6,Z                                         ,S=0,v=
                0,n=0,W=400                                       ,H=300,a[7]
              ={ 33,99, 165,                                     231,297,363} ;
            XGCValues G={ 6,0                                   ,~0L,0,1} ; short
           T[]={ 0,300,-20,0,4                                 ,-20,4,10,4,-5,4,5,
         4,-20,4,20,4,-5,4,5,4,                               -10,4,20},b[]={ 0,0,4,
        0,-4,4,-4,-4,4,-4,4,4} ;                             C L[222],I[222];dC(O x){
       M(T,a[x],H,12); } Ne(C l,O                           s) { l.f=l.a=1; l.b=l.u=s;
      l.t=16; l.e=0; U; } nL(O t,O                         a,O b,O x,O y,O s,O p){ C l;
     l.d=0; l.f=s; l.t=t; y-=l.c=b;                       l.e=t==2?x:p; x-=l.s=a;s=(x|1)
    %2*x; t=(y|1)%2*y; l.u=(a=s&gt;t?s:                     t)&gt;&gt;9;l.a=(x&lt;&lt;9)/a;l.b=(y&lt;&lt;9)/a;
   U; } di(C I){ O p,q,r,s,i=222;C l;                   B=D=0; R i--){ l=L[i]; Y&gt;7){ p=I.s
  -l.s&gt;&gt;9; q=I.c-l.c&gt;&gt;9; r=l.t==8?l.b:                 l.a; s=p*p+q*q; if(s&lt;r*r||I.t==2&amp;&amp;s&lt;
  26) F S+=10; s=(20&lt;&lt;9)/(s|1); B+=p*s;               D+=q*s; }} F 0; } hi(O x,O d){ O i=A;
 R i--&amp;&amp;(x&lt;a[i]-d||x&gt;a[i]+d)); F i; }      dL(){ O      c,r=0, i=222,h; C l; R i--){ l=L[i];
 Y){ r++;c=l.f; Y==3){c=l.u; l.t=0;     E; }R c--){--     l.u;h=l.c&gt;&gt;9; Y&gt;7){XDrawArc(d,w,g,
(l.s&gt;&gt;9)-++l.a,h-l.a,l.a*2,l.a*2,0   ,90&lt;&lt;8); if(!l.u){    I[i].t-=8; l=I[i]; } } else Y==2)M
(b,l.s&gt;&gt;9,h,6); else XDrawPoint(d    ,w,g,(l.s+=l.a)&gt;&gt;9,    h=(l.c+=l.b)&gt;&gt;9); Y==4&amp;&amp;!l.u){ Ne
(l,20); K; } Y&amp;&amp;l.t&lt;3&amp;&amp;(di(l)||h&gt;    H)){ if(h&gt;H&amp;&amp;(c=hi(    l.s&gt;&gt;9,25))&gt;=0){ dC(c); a[c]=a[--
A]; }Ne(l,30); Y==1){ E;K; } else    c=l.t=0;} Y==1&amp;&amp;h&lt;H    -75&amp;&amp;!N(p*77)){ do{ nL(1,l.s,l.c,
                                      N(W&lt;&lt;9),H&lt;&lt;9,1,i+
                                        1); I[i].d++;
                                           }R N(3)

                                        );         K;
                                       l.u=c; c=0; } Y
                                      ==2){ l.s+=l.a+B;
                                     l.a= (l.e-l.s)/((H+
                                    20-h)|1); l.c+=l.b+D;
                                   M(b,l.s&gt;&gt;9,l.c&gt;&gt;9,6); }
                                  } L[i]=l; } } F r; } J(){
                                 R A) { XFlush(d); v&amp;&amp;sleep(
                                3); Z=++v*10; p=50-v; v%2&amp;&amp;hi
                               ((a[A]=N(W-50)+25),50)&lt;0 &amp;&amp;A++;
	                      XClearWindow (d,w); for(B=0; B&lt;A;
                             dC(B++)); R Z|dL()){ Z&amp;&amp;!N(p)&amp;&amp;(Z--
                            ,nL(1+!N(p),N(W&lt;&lt;9), 0,N(W&lt;&lt;9),H&lt;&lt;9,1
                           ,0)); usleep(p*200); XCheckMaskEvent(d,
                          4,&amp;e)&amp;&amp;A&amp;&amp;--S&amp;&amp;nL(4,a[N(A)]&lt;&lt;9,H-10&lt;&lt;9,e.
                         xbutton.x&lt;&lt;9,e.xbutton.y&lt;&lt;9,5,0);}S+=A*100;
                             B=sprintf(m,Q,v,S); XDrawString(d,w
                                     ,g,W/3,H/2,m,B); } }

main ()
{
O i=2;
d=XOpenDisplay(0);
w=RootWindow(d,0);
R i--) XMapWindow(d,w=XCreateSimpleWindow(d,w,0,0,W,H,0,0,0));
XSelectInput(d,w,4|1&lt;&lt;15);
XMaskEvent(d,1&lt;&lt;15,&amp;e);
g=XCreateGC(d,w,829,&amp;G);
srandom(time(0));
J();
puts(m);
}
