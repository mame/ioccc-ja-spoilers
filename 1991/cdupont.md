---
id: 1991/cdupont
year: 1991
order: 3
patch: true
authors: "Christian_Dupont"
orig_url: "https://www.ioccc.org/1991/cdupont.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1991/cdupont.hint"
title: "IOCCC 1991: Most Useful Label"
award_ja: "もっとも便利なラベル"
---

## 動作

メッセージが出る。

```
$ gcc -Ds=\"cdupont.c\" -Dt=\"r\" cdupont.c -o cdupont

$ ./cdupont
f u cn ndrstnd ths u cn gt gd jb n cmptr scnc.
```

## 解説

自分自身のソースコードを読み込んで、複雑な演算をして文字を取り出してメッセージを作っている、と思う。
そのために、`sorryfor_this_unused_but_very_needed_label:`のような謎のラベルやコメントが仕込まれている（これが賞名の由来となっている）。

メッセージは母音が省略されていて、"If you can understand this you can get a good job in computer science."（もしこれがわかったらコンピュータ科学で良い仕事に就けるよ）だと思う。

オリジナルのソースコードはANSI以前のコンパイラでないとコンパイルできないので、審査員によって[cdupont_ansi.c](https://www.ioccc.org/1991/cdupont_ansi.c)が提供されている。
パッチはそれにならった。
