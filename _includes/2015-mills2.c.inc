
    int I=256,l,c, o,O=3; void e(
   int L){ o=0; for( l=8; L&gt;&gt;++l&amp;&amp;
  16&gt;l;			    o+=l
  &lt;&lt;l-			    1) ;
  o+=l		     *L-(l&lt;&lt;l-1); { ; }
  if (		    pread(3,&amp;L,3,O+o/8)&lt;
  2)/*		    */exit(0);	L&gt;&gt;=7&amp;o;
  L%=1		     &lt;&lt;l; L&gt;&gt;8?256-L?e(
  L-1)			    ,c||
  (e(c			    =L),
  c=0)			    :( O
   +=(-I&amp;7)*l+o+l&gt;&gt;3,I=L):putchar(
    L); }int main(int l,char**o){
			    for(
		     /*	    ////      */
		    open(1[o],0); ; e(I++
		     ))		      ;}
