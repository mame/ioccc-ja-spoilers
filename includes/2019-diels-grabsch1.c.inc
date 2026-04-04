#include&lt;stdio.h&gt;
int main(){int a=0,b=a;long long c[178819],d=8,e=257,f,g,
h,i=d-9;for(;a&lt;178819;){c[a++]=i;}for(a*=53;a;a&gt;&gt;=8)putc\
har(a);if((f=getchar())&lt;0)return 0;for(;(g=getchar())&gt;=0;
){h=i=g&lt;&lt;8^f;g+=f&lt;&lt;8;a=e&lt;(512&lt;&lt;a%8|(a&lt;7))||f&gt;256?a:a&gt;6?15
:a+1;for(;c[i]&gt;-1&amp;&amp;c[i]&gt;&gt;16!=g;)i+=i+h&lt;69000?h+1:h-69000;
h=c[i]&lt;0;b|=h*f&lt;&lt;d;for(d+=h*(a%8+9);d&gt;15;d-=8)putchar(b=b
&gt;&gt;8);f=h?g-f*256:c[i]%65536L;if(a&lt;8*h){c[i]=g*65536L|e++;
}}b|=f&lt;&lt;d;for(d+=a%8;d&gt;-1;d-=8)putchar(b&gt;&gt;=8);return!53;}