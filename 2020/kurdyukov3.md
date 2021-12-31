---
id: 2020/kurdyukov3
year: 2020
order: 10
authors: "Ilya_Kurdyukov"
orig_url: "https://www.ioccc.org/2020/kurdyukov3/prog.c"
hint_url: "https://www.ioccc.org/2020/kurdyukov3/index.html"
title: "IOCCC 2020: Bset slaml prragom"
award_ja: "最高のスーモルプラグロム"
---

### 動作

入力された英単語のうち、最初と最後の文字以外をシャッフルして出力する。

```
$ gcc -o prog prog.c

$ echo "Hello, world!" | ./prog
Hlleo, wlrod!
```

### 解説

単語の最初と最後の文字があっていれば順番が変わってもわりと読めるという現象（[タイポグリセミア](https://ja.wikipedia.org/wiki/%E3%82%BF%E3%82%A4%E3%83%9D%E3%82%B0%E3%83%AA%E3%82%BB%E3%83%9F%E3%82%A2)）を体験できるツール。
コードも作者コメントが短くてよい。

コード形状は単に小さいだけか。
審査員はSDカード（またはパンチカード）と言っている。
