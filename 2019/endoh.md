---
id: 2019/endoh
year: 2019
order: 8
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2019/endoh/prog.c"
hint_url: "https://www.ioccc.org/2019/endoh/hint.html"
title: "IOCCC 2019: Most in need of debugging"
award_ja: "もっともデバッグが必要"
---

## 動作

コンパイル時に`-O0`が必要。

```
$ gcc -O0 -o prog prog.c
```

実行してもsegfaultする。

```
$ ./prog
Segmentation fault
```

gdbの上で実行し、バックトレースを見る。

```
$ gdb ./prog
(gdb) run
Starting program: /home/.../prog

Program received signal SIGSEGV, Segmentation fault.
0x0000000000000000 in ?? ()

(gdb) backtrace
#0  0x0000000000000000 in ?? ()
#1  0x0000555555555201 in x23 () at prog.c:35
#2  0x000055555555571a in x64 () at prog.c:100
#3  0x0000555555555747 in x65 () at prog.c:101
#4  0x0000555555555774 in x66 () at prog.c:102
#5  0x00005555555557ce in x69 () at prog.c:105
#6  0x0000555555555828 in x6e () at prog.c:110
#7  0x0000555555555747 in x65 () at prog.c:101
...
```

行番号に注目し、対応するASCIIコードを引いてみる、

     35 = '#'
    100 = 'd'
    101 = 'e'
    102 = 'f'
    105 = 'i'
    110 = 'n'
    101 = 'e'
    ...

これは元のコードを表すものになっている。

## 解説

バックトレースでQuineを表現する。
各行に関数定義を置き、ソースコードの各文字の配列から、各文字に対応する関数へのポインタの配列に変換し、順に呼んでいって最後にNULLアクセスをするだけ。

prog.cは、gdbスクリプトになっている。

```
$ gdb -q -x prog.c ./prog | cat
Reading symbols from ./prog...done.

Program received signal SIGSEGV, Segmentation fault.
0x0000000000000000 in ?? ()
#0  0x0000000000000000 in ?? ()
#1  0x0000555555555201 in x23 () at prog.c:35
#2  0x000055555555571a in x64 () at prog.c:100
#3  0x0000555555555747 in x65 () at prog.c:101
#4  0x0000555555555774 in x66 () at prog.c:102
#5  0x00005555555557ce in x69 () at prog.c:105
#6  0x0000555555555828 in x6e () at prog.c:110
#7  0x0000555555555747 in x65 () at prog.c:101
...
```

次のようにすればdiffを取ることができる。

{: .wrap }
```
$ gdb -q -x prog.c ./prog | sed -n -r 's/#.*:([0-9]+)/\1/p' | awk '{printf "%c",$1}' > prog2.c
$ diff prog.c prog2.c
```

賞名は[[[2019/giles]]]({{ site.baseurl }}{% link 2019/giles.md %})、[[[2019/karns]]]({{ site.baseurl }}{% link 2019/karns.md %})と対称的になっている。
