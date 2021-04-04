---
id: 2001/herrmann2
year: 2001
order: 8
authors: "Immanuel_Herrmann"
orig_url: "https://www.ioccc.org/2001/herrmann2.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2001/herrmann2.hint"
title: "IOCCC 2001: Most eye-crossing"
award_ja: "もっとも寄り目"
---

## 動作

[ランダム・ドット・ステレオグラム](https://ja.wikipedia.org/wiki/%E3%82%B9%E3%83%86%E3%83%AC%E3%82%AA%E3%82%B0%E3%83%A9%E3%83%A0)の生成器。

```
$ gcc -m32 -include stdlib.h -include stdio.h -include time.h -include unistd.h -o herrmann2 herrmann2.c

$ ./herrmann2 < herrmann2.ioccc
A}a!5qifDWhQn cA}a!5qifDWhQn cA}a!5qifDWhQn cA}a!5qifDWhQn cA}a!5qifDWhQn cA}a!
_FPb VT\NAOxdT%_FPb VT\NAOxdT%_b VT\NAOxdTor%_b VT\NAdTor%_b VT\N#QAdTor%_b VT\
s6C^yd3c6#cyb'Gs6C^yd3c6#cyb'Gs^yd3c6#cyb'B(Gs^yd3ccyb'B(Gs^yd3ccyb~w'B(Gs^yd3c
aJ6.CwbHgSI:G\ZaJ6.CwbHgSI:G\ZaJ6.bHgSI#V:G\ZaJ6.bSI#V:G@4\ZaJbSI#V:7SG@4\ZaJbS
7wKv|r9"q.c:Do]7wKv|r9"q.c:Do]7wKv9"q.c9R:Do]7wKv9.c9R:$"Do]7wK.c9R:&J$"Do]7wK.
9K'pKZ1_obsd.ga9K'pKZ1_obsd.ga9K'p1_obs!"d.ga9K'p1bs!"dcp.ga9K'bs!"d-Hcp.ga9K'b
+R8ekgfjk1!45r_+R8ekgfjk1!45r_+R8efjk1!m$45r_+R8ef1!m$4=]5r_+R81!m$4f.=]5r_+R81
?qv"sued#+lU@R??qv"sued#+lU@R??qv"ed#+l)7U@R??qv"e+l)7U'q@R??qv+l)7UH)'q@R??qv+
&[{bF||!a,@S#BG&[{bF||!a,@S#BG&[{b|!a,@u)S#BG&[{b|,@u)S#)xBG&[|,@u)S4u#)xBG&[|,
LRFk[]oJ#xP[q0"LRFk[]oJ#xP[q0"Lk[]oJ#xP[q0o."Lk[]oJP[q0o."Lk[]oJP[q#Q0o."Lk[]oJ
7D"7cG-iP&{DRNg7D"7cG-iP&{DRNg77cG-iP&{DRN;*g77cG-iP&RN;*g77cG-iPE,&RN;*g77cG-i
QE"""t/$d:%3QF2QE"""t/$d:%3QF2QE"""t/$d:%3QF2QE"""t/$d:%3QF2QE"""t/$d:%3QF2QE""
e*Yot(spIF?1_FSe*Yot(spI1_FSe*Yot(hwspI1_FSeot(hwspI1_xjFSeot(hwI1_xjFSeotvz(hw
\#|A>"QlHaSO;@D\#|A>"QaSO;@D\#|A>"@4QaSO;@#|A>"@4QaSO;2i@#|A>"QaSO;2i@#|A>XN"Qa
w8qK}fEh]=F^:d|w8qK}f]=F^:d<4|w8qK}f]=F^:4|w8qKfa}f]=F^:4|w8qa}f]=Fu7^:4|w8qa}f
2.XSLlf3E2,Z%WX2.XSLlE2,Z%kyWX2.XSLlE2,Z%WX2.X?GSLlE2,Z%WX2.XSLlE28e,Z%WX2.XSLl
&RG#lXiNK~`ZW2$&RG#lXK~`ZWDu2$&RG#lXK~`ZW2$&RG7g#lXK~`ZW2$&RG#lXK~(C`ZW2$&RG#lX
B-x{vo;>(}DXBDEB-x{vo(}DXB{+DEB-x{vo(}DXBDEB-xpD{vo(}DXBDEB-x{vo(}*ODXBDEB-x{vo
~aa $W8k_X.jN'a~aa $W_X.jN??'a~aa $W_X.jN'a~aa|D $W_X.jN'a~aa $W_X:>.jN'a~aa $W
y]b<Vj.zu]wT<wXy]b<Vju]wT<wp-Xy]b<Vju]wT<-Xy]b<AMVju]wT<-Xy]bMVju]wcMT<-Xy]bMVj
82TvNqpp,/jiq%=82TvNqp/jiq%=82TvNq]3p/jiq%2TvNq]3p/jiq9P%2TvNqp/jiq9P%2TvNm1qp/
"'&Xw1yEtD[$yOP"'&Xw1yEt$yOP"'&Xw1hAyEt$yOP"Xw1hAyEt$yAtOP"Xw1hAt$yAtOP"XwP)1hA
\@+yz>0K)>M0E#%\@+yz>0K)>M0E#%\@+yz>0K)>M0E#%\@+yz>0K)>M0E#%\@+yz>0K)>M0E#%\@+y
```

これを寄り目で見ると"IOCCC"が浮き出す。
[herrman2.ioccc](https://www.ioccc.org/2001/herrmann2.ioccc)が入力データ。

次はカップの例。こっちは比較的見やすい。
[herrman2.cup](https://www.ioccc.org/2001/herrmann2.cup)が入力データ。

```
$ ./herrmann2 < herrmann2.cup
Wj$'e&Vo,YA0Qc$m$kWj$'e&Vo,YA0Qc$m$kWj$'e&Vo,YA0Qc$m$kWj$'e&Vo,YA0Qc$m
iWE90<udtELa^$Mb)3iWE90<udtELa^$Mb)3iWE0<udtELia^$Mb)3iWE0<udtELia^$Mb
_ r6B#g&%V'm=^0SlL_ r6B#g&%V'm=^0SlL_r6B#Fg&V'm=Q^0SlL_r6B#Fg&V'm=Q^0S
Bkz$K|Q+#btb_eu~h^Bkz$K|Q+#btb_eu~h^Bz$K"|Q+#tb_jeu~h^Bz$K"|Q+#tb_jeu~
2)VLef R1C!P,yTTv$2)VLef R1C!P,yTTv$2VLe`f R1!P,yyTTv$2VLe`f R1!P,yyTT
cRYC8L@~+Bf:L=f/"ccRYC8L@~+Bf:L=f/"ccRY8L^@~Bf3:L=f/"ccRY8L^@~Bf3:L=f/
'_c4V5eM6FDyyz;/H['_c4V5eM6FDyyz;/H['_c4VeM6.FDyyz;/H['_c4VeM6.FDyyz;/
P}ukG0RV242B8o&IF9P}ukG0RV242B8o&IF9P}ukGRV2042B8o&IF9P}ukGRV2042B8o&I
qOV6GM/b]W>h(9[palqOV6GM/b]W>h(9[palqOVGM/b]W>Ah(9[palqOVGM/b]W>Ah(9[p
5{UH<m8?5^XEP&{dMG5{UH<m8?5^XEP&{dG5{UH<m8?5^XEP&{dsG5{UH<m8?5^XEP&{ds
0"HKjMdD?F.]\*3%F}0"HKjMdD?F]\*3%F}0"HKjMdD?F]\*3%F}0"HKj=MdD?F]\*3%F}
f3x<XGBR)ov| xBK`lf3x<XBRov| xBK`lf3x<XBRov| xBK`lf3x<XBRov|1 %xBK`lf3
,T0i1;y3^uMB)D\_k~,T0i1y3^MB)D\_k~,T0i13^MB)D\/_k~,T0i13^MBt)Do\/_k~,T
&nl{.6YzD\%uln(%f8&nl{.Yz\%uln(%f8&nl{Yz\%uln(a%f8&nl{Yz\%ul\nc(a%f8&n
$b(`?p]NeJQQ7J_J%Z$b(`?]NJQQ7J_J%Z$b(?]NkJQQ7J_J%Z$b(?]NkJQQa7_J_J%Z$b
bKLgQ3 3l`4LhrlYP;bKLgQ 3`4LhrlYP;bKLQ 3<`4LhrlYP;bKLQ 3<`4LzhjrlYP;bK
m/5MZ7&Cxe&B/ms?k$m/5MZ&Ce&B/ms?k$m/5Z&C,e&B/ms?k$m/5Z&C,e&BL/8ms?k$m/
Y3+CiX['SFtcY@;pC^Y3+CiX'StcY@;pC^Y3+CX'StcY@;gpC^Y3+CX'Stc&Ye@;gpC^Y3
*6P}U9"_f76v@Y`x5g*6P}U9"f7v@Y`x5g*6P}U"f7v@Y`Mx5g*6P}U"f7\vZ@Y`Mx5g*6
.3wI$;(kAjrW9m+Rlg.3wI$;(kArWm+Rlg.3wI$;(kArWm+Rlg.3wI$;6(%kArWm+Rlg.3
}-EWn>iShC+vV#@[;F}-EWn>iShC+v#@;F}-EWn>iShC+v#@;F}-EDWZn>iShC+v#@;F}-
.5/G#:zp".r <5T(S?.5/G#:zp".r <5(S?5/G#:zp".r <5(SX?5=/G#:zp".r <5(SX?
bd1:dOr}u4X!IgFJ >bd1:dOr}u4X!IgFJ >d1:Or}u4X!;Ig"FJ >d1:Or}u4X!;Ig"FJ
L+ h@QmsmD.N)=hjlXL+ h@QmsmD.N)=hjlXL+ @QmsmD.eN)=hjlXL+ @QmsmD.eN)=hj
_i>`1$'[$Es#r~#X?R_i>`1$'[$Es#r~#X?R_i>`$'[$EDs#r~#X?R_i>`$'[$EDs#r~#X
0@h<nnYTYF*=&t[f&_0@h<nnYTYF*=&t[f&_0@h<nYTYFk*=&t[f&_0@h<nYTYFk*=&t[f
^c1Rd!QgZm7~}Xg:DS^c1Rd!QgZm7~}Xg:DS^cRd!QgZm7~p}Xg:DS^cRd!QgZm7~p}Xg:
v-7!G:r$"u`jTB{''zv-7!G:r$"u`jTB{''zv-!G:r$"u`jXTB{''zv-!G:r$"u`jXTB{'
kRF$QBY6\ziKqsbs<}kRF$QBY6\ziKqsbs<}kRF$BY6\zciKqsbs<}kRF$BY6\zciKqsbs
=|Zzg/=`7AXl.+1/YS=|Zzg/=`7AXl.+1/YS=|Zz/=`7AeXl.+1/YS=|Zz/=`7AeXl.+1/
o-`VXSH<Da7%{1_vuoo-`VXSH<Da7%{1_vuoo-`VSH<Da27%{1_vuoo-`VSH<Da27%{1_v
S$S-p^8"jrRP_`249bS$S-p^8"jrRP_`249bS$S-^8"jr\RP_`249bS$S-^8"jr\RP_`24
R$;f)7wf+mV:BZnLHJR$;f)7wf+mV:BZnLHJR$;)7wf+mVd:BZnLHJR$;)7wf+mVd:BZnL
H6Wzf5[uIrU&BY>*`RH6Wzf5[uIrU&BY>*`RH6zf5[uIrU&~BY>*`RH6zf5[uIrU&~BY>*
GZjzu*RaVz,;CBp<'&GZjzu*RaVz,;CBp&GZjzu*RaVz,;CBp&GZw|jzu*RaVz,;CBp&GZ
OgSR+*m2j@./wx*m \OgSR+*m2j@./wx*\OgSR+*m2j@./wx*\OgOVSR+*m2j@./wx*\Og
U\ou{]2#c(!0lQ_t[MU\ou{]2#c(!0lQ_MU\ou{]2#c(!0lQ_MU\$Dou{]2#c(!0lQ_MU\
j3Sb)[N*8}]jWM^T+pj3Sb)[N*8}]jWM^T+pj3Sb)[N*8}]jWM^T+pj3Sb)[N*8}]jWM^T
```

使用する文字は設定可能。

```
$ ./herrmann2 "234 84 045 5 6765 7487 65190 84 656 254 12 43931 818 0 6542 341 45 567 76967 7244 606 976567 895 81898 095 68678 1843 4650547 565980691 389 04974" < herrmann2.ioccc
234 84 045 5 67234 84 045 5 67234 84 045 5 67234 84 045 5 67234 84 045 5 67234
65 7487 65190 865 7487 65190 867487 65190 4 867487 650 4 867487 66550 4 867487
6 254 12 43931 6 254 12 43931 654 12 4393181 654 12393181 654 123938 181 654 12
0 6542 341 45 50 6542 341 45 50 65 341 6745 50 65 1 6745 7 50  1 674695 7 50  1
67 7244 606 97667 7244 606 97667 74 60656 97667 740656 7 97667 0656 897 97667 0
5 81898 095 6865 81898 095 6865 818 09578 6865 8189578  16865 89578 84 16865 89
3 4650547 565983 4650547 565983 46547 50665983 465 5066915983 4 5066 3915983 4
89 04974234 84 89 04974234 84 89 07423404 84 89 073404 5 84 89 3404 5 5 84 89 3
6765 7487 651906765 7487 651906765487 6 8519067654 6 8514 90674 6 856514 90674
6 254 12 43931 6 254 12 43931 654 12 4393181 654 12393181 654 123938 181 654 12
0 6542 341 45 50 6542 341 45 50542 341 45 6750542 3415 6750542 34 715 6750542 3
6967 7244 606 96967 7244 606 96967 7244 606 96967 7244 606 96967 7244 606 96967
76567 895 8189876567 895189876567  08951898767  0895189598767  05189598767 6  0
8678 1843 465058678 18 465058678 1478 4650678 1478 465 50678 18 465 50678 6518
980691 389 049798069189 04942798069189 04279806349189 042798049189  80427980491
4 045 5 6765 744 045 6765 87744 045 6765 744 0 645 6765 744 045 675165 744 045
90 84 656 254 190 84 6 2542  190 84 6 254 190 4384 6 254 190 84 6 93254 190 84
1 818 0 6542 341 818 6542 1 341 818 6542 341 84518 6542 341 818 65 542 341 818
67 76967 7244 667 769 724406 667 769 7244 667  9769 7244 667 769 776244 667 769
567 895 81898 0567 8981898 950567 898189850567  6898189850567689818869850567689
78 1843 465054778 184365054778 184 53650548 184 5365056548 184365056548 1898436
0691 389 0497420691 389 97420691 33489 974201 33489 97 84201 334 97 84201 4 334
045 5 6765 7487045 5 6765 7487045 5 6765 7487045 5 6765 7487045 5 6765 7487045
```

## 解説

これはあまり有名でないが、とにかく強烈な作品。
なんと、コード自体がステレオグラムになっている。

これを実現するために、各行に同じようなコード断片が6回ほど繰り返し出現するようになっている。
それを79x23に収めている。バイト数的には1840バイトだけれど正味使えるサイズは450バイト程度。
しかも、コメントで逃げることなく、繰り返しても動作するように慎重に書かれている。

このコードは手作業で調整されているのかと思いきや、次のコマンドで自動生成しているとのこと。

```
./herrmann2 \
'char*d,A[9876];e;b;*ad,a,c;  tw,ndr,T; wri; ;*h; _,ar  ;on;'\
' ;l ;i(V)man,n    {-!har  ;   =Aadre(0,&e,o||n -- +,o4,=9,l=b=8,'\
'!( te-*Aim)|(0~l),srand  (l),,!A,d=,b))&&+((A + te-A(&(*)=+ +95>'\
'e?(*& c_*r=5,r+e-r +_:2-19<-+?|(d==d),!n ?*d| *( (char**)+V+), ('\
'  +0,*d-7 ) -r+8)c:7:+++7+! r: and%9- 85! ()-(r+o):(+w,_+ A*(=er'\
'i+(o)+b)),!write,(=_((-b+*h)(1,A+b,!!((((-+, a >T^l,( o-95=+))w?'\
'++  &&r:b<<2+a +w) ((!main(n*n,V) , +-) ),l)),w= +T-->o +o+;{ &!'\
'a;}return _+= ' < herrmann2.ioccc
```

このコマンドの引数は有効なC言語コードではない。
ステレオグラムにしたときに有効なCコードになるよう、試行錯誤で作られた生成方法だと推察される。

入力データは小文字アルファベットで書く。`a`が最も近く、`z`が最も遠くになるように生成される。
上記の通り、使用する文字は設定可能。

`argv`が`int`型として扱われるので、`-m32`が必要。
`main (n,V)`の後に`long V;`を書き足すのでもよい。

賞名のeye-crossingは「寄り目」だが、「酔っ払った」の慣用表現でもある。

---

興味深かったので詳細に分析した。元コードを次のように簡略化して、骨子だけ取り出した（ひょっとしたら誤った簡略化をしている可能性もある）。

* 評価されないコードや無意味なコードを除去した
* 乱数のseedとしている`time(0)`を`0`に固定した
* コマンドライン引数で文字を指定する機能を取り除いた
* `read`や`write`を`getchar`と`putchar`に置き換えた
* ポインタ参照を配列参照にした
* 再帰呼び出しを`while`に、分岐を`if`にした
* グローバル変数をローカル変数にした
* インデントをまともにし、コメントを追加した

ここまで来るとコードの正体が明らかになるが、それでもこの作品を自分で作れる気はしない。すばらしい。

```
int main()
{
    int a=8,r;
    char A[9876], e;

    srand(-1);

    while ((e = getchar()) != EOF) {
        if (e < 95) {
            /* newline */
            r = 0;
            A[a] = e;
        }
        else if (e > 95 + r) {
            /* new letter */
            r++;
            A[a] = rand() % 95 + 32;
        }
        else {
            /* repeat the pattern */
            r = e - 95;
            A[a] = A[a-r];
        }
        putchar(A[a++]);
    }

    return 2;
}
```
