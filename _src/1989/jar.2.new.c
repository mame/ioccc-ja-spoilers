#define d define
#define a include
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define p char*
#define P ,(p)
#define T(E) !strcmp(E,"()")
#define U return
#define W while
#define X sbrk(199)
#define z atof
#define e isspace
#define D A(_)
#define E S(C(_))
#define B(y) p y(_)p _;{
#define G(y,V) B(y)p i;U sprintf(i=X,"%lf",z(E)V z(S(C(D)))),i;}

	    p sbrk(),*S(),*j(),*O,*H;K,Y,M=14;double
	  z();Q(_)p _;{int V=0;W(e(*_))_++;H=_;W(V|!(e
	(*H)|*H==')'||(*H=='('&&H-_)))V+=(*H=='(')-(*H==
      ')'),H++;U H-_;}B(C)U _++,Y=Q(_),_=strncpy(X,_,Y),_[
    Y]=0,_;}B(A)_++,_+=Q(_);W(e(*_))_++;U O=X,*O='(',strcpy(
  O+1,_),O;}B(Z)U _;}B(c)U C(E);}B(q)U A(E);}B(t)p i=E;U H=S(C
(D)),sprintf(O=X,T(H		         )?"(%s)":"(%s %s",i,H+1)

	     ,O;}B(F)U S(C(A(T(E)?D:_)));}L(i,s)p

i,*s;{U isdigit(*i)		?         z(i)!=z(s):strcmp(i,s);}
  B(b)U L(E,S(C(D)))?"()":"t";}B(R)U E;}B(o)U z(E)<z(S(C(D)))?
    "t":"()";}G(f,+)G(g,-)G(h,*)p r[99][2]={"function"  P R,
      "quote"P C,"lambda"P Z,"defun"P j,"if"P F,"equal"P b
	,"<"P o,"+"P f,"-"P g,"*"P h, "car"P c, "cdr"P q,
	  "cons"P t,"t","t"};B(j)U r[M][1]=D,*r[M++]=
	    C(_);;;;;;;;;;;;;;}B(S)int Li,s;p u;if(
	      isdigit(*_)|T(_))U _;for(Y=M;Y--;)
		if(!strcmp(_,*r[Y]))U r[Y][1]
	      ;u=E,_=D;if(*u-'(')U(*((p(*)())u)
	    )(_);s=Li=M;W(!T(_))r[M][1]=E,*r[M++]
	="",_=D;O=C(u);W(!T(O))*r[Li++]=C(O),O=A(O);U O=S
    (C(A(u))),M=s,O;}main(){H=O=X,Y=0;W(Y|!e(K=getchar()))K==
    EOF?exit(0):0,Y+=(K=='(')-(K==')'),*H++=K;*H=0,puts(S(O))
				,
 		main();{printf("XLISP 4.0\n");}}
