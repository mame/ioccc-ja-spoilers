#include &lt;stdio.h&gt;
;	m(x)(x&lt;0?-1:!!x)
;	g tj()-J
;	a(x)(x&lt;0?-x:x)
;	h(x)((x)&lt;=K?x:N-(x))
;	f 9999
;	A return
;	H printf{ 
;	R double
;	U int
;	V for
;	b else
;	u while
;	B if
U v,w,Y}	 -1,W,J,p,F,o}	f,M,N,K,X,YY,_,P[f],s{ } ;
typedef U{ *L} { } ;
L q[f];
tj{ } {
U S}	m{ v} +{ m{ w} &lt;&lt;K} ; 
B{ !S} A J; 
V{ v}	W+S; v!}	J&amp;&amp;!q[v]; v+}	S} ;
A v; 
}
k{ } {
_}	K; 
A v?a{ v} &gt;1||w-Y||!q[J]:{ w-Y&amp;&amp;{ w-Y*2||q[W+Y*{ N+1} ]||
    { J&gt;&gt;K} -K+{ Y-1} / 2} } ||q[J]; 
}
z{ } {
_}	5; 
A v*w||g; 
}
e{ } {
_}	 -2; 
A{ v*v*v-v||w*w*w-w} &amp;&amp;{ J-W-2||{ W&amp;N} -4||{ W&gt;&gt;K!}	{ Y-1?N:0} } ||
    q[W+1]||q[W+2]||q[W+K]!}	z||P[W+K]*Y&lt;0} ; 
}
R VR{ } {
int PZ}	0x7fff; 
A{ R} { rand{ } &amp;PZ} /{ R} PZ; 
}
l{ } {
_}	K+1; 
A{ v*w&amp;&amp;a{ v} -a{ w} } ||g; 
}
R UC{ } {
R {	}	0,d; 
u{ { {	+}	d}	VR{ } } &lt;1.0} ; 
A d; 
}
c{ } {
_}	 -11; 
A a{ v} -a{ w} ||g; 
}
I{ ur,n,x} {
W}	ur; 
J}	n; 
B{ P[W]!}	Y||P[J]}	}	Y} A J+1;
v}	{ J&amp;N} -{ W&amp;N} ; 
w}	{ J&gt;&gt;K} -{ W&gt;&gt;K} ; 
A q[W]{ } ||{ x&amp;&amp;QL{ W,J,s} } ; 
}
TT{ W} {
v}	w}	0; 
A q[W]{ } +K; 
}
s{ } {
U j}	 -1,{	; 
Y}	 -Y; 
V{ {	}	0; {	&lt;M; ++{	} {
B{ j&lt;0&amp;&amp;P[{	]}	}	 -Y&amp;&amp;TT{ {	} &amp;&amp;_}	}	 -2} 
{
j}	{	; 
{	}	 -1; 
}
b B{ j&gt;}	0&amp;&amp;!I{ {	,j,0} } A Y}	 -Y; 
}
A!{ Y}	 -Y} ; 
}
bb{ } {
_}	1; 
A a{ v*w} -2; 
}
uv{ } {
V{ v}	0; v&lt;f; ++v} {
B{ h{ v&gt;&gt;K} }	}	0} {
U S}	h{ v&amp;N} ;
q[v]}	!S?z:{ S}	}	1?bb:{ S}	}	2?c:{ v&amp;N&gt;K?l:e} } } ; 
}
b B{ h{ v&gt;&gt;K} }	}	1} q[v]}	k; 
b q[v]}	0;
P[v]}	!!q[v]*{ 28-v} ; 
}
}
y{ } {
U G}	Y,{	; 
J}	0; 
V{ {	}	0; {	&lt;M; ++{	} {
{	%8||H&quot;\n%4o &quot;,{	} ;
B{ { Y}	P[{	]}	m{ P[{	]} } &amp;&amp;
TT{ {	} } H&quot;%c &quot;,_+93+Y*16} ; 
b H&quot;- &quot;} ; 
}
H&quot;\n    &quot;} ; 
do 
H&quot;%2d&quot;,{	++&amp;N} ; 
u{ {	&amp;N} ; 
Y}	G; 
H&quot;\n&quot;} ; 
}
O{ W,J} {
B{ { q[J]}	q[W]} }	}	k&amp;&amp;h{ J&gt;&gt;K} }	}	0} q[J]}	l; 
B{ q[W]}	}	e} B{ J-W}	}	2} O{ J+1,J-1} ;
b B{ W-J}	}	2} O{ W-1,W+1} ; 
P[J]}	P[W]; 
q[W]}	0;
P[W]}	0; 
}
QL{ W,J,D} L D; 
{
U HQ}	P[J],YX; 
L AJ}	q[J],XY}	q[W]; 
O{ W,J} ; 
YX}	D{ } ;
O{ J,W} ; 
q[J]}	AJ; 
q[W]}	XY; 
P[J]}	HQ; 
A YX; 
}
C{ } {
U {	,j,BZ}	0; 
V{ {	}	0; {	&lt;M; ++{	} {
L Z}	q[{	]; 
B{ Z} {
U r}	h{ {	&gt;&gt;K} +h{ {	&amp;N} ,G}	Y,
    S}	Z}	}	z?88:{ Z}	}	k?11
+r+{ P[{	]&lt;0?N-{ {	&gt;&gt;K} :{ {	&gt;&gt;K} } :
{ Z}	}	l?124-{ { YY&lt;8&amp;&amp;{ { {	&amp;N} !}	K||
    { {	&gt;&gt;K} !}	{ P[{	]&gt;0?0:N} } } ?M:0} :
{ Z}	}	c?41+r:{ Z}	}	e?f-r-r:36+r+r} } } } ; 
Y}	P[{	];
V{ j}	0; j&lt;M; ++j} B{ !I{ {	,j,0} } S+}	{ P[j]?5:1} ; 
BZ+}	G}	}	Y?S:-S;
Y}	G; 
}
}
B{ !{ ++X&amp;M-1} } write{ 1,&quot;.&quot;,1} ; 
A BZ; 
}
PX{ } {
U {	,Q}	0,XP}	0,JZ}	M*M,E}	 -f,t,S}	o; 
B{ !F--} A++F+C{ } ;
V{ {	}	0; {	&lt;JZ; ++{	} B{ !I{ {	&gt;&gt;K+K,{	&amp;M-1,1} } {
Y}	 -Y; 
o}	 -E;
t}	 -QL{ {	&gt;&gt;K+K,{	&amp;M-1,PX} ; 
Y}	 -Y; 
B{ t&gt;E} {
++XP; 
Q}	{	; 
E}	t; 
B{ E&gt;}	S} 
A++F,E; 
}
}
B{ !XP} E}	s{ } ?-f+1:0; 
p}	Q; 
A++F,E; 
}
RZ{ } {
U {	,j,T}	0; 
V{ ; ; } {
y{ } ; 
o}	f; 
do{
H&quot;\n%d %d %d %s &quot;,X,T,C{ } ,s{ } ?&quot;!&quot;:&quot;&gt;&quot;} ;
fflush{ stdout} ; 
}
u{ scanf{ &quot;%o%o&quot;,&amp;{	,&amp;j} !}	2||I{ {	,j,1} } ;
O{ {	,j} ; 
y{ } ; 
X}	0; 
++YY;
Y}	 -Y; 
T}	PX{ } ; 
{	}	p&gt;&gt;{ K&lt;&lt;1} ; 
j}	p&amp;{ M-1} ; 
B{ I{ {	,j,1} } {
H&quot;Rats!\n&quot;} ; 
A; 
}
O{ {	,j} ; 
Y}	 -Y; 
B{ T&gt;M*M} H&quot;\nHar har.\n&quot;} ; 
}
}
main{ ac,av} char**av; 
{
long time{ } ,j}	time{ &amp;j} ; 
R {	}	0; 
srand{ { U} j} ;
V{ M}	0; M&lt;}	f; ++M} {	+}	UC{ } ; 
M}	{	/100;
B{ M&amp;3} ++M; 
B{ M&amp;1} --M; 
V{ N}	1; N*N&lt;M; ++N} ;
K}	 --N/2; 
F}	ac&gt;1?atoi{ av[1]} :2; 
uv{ } ;
RZ{ } ; 
}