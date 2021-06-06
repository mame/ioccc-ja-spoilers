---
id: 2018/yang
year: 2018
order: 14
authors: "Don_Yang"
orig_url: "https://www.ioccc.org/2018/yang/prog.c"
hint_url: "https://www.ioccc.org/2018/yang/hint.html"
title: "IOCCC 2018: Most shifty"
award_ja: "もっともずる賢い"
---

## 動作

テキストを左回転するツール。

次の例で示す。

```
$ cat tmp.txt
AAAAA
 BBBB
  CCC
   DD
    E
```

実行のたびに左回転していく。

```
$ gcc -o left prog.c

$ ./left < tmp.txt
ABCDE
ABCD
ABC
AB
A

$ ./left < tmp.txt | ./left
E
DD
CCC
BBBB
AAAAA

$ ./left < tmp.txt | ./left | ./left
    A
   BA
  CBA
 DCBA
EDCBA

$ ./left < tmp.txt | ./left | ./left | ./left
AAAAA
 BBBB
  CCC
   DD
    E
```

---

もとのソースコードを左回転させる。

```
$ cat prog.c | ./left
#include<stdio.h>//%i//;/*]u;i""""""""e##
#include<stdlib.h>//nuii~~,[pnofbmo2>exdi
int*n,u,k,o,X,x,//|*t)NUKO?qutvtxfh*/ften
p,d,q=1;char*O;int// )1(=q/*t ju!tt<1=efc
main(){O=NULL;if(0!=q////n[1sN"/jt!s,tril
-q){puts("Yuuri");//=///////,(}"t/bfvunnu
}else{while(EOF/////     /////;,!"su,e ed
!=(o=getchar())///          ////c,fv)ji e
){if(!x){if(d+//              //""!sopnN<
2>p&&!(n=(int//                //Sxo./t(s
*)realloc(n,///                 /"p!:i Ut
sizeof(int)///                  //s14?q,d
*(p=p?p*2:2//                    /u<@\;Ki
*1024)))){//                     /i~o1c,o
return-1;}//                      "".3hO.
n[d++]=k;//                       /,:ja)h
}x=0;if(//                        /"2or >
o-10){if//                        //@u*m/
(k>=u&&1//                         /v!na/
&&!(O=(//                          /=o,i}
char*)///                          "1-un;
realloc//                           @v[(0
(O,u=u//                            q<6)+
?u*2:8//                       /   "vj]{n
*8))){//                      /////!uo[fr
return//                      /////Idu1ou
-1;}O[//                      //.[[vi!4rt
k++]=o//                      //[#[nbn0(e
;x=k-n//                      //pu~bsb]nr
[d-1];//                      //#^)o\j==}
if(x>X//                      //akptxo{K;
)X=x;}//                     //[]oh!2)";)
}n[d]=//                     //_)uub9*H*"
k;for(//                     //]:n]s)|jno
o=0;o<X//                    //|/aTf6xs;k
;o+=1,///                    /vUU#f!_im-u
putchar//                   //vSOhFt)jt-N
(0xa)){//                   //\TK`:dom(*"
for(u=d//                   //OAO#jb,f!n/
;u-->0;)//                 //[JMYiQs3)M+*
putchar(//                 //=UURb[z*)b+]
o>=n[u+1//                 //=OU\du/\ot)a
]-n[u]?///                 //=HH^#h"5>u;9
32:O[o+n//                 //=SS^^f,2h!U8
[u]]);}}///                //]/\,]h"&fU(1
return+0;//                ///////]J2upKc
}//nu[u[,//                 ///////o3dv)f
#if 0//h[//                       /f4is;f
*//*[/[ah//                       /e*b"rc
//]]g4i#o//                       /j+s,e[
0xX/n6ul#//                      //c1)"t]
7;[/h=ndu//                    ///!m;*$u8
;x/(k]ob]//                  ////C^f1*jr1
/ /fT+#e//                  ///[vC^!;?on0
/tri]+^#//                  //[i[C^u21d+2
>na{/up]//                  //8hjO^i;*m0)
hih)/[#//                   //zp#I^j.vv;c
. c()]_//                   //b#u>[""""}(
of n+n]//                   //_J^-o/////[
ieci+[//                    //]~]>]/////.
ddiand//     @@@            //]]u*/tni};0
tetm;)//    @   @          //ften enifed#
spa n;//    @   @          //*IUN//nruter
<ytx>5//    @   @          ////};)"otihC"
/ts;42//     @@@           //(stup-01-l=I
*;;]20//            2     ///s//{esle}}};
i01101//           51     //tt//01-I=l;)
un=01<0//                //u/u//I(rahctup
n i4;u==//               //*/p.NU//{)23-I
*t,x0;no)//             //n/{;//||l(fi{))
/n_0=0=();//           //N*)e+//)(rahcteg
ei,[nxu=(40///        //NU/]s+//=I(=!FOE(
d o](0(!r214////    ////**skl]//elihw{)q(
un,5r=rFa0-2+o////////un//t[e0//fi{)(niam
lrk2ouoOh1o0+=<k////-k[*!,ud}[NU//tni;l,I
ce,1f(fEc<=1n]k:0n;(-[]/=1p(;]//tni;q tni
ntu1{r;;tu+<[u=n:()rkd1]/////0& t enifed#
ix,[)o24e&und[k?0!0o;)01*****[iun//nretxe
#endif//g&)??],n,:=f ;//>h.oidts<edulcni#
```

この出力は、テキストを右回転するソースコードになっている。

```
$ cat prog.c | ./left > right.c

$ gcc -o right right.c

$ ./right < tmp.txt
    A
   BA
  CBA
 DCBA
EDCBA
```

---

元のコードを2回左回転させると、メッセージが出てくる。

```
$ cat prog.c | ./left | ./left > msg0.c

$ gcc -o msg0 msg0.c

$ ./msg0
Girls' Last Tour
```

---

元のコードを3回左回転（＝1回右回転）させると、行頭のスペースを消す（シフトする）コマンドになる。

```
$ cat prog.c | ./right > shift.c

$ gcc -o shift shift.c

$ ./shift < tmp.txt
AAAAA
BBBB
CCC
DD
E
```

---

元のコードには周囲に欠けている部分が2箇所ある。
これはシフトによってずらすことができる。
ずらすだけでは動作は変わらないが、ずらしてから左右に回転させることでメッセージが出るようになる。

```
$ cat prog.c | ./shift | ./left > msg1.c

$ gcc -o msg1 msg1.c

$ ./msg1
Yuuri

$ cat prog.c | ./shift | ./right > msg2.c

$ gcc -o msg2 msg2.c

$ ./msg2
Chito
```

欠けている箇所は2箇所あるので、回転とシフトを賢く繰り返すことで、合計10個のメッセージが出てくるようになっている。
続きは解説の最後に。

## 解説

コード形状は[少女終末旅行](https://ja.wikipedia.org/wiki/%E5%B0%91%E5%A5%B3%E7%B5%82%E6%9C%AB%E6%97%85%E8%A1%8C)に出てくるキャラクター、ヌコ。
メッセージも少女終末旅行にちなんだものになっている。
"Girls' Last Tour"は「少女終末旅行」の英語、"Yuuri"と"Chito"は登場人物のユーリとチト。

おおよそ、4つの角に4つのコードが配置されている。
それぞれのコードの左上のコードが有効になり、右上は一行コメントで無効化、左下と右下は`/* */`または`#if 0 ... #endif`で無効化する、というのが基本的なテクニック（ただし一部のコード断片はその原則を外れていている）。
欠けた部分をシフトされている判定はさらに巧妙で、コメントで無効化される縁のあたりでコードが1文字だけ割り込んだり消えたりすることで実現している模様。

同作者のコード遊びが遺憾なく発揮されており、[[[2011/akari]]]({{ site.baseurl }}{% link 2011/akari.md %})以来の大作と言える。
同作者の常として、CRC32の埋め込み（最下行）とspoiler.htmlの添付がなされている。

賞名の"shifty"は「ずる賢い」という意味だが、シフト処理にかけている。

---

回転とシフトを組み合わせてメッセージを探すのは、木製のパズルの箱（[秘密箱](https://ja.wikipedia.org/wiki/%E7%A7%98%E5%AF%86%E7%AE%B1)？）を意識しているとのこと。

すべてのメッセージを洗い出すには、ヌコを逆さまにした状態で、口の位置にある`1`、`2`、`5`の3つの数字から2つを並べる組み合わせの6通りを列挙すればよい。
以下、Makefileに書いてある手順ですべてのメッセージを出す。

```
$ cat prog.c | ./right | ./shift | ./left > msg3.c

$ gcc -o msg3 msg3.c

$ ./msg3
Nuko
```

ヌコはprog.cに書かれているキャラクターの名前。
prog.cとmsg3.cの切り替えが実に巧妙。

```
$ cat prog.c | ./shift | ./right | ./shift | ./right > msg4.c

$ gcc -o msg4 msg4.c

$ ./msg4
... Humans are scary.
```

ヌコのセリフ「人間は怖い」

```
$ cat msg4.c | ./shift | ./right | ./shift | ./left > msg5.c

$ gcc -o msg5 msg5.c

$ ./msg5
Inedible things are worthless.
```

ヌコのセリフ「食えないものに価値はねえ」

```
$ cat msg5.c | ./right | ./right | ./shift | ./right | ./shift | ./right > msg6.c

$ gcc -o msg6 msg6.c

$ ./msg6
nui
```

ヌコの鳴き声「ぬい」

```
$ cat msg6.c | ./shift | ./right | ./shift | ./left > msg7.c

$ gcc -o msg7 msg7.c

$ ./msg7
#include<stdio.h>
int n,u;int main(){while((n=getchar())>0)u=.0+u+(n-93?n-91?u<0?putchar((5^(n+2))%123)*0:0:1:-1);return 0;}
```

最後のメッセージを出すためのプログラム。

```
$ cat msg7.c | ./right | ./right | ./shift | ./right | ./shift | ./right > msg8.c

$ gcc -o msg8 msg8.c

$ ./msg8
Raw is best.
```

これはちょっとわからなかった。
「生きるのは最高だったよね」の誤訳？

```
$ ./msg7 > msg9.c

$ gcc -o msg9 msg9.c

$ ./msg9 < prog.c
Should we turn back for today?
I wonder if we can go further tomorrow.
```

オープニングテーマ『動く、動く』の歌詞の冒頭、「今日はもう引き返そうかな 明日はもっと行けるかな」。
