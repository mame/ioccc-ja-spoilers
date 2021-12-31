---
id: 2020/kurdyukov1
year: 2020
order: 8
authors: "Ilya_Kurdyukov"
orig_url: "https://www.ioccc.org/2020/kurdyukov1/prog.c"
hint_url: "https://www.ioccc.org/2020/kurdyukov1/index.html"
title: "IOCCC 2020: Best utility"
award_ja: "最高のツール"
---

### 動作

MD5の計算。

```
$ gcc -o prog prog.c

$ ./prog < prog.c
72b77b046d302556e6b3408beb88603d

$ md5sum prog.c
72b77b046d302556e6b3408beb88603d  prog.c
```

### 解説

コード形状は円。
ポイントは、MD5計算のコードをどのくらい小さくできるか。
MD5の数表は直接コードにもたせるには巨大だが、`sin`関数をベースに作られているので、実行時に生成できる。
ただし浮動小数点数は再現性に難があるので使わない方針で書かれている。
