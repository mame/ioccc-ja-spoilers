---
id: 1994/weisberg
year: 1994
order: 9
authors: "Jeff_Weisberg"
orig_url: "https://www.ioccc.org/1994/weisberg.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1994/weisberg.hint"
title: "IOCCC 1994: Best Short Program"
award_ja: "最高のショートプログラム"
---

## 動作

素数を列挙していく。

{: .wrap }
```
$ gcc -Dc='n*n>x?p:((m=*(b+1)),N))' -De='(2<<6*sizeof(int))' -Do='(8<<5*sizeof(int))' -DN='((b=t+1),x+=2,x>e?exit(0):o' -Dp='(a-t<o?*(a++)=x:47),printf("%d ",x),N)' -o weisberg weisberg.c

$ ./weisberg
3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 ...
```

## 解説

発見した素数をテーブルにしておき、各奇数を試し割り法で素数判定していっていると思う。

コード自体は115バイトだが、自己完結はしておらず、コンパイルオプションでマクロを定義して動く。
ちょっとチートっぽいが、2つの定義セットが用意されていて、33554432までの素数を見つける省メモリ版と、`MAX_INT`までみつける富豪版にビルドし分けられるというあたりで評価されたと思われる。
