/** J.K.Bonfield **
^	&lt;						 	 							
^	&gt;						 	 							
&lt;			#				&gt;						v		
&lt;			 				 			&lt;					
&lt;			&gt;				&gt;			&lt;		v		
X			 				 			X				j
x			 				 			X				j
X	 						x	^						k
^	 						 	^							
^	#						 									
X			 				X			X				X

^	v						 	 							
v						 	 						v		
v						#	 									
v						X	 						 		
v						x	 						 		
&gt;				#			&lt;						v		
&gt;				 			 				&gt;				
X				 			 				X			l
x				 			 				X			l

41 20
########################################
#                                      #
#  &lt;   &lt;   &lt;   &lt;   &lt;&gt;  &lt;   &lt;   &lt;       #
#       &gt;   &gt;   &gt;  &lt;&gt;   &gt;   &gt;   &gt;   &gt;  #
#  &lt;   &lt;   &lt;   &lt;   &lt;&gt;  &lt;   &lt;   &lt;       #
#       &gt;   &gt;   &gt;  &lt;&gt;   &gt;   &gt;   &gt;   &gt;  #
#  &lt;   &lt;   &lt;   &lt;   &lt;&gt;  &lt;   &lt;   &lt;       #
#       &gt;   &gt;   &gt;  &lt;&gt;   &gt;   &gt;   &gt;   &gt;  #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#           X                          #
########################################*/
#include &lt;stdio.h&gt;
#include &lt;curses.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;setjmp.h&gt;
#include &lt;sys/time.h&gt;
int _tty_ch;
bool _echoit;
bool _rawmode;
SGTTY _tty;
#define U char
#define G for(
#define I )malloc(sizeof(

typedef struct z {U x[20]; struct z*y; } j; j*J[2][256];
struct timeval v= {0,1&lt;&lt;17} ;
U**X,c,*P=&quot;noopoqqnr&quot;,d;

j*a(int Q, int i) {
    G
    clear(),noecho(),cbreak(); ;
)

{
    int x=0,y=0,W=Q,Q=i-1,k;
    G;
    y&lt;=Q;
    (mvaddch(y,x,X[y][x]),++x^W-1)||(x=0,y++));
    k=y=- --x;
    G
    refresh(),c=select(k,&amp;y,0,0,&amp;v)?getch():0;
    k?++x-W||(x=1,++y-Q||(--k,x=W-1,y=Q-1)):--x||(y--,x=W-1),k|y;
)

{
    j *t;
    G
    t=J[1-k][X[y][x]]; t; t=t-&gt;y) {
	U*f=t-&gt;x;
	if (d==f[17]|f[17]==c) {
	    int i=k&amp;2,u=9,k=1,w=x,_=y,T;
	    G;
	    --u||(d-f[8]&amp;&amp;(X[y][x]=f[8]),w---_--,i=0,u=8,k--);) {
	        _+=P[T=i&gt;u?u:i]-&#39;o&#39;;
	        w+=P[4+T]-&#39;p&#39;;
	        if(k) {
		    if (d-f[i]&amp;&amp;f[i]-X[_][w]) break;
		        i++;
	        } else
		    f[++i+8]-d &amp;&amp; (X[_][w]=f[i+8]);
}   }   }   }   }   }

jmp_buf E;

int main(int open, U**exit) {
    FILE*C=fopen (
	open-2?__FILE__:*++exit,P+8);
	j*t;
	volatile int Q,Y=0;
	int i,q; d=open-2?&#39;\t&#39;:&#39;*&#39;; L:

	Q=0; G; setjmp(E)&lt;256; Q--
    )
    longjmp(E,(J[Y][Q]=0,Q++));
    G; ; ) {
	if(!C)return 1;
	if(&#39;\n&#39;==(c=getc(C)))
	    if(!Y++)goto L; else
	    {	fscanf(C,&quot;%d %d\n&quot;,&amp;i,&amp;q);
		X=(U**I P++)*q*(i+1));
	    Q=0; G; Q&lt;q; Q++)
        X[Q]=(U*)&amp;X[q]+Q*i;
    
	fread(*X,(initscr(),q*i),1,C);
	a(i,Q);
    }
    t=(j*I*a(Q--,--Q)));
    t-&gt;y=J[Y][c]; J[Y][c]=t;
    fgets(t-&gt;x,20,C); }
}