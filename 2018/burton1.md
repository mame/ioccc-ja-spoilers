---
id: 2018/burton1
year: 2018
order: 4
authors: "Dave_Burton"
orig_url: "https://www.ioccc.org/2018/burton1/prog.c"
hint_url: "https://www.ioccc.org/2018/burton1/hint.html"
title: "IOCCC 2018: Best one-liner"
award_ja: "最高のワンライナー"
---

## 動作

16進ダンプ。

```
$ gcc -o prog prog.c

$ ./prog < prog.c
63 68 61 72 20 4f 2c 6f 5b 5d 3b 6d 61 69 6e 28 char O,o[];main(
6c 29 7b 66 6f 72 28 3b 7e 6c 3b 4f 7c 7c 70 75 l){for(;~l;O||pu
74 73 28 6f 29 29 4f 3d 28 4f 5b 6f 5d 3d 7e 28 ts(o))O=(O[o]=~(
6c 3d 67 65 74 63 68 61 72 28 29 29 3f 34 3c 28 l=getchar())?4<(
34 5e 6c 3e 3e 35 29 3f 6c 3a 34 36 3a 30 29 3f 4^l>>5)?l:46:0)?
2d 7e 4f 26 70 72 69 6e 74 66 28 22 25 30 32 78 -~O&printf("%02x
20 22 2c 6c 29 2a 35 3a 21 4f 3b 7d 0a  ",l)*5:!O;}.
```

## 解説

109バイトのワンライナー。
[[[1986/bright]]]({{ site.baseurl }}{% link 1986/bright.md %})も16進ダンプだが、こちらは圧倒的に短い。

hint.textには、このプログラムに至るまでの試行錯誤が簡潔に記録されている。

`4<(4^l>>5)`は表示可能文字を選り分ける式。
`(4^(l>>5))`は`l`が32から127の間だけ5以上になる。
DEL文字（ASCIIコード127）が表示可能文字に分類されてしまうのは仕様とのこと。

`char o[];`というひどい配列宣言がある。
ここに16文字も書き込むので完全に未定義動作。
しかし現実的には、ゼロクリアされたページにグローバル変数`O`と`o[]`だけを置いて、その後に何も置かないのだから、16文字分くらい開いてるでしょう、ということらしい。
いろんなOSやマシン（PDP-11エミュレータまで）でテストして動作することを主張している。
