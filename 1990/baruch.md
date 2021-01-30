---
id: 1990/baruch
year: 1990
order: 1
authors:
  - "Doron_Osovlanski"
  - "Baruch_Nissenbaum"
orig_url: "https://www.ioccc.org/1990/baruch.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1990/baruch.hint"
title: "IOCCC 1990: Best Small Program"
award_ja: "最高の小さいプログラム"
linewrap: true
---

## 動作

Nクイーンのソルバ。

```
$ gcc -o baruch baruch.c

$ echo 4 | ./baruch


 Q #
# #Q
Q# #
# Q

 #Q#
Q #
 # Q
#Q# 

$ echo 7 | ./baruch


Q# # #
# Q # #
 # #Q#
# # # Q
 Q # #
# #Q# #
 # # Q

Q# # #
# #Q# #
 # # #Q
# Q # #
 # # Q
#Q# # #
 # #Q#

Q# # #
# # Q #
 Q # #
# # #Q#
 #Q# #
# # # Q
 # Q #
...
```

## 解説

200バイトちょっとの短いコードでNクイーンの解を列挙する。
`main`の中に`for`文がひとつあるだけのコードになっていて、このループがすべての処理でうまく使いこなされているのだと思う。
詳細は未解析。
