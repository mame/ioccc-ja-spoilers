---
id: 1989/ovdluhe
year: 1989
order: 3
patch: true
authors: "Oskar_von_der_Luehe"
orig_url: "https://www.ioccc.org/1989/ovdluhe.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1989/ovdluhe.hint"
title: "IOCCC 1989: Most humorous output"
award_ja: "もっともユーモラスな出力"
---

## 動作

与えられたテキストを参考に、適当な文字列を生成していく。

```
$ gcc -o ovdluhe ovdluhe.c

$ ./ovdluhe < /usr/share/dict/american-english-small
's
Catholic's
Catholicism
Americans
April's
American
Asians
F
F's
Frence
absconding
abunday's
Tuesday's
Christmases
Thursday
Wednesday's
Frence
abbeys
...
```

## 解説

「猿がタイプライターを無限に叩き続ければ、いつか必ず任意のテキスト（たとえばシェイクスピアの作品でも）を打ち出す」という[無限の猿定理](https://ja.wikipedia.org/wiki/%E7%84%A1%E9%99%90%E3%81%AE%E7%8C%BF%E5%AE%9A%E7%90%86)に着想を得た作品。
最近出力した4文字分だけの記憶を持ち、元のテキストの中でその4文字の直後に現れる確率が高い文字をランダムに選んで出力する、というのを繰り返す。

難読化は、識別子がape（猿）っぽい文字列ばかりという程度だと思う。
興味深い挙動というネタで勝利した作品。

次の3点を修正した。

* `#define D define`して`#D`するコードを展開。
* `typedef char ape`とした上で`unsigned ape`とするのはダメなようなので`unsigned char`に置き換え。
* `*(ep-A)= *(ep++);`は未定義動作（副作用完了点の前に変更と読み出しがある）ので`*(ep-A)= *(ep),ep++;`に修正。
