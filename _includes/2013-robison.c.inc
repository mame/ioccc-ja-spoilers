#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#define r char S; T R; I N, G, s
#define A(P,O) for(P=O; *P; P=U(P))
typedef char T[128],*I,p[2400];
#define memset  (I)\
        memset  
void*P= strcpy  ; I Q(); typedef const void*f; int u(f P,f O){
 return strncmp ((I)P,(I)O,1); } T g,c={ 127} ; char l,F[6000000]; I U(I P){
     r; strncpy (R,P,2);
     s= strchr  (
        strcpy  (P,c),0)
      ; strncpy (P,R,2); return s; } T q,B,E; I t(I P){
     r; qsort   (P,
        strlen  (P),1,u);
  if(s= strstr  (P,c))*s=0; return P; } T a={ 2} ; void D(){ r;
   S=1; strcpy  (R,c); t(F);
  for(; memset  (E,S,l),
    (S= strlen  (
        strcat  (R,c)))&lt;*R; t(s))for(s=B;
     N= strstr  (F,E); s=F)
      * memset  (N,*c,l)=S; } p H=&quot;(*&amp;,.&quot;,k; I j(I P){
  r=(I) malloc  (
        strlen  (
        strcat  (P,&quot;\177 &quot;)));
      * strstr  (P,c)=0;
 return strcpy  (s,P); } int K(f P,f O){ return u(O,P); } void
   b(){ qsort   (F,
        strlen  (F),1,K); } void n(I P){ r; A(P,P){
  if(N= strchr  (F,*P)); else{ t(F);
   b(); memset  (B,l,*F); N=F;
while(* strrchr (B,l)=0,
*P&lt;=(S= strlen  (B))){
      * memset  (E,S,l)
   =*c; strcat  (F,E);
      } memset  (B,0,S); } *N=*c; } D(); } void C(I P,I O){ r; A(P,P)A(s,O){
      * strrchr (
        memset  (
        strchr  (
        memset  (
        strncpy (k,B,254),l,*P),0),l,*s),l)=0;
    *q= strlen  (k)
      ; strcat  (F,q); } D(); } T i=&quot;\13&lt;\f=&quot;; void o(I P){ A(P,P){
      * strrchr (
        memset  (B,*c,*P),*c)
    =0; memset  (B,0,
    *P= strlen  (B)); } } int V(f P,f O){ return u(*(I*)P,*(I*)O); } void e(I O){
     r; strcpy  (H,O)
      ; strcpy  (R,c); for(;
     0&lt; strncmp (F,H,1)
      ; strcat  (R,c))A(s,
     H) memset  (B,0,
    *s= strlen  (
        strcat  (
        memset  (B,*c,*s),c))); *k=0; do{ while
   (0&lt;= strcmp  (F,H)){ n(H); b();
    *q= strlen  (R)
      ; strcat  (k,q); }
      * strrchr (R,*c)=*B; o(H); } while(*R); } char d(I P){
  if(P= strstr  (P,g)){
if((*g= getchar ())&lt;*i)&#39; &#39;&lt;*g?o(g):d(&quot; &quot;); } else P=B; return*P; } I m(I
    P){ qsort   (P,
        strlen  (P),1,K); return*P==*c?U(P):P; } void J(I P){ r=m(P);
if(P&lt;s) putchar (&#39;-&#39;)
      ; memset  (B,l,*s); do{ *E=*i;
  if(N= strchr  (s,
    *q= strlen  (B)))
     t( memset  (
        memcpy  (E,i,l),*c,
        strspn  (N,q)))
      ; putchar (*E);
      * strrchr (B,*B=l)=0; } while
  (*B); puts    (B)
      ; free    (P); } I M(){ r=Q(),P,O; while(S=d(&quot;.)$&quot;)){ N=Q();
     G= strcpy  (F,B); P=m(s); O=m(N); if(S==&#39;)&#39;){ C(P,O); }
  else{ strcpy  (F,P); e(O); if(S==&#39;.&#39;)G=k; else O=N;
      } free    (s); G=j(G);
     s= strcat  (G,P==s==(O==N)?B:c)
      ; free    (N); } return s; } I h(){ r,P,O; for(N=M(); S=d(&quot;*,&quot;);
     N= strcat  (s,S?c:B)){ G=M(); P=m(N); O=m(G); S=O==G==(S==&#39;,&#39;); if(P==N==S)
    if( strcmp  (P,O)&lt;0)
      { strcpy  (F,O); n(P); }
  else{ strcpy  (F,P); n(O); S=N&lt;P; }
  else{ strcat  (
        strcpy  (F,P),O); D(); }
s=j(F); free    (N)
      ; free    (G); } return N; } I Q(){ r; if(S=d(&quot;,&quot;))
  if(N= strstr  (s=Q(),c))*N=*B;
   else strcat  (s,c); else if(d(&quot;&#39;&quot;)){ s=h(); S=d(&quot;(&quot;); }
  else{ strcpy  (F,B); while(*q=d(i))
      { strcpy  (H,F)
      ; memset  (
        strncpy (F,B,l),S=1,
        strcspn (i,q)); C(H,a); } s=j(F); } if(!S){
     o( strcpy  (F,&quot;tzouby!fssps&quot;))
      ; puts    (F); } return s; } int main(int P,I*O)
      { qsort   (O,P,sizeof*O,V);
 l=1&lt;P? strtol  (*O,0,l):10; C(H,
    i); strcpy  (i,F); d(g); while(!d(&quot;\377&quot;))for(J(h()); !d(&quot;\377\n&quot;); d(g)); return 0; }