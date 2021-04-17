#define F 0xF
#define U 512

#define std(x,y)                                     (*x)(const char *,...)=y##f
#define str(l,e,x)                                                       l e,l x
#define mx(p,v1,v2)                                p[3]=v2,p[1]=v1,p[2]=v2,*p=v1
#define vi(n)                                                        q+2,n,q+3,n
#define rt                                                                return

                                                             #include &lt;stdlib.h&gt;
                                                              #include &lt;stdio.h&gt;

                          typedef double n; n *d,*b,*f; typedef unsigned char c;
char _[ ]=&quot;    &lt;?%s version=\&quot;1.0\&quot;?&gt;\n&lt;%s %s=\&quot;%d\&quot; %s=\&quot;%d\&quot;&gt;\n&quot;, q [7][7] = {
&quot;ivory&quot;,&quot;black&quot;,&quot;width&quot;,&quot;height&quot;,&quot;text&quot;};int v,std(i,scan),std(o,print);

int cc(str(const void*,x,y))
{
        rt(*(n*)x&gt;*(n*)y)-(*(n*)x&lt;*(n*)y);
                                                                               }
        n t(n f,n g,str(n*,x,y))
                                                                               {
        f=*x++-f,g=g-*x,*y=f*f;rt *y+g*g;
                                                                               }
        c*ln(n*p)
                                                                               {
        c*f=((c*)(d+2*(2+v))+2*(p-d)); while(!*f) mx(f,rand(),rand());rt f;
                                                                               }
        n*put(str(n*,f,l),n z)
                                                                               {
        int r=(l-f)/4,p=*(f+(r*=2))&lt;z;rt r&gt;0?put(f+p*r,p?l:f+r,z):f;
                                                                               }
        n*g(n u,n w)
                                                                               {
        n y=u/(U-1),*s=put(d,d+v+2,y),z=w/(U-1),k,l=t(y,z,s,&amp;k),
        m=l,*r[4],g[4],*f; c p; for(mx(r,s,0),mx(g,k,l);
        p=*(1+g)&lt;*g,(m&gt;*(g+1))+(*g&lt;m);s=*f&lt;m?m=*f,*(r+p):s)*(f=g+p+2)=t
        
        (y,z,*(r+p)+=p?-2:2,p+g);rt s;
                                                                               }
        c*a(str(n*,x,r))
                                                                               {
        n*y; int i=0,j=0,k=0,u;for(u=0;y=g(*x+u/4/4.,*r+u%4/4.),16&gt;u;++u)
        i+=*ln(y),j+=*(1+ln(y)),k+=*(ln(y)+2);
        *_=i/u,*(1+_)=j/u,*(_+2)=k/u;rt(c*)_;
}

void tr(n x,n y,n i)
{
        c*h,w;n*m=g(y,i); for(w=4*(x&lt;2);++w&lt;4&amp;&amp;m==g(w/2*x+y,i+w%2*x););       
        for(w=4*(w&gt;3&amp;&amp;(h=x&gt;1?ln(m):a(&amp;y,&amp;i))&amp;&amp;o(&quot;&lt;rect style=\&quot;fill:rgb(%d,%d,%d\
        );\&quot; x=\&quot;%f\&quot; y=\&quot;%f\&quot; %s=\&quot;%f\&quot; %s=\&quot;%f\&quot;/&gt;\n&quot;,*h,*(1+h),*(2+h),str(F+,
        y,i),vi(x))),x/=2;x&gt;0&amp;&amp;w&lt;4;++w)tr(x,y+w/2*x,w%2*x+i);
}

int main()
{
        long k,r=1e6,h;d=calloc(r,k=sizeof(n)),f=d+r,b=d;

        while(0&lt;(h=i(&quot;%lf&quot;,b)))*--f=*b++;v=b-d;if

        (!h+v%2+!v&amp;&amp;(r=0x630C65u)){o(&quot;\n0x7&quot;);while(r--&gt;0)o(&quot;F&quot;);rt -1;}
        mx((d+v),-r,r);qsort(d,2+(v/=2),2*k,cc);
        tr(U,0&amp;o(4+_,&quot;xml&quot;,&quot;svg&quot;,vi(2*F+U)),0);

        for(b=d-1+r,k=0;r=1,v&gt;k++;b-=2)
        str(o(&quot;&lt;%s x=\&quot;%f\&quot; y=\&quot;%f\&quot; fill=\&quot;%s\&quot; %s-anchor=\&quot;end\&quot;&gt;%d&lt;/%s&gt;\n&quot;,
        4+q,str(F+r/2.-5+U**,b,(b-1)),q+r,q+4,k+!o
        (&quot;&lt;circle style=\&quot;fill:%s;\&quot; cx=\&quot;%f\&quot; cy=\&quot;%f\&quot; r=\&quot;3\&quot;/&gt;\n&quot;,
        r+q,str(F+r/4.+U**,b,(b-1))),4+q),&amp;&amp;r--,);

        free(d);rt o(&quot;&lt;/svg&gt;\n&quot;)-7;
}