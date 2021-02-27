---
id: 1994/shapiro
year: 1994
order: 11
authors: "Andrew_Shapiro"
orig_url: "https://www.ioccc.org/1994/shapiro.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1994/shapiro.hint"
title: "IOCCC 1994: Most Well Rounded Obfuscation"
award_ja: "もっともよく練り上げられている"
---

## 動作

実行するとコードが出てくる。

```
$ gcc -o shapiro shapiro.c

$ ./shapiro
#include <stdio.h>
#include <time.h>
#define o(j,k,m,n,l) {fprintf(j,a[k],m,n,a[l]);fflush(j);}
char *a[]={"%c+------------+\n","%c+%3d %-8s+\n","seconds","minutes",
"hours","%s\n","\0337\033[%d;65;H%s\0338"};
int b[]={0,0,17,14,11,0};
main(v,c)int v;char ** c;
{char d[40],*e,f=6;
time_t g;
FILE *h,*i;
while (--f && !pipe(d) && !fork());
h=fdopen(6-f<<1,"a");i=fdopen((6-f<<1)+1,"r");
for(;;){if(f){fgets(d,40,i);d[strlen(d)-1]='\0';
if(*d=='0'+f){sprintf(*c,"%s\n",d+1);o(stdout,6,6-f,d+1,0)}
if(*d>'0'+f)o(h,5,d,0,0)}else{time(&g);e=asctime(localtime(&g));
for(v=1;v<6;v++)o(h,v!=1&&v!=6-1,v+'0',atoi(e+b[v]),v)sleep(1);}}}
```

これをコンパイルして実行する。

```
$ ./shapiro > tmp.c

$ gcc -o shapiro tmp.c

$ ./shapiro
+------------+
```

`+------------+`がちらつきながら表示される。Ctrl-Zでsuspendしてバックグラウンドプロセスにする。

```
$ ./shapiro
^Z-----------+
[1]+  Stopped                 ./shapiro

$ bg
[1]+ ./shapiro &
```

`ps x` を見ると、時計がある。

```
$ ps x
    PID TTY      STAT   TIME COMMAND
...
  62466 pts/6    S      0:00 +------------+
  62467 pts/6    S      0:00 +  3 hours   +
  62468 pts/6    S      0:00 + 19 minutes +
  62469 pts/6    S      0:00 + 21 seconds +
  62470 pts/6    S      0:00 +------------+
  62471 pts/6    S      0:00 ./shapiro
  62478 pts/6    R+     0:00 ps x
```

## 解説

非常に凝った構成になっている。
もとのソースコードの形状は時計で、self-documentingになっている。

もとのソースコードは、大量のコメントの中に別のコードがエンコードされて仕込まれており、`open(__FILE__)`によって自分を読み込み、隠されたコードをデコードして出力する。
エンコードはASCIIで`J`（74）から`Z`（90）の16種類の文字で行われており、2文字で1バイトを表現している。
ほとんどの文字はコメントの中にあるが、一部はうまいこと本文の文字（たとえば`__FILE__`の`L`）を活用して頑張っている。

第2のソースコードは、`fork()`によって6つのプロセスを作り、それらをパイプで数珠つなぎにしている。
起動プロセスが子プロセスに指示を行い、子プロセスはそれを次の子にたらい回しにしていく。
各子プロセスは、自分に対する指示を拾い出し、それを`argv[0]`に書き込む（`argv[0]`を更新すると、それが`ps`コマンドで見えるプロセス名となる）。
これにより、`ps x`コマンドで現在時刻が表示されるというふうになっている。

添付されているMakefileのとおりに`gcc -ansi -o shapiro tmp.c`とすると、`fdopen`のプロトタイプ宣言がないために返り値が`FILE*`ではなく`int`とみなされ、segfaultしてしまう。
`-ansi`を外すか、`-D_POSIX_C_SOURCE`が必要だった。
