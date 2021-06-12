---
id: 2019/ciura
year: 2019
order: 3
authors: "Marcin_Ciura"
orig_url: "https://www.ioccc.org/2019/ciura/prog.c"
hint_url: "https://www.ioccc.org/2019/ciura/hint.html"
title: "IOCCC 2019: Most alphabetic"
award_ja: "もっともアルファベット"
---

## 動作

ワードのリストを標準入力から受け取り、それを組み上げてコマンドライン引数で指定された文字の[完全パングラム](https://ja.wikipedia.org/wiki/%E3%83%91%E3%83%B3%E3%82%B0%E3%83%A9%E3%83%A0)を生成する。

```
$ gcc -o prog prog.c

$ grep .. /usr/share/dict/american-english-large | ./prog abcdefghijklmnopqrstuvwxyz | grep quick
quick fjord hazy lx veg mb ts pwn
quick fjord hazy lx vet mb gs pwn
quick fjord zap lx vent mb gs why
quick hadj grosz vet pwn lx mf by
quick jab zed vow mf lx nth gs pry
quick jab zed vow mf lx nth gyp rs
quick jag fez vow mb dry ps nth lx
quick jag zed vow mb fry ps nth lx
quick jo lx adz verb mf gs pwn thy
quick jo lx adz verb mf tyg sh pwn
quick job adz lx rev mf gs pwn thy
quick job adz lx rev mf tyg sh pwn
quick job adz lx veg mf nth wry ps
quick job adz lx veg mf pwn rs thy
quick job adz lx veg mf pwn try sh
quick job tzar gyved mf sh pwn lx
quick jog adz lx verb mf pwns thy
quick jog adz lx verbs mf pwn thy
quick jog adz lx vet mb fry sh pwn
quick jog fez lx vat mb dry sh pwn
quick jog zed vat mb fry sh pwn lx
quick jogs adz lx verb mf pwn thy
quick josh lx adz verb mf pwn tyg
quick jot lx adz veg mb fry sh pwn
quick jot lx zarf gyved mb sh pwn
quick jowl pyx adz verb mf gs nth
quick jowl vex zap mb fyrd gs nth
```

並べ替えて意味のある文章にするのはユーザの責務とのこと。
完全パングラム（同じ文字を使えるのは1回だけ）なので、有名な"a quick brown fox might jump over the lazy dog"は出てこない。

## 解説

Knuthの[TAOCP](https://ja.wikipedia.org/wiki/The_Art_of_Computer_Programming)に出てくるアルゴリズムを実装したとのこと。
詳しくはhint.textを参照。

アナグラムは[[[2005/klausler]]]({{ site.baseurl }}{% link 2005/klausler.md %})で既出のネタだが、それは認識した上で、国際化対応と高速化が新規性とのこと。
