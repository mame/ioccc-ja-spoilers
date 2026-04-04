#include &lt;stdio.h&gt;
int l;int main(int o,char **O,
int I){char c,*D=O[1];if(o&gt;0){
for(l=0;D[l              ];D[l
++]-=10){D   [l++]-=120;D[l]-=
110;while   (!main(0,O,l))D[l]
+=   20;   putchar((D[l]+1032)
/20   )   ;}putchar(10);}else{
c=o+     (D[I]+82)%10-(I&gt;l/2)*
(D[I-l+I]+72)/10-9;D[I]+=I&lt;0?0
:!(o=main(c/10,O,I-1))*((c+999
)%10-(D[I]+92)%10);}return o;}