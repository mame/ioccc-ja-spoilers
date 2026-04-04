---
type: entry
id: 2001/rosten
year: 2001
order: 11
authors: "Edward_Rosten"
orig_url: "https://www.ioccc.org/2001/rosten/rosten.orig.c"
hint_url: "https://www.ioccc.org/2001/rosten/index.html"
title: "IOCCC 2001: Best abuse of the user"
award_ja: "最高のユーザ苦しめ"
---

## 動作

実行すると、X11でマウスカーソルに慣性がつくようになる。VcXsrvでも再現できた。

```
$ gcc -o rosten rosten.c -lX11

$ ./rosten
```

## 解説

コード形状はマウスカーソルが滑る様子。
コマンドライン引数で滑り度を指定できる。
1より小さい値だとanti-inertiaになる。
