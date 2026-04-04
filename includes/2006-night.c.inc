#include &lt;ncurses.h&gt;

#define T typedef unsigned
T long G;
T short CT;
#define ATG srand(time(0)); initscr(); cbreak(); noecho(); start_color();
#define GG(T,C) attrset(A_BOLD*!(T)|COLOR_PAIR(C%2+1));
#define AC(G) init_pair(G/2,G,nodelay(stdscr,G/3));
#define TCT(A,G,C) mvaddch(A+CTT*6+4,CGA*12+G,C)
#define AGG A&amp;2?119:115:A&amp;1?100:97
#define CAT mvprintw(2,40,&quot;%d&quot;,TC)
#define GAT int main()
#define AAA refresh()
#define TAG endwin()
#define GCA clear()
#define TCA clock()
#define CCC rand()
#define CC getch()
#define GA return
#define T(T) #T#T#T#T#T#T T
#define G(G) while(G)
#define A(A) A { A }

G AA[1&lt;&lt;16]; G GT[1&lt;&lt;16];
G CAA, CA, CTG, TA, CG, CTT, CGA, TC, T, GTC;
char *ACG=&quot;HXXTP02^OCBHL\\XP``T^NDP800SQSW\\X@@@0c13RZLLH&lt;WWWWWWWW&#x0000;&#x0000;.jW&#x0000;&#x0000;&#x0000;&#x0000;&#x0000;&#x0000;&#x0000;Wq.&#x0000;&#39;9W&#x0000;&#x0000;&#x0000;&#x0000;&#x0000;&#x0000;&#x0000;WP&#39;&#x0000;&#x0000;jb&#x0000;&#x0000;WW&#x0000;&#x0000;7F&#x0000;&#x0000;WWWWWWWWBjPWWbo^^WW^^9WWP^__WW__6,D:^HRioV;:VztZ&quot;, *GCC,*AGT,GTT[]=T(

    ; G AG;                                    G TG;
   G AC;                                      G C; G
  A=0; G AAG; G TT; G GG; G AT(CT A){ GA A%4&gt;&gt;A%4-1
 ; } CT GC(){ AC=!(AAG&amp;(CA/=2)); CTG=15*CA*CA/4; G
 A=TG;                                 GA AC||A&amp;&amp;
 AT(A                               /CA/CA); }
 CT GTCA                          (G C,G A,G
  CG){ GG(C&gt;=A,C)G(!A)GA (C&amp;&amp;CC,CG^TAG); CG
   +=(C&lt;A)&lt;&lt;20; G T=TCT(0,C%16*3-34,302
    [C%16*2+            GTT]); AAA; G(
      CG&gt;TCA)A;      GA CG^GTCA(C+
       3,A-1,CG  ); } G CGAC(CT
          T,G  A,G C,G AA,G
             AG){ GA(AA&amp;&amp;
          (CA=4)&amp;&amp; (   CGAC(
        1+T,1+A,C,  --AA, AG)?
      CGAC(ACG[     T],AG,0,C,A):
     ACG[T]&amp;&amp;TCT(AG,A,ACG[T])),C); }
    CT TGA(G A){ CT T=1; CT C=-T; *AA=A;
   *GT=3;                     G(++C^T){ G(
  (TA=AA                         [C])/2&amp;!(TT
 =(TG=                              GT[C]+16)&amp;
 15))GA TG&gt;&gt;4; CA=4; AAG=TA&gt;&gt;2*TT; A(GC()&amp;&amp;(AA[T
 ]=TA^1&lt;&lt;2*TT&lt;&lt;AT(AAG),GT[T++]=TG^CTG&gt;&gt;AC); )} GA
  0 ; }                                    G ACC(){
  G T=4;                                     G A=1;
   G C=1;                                     TC=TGA
    (GG=CCC); G((A*=2)&lt;C||(C&lt;&lt;=A=1)&lt;T||(T*=C=2)){ G (
      TGA(AG=GG^T^C^A)&gt;TC) { G((TC=TGA(GG=AG))&gt;CAA) {
        CAA=TC; CAT;                            } G (
          TC&gt;&gt;6)GA 1;                          C = 1;
            T=2; } G(1+                       CC) GA
               1; } GA 0; } GAT{ AGT=GCC=GTT; G(T=*
                  ++GCC)72&amp;T^64||(*AGT^=T/4%2&lt;&lt;A%8
                    ,7&amp;(A+=5))||(      *++AGT=CAA
                       =C=0); ATG   AC(4); G(!
                          ACC   ()); AC(2); G
                              (C+1){ G(!C){
                           C=TG=3; CG=  1; TA
                        =GG; TC=CAA; }  GCA; TT=
                     TG; A(A(A(A(      ++TT; A=CG
                  ^=(TT&amp;=15)&amp;3?           1:2; CTT
               =TT/4 ; CGA=CTT%2*3^3^TT%4 ; AAG=TA&gt;&gt;
            2*TT; A=CG^AAG; GG(TT^TG,GTC=TT) CGAC(GTC
          &amp;&amp;A&amp;2?134:                           138,TT
        &amp;0,6,6,A&amp;1                              ?0 :5)
      ; CGAC(128                                |A %2*
     3,A&amp;2?3:0,11,3,0) ; ))))CAT ; G(TA/2&amp;!TG)GA GTCA(
    GCA,CAA/4&amp;16, TCA); )C=CC-114; TT=0;  A(G(GC()&amp;&amp;TC
   &amp;&amp;C+114                                    ==( CA&amp;
  2?AGG)                                   ) { --TC;
 TG&amp;1&amp;&amp;                                 (A^=2-AT(A
 )); C=TCA; A(A(T=0; { GG(1,TG); G C; A(A(A(A(A(
 A(TCT(T%6,T%11,32+55*(ACG[11*AT(TT)+22*AT(A)+(
 (A^2)&amp;                          (C=TT/2^TG&amp;
  1?2:1)                      ?65-T:T)%11]
   &gt;&gt;(3-A&amp;3               -C?65-T:T)%6&amp;
    1)); T++; ))))))TT++; AAA; } C+=1
      &lt;&lt;16; G(C&gt;TCA); ))CG^=CA; TA
        ^=1&lt;&lt;AT   (AAG)+TG*2; TG
           ^=   CTG&gt;&gt;AC; } )
             } GA TAG; }