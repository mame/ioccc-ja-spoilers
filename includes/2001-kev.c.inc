#include &lt;unistd.h&gt;
#include &lt;curses.h&gt;
#include &lt;sys/socket.h&gt;
#include &lt;netinet/in.h&gt;
#include &lt;netdb.h&gt;
#include &lt;sys/time.h&gt;

#define o0(M,W) mvprintw(W,M?M-1:M,&quot;%s%s &quot;,M?&quot; &quot;:&quot;&quot;,_)
#define O0(M,W) M##M=(M+=W##M)-W##M
#define l1(M,W) M.tv_##W##sec
#define L1(m,M,l,L,o,O) for(L=l;L--;)((char*)(m))[o]=((char*)(M))[O]
#define I1 lL,(struct sockaddr*)&amp;il
#define i1 COLS
#define j LINES
#define L_ ((j%2)?j:j-1)

fd_set I;struct socka\
ddr_in il;struct host\
ent*LI; struct timeval
IL,l;char L[9],_[1&lt;&lt;9]
   ;void ___(int __
   ){_[__--]=+0;if(
   ++__)___(--__);_
   [__]=&#39;=&#39;;}double
   o,oo=+0,Oo=+0.2;
   long O,OO=0,oO=1
   ,ii,iI,Ii,Ll,lL,
   II=sizeof(il),Il
   ,ll,LL=0,i=0,li,
   lI;int main(int\
   iL,char *Li[]){\
   initscr();cbreak
   ();noecho();nonl
   ();___(lI=i1/4);
   _[0]=&#39;[&#39;;_[lI-1]
   =&#39;]&#39;;L1(&amp;il,&amp;_,\
   II,O,+O,+lI);il.
   sin_port=htons((
   unsigned long)(\
   PORT&amp;0xffff));lL
   =l_;if(iL=!--iL)
   {il. sin_addr .\
   s_addr=0;bind(I1
   ,II);listen(lL,5
   );lL=accept(I1,&amp;
   II);}else{oO-=2;
   LI=gethostbyname
   (Li[1]);L1(&amp;(il.
   sin_addr),(*LI).
   h_addr_list[0],\
   LI-&gt;h_length,iI,
   iI,iI);(*(&amp;il)).
   sin_family=(&amp;(*\
   LI))-&gt;h_addrtype
   ;connect(I1,II);
   }ii=Ii=(o=i1*0.5
   )-lI/2;iI=L_-1;O
   =li=L_*0.5;while
   (_){mvaddch(+OO,
   oo,&#39; &#39;);o0(ii,iI
   );o0(Ii,Il-=Il);
   mvprintw(li-1,Il
   ,&quot;%d\n\n%d&quot;,i,LL
   );mvhline(li,+0,
   &#39;-&#39;,i1);mvaddch(
   O,o,&#39;*&#39;);move(li
   ,Il);refresh();\
   timeout(+SPEED);
   gettimeofday(&amp;IL
   ,+0);Ll=getch();
   timeout(0);while
   (getch()!=ERR);\
   if(Ll==&#39;q&#39;&amp;&amp;iL)\
   write(lL,_+1,1);
   if(ii&gt;(ll=0)&amp;&amp;Ll
   ==&#39;,&#39;){write(lL,
   _,-(--Il));}else
   if(Ll==&#39;.&#39;&amp;&amp;ii+\
   lI&lt;i1){write(lL,
   _+lI,++Il);}else
   if(iL||!Il)write
   (lL,_+lI-1,4-3);
   gettimeofday(&amp;l,
   0);II=((II=l1(IL
   ,)+(l1(l,u)-=l1(
   IL,u))-l1(l,)+(\
   l1(l,)-=l1(IL,))
   )&lt;0)?1+II-l1(l,)
   +1e6+(--l1(l,)):
   II;usleep((II+=\
   l1(l,)*1e6-SPEED
   *1e3)&lt;0?-II:+0);
   if(Ll==&#39;q&#39;&amp;&amp;!iL)
   break;FD_ZERO(&amp;I
   );FD_SET(lL,&amp;I);
   memset(&amp;*&amp;IL,ll,
   sizeof(l));if((\
   Ll=select(lL+1,&amp;
   I,0,0,&amp;IL)));{if
   (read(lL,&amp;L,ll+1
   )){if(!*L){ll++;
   }else if(*L==ll[
   _]){ll--; }else\
   if(*(&amp;(*L))==1[_
   ]){break;}}else{
   break;}}O0(o,O);
   O0(O,o);if(o&lt;0){
   o*=-1;Oo*=-1;}if
   (o&gt;i1){o=i1+i1-o
   ;Oo*=-1;}if(o&gt;=(
   Ii+=ll)&amp;&amp;O&lt;1&amp;&amp;oO
   &lt;0&amp;&amp;o&lt;Ii+lI){O=2
   ;oO=~--oO;Oo+=ll
   *4e-1;}if(O&lt;0){O
   =iI;LL++;}if(o&gt;=
   (ii+=Il)&amp;&amp;O&gt;iI-1
&amp;&amp;oO&gt;0&amp;&amp;o&lt;ii+lI){O=iI-
2;oO=~--oO;Oo+=Il*4e-1
;}if(+O&gt;+iI){O-=O;i++;
}}endwin();return(0);}
