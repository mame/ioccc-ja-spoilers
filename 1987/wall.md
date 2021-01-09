---
id: 1987/wall
year: 1987
order: 5
authors: "Larry_Wall"
orig_url: "https://www.ioccc.org/1987/wall/wall.c"
hint_url: "https://www.ioccc.org/1987/wall/hint.html"
title: "IOCCC 1987: Most Useful Obfuscation"
award_ja: "もっとも便利な難読化"
---

## 動作

ローマ数字と10進数の相互変換ツール。
電卓コマンドのbcと組み合わせることで、次のようにローマ数字電卓として使える。

```
$ gcc -o wall wall.c

$ echo "xi * xi" | ./wall | bc | ./wall
cxxi
```

`xi`はローマ数字で11、`cxxi`はローマ数字で121。

## 解説

このプログラムは出力がTTYのとき、10進数→ローマ数字の変換をする。

```
$ echo 1 | ./wall
i

$ echo 2 | ./wall
ii

$ echo 3 | ./wall
iii

$ echo 4 | ./wall
iv

$ echo 5 | ./wall
v
```

出力がTTYではないとき、ローマ数字→10進数の式の変換をする。

```
$ echo i | ./wall | cat
(1)

$ echo ii | ./wall | cat
(1+1)

$ echo iii | ./wall | cat
(1+1+1)

$ echo iv | ./wall | cat
(1-2+5)

$ echo v | ./wall | cat
(5)
```

`./wall | bc | ./wall`とすると、ローマ数字での電卓のような挙動になる。

出力がTTYかどうかは[isatty](https://linuxjm.osdn.jp/html/LDP_man-pages/man3/isatty.3.html)で判定できるが、単にこれで遊ぶだけでなく、ユースケースと結合しているところが良い。

hint.textには「直接呼び出されていない関数ポインタがあるが、どう呼び出されているかわかる？」と書いてある。
SIGPIPEのシグナルハンドラに関数ポインタを設定し、読み側をcloseしたパイプを作ってwriteし、わざとシグナルを起こすことで関数を呼び出している。
システムプログラミングの悪用のさきがけと言える？
