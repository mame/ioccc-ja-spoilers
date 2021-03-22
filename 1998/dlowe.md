---
id: 1998/dlowe
year: 1998
order: 5
authors: "J_David_Lowe"
orig_url: "https://www.ioccc.org/1998/dlowe.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1998/dlowe.hint"
title: "IOCCC 1998: Best Utility"
award_ja: "最高のユーティリティ"
---

## 動作

4文字以上の単語をpootに置き換える。8文字以上ならpootpoot。

```
$ gcc -o dlowe dlowe.c

$ echo IOCCC is International Obfuscated C Code Contest | ./dlowe
POOT is Pootpoot Pootpoot C Poot Poot
```

## 解説

コード形状はPooT。pootはおならの幼児語。

オリジナルは純粋にテキストのフィルタだったけれど、審査員の希望でHTMLタグは変換せずに通すようにしたとのこと。

```
$ echo "<html>" | ./dlowe
<html>
```

このフィルタを通していろんなサイトをみると楽しいとのこと。
当時は、WebサイトのHTMLに文字列置換を適用して遊ぶことが流行していた。

作者は[[[1998/dloweneil]]]({{ site.baseurl }}{% link 1998/dloweneil.md %})でも（連名で）入選している。
そちらもPooT形状。
