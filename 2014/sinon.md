---
id: 2014/sinon
year: 2014
order: 8
authors: "Don_Yang"
orig_url: "https://www.ioccc.org/2014/sinon/prog.c"
hint_url: "https://www.ioccc.org/2014/sinon/hint.html"
title: "IOCCC 2014: Best choice of optimization"
award_ja: "最適化の最高の選択"
---

## 動作

Quineをベースとした、タイミングよく銃を撃って敵を殲滅するゲーム。

次のように実行する。prog.cをrun.cにコピーした上で、run.cをコンパイル・実行し、その出力をrun.cに破壊的にかき戻す。

{% raw %}
```
$ cp prog.c run.c

$ gcc -o run run.c && ./run | tee run.c
#include<stdio.h>
#define G(g,o)  int  g=o;
#define  q(b)int o[]={0,0,0,0,1};char*p=#b,P[9999],*d=P,*e[]={"('A`)", "(A`)","('A)","('A`)"},   b
q(*s=__TIME__;extern void w(){G(g,*o)for(;g-- ;);}extern void x(){}extern void y(){}static void z (char*p){for(;(*d=*p++)!=0;d++)*d-=061*(59==*d||*d==81);}int main(){char N[]="<;iQ=/*do<;dQ=ook8?boc;aQ=odr8>oc;_Q<ox8>oc" ";^Q<d|8=o;]Q<dj8<Pk8<c]'?;QQdi8?P'Q)d8<9`8?c;Qdh8=P']Q<`c8>PQ9_8" ">b;og8=''`Q<`b8?'QQ9_8?c;dPe8dQa8<P]Q<``8=;'f8>QQ`]8?ocQQ_8=''_Q`8aQ" "CYOUQWIN!]Q=;of8BQQ)88bc]QA98P'Qo]8>oQQ_8CP;QQ98b`_8@P8(Q`]'^Q=`']QB)88" "bQQ]`8J;QQ`88bc99bd(`8iQ@''QQo^8E'`8c;QQ'Q``8?QQ`'kQ<o]8B9PQQ`';_Q<`_8<cbQ" "<o_Q<o_QBdo`QQ';`Q=9`]8=bobQ_o_Q<o]8=';bQC(88cQ`bcgQ>oP']8<;cQ>98)^Q?''oc`Q>" "oc']Q]8<;cQ>`8bbQA``QQ''`Q?88P;dQ=`)nQ?*/;;" ;G(Z,60*(60*(10**s+s[1])+s[3]*10+s[4])+s[6]*10+s[7]-1933008 )G(l,(Z+86400-*o)%86400)G(M,o[3] *17+o[4]*11) G(O,(&x-&w)-(&y-&x)?1:0)G( m,*o)G(n,m)G(i,0)G(j,O)if(M>197)for( p=N;*p; )if(*p>92){*N=p[1 ];N[1] =0;for( O=*p++-90;0<O--;z( N));p++;}else{ s= p;for(O= *p++-59;O--;p++) p[-1]=*p;p[-1]=0;z(s);}else{ if(M==0){*o=Z;l=0; }if(o[O+3]&&o[ O+1]+(O?3:5 )>l)Z=O;else++o[O+3];o[O+1] =l; if(l<60)d+= sprintf(d,"#include<stdio.h>" "\12#define G(g,o)  int  g=o;\n#d" "efine  \161(b" ")int\40o[]={%d,%d,%d,%d,%d};char" "*p=#b,P[9999],*d=P,*e[]=" "{\"%s\", \"" "%s" "\",\"%s\",\"%s\"},   b\nq(%s)\n" ,*o,o[01],o[2],o[3], o[4] ,e[3],e[1], e[2],*e,p);z("/*;; ");for(i=0; i++<18 ;z(";"))for(j=0;j++<11;n=(n*193+287) %384 ){m=(97+(67*m ))%198;for (O=0;O++<n%03;z("Q") );s=d;for(z(e[ ( n/3)&3]);m<M &&s-d;*s++ =040);}if(l<60) {for (z(";Time:Q") ;(l++<60);z ("#"));for (z(";Heca" "t" "eQII:" "Q") ;o[3 ]++ <=24;z("#"));z (Z?"":"Q(j" "a" "m" "me" "d" ")");for(z( ";GlockQ18" "C:" "Q");o[4]++< 25;z("#") );z( Z- 1? ";":"Q(jam" "med);") ;} else z(";" ";Gam" "eQover." ";;" );for (O= 0;O <77;O ++) z("Q");z( "*" "" "/" );} puts (P);; return+0;})
/*

 ('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`)
 ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)
  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)
(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`)
 (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)
  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)
('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A)
 ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)
  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)
('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`)
 ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)
  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)
('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`)
 ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)
  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)
(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`)
 (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)
  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)

Time: ############################################################
Hecate II: #########################
Glock 18C: ########################
                                                                             */
```
{% endraw %}

これでゲームスタートしている。
`('A')`みたいなのが敵。
Timeは残り時間、[Hecate II](https://ja.wikipedia.org/wiki/PGM_%E3%83%98%E3%82%AB%E3%83%BC%E3%83%88II)と[Glock 18C](run.cをコンパイル・実行し、その出力をrun.cに破壊的にかき戻す://ja.wikipedia.org/wiki/%E3%82%B0%E3%83%AD%E3%83%83%E3%82%AF17)はそれぞれの銃の残弾数を表す。

run.cをコンパイル・実行すると、Glock 18Cを撃って、敵が少し減る。

{% raw %}
```
#include<stdio.h>
#define G(g,o)  int  g=o;
#define  q(b)int o[]={0,0,3,0,2};char*p=#b,P[9999],*d=P,*e[]={"('A`)", "(A`)","('A)","('A`)"},   b
q(*s=__TIME__;extern void w(){G(g,*o)for(;g-- ;);}extern void x(){}extern void y(){}static void z (char*p){for(;(*d=*p++)!=0;d++)*d-=061*(59==*d||*d==81);}int main(){char N[]="<;iQ=/*do<;dQ=ook8?boc;aQ=odr8>oc;_Q<ox8>oc" ";^Q<d|8=o;]Q<dj8<Pk8<c]'?;QQdi8?P'Q)d8<9`8?c;Qdh8=P']Q<`c8>PQ9_8" ">b;og8=''`Q<`b8?'QQ9_8?c;dPe8dQa8<P]Q<``8=;'f8>QQ`]8?ocQQ_8=''_Q`8aQ" "CYOUQWIN!]Q=;of8BQQ)88bc]QA98P'Qo]8>oQQ_8CP;QQ98b`_8@P8(Q`]'^Q=`']QB)88" "bQQ]`8J;QQ`88bc99bd(`8iQ@''QQo^8E'`8c;QQ'Q``8?QQ`'kQ<o]8B9PQQ`';_Q<`_8<cbQ" "<o_Q<o_QBdo`QQ';`Q=9`]8=bobQ_o_Q<o]8=';bQC(88cQ`bcgQ>oP']8<;cQ>98)^Q?''oc`Q>" "oc']Q]8<;cQ>`8bbQA``QQ''`Q?88P;dQ=`)nQ?*/;;" ;G(Z,60*(60*(10**s+s[1])+s[3]*10+s[4])+s[6]*10+s[7]-1933008 )G(l,(Z+86400-*o)%86400)G(M,o[3] *17+o[4]*11) G(O,(&x-&w)-(&y-&x)?1:0)G( m,*o)G(n,m)G(i,0)G(j,O)if(M>197)for( p=N;*p; )if(*p>92){*N=p[1 ];N[1] =0;for( O=*p++-90;0<O--;z( N));p++;}else{ s= p;for(O= *p++-59;O--;p++) p[-1]=*p;p[-1]=0;z(s);}else{ if(M==0){*o=Z;l=0; }if(o[O+3]&&o[ O+1]+(O?3:5 )>l)Z=O;else++o[O+3];o[O+1] =l; if(l<60)d+= sprintf(d,"#include<stdio.h>" "\12#define G(g,o)  int  g=o;\n#d" "efine  \161(b" ")int\40o[]={%d,%d,%d,%d,%d};char" "*p=#b,P[9999],*d=P,*e[]=" "{\"%s\", \"" "%s" "\",\"%s\",\"%s\"},   b\nq(%s)\n" ,*o,o[01],o[2],o[3], o[4] ,e[3],e[1], e[2],*e,p);z("/*;; ");for(i=0; i++<18 ;z(";"))for(j=0;j++<11;n=(n*193+287) %384 ){m=(97+(67*m ))%198;for (O=0;O++<n%03;z("Q") );s=d;for(z(e[ ( n/3)&3]);m<M &&s-d;*s++ =040);}if(l<60) {for (z(";Time:Q") ;(l++<60);z ("#"));for (z(";Heca" "t" "eQII:" "Q") ;o[3 ]++ <=24;z("#"));z (Z?"":"Q(j" "a" "m" "me" "d" ")");for(z( ";GlockQ18" "C:" "Q");o[4]++< 25;z("#") );z( Z- 1? ";":"Q(jam" "med);") ;} else z(";" ";Gam" "eQover." ";;" );for (O= 0;O <77;O ++) z("Q");z( "*" "" "/" );} puts (P);; return+0;})
/*

 ('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`)
 ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)
  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)        ('A`)
('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`)
 ('A`)('A`)  ('A`) ('A`)       ('A)     ('A)  (A`) (A`)(A`)
  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)
(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`)
 (A`)(A`)  ('A`) ('A`)('A`)        ('A`)('A`)  ('A) ('A)('A)
  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`)      ('A`)  ('A) ('A)
      (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A)
 ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)
  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)
('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`)
 ('A`)       ('A)     ('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)
  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)
('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`)
 ('A`)('A`)        ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)
  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)      (A`)

Time: #########################################################
Hecate II: #########################
Glock 18C: #######################
                                                                             */

```
{% endraw %}

これを繰り返すことで敵を殲滅していく。
ただし、短い時間で連射するとジャムを起こすので、タイミングよく実行を繰り返す必要がある。
次はジャムった様子（`jammed`と表示されている）。

{% raw %}
```
#include<stdio.h>
#define G(g,o)  int  g=o;
#define  q(b)int o[]={0,0,1,0,1};char*p=#b,P[9999],*d=P,*e[]={"('A`)", "(A`)","('A)","('A`)"},   b
q(*s=__TIME__;extern void w(){G(g,*o)for(;g-- ;);}extern void x(){}extern void y(){}static void z (char*p){for(;(*d=*p++)!=0;d++)*d-=061*(59==*d||*d==81);}int main(){char N[]="<;iQ=/*do<;dQ=ook8?boc;aQ=odr8>oc;_Q<ox8>oc" ";^Q<d|8=o;]Q<dj8<Pk8<c]'?;QQdi8?P'Q)d8<9`8?c;Qdh8=P']Q<`c8>PQ9_8" ">b;og8=''`Q<`b8?'QQ9_8?c;dPe8dQa8<P]Q<``8=;'f8>QQ`]8?ocQQ_8=''_Q`8aQ" "CYOUQWIN!]Q=;of8BQQ)88bc]QA98P'Qo]8>oQQ_8CP;QQ98b`_8@P8(Q`]'^Q=`']QB)88" "bQQ]`8J;QQ`88bc99bd(`8iQ@''QQo^8E'`8c;QQ'Q``8?QQ`'kQ<o]8B9PQQ`';_Q<`_8<cbQ" "<o_Q<o_QBdo`QQ';`Q=9`]8=bobQ_o_Q<o]8=';bQC(88cQ`bcgQ>oP']8<;cQ>98)^Q?''oc`Q>" "oc']Q]8<;cQ>`8bbQA``QQ''`Q?88P;dQ=`)nQ?*/;;" ;G(Z,60*(60*(10**s+s[1])+s[3]*10+s[4])+s[6]*10+s[7]-1933008 )G(l,(Z+86400-*o)%86400)G(M,o[3] *17+o[4]*11) G(O,(&x-&w)-(&y-&x)?1:0)G( m,*o)G(n,m)G(i,0)G(j,O)if(M>197)for( p=N;*p; )if(*p>92){*N=p[1 ];N[1] =0;for( O=*p++-90;0<O--;z( N));p++;}else{ s= p;for(O= *p++-59;O--;p++) p[-1]=*p;p[-1]=0;z(s);}else{ if(M==0){*o=Z;l=0; }if(o[O+3]&&o[ O+1]+(O?3:5 )>l)Z=O;else++o[O+3];o[O+1] =l; if(l<60)d+= sprintf(d,"#include<stdio.h>" "\12#define G(g,o)  int  g=o;\n#d" "efine  \161(b" ")int\40o[]={%d,%d,%d,%d,%d};char" "*p=#b,P[9999],*d=P,*e[]=" "{\"%s\", \"" "%s" "\",\"%s\",\"%s\"},   b\nq(%s)\n" ,*o,o[01],o[2],o[3], o[4] ,e[3],e[1], e[2],*e,p);z("/*;; ");for(i=0; i++<18 ;z(";"))for(j=0;j++<11;n=(n*193+287) %384 ){m=(97+(67*m ))%198;for (O=0;O++<n%03;z("Q") );s=d;for(z(e[ ( n/3)&3]);m<M &&s-d;*s++ =040);}if(l<60) {for (z(";Time:Q") ;(l++<60);z ("#"));for (z(";Heca" "t" "eQII:" "Q") ;o[3 ]++ <=24;z("#"));z (Z?"":"Q(j" "a" "m" "me" "d" ")");for(z( ";GlockQ18" "C:" "Q");o[4]++< 25;z("#") );z( Z- 1? ";":"Q(jam" "med);") ;} else z(";" ";Gam" "eQover." ";;" );for (O= 0;O <77;O ++) z("Q");z( "*" "" "/" );} puts (P);; return+0;})
/*

 ('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`)
 ('A`)('A`)       ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)
  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)      ('A`)
('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`)
 ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)
  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)       (A`)
(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`)
     (A`)  ('A`) ('A`)       ('A`) ('A`)('A`)  ('A) ('A)('A)
  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)
('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A)
 ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)
  ('A) ('A)('A)  (A`) (A`)      ('A`)      ('A`)  ('A`) ('A`)
('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)  ('A`)
 ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`) ('A`)('A`)
  ('A`) ('A`)('A`)  ('A) ('A)('A)       (A`)(A`)  ('A`) ('A`)
('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)(A`)  ('A`)
 ('A`)       ('A`)      ('A`)  ('A) ('A)('A)  (A`) (A`)(A`)
  ('A`) ('A`)('A`)  ('A`) ('A`)('A`)  ('A) ('A)('A)  (A`) (A`)

Time: ###########################################################
Hecate II: #########################
Glock 18C: ######################## (jammed)
                                                                             */
```
{% endraw %}

本来の作品の意図としては、最適化レベルを`-O2`にしてコンパイルした場合はHecate IIを撃ち、`-O0`にした場合はGlock 18Cを撃つというものだったが、当然これは動作保証されているものではなく、残念ながら現代では常にGlock 18Cを撃つようになっている。

## 解説

コード形状は[ソードアート・オンライン](https://ja.wikipedia.org/wiki/%E3%82%BD%E3%83%BC%E3%83%89%E3%82%A2%E3%83%BC%E3%83%88%E3%83%BB%E3%82%AA%E3%83%B3%E3%83%A9%E3%82%A4%E3%83%B3)のキャラクター、[シノン](https://ja.wikipedia.org/wiki/%E3%82%BD%E3%83%BC%E3%83%89%E3%82%A2%E3%83%BC%E3%83%88%E3%83%BB%E3%82%AA%E3%83%B3%E3%83%A9%E3%82%A4%E3%83%B3%E3%81%AE%E7%99%BB%E5%A0%B4%E4%BA%BA%E7%89%A9#%E3%82%B7%E3%83%8E%E3%83%B3)。
Hecate IIもGlock 18Cもシノンが作中で使用する銃。
sinon.c自信のファイルサイズとCRC32が7行目に埋め込まれている。

コンパイラによってコンパイル時刻の文字列に置き換えられる`__TIME__`マクロ定数を使って射撃の間隔を計測している。

最適化オプションを見分けるテクニックは、関数の配置だった模様。

```
extern void w() { G(g,*o)for(;g--;); }
extern void x() { }
extern void y() { }
```

という定義に対して、`(&x-&w)-(&y-&x)`がゼロならばHecate II、非ゼロならばGlock 18Cを選択するようになっている。
当時どう解釈されていたかはよくわからないが、現代ではこれは動かない。
`(&x-&w)-(&y-&x)`を`Hecate_II`などに置き換えて、`-O2`と`-O0`の代わりに`-DHecate_II=1`と`-DHecate_II=0`を使うようにすれば撃ち分けることができる。
この仕組みは当時から安定していたものではなかったようで、tccでは撃ち分けることができなかったらしい。

なお、Glock 18Cだけでも勝利することはできる（hint.textでは"hard"モードとされている）。
実際には、3秒おきに打ち続けるだけでよい。

```
$ cp prog.c run.c

$ while true; do gcc -o run run.c && ./run | tee run.c ; sleep 3 ; done
```

徐々に敵が減っていき、最終的には次のように表示される。

{% raw %}
```
#include<stdio.h>
#define G(g,o)  int  g=o;
#define  q(b)int o[]={1485,0,52,0,18};char*p=#b,P[9999],*d=P,*e[]={"('A`)", "(A`)","('A)","('A`)"},   b
q(*s=__TIME__;extern void w(){G(g,*o)for(;g-- ;);}extern void x(){}extern void y(){}static void z (char*p){for(;(*d=*p++)!=0;d++)*d-=061*(59==*d||*d==81);}int main(){char N[]="<;iQ=/*do<;dQ=ook8?boc;aQ=odr8>oc;_Q<ox8>oc" ";^Q<d|8=o;]Q<dj8<Pk8<c]'?;QQdi8?P'Q)d8<9`8?c;Qdh8=P']Q<`c8>PQ9_8" ">b;og8=''`Q<`b8?'QQ9_8?c;dPe8dQa8<P]Q<``8=;'f8>QQ`]8?ocQQ_8=''_Q`8aQ" "CYOUQWIN!]Q=;of8BQQ)88bc]QA98P'Qo]8>oQQ_8CP;QQ98b`_8@P8(Q`]'^Q=`']QB)88" "bQQ]`8J;QQ`88bc99bd(`8iQ@''QQo^8E'`8c;QQ'Q``8?QQ`'kQ<o]8B9PQQ`';_Q<`_8<cbQ" "<o_Q<o_QBdo`QQ';`Q=9`]8=bobQ_o_Q<o]8=';bQC(88cQ`bcgQ>oP']8<;cQ>98)^Q?''oc`Q>" "oc']Q]8<;cQ>`8bbQA``QQ''`Q?88P;dQ=`)nQ?*/;;" ;G(Z,60*(60*(10**s+s[1])+s[3]*10+s[4])+s[6]*10+s[7]-1933008 )G(l,(Z+86400-*o)%86400)G(M,o[3] *17+o[4]*11) G(O,(&x-&w)-(&y-&x)?1:0)G( m,*o)G(n,m)G(i,0)G(j,O)if(M>197)for( p=N;*p; )if(*p>92){*N=p[1 ];N[1] =0;for( O=*p++-90;0<O--;z( N));p++;}else{ s= p;for(O= *p++-59;O--;p++) p[-1]=*p;p[-1]=0;z(s);}else{ if(M==0){*o=Z;l=0; }if(o[O+3]&&o[ O+1]+(O?3:5 )>l)Z=O;else++o[O+3];o[O+1] =l; if(l<60)d+= sprintf(d,"#include<stdio.h>" "\12#define G(g,o)  int  g=o;\n#d" "efine  \161(b" ")int\40o[]={%d,%d,%d,%d,%d};char" "*p=#b,P[9999],*d=P,*e[]=" "{\"%s\", \"" "%s" "\",\"%s\",\"%s\"},   b\nq(%s)\n" ,*o,o[01],o[2],o[3], o[4] ,e[3],e[1], e[2],*e,p);z("/*;; ");for(i=0; i++<18 ;z(";"))for(j=0;j++<11;n=(n*193+287) %384 ){m=(97+(67*m ))%198;for (O=0;O++<n%03;z("Q") );s=d;for(z(e[ ( n/3)&3]);m<M &&s-d;*s++ =040);}if(l<60) {for (z(";Time:Q") ;(l++<60);z ("#"));for (z(";Heca" "t" "eQII:" "Q") ;o[3 ]++ <=24;z("#"));z (Z?"":"Q(j" "a" "m" "me" "d" ")");for(z( ";GlockQ18" "C:" "Q");o[4]++< 25;z("#") );z( Z- 1? ";":"Q(jam" "med);") ;} else z(";" ";Gam" "eQover." ";;" );for (O= 0;O <77;O ++) z("Q");z( "*" "" "/" );} puts (P);; return+0;})
/*

 ('A`)       ('A)


       ('A`)
                                        ('A)       (A`)


                                               ('A)

               (A`)


                      (A`)
                                 (A`)                 ('A`)


                               ('A)


Time: ########
Hecate II: #########################
Glock 18C: #######
                                                                             */

               /*oooooooooo
          oo88888888888888888boc
       od888888888888888888888888oc
     o888888888888888888888888888888oc
    d8888888888888888888888888888888888o
   d8888888888888888P88888888888888888c'''
  d888888888888888P' )88888888889888888c
 d88888888888888P'   `888888888P 988888b
o8888888888888''      `88888888'  988888c
dP88888888888          8888888P   `888888
'888888888888  `888oc  88888''     888888       YOU WIN!
o888888888888  )88bc   98P' o888o  88888P
  98b`88888P8( `'''    `'   )88b  ]888888
  `88bc99bd(`8               ''  o8888'`8c
  ' `888888  `'                 o8889P  `'
     `88888c        o     o     do`  '
      9`888bo        ooooo     o888'
        (88c `bc             oP'888
         98)    ''oc      oc'   888
         `8b        ``  ''      88P
          `)                    */


```
{% endraw %}
