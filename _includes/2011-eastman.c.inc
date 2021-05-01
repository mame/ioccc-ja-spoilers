#include &lt;stdio.h&gt;
#include &lt;math.h&gt;
#include &lt;unistd.h&gt;
#include &lt;sys/ioctl.h&gt;

             main() {
         short a[4];ioctl
      (0,TIOCGWINSZ,&amp;a);int
    b,c,d=*a,e=a[1];float f,g,
  h,i=d/2+d%2+1,j=d/5-1,k=0,l=e/
 2,m=d/4,n=.01*e,o=0,p=.1;while (
printf(&quot;\x1b[H\x1B[?25l&quot;),!usleep(
79383)){for (b=c=0;h=2*(m-c)/i,f=-
.3*(g=(l-b)/i)+.954*h,c&lt;d;c+=(b=++
b%e)==0)printf(&quot;\x1B[%dm &quot;,g*g&gt;1-h
*h?c&gt;d-j?b&lt;d-c||d-c&gt;e-b?40:100:b&lt;j
||b&gt;e-j?40:g*(g+.6)+.09+h*h&lt;1?100:
 47:((int)(9-k+(.954*g+.3*h)/sqrt
  (1-f*f))+(int)(2+f*2))%2==0?107
    :101);k+=p,m+=o,o=m&gt;d-2*j?
      -.04*d:o+.002*d;n=(l+=
         n)&lt;i||l&gt;e-i?p=-p
             ,-n:n;}}