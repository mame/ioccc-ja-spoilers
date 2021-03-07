---
id: 1995/vanschnitz
year: 1995
order: 12
authors:
  - "Mark_Schnitzius"
  - "David_Van_Brackle"
orig_url: "https://www.ioccc.org/1995/vanschnitz.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1995/vanschnitz.hint"
title: "IOCCC 1995: Worst Abuse of the C Preprocessor"
award_ja: "Cプリプロセッサの最悪の悪用"
---

## 動作

ハノイの塔の解を表示する。デフォルトではディスク5枚。

```
$ gcc vanschnitz.c -o vanschnitz

$ ./vanschnitz
Move disk 1 from peg 1 to peg 2
Move disk 2 from peg 1 to peg 3
Move disk 1 from peg 2 to peg 3
Move disk 3 from peg 1 to peg 2
Move disk 1 from peg 3 to peg 1
Move disk 2 from peg 3 to peg 2
Move disk 1 from peg 1 to peg 2
Move disk 4 from peg 1 to peg 3
Move disk 1 from peg 2 to peg 3
Move disk 2 from peg 2 to peg 1
Move disk 1 from peg 3 to peg 1
Move disk 3 from peg 2 to peg 3
Move disk 1 from peg 1 to peg 2
Move disk 2 from peg 1 to peg 3
Move disk 1 from peg 2 to peg 3
Move disk 5 from peg 1 to peg 2
Move disk 1 from peg 3 to peg 1
Move disk 2 from peg 3 to peg 2
Move disk 1 from peg 1 to peg 2
Move disk 3 from peg 3 to peg 1
Move disk 1 from peg 2 to peg 3
Move disk 2 from peg 2 to peg 1
Move disk 1 from peg 3 to peg 1
Move disk 4 from peg 3 to peg 2
Move disk 1 from peg 1 to peg 2
Move disk 2 from peg 1 to peg 3
Move disk 1 from peg 2 to peg 3
Move disk 3 from peg 1 to peg 2
Move disk 1 from peg 3 to peg 1
Move disk 2 from peg 3 to peg 2
Move disk 1 from peg 1 to peg 2
```

ディスクの枚数はコンパイル時に指定できる。

```
$ gcc vanschnitz.c -o vanschnitz -Dn=3

$ ./vanschnitz
Move disk 1 from peg 1 to peg 2
Move disk 2 from peg 1 to peg 3
Move disk 1 from peg 2 to peg 3
Move disk 3 from peg 1 to peg 2
Move disk 1 from peg 3 to peg 1
Move disk 2 from peg 3 to peg 2
Move disk 1 from peg 1 to peg 2
```

## 解説

Cプリプロセッサによってハノイの塔を解いている。

`#include __FILE__`によって再帰することでループを行い、最終的に`printf`を1つ呼び出すだけの`main`関数になる。
例えばディスク3枚の設定（`-Dn=3`）でプリプロセスをした結果を整形したらこうなる。

```
main(){
  printf(
    "Move disk %d from peg %d to peg %d\n"
    "Move disk %d from peg %d to peg %d\n"
    "Move disk %d from peg %d to peg %d\n"
    "Move disk %d from peg %d to peg %d\n"
    "Move disk %d from peg %d to peg %d\n"
    "Move disk %d from peg %d to peg %d\n"
    "Move disk %d from peg %d to peg %d\n"
    ,1,1,2
    ,1
    +1
    ,1,3
    ,1,2,3
    ,1
    +2
    ,1,2
    ,1,3,1
    ,1
    +1
    ,3,2
    ,1,1,2
  );
}
```

このとおり、ハノイの塔の解自体はプリプロセス時にすべて特定してしまうので、プリプロセッサで解いていると言える。

コードはとてもいい感じに整形されている。
大体マクロ定義文ばかりで、定義はほぼ4文字。
識別子は`b`、`d`、`p`、`q`を組み合わせた4文字ばかりで非常に読みにくい。
