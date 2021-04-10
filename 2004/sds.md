---
id: 2004/sds
year: 2004
order: 12
authors: "Stephen_Sykes"
orig_url: "https://www.ioccc.org/2004/sds.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/sds.hint"
title: "IOCCC 2004: Best Abuse of Indentation"
award_ja: "インデントの最高の悪用"
---

## 動作

テキストに空白を挿入してメッセージをステガノグラフィー（埋め込み）する。

元のコードはデコーダになっている。エンコーダは、元のコードに埋め込まれている。

```
$ gcc -o sds sds.c

$ ./sds < sds.c
#include<stdio.h>
FILE*a;char b,c,e,f,g,h,*k=" \t\n",f;main(int argc,char *argv[]){a=fopen(argv[
1],"r");for(;;){c=getchar();if(c==EOF&&e==EOF)exit(0);else if(c==EOF)c=32;if(b
!='\\'&&b!='\''&&c=='"')f=1-f;if(!f&&(!(c-32)||!(c-9)||!(c-10))&&(e=getc(a))!=
EOF){printf("%c%c%c%c%c",k[e%3],k[(e-e%3)/3%3],k[((e-e%3)/3-((e-e%3)/3%3))/3%3
],k[(((e-e%3)/3-((e-e%3)/3%3))/3-(((e-e%3)/3-((e-e%3)/3%3))/3%3))/3%3],k[((((e
-e%3)/3-((e-e%3)/3%3))/3-(((e-e%3)/3-((e-e%3)/3%3))/3%3))/3-((((e-e%3)/3-((e-e
%3)/3%3))/3-(((e-e%3)/3-((e-e%3)/3%3))/3%3))/3%3))/3]);}else putchar(c);b=c;}}
```

これをコンパイルするとエンコーダが得られる。

```
$ ./sds < sds.c > encoder.c

$ gcc -o encoder encoder.c
```

"a b c d e f"という文字列に"Hello"というメッセージを仕込み、それをデコードする例。

```
$ cat example.txt
Hello

$ echo -n a b c d e f | ./encoder example.txt > encoded.txt

$ od -c encoded.txt
0000000   a          \n  \n       b  \n      \n      \t   c
0000020  \t  \t   d              \t  \t   e      \t      \t  \t   f
0000040

$ ./sds < encoded.txt
Hello
```

## 解説

元のコードは、エンコーダのコードがスペースとタブと改行を使って埋め込まれているので、ぐちゃぐちゃになっている。
シンプルな一品。
