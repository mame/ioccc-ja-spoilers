---
id: 2004/arachnid
year: 2004
order: 2
authors: "Nick_Johnson"
orig_url: "https://www.ioccc.org/2004/arachnid.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/arachnid.hint"
title: "IOCCC 2004: Best use of Vision"
award_ja: "視界の最高の使い方"
---

## 動作

cursesによる迷路。自分の視界の範囲に入った通路や壁が描画されていく。

{: .wrap }
```
$ gcc -DL=LINES -DS=COLS -DW=mvwaddch\(w,v,u,acs_map\[l\[m\[u -o arachnid arachnid.c -lncurses

$ ./arachnid
```

```
┌───────────┐
│...........│
└─┐...┌──...│           ·
  │...│                .│
  │...│                .│─
  │...│               ...
  │...└───────────┐   ..│
  │...............│  ...│
  │...────────┐...└──...│
  │.....      │.....@...│
  └──────     └─────────┘


```

`@`が自分。<kbd>a</kbd>で左、<kbd>d</kbd>で右、<kbd>w</kbd>で上、<kbd>s</kbd>で下に移動。

次のコマンドで迷路の指定もできる。

```
$ ./arachnid arachnid.info
```

巨大な迷路なので画面に入り切らないが、画面端に近づいたらスクロールしてくれる。

## 解説

マップファイルは、空白が通路、`~`が出口、他の文字はすべて壁。

ソースコード自体がマップになっていて、絵フォルトではソースコード自身が使われる。

ソースコードが迷路データとなっているネタは[[[1991/buzzard]]]({{ site.baseurl }}{% link 1991/buzzard.md %})、cursesでの迷路というネタは[[[1995/dodsond2]]]({{ site.baseurl }}{% link 1995/dodsond2.md %})とかぶっている。
しかし、コード全体が`#include`を含めて迷路になっており、はみ出た部分がないので美しい。
罫線を使って表示したり、視界に入ったところを表示したりするという細やかな作り込みもあり、現代的なIOCCCの作品になっている。
