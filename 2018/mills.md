---
id: 2018/mills
year: 2018
order: 15
authors: "Christopher_Mills"
orig_url: "https://www.ioccc.org/2018/mills/prog.c"
hint_url: "https://www.ioccc.org/2018/mills/hint.html"
title: "IOCCC 2018: Best of show"
award_ja: "最優秀賞"
---

## 動作

PDP-7/11のシミュレータ。

BSD 2.9を動かす例。1983年頃のOS。

{: .wrap }
```
$ gcc -DI='"rk05.bsd.fs"' -DA=4096 -DS=0173030 -DW=MAP_PRIVATE -DT= -DX=5 -DY=128 -DV=270 -DP='"89!>@@89T=@@89\"89DQ@K89$89Q1@H0@@@P@1@@"' -o prog prog.c

$ ./prog
>boot
```

ここでリターンを押す。

```
$ ./prog
>boot

40Boot
: 
```

ここで`rk(0,0)rkunix`と入力する。

```
$ ./prog
>boot

40Boot
: rk(0,0)rkunix

Berkeley UNIX (Rev. 2.9.1) Sun Nov 20 14:55:50 PST 1983
mem = 135872

CONFIGURE SYSTEM:
xp ? csr 176700 vector 254 skipped:  No CSR
rk 0 csr 177400 vector 220 attached
hk ? csr 177440 vector 210 skipped:  No CSR
rl ? csr 174400 vector 160 skipped:  No CSR
rp ? csr 176700 vector 254 skipped:  No CSR
ht 0 csr 172440 vector 224 skipped:  No CSR
tm 0 csr 172520 vector 224 skipped:  No CSR
ts 0 csr 172520 vector 224 skipped:  No CSR
dh ? csr 160020 vector 370 skipped:  No CSR
dm ? csr 170500 vector 360 skipped:  No autoconfig routines
dz ? csr 160110 vector 320 skipped:  No CSR
dz ? csr 160110 vector 320 skipped:  No CSR
dn 0 csr 175200 vector 300 skipped:  No autoconfig routines
vp ? csr 177500 vector 174 skipped:  No autoconfig routines
lp ? csr 177514 vector 200 skipped:  No CSR
Erase=^?, kill=^U, intr=^C
#
```

BSD 2.9が立ち上がった。

```
# ls
.cshrc       .profile     boot         hkunix       mnt          tmp
.login       2.9stamp     dev          lib          mullender.c  unix
.msgsrc      bin          etc          lost+found   rkunix       usr
```

[[[1984/mullender]]]({{ site.baseurl }}{% link 1984/mullender.md %})をコンパイル・実行する。

```
# cc mullender.c
# ./a.out
      :-)
```

Ctrl+Eでエミュレーションを抜けることができる。

## 解説

[PDP-7](https://ja.wikipedia.org/wiki/PDP-7)はUNIXが最初に動いたコンピュータで、その後継の[PDP-11](https://ja.wikipedia.org/wiki/PDP-11)は多くのUNIXで使われていた1970年代のコンピュータ。
PDP-7はまだ現代のコンピュータの常識が常識じゃなかった時代のもので、たとえば1ワードは18ビット。

このプログラムは、BSD 2.9の他に、[UNIX v6](https://ja.wikipedia.org/wiki/Version_6_Unix)（1975年頃リリース）や、PDP-7用のUNIX v0（1969年頃）も動くとのこと。
ただしライセンスの都合上、BSD 2.9がデフォルトになっている。

ブート時に出る`40Boot`は、ブートローダが環境をPDP-11/40と判定したという意味らしい。
`rk(0,0)rkunix`は、[RK05](https://en.wikipedia.org/wiki/RK05)ディスクの最初のパーティションにある"rkunix"ファイルをロードせよ、という意味。

v6とv0の動かし方についてはhint.textを参照。
v0の時代はまだファイルパスも、"."や".."も発明されていなかった、とか面白いことが書いてある。
ただしv0は再配布可能なライセンスではないので注意。
なおv0のイメージは[GitHub: DoctorWkt/pdp7-unix](https://github.com/DoctorWkt/pdp7-unix)によるとのこと。
これは[The Unix Heritage Society](https://www.tuhs.org/)で公開されているv0のソースコードのスキャンデータをベースとして、足りないものを補って復元したものらしい。

prog.cはPDP-7のエミュレータで、PDP-11/40のエミュレーションはPDP-7の上でエミュレートしているとのこと。

コード形状は[パンチテープ](https://ja.wikipedia.org/wiki/%E7%B4%99%E3%83%86%E3%83%BC%E3%83%97)の破片。
パンチカードではないので、右下の斜めの切れ端は単に破れているだけか。
8孔テープで、中央ちょっと右に歯車用の小さい穴が縦に並んでいる。
穴の配置にちゃんと意味があるのかはちょっと調べてもわからなかった（ASCIIでもEBCDICでもなさそう）。
