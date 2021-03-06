---
id: 2011/borsanyi
year: 2011
order: 2
authors: "Szabolcs_Borsanyi"
orig_url: "https://www.ioccc.org/2011/borsanyi/borsanyi.c"
hint_url: "https://www.ioccc.org/2011/borsanyi/hint.html"
title: "IOCCC 2011: Best data utility"
award_ja: "最高のデータツール"
---

## 動作

数字の列のデータからヒストグラムを描く。

```
$ head data.1
0.0695175
0.0697668
0.0695881
0.0694395
0.0694606
0.069504
0.0697716
0.0697499
0.0696453
0.0697075

$ gcc -o borsanyi borsanyi.c -lm

$ ./borsanyi < data.1
  +0.0700679    1
  +0.0700269    2
  +0.0699859    4
  +0.0699449   15###
  +0.0699039   13##
  +0.0698629   43########
  +0.0698219   90##################
  +0.0697809  131##########################
  +0.0697399  135###########################
  +0.0696989  186#####################################
  +0.0696579  235###############################################
  +0.0696169  210##########################################
  +0.0695759  220############################################
  +0.0695349  210##########################################
  +0.0694939  154##############################
  +0.0694529  143############################
  +0.0694119   93##################
  +0.0693709   52##########
  +0.0693299   37#######
  +0.0692889   15###
  +0.0692479    6#
  +0.0692069    4
  +0.0691659    1
```

## 解説

コード形状はヒストグラム。

難読化のポイントは、配列もメモリ確保もせずにヒストグラムを作る方法。
これは次のようなおもしろガジェットで実現されている。

1. データを1つ読み込み、ローカル変数に保存しておいて、再帰呼び出しをする
2. データを読み終わったら22プロセス（ビンの数）に`fork()`し、各プロセスに担当ビンを割り当てる
3. 22プロセスがそれぞれ再帰関数からリターンするとき、保存しておいたローカル変数が担当ビンに入っている数をカウントする
4. `wait()`の同期によって順序を守りつつ、各プロセスが1行ずつカウントを表示する
