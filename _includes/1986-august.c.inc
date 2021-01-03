typedef struct n{int a:3,
b:29;struct n*c;}t;t*
f();r(){}m(u)t*u;{t*w,*z;
z=u-&gt;c,q(z),u-&gt;b=z-&gt;b*10,
w=u-&gt;c=f(),w-&gt;a=1,w-&gt;c=z-&gt;
c;}t*k;g(u)t*u;{t*z,*v,*p,
*x;z=u-&gt;c,q(z),u-&gt;b=z-&gt;b,v
=z-&gt;c,z-&gt;a=2,x=z-&gt;c=f(),x
-&gt;a=3,x-&gt;b=2,p=x-&gt;c=f(),p
-&gt;c=f(),p-&gt;c-&gt;a=1,p-&gt;c-&gt;c=
v;}int i;h(u)t*u;{t*z,*v,*
w;int c,e;z=u-&gt;c,v=z-&gt;c,q(
v),c=u-&gt;b,e=v-&gt;b,u-&gt;b=z-&gt;b
,z-&gt;a=3,z-&gt;b=c+1,e+9&gt;=c&amp;&amp;(
q(z),e=z-&gt;b,u-&gt;b+=e/c,w=f(
),w-&gt;b=e%c,w-&gt;c=z-&gt;c,u-&gt;c=
w);}int(*y[4])()={r,m,g,h};
char *sbrk();main(){t*e,*p,*o;
o=f(),o-&gt;c=o,o-&gt;b=1,e=f(),
e-&gt;a=2,p=e-&gt;c=f(),p-&gt;b=2,
p-&gt;c=o,q(e),e=e-&gt;c,(void)write
(1,&quot;2.&quot;,2);for(;;e=e-&gt;c){q(e),
e-&gt;b=write(1,&amp;e-&gt;b[&quot;0123456789&quot;],
1);}}t*f(){return i||(i=1000,
k=(t*)sbrk(i*sizeof(t))),k+--i;
}q(p)t*p;{(*y[p-&gt;a])(p);}