---
id: 2020/kurdyukov4
year: 2020
order: 11
authors: "Ilya_Kurdyukov"
orig_url: "https://www.ioccc.org/2020/kurdyukov4/prog.c"
hint_url: "https://www.ioccc.org/2020/kurdyukov4/index.html"
title: "IOCCC 2020: Best abuse of lámatyávë"
award_ja: "lámatyávëの最高の悪用"
---

### 動作

与えられた辞書をもとにマルコフ連鎖でランダムなテキストを生成する。

```
$ gcc -o prog prog.c

$ ./prog Shakespeare.txt 100 10 12345
r sons, wives for them, as the hope I had it. This is the way they be not too rash a trial of you on
```

第1引数は辞書ファイル、第2引数は生成するテキストの長さ、第3引数は連鎖の長さ、第4引数は乱数のシード。

### 解説

挙動もコード形状も非常にシンプル。
コード形状は[[[2020/kurdyukov2]]]({{ site.baseurl }}{% link 2020/kurdyukov2.md %})とコンセプトが酷似しており、特に意味はないと思う。

賞名のlámatyávëは[トールキン](https://ja.wikipedia.org/wiki/J%E3%83%BBR%E3%83%BBR%E3%83%BB%E3%83%88%E3%83%BC%E3%83%AB%E3%82%AD%E3%83%B3)が書いたファンタジー小説の中の言語、[クウェンヤ](https://ja.wikipedia.org/wiki/%E3%82%AF%E3%82%A6%E3%82%A7%E3%83%B3%E3%83%A4)の単語で、"sound-taste"という意味らしい。
命名のときに重要な概念らしいけれど、詳しいことはわからなかった。
