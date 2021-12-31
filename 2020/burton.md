---
id: 2020/burton
year: 2020
order: 1
authors: "Dave_Burton"
orig_url: "https://www.ioccc.org/2020/burton/prog.c"
hint_url: "https://www.ioccc.org/2020/burton/index.html"
title: "IOCCC 2020: Best one-liner"
award_ja: "最高のワンライナー"
---

## 動作

2進数を表示する。

```
$ gcc -DB=6945503773712347754LL -DI=5859838231191962459LL -DT=0 -DS=7 -o prog prog.c

$ ./prog 128
10000000

$ ./prog 170
10101010
```

ビッグエンディアン用にコンパイルすることもできる。

```
$ gcc -DB=7091606191627001958LL -DI=6006468689561538903LL -DT=1 -DS=0 -o prog prog.c

$ ./prog 128
00000001

$ ./prog 170
01010101
```

引数は基本的に0から255。

## 解説

ワンライナーでループ無しで実現されている。
ビット演算によって`long long`型の上でASCIIの`'0'`と`'1'`を並べ、`printf("%.8s\n",(char*)&n)`で表示する。
デバッグ出力させながら観察すれば仕組みはわかると思う。
コンパイルオプションで定数を定義仕分けることでリトルエンディアン・ビッグエンディアンが切り替えられるあたりがおもしろい。
