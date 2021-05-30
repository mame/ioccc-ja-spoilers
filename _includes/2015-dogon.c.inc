#define So long
#define R rand()
#include &lt;math.h&gt;
#include &lt;X11/Xlib.h&gt;
#define T(i,F) ((So long)(i)&lt;&lt;F)
#define O(c,L,i) c*sin(i)+L*cos(i)
#define y(n,L) for(n=0; n&lt;L 3; n++)     
#define P(v,L) d=0; y(l,)d+=T(L*l[v],l*20);
#define X(q) q&gt;&gt;10&amp;63|q&gt;&gt;24&amp;4032|q&gt;&gt;38&amp;258048       
char J[1&lt;&lt;18]; int G[W*p],_,k,I=W/4+1,w=p/4+1; float C,B,e;            

unsigned So long A,n,d, t,h,x, f,o,r,a,l,L,F,i,s,H=1&lt;&lt;18,b=250,D[1&lt;&lt;14],z[W*p],q
=0x820008202625a0;main(){Display *j=XOpenDisplay(0);Window u=XCreateSimpleWindow
(j,RootWindow(j,0),0,0,W,p,1,0,0);XImage *Y=XCreateImage(j,DefaultVisual(j,0),24
,2,0,(char*)G,W,p,32,0); XEvent M; for(XMapWindow(j,u); XSelectInput( j,u,1)&amp;&amp;a-
65307; ){ if(!H){ if(XCheckWindowEvent(j,u,1,&amp;M)){ a=XLookupKeysym(&amp;M.xkey,0);*(
a&amp;1?&amp;C:&amp;                                                                B)-=(.05
-a/2% 2*                                                                .1)*!(a-
1&amp; 4092^                                                                3920);a+
2&amp;0xfe0^                                                                0xfc0||(
s=a+2&amp;31                                                                ); }else
{ y(k,p+        ){ F=k%w* 4|k/w;               float a[6],S=(F-p        /2.) /p;
y(_,W+){        i=_%I*4|_/I; if(               F&lt;p&amp;i&lt;W){ o=1; L=        i+F*W;if
(l=i&amp;3);        else{ l=F&amp;3; o=W               ; } h=z[L-o*l]; f        =z[L+(4-
l)*o]; t        =F-p/2||i-W/2; r               =h^f; if(!l| !t|(        int)r|(!
(h- 3&amp;3)        &amp;&amp;258063&amp;r&gt;&gt;38))               { float V=(i-W/2.        )/p,U=O(
S,1,B),m        =32768,Q=m; a[4]               =O(-1,S,B); a[3]=        O(U,V,C)
; a[5]=O        (-V,U,C); P((a+3               ),s*42); t||(A=d)        ;f=0;y(n
,){float        N=a[n+3], E=1024               /fabs(N); b= N&lt;0;        float K=
(((q&gt;&gt;20        *n)^~-b)+!b&amp;1023               )/1024.; y(d,)a[d        ]=a[d+3]
*E; a[n]        =round(a[n]); P(               a,K); i=q+d; P(a,        1); e=E*
K; for(;                e&lt;m; i+=d){ l=X(i); t=r=l^(l^l-(                1&lt;&lt;6*n))
&amp;63&lt;&lt;6*n                ; if(b){ r=l; l=t; } if(J[r])l=r                ; if(t=J
[l]){x=(                n-1)?(i|i&gt;&gt;40)&amp;1023|i&gt;&gt;8&amp;4190208                |4194304
:i&amp;1023|                i&gt;&gt;28&amp;4190208|(b^l==r)&lt;&lt;23; if(h                =D[(x&gt;&gt;6
&amp;0xf|x&gt;&gt;                14&amp;0x3f0)+t*768]){ o=h; f=n|l*4|                x&lt;&lt;32; m
=e; } if                (t==8&amp;e&lt;Q)Q=e; } e+=E; } }b=(255                -((f&amp;3)+
2)%3*51)                *(1-m/32768); o=o*b&gt;&gt;8; G[L]=o&gt;&gt;                32&lt;&lt;8|o&amp;
16711935                ; z[L]=3*(Q&lt;=m)|f|b&lt;&lt;56; } else{                d=l*(f&lt;&lt;
8&gt;&gt;40)+(                4-l)*(h&lt;&lt;8&gt;&gt;40)&gt;&gt;2&amp;16774143; o=D                [(d&gt;&gt; 6&amp;
15|d&gt;&gt;14                &amp;1008)+J[(int)h/4]*768]*(b=h&gt;&gt;56                )&gt;&gt;8; G[
L]=o&gt;&gt;32                &lt;&lt;8 | o&amp;                16711935                ; z[L]=(
int) h|d                &lt;&lt;32|b&lt;&lt;                56; } }}                } q +=A;
XPutImage               (j, u+0,               DefaultGC                (j,J[X(q
)]=0),Y,                0,0,0,0,                W,p); }}                else{ L=
--H/768;                J[H] =R%                16*(R%4&lt;                abs((H&gt;&gt;
6&amp;63)-32                                                                )+abs((H
&gt;&gt;12&amp;63)                                                                -32)-3); 
i=H &amp;15;                                                                F=H %768
&gt;&gt;4; if(                                                                L&lt;16){if
(L-1|!(R                                                                %3))b=R%
96^255; l=i*i*3+i*81/4&amp;3; a=L&gt;3?L-8?L-5?9858122:12365733-488848*((i+F/4*4)%8&amp;&amp;F%
4):R%2*5298487:3352537*L*L-14202379*L+19205553; if(L==4)if(F&lt;l+18)a=6990400;else
if(l&gt;F-19)b*=0.7; if(L==3){ if((i-1&amp;15)&lt;14&amp;(F-1&amp;15)&lt;14&amp;!(F&amp;16)){ a=12359778; _=7
-i; k=7-F%16; _^=_&gt;&gt;31; k^=k&gt;&gt;31; b=196-R%32+(k&gt;_?k:_)%3*42;} else{ b*=1+R%2*(.5
-(i&amp;1)); } } D[H]=(a&amp;16711935|(a&amp;65280)&lt;&lt;24)*(b&gt;&gt;(F&gt;&gt;5))&gt;&gt;8&amp;0xff00ff00ff; } } }}