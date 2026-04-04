#include &lt;stdint.h&gt;
#include &lt;stdio.h&gt;
#ifdef _WIN32
#include &lt;io.h&gt;
#include &lt;fcntl.h&gt;
#define main() M();i\
nt main(){setmode(fi\
leno(stdin),O_BINARY\
);return M();}int M()
#endif

                int main()
           {uint32_t h[20]={0},
        i=0,x=~i/15,f=x*x-x,a=f^x,
      b=f^x*9,c=~a,d=~b;int64_t z=0,
     g=0,l=566548,p=585873,o=882346,e
   ,m=64336,k,n;for(;d=h[c=h[b=h[a=h[i=
   0]+=a,1]+=b,2]+=c,3]+=d,f;){for(n=64
  ;n==8?h[h[5]=g,4]=g&gt;&gt;32,f=z&gt;=0:n;)h[4+
 --n/4]=x=(z&lt;0?0:(z=getchar())&gt;=0?g+=8,z:
 128)&lt;&lt;24|x&gt;&gt;8;;for(e=0,k=~e&lt;&lt;40;(x=i/16)
 &lt;4;a=d,d=c,c=b,b+=x&lt;&lt;n|x&gt;&gt;(32-n))n=((e*m
 +k*p)&gt;&gt;21)+e*l+k*o,k=(((k*m-e*p)&gt;&gt;21)+k*
  l-e*o)&gt;&gt;20,e=n&gt;&gt;20,n=(i|12)*152%543%82
   %4+i%4*43/8+4,x=a+((x&gt;2?~d|b:x&gt;1?b^d
   :x?(b^c)&amp;d:(c^d)&amp;~b)^c)+h[19-((x*7/2
     &amp;5)-~(x*5&amp;6)*i++)%16]+(e&gt;&gt;40^e&gt;&gt;
      8);}for(;i&lt;33;putchar(i++&lt;32?a
        +=a&gt;9?&#39;a&#39;-10:&#39;0&#39;:&#39;\n&#39;))a=h
           [i/8]&gt;&gt;(i%8*4^4)&amp;15;
                return 0;}