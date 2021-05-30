---
id: 2015/endoh4
year: 2015
order: 7
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2015/endoh4/prog.c"
hint_url: "https://www.ioccc.org/2015/endoh4/hint.html"
title: "IOCCC 2015: Best One-liner"
award_ja: "最高のワンライナー"
---

## 動作

コマンドライン引数の数を入力として、ビジュアルに因数分解を行う。

```
$ gcc -o prog prog.c

$ ./prog @
@ 

$ ./prog @ @
@ @ 

$ ./prog @ @ @
@ @ @ 

$ ./prog @ @ @ @
@ @ 
@ @ 

$ ./prog @ @ @ @ @
@ @ @ @ @ 

$ ./prog @ @ @ @ @ @
@ @ @ 
@ @ @ 

$ ./prog @ @ @ @ @ @ @
@ @ @ @ @ @ @ 

$ ./prog @ @ @ @ @ @ @ @
@ @  @ @  
@ @  @ @  

$ ./prog @ @ @ @ @ @ @ @ @
@ @ @ 
@ @ @ 
@ @ @ 

$ ./prog @ @ @ @ @ @ @ @ @ @
@ @ @ @ @ 
@ @ @ @ @

$ ./prog $(perl -e 'print "@ " x (2*3*5*7);')
@ @ @  @ @ @  @ @ @  @ @ @  @ @ @
@ @ @  @ @ @  @ @ @  @ @ @  @ @ @

@ @ @  @ @ @  @ @ @  @ @ @  @ @ @
@ @ @  @ @ @  @ @ @  @ @ @  @ @ @

@ @ @  @ @ @  @ @ @  @ @ @  @ @ @
@ @ @  @ @ @  @ @ @  @ @ @  @ @ @

@ @ @  @ @ @  @ @ @  @ @ @  @ @ @
@ @ @  @ @ @  @ @ @  @ @ @  @ @ @

@ @ @  @ @ @  @ @ @  @ @ @  @ @ @
@ @ @  @ @ @  @ @ @  @ @ @  @ @ @

@ @ @  @ @ @  @ @ @  @ @ @  @ @ @
@ @ @  @ @ @  @ @ @  @ @ @  @ @ @

@ @ @  @ @ @  @ @ @  @ @ @  @ @ @
@ @ @  @ @ @  @ @ @  @ @ @  @ @ @
```

## 解説

シンプルにまとまっている。

[Animated Factorization Diagrams](http://www.datapointed.net/visualizations/math/factorization/animated-diagrams/)にインスパイアされた作品。
