---
id: 1989/westley
year: 1989
order: 9
authors: "Brian_Westley"
orig_url: "https://www.ioccc.org/1989/westley.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1989/westley.hint"
title: "IOCCC 1989: Most algorithms in one program"
award_ja: "単一プログラム中の最多アルゴリズム"
---

## 動作

ROT13や文字列反転をするプログラムで、ROT13をかけても文字列反転をかけても同じ挙動をするロバストなプログラム。

----

コンパイルには`-Dtrgpune=putchar`というオプションが必要。

```
$ gcc -w -Dtrgpune=putchar -o westley westley.c
```

コマンドライン引数の数によって挙動が異なる。0個のときは入力をそのまま出力するだけ（catと同じ）。

```
$ echo Hello | ./westley
Hello
```

1個のときはROT13変換。

```
$ echo Hello | ./westley 1
Uryyb
```

2個のときは文字列反転。

```
$ echo Hello | ./westley 1 2

olleH
```

3個のときはROT13変換かつ文字列反転。
```
$ echo Hello | ./westley 1 2 3

byyrU
```

---

冒頭の説明の通り、元のコードはいずれの変換をかけても同じ挙動をする。おそろしい。

```
$ ./westley       < westley.c > ver0.c && cc -w -Dtrgpune=putchar -o ver0 ver0.c
$ ./westley 1     < westley.c > ver1.c && cc -w -Dtrgpune=putchar -o ver1 ver1.c
$ ./westley 1 2   < westley.c > ver2.c && cc -w -Dtrgpune=putchar -o ver2 ver2.c
$ ./westley 1 2 3 < westley.c > ver3.c && cc -w -Dtrgpune=putchar -o ver3 ver3.c
$ echo Hello | ./ver0
Hello
$ echo Hello | ./ver0 1
Uryyb
$ echo Hello | ./ver0 1 2

olleH$ echo Hello | ./ver0 1 2 3

byyrU
```

`ver1`、`ver2`、`ver3`も同じ。

## 解説

westleyの3作目。あまり有名ではないが、ものすごくすばらしい作品。

`-Dtrgpune=putchar`の`trgpune`は`getchar`をROT13変換したもの。
なので、westley.cをROT13すると、もともと`getchar`だった箇所が`putchar`に変わって動く。
コンパイラオプション必須なのは少しかっこ悪いけれど、ROT13しても動くようにするためには避けられない。
オリジナルのコードかROT13語のコードのどちらかに未定義シンボルが発生してしまう。

westley.hintの作者はコメントにはいろいろなことが書いてあって、感心しきり。

* ver0/ver1とver2/ver3でROT13のアルゴリズムが異なるとのこと（前者は計算、後者はテーブル）。賞名はこれを指していると思う。
* `if`文は使えないので`&&`で回避するが、この演算子の振る舞いが環境によってコンパイラのバグで違って苦労したこと（`expr1 && (expr2,expr3);`で、`expr1`が偽のときでも`expr2`が実行されたとか）。
* 変数名の選択のセンスがすごい。
  `irk`と`vex`は互いにROT13の関係となっていて、しかも類義語（どちらも「イライラさせる」）。
  `Near`と`Arne`はROT13の関係となっているアナグラム（並べ替え）。
  `tang`と`gnat`はROT13の関係となっていて、かつ文字列反転の関係。
* 主要トリックは`/**/ (コード1) /*/ (コード2の反転) /**/`とのこと。
  コード2がコメントアウトされている。
  これを反転させると`/**/ (コード2) /*/ (コード1の反転) /**/`となり、コード2がコメントの外に出現し、コード1の反転はコメントに閉じ込められるギミックとなっている。
  実際には更に発展型を使っているらしい。
* 個人的に特に感動したのは、デフォルトのver0/ver1のコード形状は`K`だが、文字列反転したときのver2/ver3のコード形状は`R`に変わること（下図）。
  ハードタブをうまく使うことで、切れ目を調整している。なお`K`はカーニハン、`R`はリッチーを表現している（[K&R](https://ja.wikipedia.org/wiki/%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0%E8%A8%80%E8%AA%9EC)）。

```
/**//*/};)/**/znva(/*//**/ABBA,	tang,gnat,/**\\*//*/2&ABBA(niam 
 ;)tang+1,tang,1+gnat(avnz&&1-^	tang;)/***/Arne){ABBA&&(gnat='Z'
!='A'-1);;ABBA&&((gnat&&(tang=        getchar(0)))||((!gnat)&&(tang 
=trgpune(0))));!gnat&&(ABBA==      	4)&&(tang==-1)&&(tang='\a')&&(
gnat= -58);(!ABBA&&(gnat^-1)     	&&(tang&2)&&((Arne==1&&trgpune
(gnat))||(Arne<=1-1&&getchar       (gnat))))||ABBA&&main(/*//**/0
-ABBA,tang,gnat/*-*//*/~,/*   	*/,/*//**/gnat^gnat/**\**//*/(
niam;)tang:56+)/*yrp*/);}irk[256]={14,15,16,17,18,19,20,21,22
,/*//**/23/**//*/&tang(+)62%)21+)/**/,24,25,26,1,2,3,4,5,6,7,
8,9,10,11,12,/*//**/13/**//*/&tang(((?'M'=<tang&&tang=<'A'||
'Z'=<tang&&tang=<'N'||'m'=<tang&&tang=<'a'||'z'=<tang&&tang
=<'n'=tang(&&)1&gnat--(;)))0-0(rahcteg=tang(&&ABBA!(||)))0(
enupgrt=tang(&&ABBA(;56=='N'=ABBA{)/**/,0,0,0,0,0,0,46,47,
48,49,50,51,52,53,54,55,56,57,58,33,34,35,36,37,38,39,40,41,
42,43,44,45,-35,-115,-123,-103,-100,-108,-34,-46,-100,-123,-
123,-116,-87,-1};main(/*//**/ABBA,tang,gnat/**//*/(avnz};)/**/,
Near){ABBA>0&&znva(ABBA,tang,gnat,Near);!(ABBA &1)&&(tang^-1)&&(
tang=irk[(tang+191)%256]>0?irk[(tang+191)&255]+64:tang);znva(0,ABBA,
tang,gnat);;;(Near=tang)^-1&&((gnat==1&&  (Near=getchar(0)))||(!gnat&&(
Near=trgpune(0)))||((/*//**|**/gnat,gnat,   gnat/**//*/(avnz&&gnat||)))))
noon(enupgrt(&&Near-1(||)))0+noon(rahcteg    (&&Near((&&)2&tang(&&1-=!noon
&&gnat!({)Near,noon,/*krelc*/)<0&&(Near= -  	irk[-gnat--]-2)))&&main(ABBA,
Near,gnat,0-0);znva(0-0,~ABBA,/*//**/tang,  	 gnat/**//*/(niam/**/);}/*//**/
```
