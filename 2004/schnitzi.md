---
id: 2004/schnitzi
year: 2004
order: 11
patch: true
authors: "Mark_Schnitzius"
orig_url: "https://www.ioccc.org/2004/schnitzi.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/schnitzi.hint"
title: "IOCCC 2004: Best Non-Use of Curses"
award_ja: "cursesの最高の不使用"
---

## 動作

viを使ってアニメーションをする。次のように起動する。

```
$ gcc -o schnitzi schnitzi.c

$ ./schnitzi < schnitzi.inp0 | vi
```

viの中で次のようなアニメーションが行われる。


```
 + [No Name]
  1
  2
  3      \_|_/
  4      /   \                           _  _
  5    -( :-) )-                          \/
  6      \___/
  7      / | \
  8                                             |\
  9                  *                          | \
 10                 ***                       __----_
 11 ---------------*****  *  -----\~~~~~~~~~~~\_____/~
 12                 ***  ***       \__________________
 13            __o   I  *****
 14          _ \<,_  I   ***
 15         (_)/ (_)      I
 16                       I
 17
 18
 19
 20
```

## 解説

スプライトと動きのデータから、viのコマンド列を生成する。それをviに流し込むと、アニメーションになる。
標準入力から渡すのに支障がある場合は、コピーして画面にペーストせよとのこと。

これは完全に発想の勝利。
ターミナルや環境によるが、アニメーションが速すぎたのでウェイトを10倍にした。
（`01G`でカーソルを左上に移動する操作を繰り返すことでウェイトとしている）
