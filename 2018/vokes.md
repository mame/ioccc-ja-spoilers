---
id: 2018/vokes
year: 2018
order: 13
authors: "Scott_Vokes"
orig_url: "https://www.ioccc.org/2018/vokes/prog.c"
hint_url: "https://www.ioccc.org/2018/vokes/hint.html"
title: "IOCCC 2018: Most connected"
award_ja: "もっとも接続されている"
---

## 動作

グラフの強連結成分を取り出す。

次が入力データの例。

```
$ cat tmp.txt
0 1
1 2
2 3
3 0
4 1 2 6
5 4
6 5
7 5
```

これは、0から1への辺があり、1から2への辺があり、……ということを表現している、図にすると次の通り。

```
0 ---> 1 <--- 4 <--- 5 <--- 7
^      |     / \     ^
|      V    /   \    |
3 ---- 2 <-+     +-> 6
```

実行すると、0、1、2、3は強連結成分（どの2要素にも互いに接続パスがある）、4、5、6も強連結成分、7は単体で強連結成分と判定される。

```
$ gcc -o prog prog.c

$ ./prog < tmp.txt
0: 0 1 2 3
1: 4 5 6
2: 7
```

## 解説

Tarjanの[強連結成分](https://ja.wikipedia.org/wiki/%E9%80%A3%E7%B5%90%E3%82%B0%E3%83%A9%E3%83%95#%E5%BC%B7%E9%80%A3%E7%B5%90)分解のアルゴリズムを実装している。
[トポロジカルソート](https://ja.wikipedia.org/wiki/%E3%83%88%E3%83%9D%E3%83%AD%E3%82%B8%E3%82%AB%E3%83%AB%E3%82%BD%E3%83%BC%E3%83%88)をベースにしたもの。

コードは、全体的に魔術をテーマに彩っている。
コード形状は泡立つ大釜（bubbling cauldron）。
関数名はなんとなく魔女が何か作っていそうな単語。
meltdown（融解）、magic（魔法）、cast（Cのキャストではなく鋳造）、spell（呪文）、witch（魔女）、newt（イモリ）、bubble（泡）、boil（茹でる）、hex（16進ではなくまじない）、toil（網）、nasal_demons（鼻から悪魔）、brew（醸造）、potion（薬）、bat（コウモリ）、toad（カエル）、spectre（妖怪） 、familiar（使い魔）。
引数の数の違う関数を同じ関数ポインタに入れている（呼び出し時に一致していれば大丈夫）。
`i`はループ変数ではなく、`argv`と`argc`は入れ替わっている。
`argc[argv]`を`NULL`の代わりに使う。
