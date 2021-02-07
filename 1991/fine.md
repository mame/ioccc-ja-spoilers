---
id: 1991/fine
year: 1991
order: 5
authors: "Thomas_A._Fine"
orig_url: "https://www.ioccc.org/1991/fine.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1991/fine.hint"
title: "IOCCC 1991: Best One Liner"
award_ja: "最高のワンライナー"
---

## 動作

ROT13エンコーダ。

```
$ gcc -o fine fine.c

$ echo Hello | ./fine
Uryyb
```

## 解説

80バイトでROT13エンコードをする。

`b=64^a&223`という補助変数を定義することで、アルファベットの範囲（65..90と97..122）を特定する処理と、ROT13変換のために13文字分ずらす処理を巧妙にまとめている。
前者は`0<b&&b<27`で判定でき、後者は`(b+12)%26+1`で13文字分ずらした上で上位ビットを`a&96`とORすることで元の文字に復元できる。

8ビット目の保存を無視して1バイト減らすことが読者の課題になっているが、`223`を`97`にすればいいと思う。
余談だが、`while`ではなく`for`にすることでさらに1バイト減らせるような気がする。
