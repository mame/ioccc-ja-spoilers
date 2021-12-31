#include &lt;time.h&gt;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
int main(){unsigned
a,i=1,j=0,t[64];for
(srand(time(0));i;)
j=j?--i&lt;1&amp;&amp;a&gt;&gt;8?0:(
putchar(i?t[j]:a),i
++)?t[j]=t[--i],i&gt;2
?rand()%(i-2)+2:1:0
:(26&gt;((a=getchar())
|32)-97||1==a&gt;&gt;7)&amp;&amp;
i&lt;64?t[i++]=a,0:1;}
