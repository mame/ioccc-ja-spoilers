#include						       &lt;X11/Xlib.h&gt;
#define							 ext(a) (exit(a),0)
# define		     X(	    x,v,y) XMoveWindow(d,s[x],(v)*z,(y)*z)
#  define		     _		ButtonPressMask|ButtonReleaseMask
#   define		     I(		     x,y) XSelectInput(d,s[x],y)
#    define		     N(		      v) (XMapWindow(d,s[v]),v)
#     define		     V			  VisibilityChangeMask
#      define		     A			  XCreateSimpleWindow
#	define		     D			    DefaultScreen(d)
#	 define		     E			   r.xbutton.button
#	  define	     R			    BlackPixel(d,D)
#	   define	     S			    r.xvisibility

	      int main(a)int a;{Window s[53];int w,u,i,c,y,l=0
	  ,q,e=32,t,k,j=~0,z=(a+1)/2,x=a&amp;1,v=z&amp;1;XEvent r;Display*
	d=XOpenDisplay(&quot;&quot;);s[0]=A(d,DefaultRootWindow(d),200,200,(x&amp;
       v?330:120)*z,215*z,2,R,R);I(N(c=0),_);for(;c&lt;(x?32:52);c++){s[
       c+1]=A(d,s[0],x	      ?c*20*z:(c-1)%10	      *12*z,x?-20*z:(
      c-1)/10*12*z,x		?z*(c^31?10:		2):z*10*(c?1:2
      ), x&amp; v?z*10:	 (c	 &amp;&amp;!x?10:1+	 x)	 *z,k =q=1, R,
      WhitePixel(d     ,D));I	  (N(c+1),     V);}X(	  N(1),y=(x&amp;v)
      *115+50,x*70+	 60	 ); X(N(c--	 )+	 1,x?-10:(i=y)
      ,u=!x*130-20);		while(c &amp;&amp;e&lt;		160){if(x){if(
      v){l=!(e &amp;32)*9;	      for(w=30; w--;){	      if(s[w+2]){ k=w%
      10;l=e&amp;32?k&gt;l?k:l:k&lt;l?k:l;X(w+2,10+k *20+q,(w/10)*20+e);}}l*=20;
      e&amp;31?e++:e&amp;32?(q++,(q+l&gt;300?e++:0)):(q--,q+l&lt;10?e++:0); } u&gt;140?
      ext(c):u&gt;-20?X(32,i,u-=(v?5:-1 )) :(!v?(u =5,srandom(time(0)),i=
      random()%88+6):0); } else{k&gt;0?i+=(i&gt;105?k= -k:k):(i+=(i&lt;1?k= -k:
      k)); j&gt;0?u	 +=(u&gt;140?ext(++c):j):(u+=(u	    &lt;1?j= -j:j
      )); X(		    52,i,u);}XSync(d,0);		while(
      XCheckMaskEvent(d	      ,_|V,&amp;r))if(!(r.	     type==ButtonPress
      ?(E&amp;1||!x||!v?t=E*4-8			 :u&lt;0?i=y+4,u=122:1):r
      .type==ButtonRelease&amp;&amp;E?t=0,1:r.type^VisibilityNotify|S.state^1)
      )for(x&amp;v?(u=	     -15),w++:(w=0);++w		  &lt;52-x*20;)if
      (s[w]		      ==S.window)x&amp;&amp;v||			 w ^1?
      XUnmapWindow		   (d,s[w])		  ,s[w]=0,c--:
      0,l=1; if(!x&amp;&amp;l)j=			    -j,l=0; if(l&amp;x&amp;&amp;!v
      )u=~19,c--,l=0;t=(!x||!v)		     &amp;&amp;(y&lt;5&amp;&amp;t&lt;0||y&gt;95&amp;&amp;t&gt;0)?0
	  :t;s[1]?X(1,y+=x&amp;v?t:t/(x+1),130):ext(++c);};return(c);}