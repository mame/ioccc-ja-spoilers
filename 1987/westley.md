---
id: 1987/westley
year: 1987
order: 6
patch: true
authors: "Brian_Westley"
orig_url: "https://www.ioccc.org/1987/westley/westley.c"
hint_url: "https://www.ioccc.org/1987/westley/hint.html"
title: "IOCCC 1987: Best Layout"
award_ja: "最高のレイアウト"
---

## 動作

英語の有名な回文を出力する。

```
$ gcc -o westley westley.c

$ ./westley
Able was I ere I saw elbA
```

「エルバ島を見るまで、私は有能だった」という意味で、しばしば[ナポレオン](https://ja.wikipedia.org/wiki/%E3%83%8A%E3%83%9D%E3%83%AC%E3%82%AA%E3%83%B3%E3%83%BB%E3%83%9C%E3%83%8A%E3%83%91%E3%83%AB%E3%83%88)が言った言葉とされるが、[WikipediaによるとJames Harrisの作とのこと](https://en.wikipedia.org/wiki/Palindrome#Famous_English_palindromes)。

## 解説

プログラムがだいたい線対称になっている。
文字列を機械的に回文にするのではなく、カッコやスラッシュは形状優先で書いているので、視覚的な線対称感が強い。
手作りの温かみがあってすばらしい。
プログラムを回文にするのはコメントを使えば容易だが、そういう安易な方法は使わず、識別子の反転を変数として宣言することで回避している。
そうして宣言した変数もなるべく活用されている。

これは[westley]({{ site.baseurl }}{% link authors.md %}#Brian_Westley)の第1作。
westleyはこのあとすばらしい作品群を次々に送り込んでくる。

`(int) (tni) = reviled;`というように左辺値にキャスト式を置くことは、現代のコンパイラでは許されておらず、コンパイルできない。
残念だが`(int)`を消せばとりあえず動く。
