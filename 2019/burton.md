---
id: 2019/burton
year: 2019
order: 2
authors: "Dave_Burton"
orig_url: "https://www.ioccc.org/2019/burton/prog.c"
hint_url: "https://www.ioccc.org/2019/burton/hint.html"
title: "IOCCC 2019: Best one-liner"
award_ja: "最高のワンライナー"
---

## 動作

wcコマンドのクローン。

```
$ gcc -o prog prog.c

$ ./prog < hint.text
      81     356    2554
```

wcの場合。

```
$ cat hint.text | wc
     81     356    2554
```

## 解説

127バイトでwc互換。

Linux系のwcはフォーマットが変わっていたり、`\a`や`\b`を空白としてカウントしたりするなど、POSIXとはちょっと違うとのこと。
MacOSやFreeBSDのwcに挙動合わせてある。
