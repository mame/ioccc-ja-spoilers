#include                                                      &lt;EXTERN.h&gt;
#include                                                        &lt;perl.h&gt;
#include                                                        &lt;XSUB.h&gt;
#include                                                        &lt;math.h&gt;
#define                            qq                           __FILE__
#define                            cc                            (((3)))
#define                     ZZ(YY,WW) XS(YY)                     {AV*gg\
= perl_get_av(              &quot;SS&quot;,cc-cc); SV*              Ss,*uu; char \
ii=*(SvPV(                  perl_get_sv(&quot;_&quot;,                  0*cc),na)\
) %(36+cc); (               av_len(gg) &lt;1)?(               perl_call_pv\
(&quot;__&quot;,0/cc)):(Ss            =av_pop(gg), uu=            av_pop(gg),(((i\
i==pow(2,cc))||(            ii==(40-cc)))&amp;&amp;(            SvNV(Ss)==0))?(\
av_push(gg,uu),             av_push (gg,Ss),             perl_call_pv(&quot;\
_&quot;,3-cc)):(                   av_push (gg,                   newSVnv(WW\
) )                               ,1))                               ; }
ZZ(uu,SvNV(uu)-             (SvNV(Ss)*(SvIV(             uu)/SvIV(Ss))))
ZZ(ii,SvNV                  (uu)-SvNV(Ss))ZZ                 (ff,SvNV(Ss
)+SvNV(uu))ZZ(gg             ,pow(SvNV(uu),             SvNV(Ss)))ZZ(Ss,
SvNV(uu)/SvNV(Ss            ))ZZ(ss,SvNV(Ss)            * SvNV(uu)) void
bb( ){                      newXSproto(&quot;UU&quot;,                      ff,qq,
&quot;&quot;); newXSproto(            &quot;W&quot;&quot;W&quot;,ii,qq,&quot;&quot;)            ;newXSproto(&quot;TT&quot;
,ss,qq,&quot;&quot;)                  ; newXSproto(&quot;Y&quot;                  &quot;Y&quot;,Ss,qq,
&quot;&quot;); newXSproto(            &quot;vv&quot;,uu, qq,&quot;&quot;);            newXSproto(&quot;aa&quot;,
gg,qq,&quot;&quot;); }int             main(int _,char*             *__, char**ee){
PerlInterpreter*            aa=perl_alloc();            char*dd[]= { &quot;&quot;,
&quot;-e&quot;, &quot;0&quot;} ;                 perl_construct                 (aa); perl_\
parse(aa, bb,                  cc,dd ,ee)                  ;perl_eval_sv
(newSVpv(&quot;_:$_=               &lt;&gt; ; defined               or exit; @ARGV&quot;
&quot;=split; __:$_=             shift;defined or             goto _; chomp &quot;
&quot;;(m*^\\x70oO&quot;              &quot;\\x74$*i)?(pri&quot;              &quot;nt \&quot;$_ w\\x&quot;
&quot;61s h\\145r\\x&quot;            &quot;65!\\n\&quot;):((m*&quot;            &quot;^\\s\\*(-?\\d+&quot;
&quot;(\\.\\d+)?)\\s&quot;            &quot;\\*$*)?(push@SS            ,$1):(&amp;{chr(((o&quot;
&quot;rd)%39)+3**4)x2             } )); goto __;             sub ff { @SS= (&quot;
&quot;)} sub __{print            \&quot;stack empty\\&quot;            &quot;n\&quot;} sub ss{$#&quot;
&quot;SS&lt;0 and goto &amp;            __; print $SS[$&quot;            &quot;#SS].\&quot;\\n\&quot;} &quot;
&quot;sub SS{ $#SS&lt;0              and goto &amp;__ ;              print pop @SS}&quot;
&quot;sub _ { print              \&quot;divide by zer&quot;            &quot;o\\n\&quot;}sub ii{&quot;
&quot;map{ print\&quot;$_&quot;            &quot;\\n\&quot; } reverse            @SS} sub AUTOLO&quot;
&quot;AD { print\&quot;un&quot;            &quot;implemented\\n&quot;            &quot;\&quot;} sub gg{ $#&quot;
&quot;SS&lt;0 and goto              &amp;__;push@SS,$SS[            $#SS]} sub uu{ &quot;
&quot;$#SS&lt;1 and goto            &amp;__;$SS[ $#SS]+=            $SS[$#SS-1];$SS&quot;
&quot;[$#SS-1]=$SS[$&quot;            &quot;#SS]-$SS[$#SS-&quot;            &quot;1]; $SS[$#SS]-&quot;
&quot;=$SS[$#SS-1]}                   &quot;,0),0                   ); exit(cc); }