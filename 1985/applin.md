---
id: 1985/applin
year: 1985
order: 1
patch: true
authors:
  - "Jack_Applin"
  - "Robert_Heckendorn"
orig_url: "https://www.ioccc.org/1985/applin/applin.c"
hint_url: "https://www.ioccc.org/1985/applin/hint.html"
title: "IOCCC 1985: Best one liner"
award_ja: "最高のワンライナー（1行プログラム）"
---

## 動作

Hello, worldプログラム。

```
$ gcc -o applin applin.c

$ ./applin
Hello, world!
```

## 解説

初のBest one liner入賞作品。

forループが肝かのように見せかけているが、1文字表示したらいちいち`execlp`で自分自身を起動し直すことで実行をすすめている。

文字列リテラルを破壊的に書き換えるので、そのままでは現代の環境で動かない。
文字列リテラルを`strdup`で複製することで一応動くようになる。
