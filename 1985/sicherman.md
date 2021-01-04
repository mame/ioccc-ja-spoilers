---
id: 1985/sicherman
year: 1985
order: 4
authors: "Col._G._L._Sicherman"
orig_url: "https://www.ioccc.org/1985/sicherman/sicherman.c"
hint_url: "https://www.ioccc.org/1985/sicherman/hint.html"
title: "IOCCC 1985: The worst abuse of the C preprocessor"
award_ja: "Cプリプロセッサの最悪の悪用"
---

## 動作

ROT13プログラム。

```
$ gcc -traditional-cpp -o sicherman sicherman.c

$ echo Hello | ./sicherman
Uryyb

```

## 解説

The worst abuse of the C preprocessorはIOCCCの定番枠で、これはその最初の受賞作。

古いCプリプロセッサの微妙な挙動を悪用している。
`-traditional-cpp`をつけるとコンパイルできる。

たとえば次の箇所。
一見すると、コメントが終わった後にもコメントのような文章が続いているようにみえて、非常におしゃれ。

```
main(C,V)
char **V;
/*      C program. (If you don't
 *      understand it look it
 */     up.) (In the C Manual)
{
```

ポイントは、

```
#define b *
#define C /b/
```

というマクロ定義。
この`C`は、コメントの始点かつ終点のように使えていたのだと思う。

まず普通にコメントを消す。

```
main(C,V)
char **V;
     up.) (In the C Manual)
{
```

マクロ`C`を展開する。

```
main(/b/,V)
char **V;
     up.) (In the /b/ Manual)
{
```

マクロ`b`を展開する。

```
main(/*/,V)
char **V;
     up.) (In the /*/ Manual)
{
```

その結果、新たにコメントが現れたので消す。

```
main( Manual)
{
```

よってこれは1引数の`main`関数を定義している。
コメントみたいな文の一部が実際にプログラムになっており、とても良い。
なお、現代のプリプロセッサでは、コメントは最初のフェーズで1回消されるだけなので、上記のようには動かない。
