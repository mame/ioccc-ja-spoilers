---
id: 1987/lievaart
year: 1987
order: 7
patch: true
authors: "Roemer_B._Lievaart"
orig_url: "https://www.ioccc.org/1987/lievaart/lievaart.c"
hint_url: "https://www.ioccc.org/1987/lievaart/hint.html"
title: "IOCCC 1987: Grand Prize"
award_ja: "大賞"
---

## 動作

リバーシ（オセロ）のAI。起動するとレベルを聞かれる（0--10）。

```
$ gcc -o lievaart lievaart.c

$ ./lievaart
Level:
```

次に打つ場所を聞かれる。

```
$ ./lievaart
Level:0
You:
```

適当に56を選ぶと、

```
$ ./lievaart
Level:0
You:56
Wait
Value:24
move: 46
You:
```

相手が46に打ったことがわかる。ファイル長制限（1024バイト）のため、盤面表示はできなかったとのことで、目隠しオセロになる。

おまけとして、盤面表示するバージョン（[lievaart2.c](https://www.ioccc.org/1987/lievaart/lievaart2.c)）も付属している（文字数制限を超えているので正式な作品ではない）。

```
$ ./lievaart2
Level:0
12345678
........1
........2
........3
...XO...4
...OX...5
........6
........7
........8
You:56
12345678
........1
........2
........3
...XO...4
...OOO..5
........6
........7
........8
Wait
Value:24
move: 46
12345678
........1
........2
........3
...XXX..4
...OOO..5
........6
........7
........8
You:
...
```

## 解説

IOCCC初のAI作品。hint.textによると[アルファベータ法](https://ja.wikipedia.org/wiki/%E3%82%A2%E3%83%AB%E3%83%95%E3%82%A1%E3%83%BB%E3%83%99%E3%83%BC%E3%82%BF%E6%B3%95)とのこと。

これの影響かどうかはわからないけれど、IOCCCではゲームAIが定番ネタのひとつとなっていく。

1024バイトの文字数制限をクリアするために`#define D define`のテクニックを使っているが、現代のコンパイラではそのままでは動かない。残念。
