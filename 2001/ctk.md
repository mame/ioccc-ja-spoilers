---
id: 2001/ctk
year: 2001
order: 5
patch: true
authors: "Chris_King"
orig_url: "https://www.ioccc.org/2001/ctk.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2001/ctk.hint"
title: "IOCCC 2001: Worst Driver"
award_ja: "最悪なドライバー"
---

## 動作

ドライビングゲーム。

```
$ gcc -o ctk ctk.c

$ ./ctk
```

```
                                 \               \
                                  \               \
                                   \               \
                                    \               \
                                     \               \
                                      \               \
                                   %%% \               \
                                  %\|/% \               \
                                    |    \               \
                                    |     \               \
                                           \               \
                                            \               \
                                             \               \
                                              \               \
                                               \               \
                                                \               \
                                                 \               \
                                                  |               |
     %%%                                          /               /
    %\|/%                                        /               /
      |                                         /               /
      |                                        /         @     /
                                              /               /
                                             /               /
```

`@`が自分。<kbd>b</kbd>で左に進み、<kbd>m</kbd>で右に進み、<kbd>n</kbd>でまっすぐに戻す。
<kbd>1</kbd>、<kbd>2</kbd>、<kbd>3</kbd>、<kbd>4</kbd>、でギアを変える（4が最速）。
道から外れたらゲームオーバー。なお、道は徐々に細くなっていく。

## 解説

[Apple II](https://en.wikipedia.org/wiki/Apple_II)の[Print Shop Companion](https://en.wikipedia.org/wiki/The_Print_Shop#The_Print_Shop_Companion)に入っていた"DRIVER"というイースターエッグを真似たゲームとのこと。

当時とエスケープシーケンスの意味が変わっているようで、動かすのには苦労した。
現代では[CSI sequence](https://en.wikipedia.org/wiki/ANSI_escape_code#Escape_sequences)は`ESC [`の2文字だが、当時は0x9fの1文字でもよかったらしい（現代ではUnicodeに乗っ取られている）。
また、一行挿入するシーケンスがカーソルのカラム位置を変化させない前提があるようだが、現代では左端に戻ってしまうので、調整した。

Linux consoleには独自のエスケープシーケンスがあるそうで、これを活用している。
`ESC [ 10 ; n ]`でビープ音の周波数を変えることでギアに合わせたビープ音を鳴らしたり、`ESC [ n q`でギアに合わせてNum LockやCaps Lockなどのランプを光らせたりする機能もあるとのこと。
どちらも再現できる環境がないので動作未確認。
