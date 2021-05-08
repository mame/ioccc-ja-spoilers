---
id: 2012/omoikane
year: 2012
order: 9
authors: "Don_Yang"
file: 2012/nyaruko
orig_url: "https://www.ioccc.org/2012/omoikane/nyaruko.c"
hint_url: "https://www.ioccc.org/2012/omoikane/hint.html"
title: "IOCCC 2012: Most surreptitious"
award_ja: "もっともこっそり"
---

## 動作

入力データを暗号化するツール。

"Hello, world!"を暗号化する。

```
$ gcc -o nyaruko nyaruko.c

$ echo "Hello, world!" | ./nyaruko
#ifdef/*
'true' or q{
exec head -8 $0
};for(open$O,$0;<$O>;print if$f){$f|=/^$/;}q{*/q
86U,790209315U,1074616390U,4163682830U,1210174169U,3105916746U,
425026959U,2820849411U,9834884U,2559977918U,973842364U,1231255554U,
#endif/*}||1;
__DATA__ */

#ifndef q
#define q
#include<stdio.h>
typedef unsigned int _;_ K[]={
#include __FILE__
#undef q
0},L,O,l[256],I[256],n,y,a,r,u,k,o;_*x(){if(!L--){y+=++a;for(o=0;o<256;y=l[o++]
=I[255&(k>>10)]+u){n^=(o&1)?n>>((o&2)?16:6):n<<((o&2)?2:13);u=I[o];k=I[o]=I[255
&(u>>2)]+(n+=I[(o+128)&255])+y;}L=255;}return&l[L];}_*X(){for(O=0;256>O;I[O++]=
0);for(O=0;sizeof(K)/sizeof(_)>O;O++)I[O&255]^=K[O];for(n=y=a=L=O=0;O<1<<24;++O
)x();r=O=0x0;return&O;}char*S,s[]="KfWWw|Z};fRo?JtJaV<x4@*?R?&JV1.s{Fyj2_;khB1"
"xQ5oxm~mS@B|(pa>oRURonB}h@o?)d.X)NSTIUCz7@%z*0wS*bRReOv(i-/RFPc%tnjnulyaqnxec"
"x_lu`";int main(){X();for(S=s+*K;*S>37;){for(o=0;o<5;o++)r=r*85+(83+*S++)%89;r
^=*x();for(o=0;o<4;o++){s[O++]=r&255;r>>=8;}}return!fwrite(s,O-*S%5,1,stdout);}
#endif
```

コードのようなものが出てきて、これに元テキストが暗号化されている。
空行の前半がキーで、後半がデータ。
エディタで切り分けてもよいが、次のようにするとキーとデータが取り出せるようになっている。

```
$ echo "Hello, world!" | ./nyaruko > output.c

$ bash output.c > key.c

$ perl output.c > data.c
```

復号するには、key.cとdata.cを結合してコンパイル・実行する。
結合順序はどちらでも良い。

```
$ cat data.c key.c > decode.c

$ gcc -o decode decode.c

$ ./decode
Hello, world!
```

なお、data.cは単体で実行できるが、その場合はダミーのメッセージが出てくる。

```
$ gcc -o data data.c

$ ./data
The chaos that always crawls up to you with a smile, Nyarlathotep
```

また、nyarukoの第1引数にシードファイルを与えることで、動作を決定的にできる（指定しない場合/dev/urandomを使用する）。

## 解説

任意の入力データを80カラムのテキストに変換する。特徴は次の通り。

* テキスト化はuuencodeやbase64より効率が良い
* [ISAAC](https://en.wikipedia.org/wiki/ISAAC_%28cipher%29)による暗号化
* 出力はCとbashとperlのpolyglot

元ファイルの形状は『[這いよれ! ニャル子さん](https://ja.wikipedia.org/wiki/%E9%80%99%E3%81%84%E3%82%88%E3%82%8C!_%E3%83%8B%E3%83%A3%E3%83%AB%E5%AD%90%E3%81%95%E3%82%93)』のキャラクター、ニャル子。
[クトゥルフ神話](https://ja.wikipedia.org/wiki/%E3%82%AF%E3%83%88%E3%82%A5%E3%83%AB%E3%83%95%E7%A5%9E%E8%A9%B1)を元ネタとしたライトノベルで、ニャル子は[ニャルラトホテプ](https://ja.wikipedia.org/wiki/%E3%83%8A%E3%82%A4%E3%82%A2%E3%83%BC%E3%83%A9%E3%83%88%E3%83%86%E3%83%83%E3%83%97)となっている。

ニャルラトホテプは「這い寄る混沌 (The Crawling Chaos)」と呼ばれる。
混沌といえば乱数生成器。
乱数生成器といえば[ワンタイムパッド](https://ja.wikipedia.org/wiki/%E3%83%AF%E3%83%B3%E3%82%BF%E3%82%A4%E3%83%A0%E3%83%91%E3%83%83%E3%83%89)暗号化、とのこと。

data.c単体で実行したときのメッセージはニャル子のキャッチフレーズ「いつもニコニコあなたの隣に這いよる混沌、ニャルラトホテプ、です！」の英訳。

[spoiler.html.gz](https://www.ioccc.org/2012/omoikane/spoiler.html.gz)が添付されており、開くと開発の様子のスクリーンキャストが再生される。
一旦きれいなコードで書いてから、難読化してアスキーアート化するまで3時間半の動画。
一発でアスキーアートに収まるとは思えないので、実際の編集を録画しただけのものなのかは真偽不明だが、単純に面白い。
こういう形式でネタバレが添付された事例は初。

IOCCCは匿名審査だが、作風から作者は明らか（アニメキャラのコード形状や、プログラムをキャラ名で呼ぶ作者コメントなど）なので、それでも採択されるのは採択せざるを得ないクオリティであるということで、これをコンスタントに出せるのはすごい。
