---
id: 1989/tromp
year: 1989
order: 7
patch: true
authors:
  - "John_Tromp"
  - "Freek_Wiedijk"
file: 1989/tromp.bsd
orig_url: "https://www.ioccc.org/1989/tromp.bsd.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1989/tromp.bsd.hint"
title: "IOCCC 1989: Best game"
award_ja: "最高のゲーム"
---

## 動作

端末で[テトリス](https://ja.wikipedia.org/wiki/%E3%83%86%E3%83%88%E3%83%AA%E3%82%B9)。

```
$ gcc -O -o tromp.bsd tromp.bsd.c

$ ./tromp.bsd
```

{% include img.html src="1989-tromp.png" desc="端末でテトリスがプレイできる" %}

デフォルトの操作方法は、<kbd>j</kbd>が左、<kbd>l</kbd>が右、<kbd>k</kbd>が回転、スペースが落とす、<kbd>p</kbd>がポーズ、<kbd>q</kbd>が終了。

## 解説

端末のエスケープシーケンスを使った初の作品で、Best game枠の最初の作品。

コマンドラインの第1引数で落下速度を、マンドラインの第2引数で操作方法を変えられるとのこと（無指定の場合は2秒と`jkl pq`が指定されたという扱い）。

ハッカーの遊びでテトリスと言うと退屈に感じてしまうかもしれない。
しかしテトリスが世界的に売られ始めたのは1988年ごろなので、当時はブームの最中ということになる。
この作品がテトリスをハッカーの遊びの定番ネタとするのに一役かったのかもしれない。

端末でポータブルにゲームを作るというのは意外と難しい話で、BSD版とSystem V版が用意されている。
現代のLinuxはSystem Vに近いので、後者のほうが動かしやすいかもしれないが、BSD版でも少しの修正で動作した。
次の変更が必要だった。

* `sigvec`を`sigaction`に置き換えた。
* 関数ポインタを`int`に変換している箇所を`long`に置き換えた。なお、sigactionに与える関数ポインタであるせいか、`-m32`ではうまく動かなかった。
* グローバル変数の初期値として関数へのポインタを与えることもできなくなっていたので、`main`関数の先頭で初期化するように変えた。

なお、`-O`をつけないと動作しなかった。おそらくまだ修正が必要なのだと思うが、詳しくは調べていない。

余談だが、このコードはscreenコマンドのテストコードとして含まれているので、screenをインストールしている環境では知らないうちに入っていることもある。
Ubuntu 20.04では/usr/share/doc/screen/terminfo/tetris.cに置かれていた。
