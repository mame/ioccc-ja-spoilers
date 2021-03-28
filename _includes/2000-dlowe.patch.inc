--- dlowe.c
+++ dlowe.c
@@ -6,7 +6,7 @@
 #define                            cc                            (((3)))
 #define                     ZZ(YY,WW) XS(YY)                     {AV*gg\
 = perl_get_av(              &quot;SS&quot;,cc-cc); SV*              Ss,*uu; char \
-ii=*(SvPV(                  perl_get_sv(&quot;_&quot;,                  0*cc),na)\
+ii=*(SvPV(                  perl_get_sv(&quot;_&quot;,                  0*cc),PL_na)\
 ) %(36+cc); (               av_len(gg) &lt;1)?(               perl_call_pv\
 (&quot;__&quot;,0/cc)):(Ss            =av_pop(gg), uu=            av_pop(gg),(((i\
 i==pow(2,cc))||(            ii==(40-cc)))&amp;&amp;(            SvNV(Ss)==0))?(\