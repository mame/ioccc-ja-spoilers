---
id: 1991/ant
year: 1991
order: 1
authors: "Anthony_C._Howe"
orig_url: "https://www.ioccc.org/1991/ant.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1991/ant.hint"
title: "IOCCC 1991: Best Utility"
award_ja: "最高のユーティリティ"
---

## 動作

vi風エディタ。次のように起動する。

```
$ gcc -DMODE=0600 -DBUF=32767 -o ant ant.c -lcurses

$ ./ant
``` 

{% include img.html src="1991-ant.png" desc="テキストファイルをvi風に編集できる" %}

<kbd>hjlk</kbd>でカーソルを動かし、<kbd>i</kbd>で挿入モード。<kbd>Ctrl+L</kbd>（`\f`）で挿入モードを抜ける（<kbd>ESC</kbd>では無いので注意）。
終了は<kbd>Q</kbd>。他の操作はant.hintを見て欲しい。

## 解説

cursesを使ったエディタ。タブ文字をちゃんと表示するとか、カーソル移動がいろいろあるとか、地味に作り込んである。
[Buffer Gap Scheme](https://en.wikipedia.org/wiki/Gap_buffer)を勉強するために作ってみたとのこと。
