---
id: 1992/marangon
year: 1992
order: 10
patch: true
authors: "Andrea_Marangoni"
orig_url: "https://www.ioccc.org/1992/marangon.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1992/marangon.hint"
title: "IOCCC 1992: Best Game"
award_ja: "最高のゲーム"
linewrap: true
---

## 動作

ライツアウトを拡張したようなゲーム。起動すると、各マスに1から9が振られた盤面がでてくる。

```
$ gcc -o marangon marangon.c -lncurses

$ ./marangon
```

```





                          ┌-------------------------┐
                          |  4   8   5   7   5   4  |
                          |                         |
                          |  8   6   5   3   1   2  |
                          |                         |
                          |  5   6   7   4   8   4  |
                          |                         |
                          |  4   3   3   2   4   2  |
                          |                         |
                          |  4   5   8   6   8   6  |
                          |                         |
                          |  6   1   6   2   7   5  |
                          └-------------------------┘

Use l-h-k-j for move.
Use + for increment. Use - for decrement.
Use Q to quit.


```

<kbd>hjkl</kbd>でカーソルを上下左右に動かし、<kbd>+</kbd>を押すとカーソルのマスの数字を1増やしつつ、まわりの8マスの数字を1ずつ減らす。
<kbd>-</kbd>を逆にカーソルのマスを1減らし、まわりの8マスを1ずつ増やす。
いずれかのマスが1より小さくなったり、9より大きくなったりする操作は不可。
全部のマスを5したらクリア。

## 解説

普通に面白いし、ライツアウトみたいに単純かと思ったら、不可能な操作があるせいでだいぶ難しい。

プログラムに特筆するような難読化はないと思う。
`(q^=s%=Y(q),s/=2)!=(s^=q)`という式が規格違反（副作用完了点の間に変数の読み出しと書き込みを行ってしまっている）。
これのせいで動かなくなっていたので、適当に変数に入れるようにして修正した。
