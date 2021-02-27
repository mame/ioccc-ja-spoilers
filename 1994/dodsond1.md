---
id: 1994/dodsond1
year: 1994
order: 1
authors: "Don_Dodson"
orig_url: "https://www.ioccc.org/1994/dodsond1.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1994/dodsond1.hint"
title: "IOCCC 1994: Best Game"
award_ja: "最高のゲーム"
---

## 動作

オセロ。

```
$ gcc -o dodsond1 dodsond1.c

$ ./dodsond1

A : : : : : : : :
B : : : : : : : :
C : : : : : : : :
D : : :O:X: : : :
E : : :X:O: : : :
F : : : : : : : :
G : : : : : : : :
H : : : : : : : :
 1 2 3 4 5 6 7 8

?
```

自分は`O`で、プロンプトに`E3`のように入力して石を置いていく。

```
?E3

A : : : : : : : :
B : : : : : : : :
C : : : : : : : :
D : : :O:X: : : :
E : :O:O:O: : : :
F : : : : : : : :
G : : : : : : : :
H : : : : : : : :
 1 2 3 4 5 6 7 8

A : : : : : : : :
B : : : : : : : :
C : : : : : : : :
D : : :O:X: : : :
E : :O:X:O: : : :
F : :X: : : : : :
G : : : : : : : :
H : : : : : : : :
 1 2 3 4 5 6 7 8

?
```

## 解説

プログラムがオセロの格子状になっている。
シンプルにまとまった作品。

ネタ自体は[[[1987/lievaart]]]({{ site.baseurl }}{% link 1987/lievaart.md %})と同じだが、自己言及的なアスキーアートでより現代的な作り直しになっている。
