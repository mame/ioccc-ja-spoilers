---
id: 2005/mynx
year: 2005
order: 9
authors: "Anthony_C._Howe"
orig_url: "https://www.ioccc.org/2005/mynx/mynx.c"
hint_url: "https://www.ioccc.org/2005/mynx/hint.text"
title: "IOCCC 2005: Best use of the www"
award_ja: "wwwの最高の使い方"
---

## 動作

テキストベースのウェブブラウザ。

```
$ gcc -o mynx mynx.c

$ ./mynx http://ioccc.org/2005/mynx/manual.html


 Mynx

The Mynx Web Browser

Usage

   mynx filepath|url

Description

   View the web as it once was with the Mynx web browser. A fusion of somethi
   ng between more(1) and lynx(1). It allows you to surf the web in complete
   safety and tranquility. The ideal web browser for small children and
   their sensitive minds. It contains a window popup blocker, it filters
   banner ads, and is easy to configure!

   You can view local HTML files or give an http:// URL. Simply press the
   ENTER key to page down through long documents. To navigate, just type the
   number found in square brackets to the left of any link, followed by the
   ENTER key. To quit, simply visit link zero (0), or type CTRL+C.

?
```

ENTERを押すと続きが表示される。
リンクには番号が振られているので、その番号を入力すると、そのページに飛べる。

## 解説

[[[2004/hibachi]]]({{ site.baseurl }}{% link 2004/hibachi.md %})に感動したので作った、と書かれているが、実は同じ作者による作品。
IOCCCの審査員は審査時には作者の情報を見ないようにして評価するので、同じ作者だとバレにくくするための作戦だったと思われる。
