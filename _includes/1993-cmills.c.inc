long
z[7992],W,H,*t=z,j,k,*T=z,n,b;
#include&lt;X11/Xlib.h&gt;
Window*E,D,s,w[999],*e=w;
Display*d;
Pixmap
p;
m(w,h,x,y,u,v){
#define C XCreateSimpleWindow(d,
XSetWindowBackgroundPixmap(d,s=C*e=C
#define l(n)t[n]=T[n]+
D,l(0)x,l(1)y,t[2]=w,t[3]=h,1,b,0),l(6)-x,l(7)-y,W,H,0,0,0),p);
l(4)u;
l(5)v;
#define M XMapRaised(d,
M
s);
M*e++);
t+=8;
}
main(c,g)char**g;
{
XSetWindowAttributes
a;
XGCValues
v;
n=DefaultScreen(d=XOpenDisplay(0));
p=XCreatePixmap(d,D=RootWindow(d,n),W=DisplayWidth(d,n),H=DisplayHeight(d,n),DefaultDepth(d,n));
v.subwindow_mode=IncludeInferiors;
XCopyArea(d,D,p,XCreateGC(d,D,GCSubwindowMode,&amp;v),0,0,W,H,0,0);
a.override_redirect=True;
XChangeWindowAttributes(d,D=C
D,0,0,W,H,0,0,b=BlackPixel(d,n)),CWOverrideRedirect,&amp;a);
M
D);
m(W,H,0,0,3,3);
for(c=c^1?atoi(g[1]):9;
;
)for(T=z,n=e-(E=w);
n--;
T+=8,++E){
XMoveWindow(d,*E,*T+=T[4]*c,T[1]+=T[5]*c);
j=0;
#define F(n,o,s)o+T[n-4]s-0&amp;&amp;++j&amp;&amp;T[n]s!1&amp;&amp;(T[n]=0-T[n])||
if((F(4,0,&lt;)F(4,T[2]-W,&gt;)F(5,0,&lt;)F(5,T[3]-H,&gt;)1)&amp;&amp;j&amp;&amp;(j=T[2]/2)&amp;&amp;(k=T[3]/2)&amp;&amp;e-w&lt;997&amp;&amp;rand()%32768&lt;=T[2]*T[3]*(T[4]*T[4]+T[5]*T[5])/999){
m(T[2]-j,T[3]-k,j,k,2,2);
m(j,T[3]-k,0,k,-2,-2);
m(T[2]-j,k,j,0,2,-2);
T[7]-=2;
XResizeWindow(d,*E,T[2]=j,T[3]=k);
T[6]-=2;
}
}
}