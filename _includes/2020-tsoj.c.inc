#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;sys/ioctl.h&gt;
#include &lt;sys/time.h&gt;
#include &lt;termios.h&gt;
#include &lt;time.h&gt;
#include &lt;unistd.h&gt;
int t(){struct timeval t;gettimeofday(&amp;t,0);return t.tv_usec/1000+t.tv_sec*1000;}

                                                            #define g(x,y,u,v,s)\
  for(int j=0,X=x,Y=y;j&lt;v&amp;&amp;Y+j&lt;h-X/w&amp;&amp;Y&gt;=0&amp;&amp;X&gt;=0;++j)memcpy(&amp;f[Y+j][X],&amp;s[j*u],u)
                                                      #define l(x,y,w,h,a,b,c,d)\
                    !((x-a&gt;c&amp;&amp;x&gt;=a)||(a-x&gt;w&amp;&amp;a&gt;=x)||(y-b&gt;d&amp;&amp;y&gt;=b)||(b-y&gt;h&amp;&amp;b&gt;=y))

                                                                      int main(){
             struct termios z,o;tcgetattr(0,&amp;z);o=z;z.c_lflag&amp;=~ICANON&amp;~ECHO;
                      z.c_cc[VMIN]=0;z.c_cc[VTIME]=0;tcsetattr(0,TCSANOW,&amp;z);
          srand(time(0));struct winsize v;ioctl(STDOUT_FILENO,TIOCGWINSZ,&amp;v);
                 int h=v.ws_row,w=v.ws_col,A=w*h/100,l=t(),k,s=0,g=1,i,c=0,L;
                          struct V{float x,y;}p={w/2,h/2},b={-3*h},a[A],m[A];
                         char*r=&quot; /\\ /__\\ ^^ &quot;,*n=&quot;o0o0OO&quot;,u=0,q,f[h+1][w];
                                                                while(u^&#39;q&#39;){
                                                    float d=(t()-l)*.001;
                             q=u;do read(0,&amp;u,1);while((u&amp;&#39;p&#39;)&gt;=(u|&#39;p&#39;));
                                                     l=t();c+=15;i=h*w-1;
                                                                           K:
                                        L=c*d;L=abs(((i/w)-L)*(i%w)+h*w);
                        (*f)[i]=L%3+L%5+L%7+L%11+L%13+L%17+L%19&gt;14?32:46;
                                                           if(i--)goto K;
                                         u^&#39; &#39;?0:(b.x=p.x+2,b.y=p.y,u=q);
                                               q^&#39;a&#39;?q^&#39;d&#39;?q^&#39;w&#39;?q^&#39;s&#39;?0:
                                                         (p.y+=d*15):
                                                        (p.y+=d*-15):
                                                         (p.x+=d*20):
                                                        (p.x+=d*-20);
                                            p.x=p.x&lt;0?0:p.x&gt;=w-4?w-4:p.x;
                                            p.y=p.y&lt;0?0:p.y&gt;=h-3?h-3:p.y;
                                                              b.y+=d*-20;
                                   int Y=b.y,X=b.x;Y*w+X&gt;=0?f[Y][X]=64:0;
                                                                   i=A-1;
                                                                           L:
                                           k=0;struct V*e=&amp;a[i],*z=&amp;m[i];
                                               e-&gt;x+=d*z-&gt;x;e-&gt;y+=d*z-&gt;y;
                     l(b.x,b.y,1,1,e-&gt;x,e-&gt;y,6,4)&amp;&amp;!g?k=1,s++,b.y=-3*h:0;
                                    e-&gt;x&lt;0-3||e-&gt;x&gt;=w+3||e-&gt;y&gt;=h+2||k||g?
                                                e-&gt;y=-rand()%h*(1+g),
                                                       e-&gt;x=rand()%w,
                                                   z-&gt;x=-8+rand()%15,
                                                  z-&gt;y=10+rand()%5:0;
                                    l(p.x,p.y,4,3,e-&gt;x,e-&gt;y,3,2)?u=&#39;q&#39;:0;
                                                      g(e-&gt;x,e-&gt;y,3,2,n);
                                                           if(i--)goto L;
                                                        g(p.x,p.y,4,3,r);
                                                               *(f[h])=0;
                printf(&quot;\033[0;4H%s\033[0;0H    \033[4D%i\n&quot;,&amp;f[0][4],s);
                                                      while(t()-l&lt;9);g=0;
                                                                            }
                                                   tcsetattr(0,TCSADRAIN,&amp;o);
                                                                                }