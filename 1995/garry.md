---
id: 1995/garry
year: 1995
order: 5
authors: "Garry_Glendown"
orig_url: "https://www.ioccc.org/1995/garry.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1995/garry.hint"
title: "IOCCC 1995: Best Utility"
award_ja: "最高のユーティリティ"
---

## 動作

環境変数の展開機能付きのフィルタ。

```
$ gcc -o garry garry.c

$ export TEST="\110\145\154\154\157"

$ echo '$TEST$ world' | ./garry
Hello world
```

## 解説

この作品はほとんど理解できていない。
コードが大きいわりにシンプルな挙動に見えるが、何か見逃しているかもしれない。
コード形状の意味もわからない。なにかのロゴだろうか。
