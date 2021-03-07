---
id: 1995/leo
year: 1995
order: 7
patch: true
authors: "Leonid_A._Broukhis"
orig_url: "https://www.ioccc.org/1995/leo.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1995/leo.hint"
title: "IOCCC 1995: Best Use of Obfuscation"
award_ja: "難読化の最高の使い方"
---

## 動作

PostScriptで文様を描く。

```
$ gcc -DGa=608 -DAs=792 -DMo=int -DAr='unsigned long' -DS='struct Se' -o leo leo.c

$ ./leo 1 < /dev/null > tmp.ps
```

tmp.psは次のような画像になっている。

{% include img.html src="1995-leo.png" desc="謎の文様がPostScriptで出力される（tmp.ps）" %}

## 解説

PostScriptを動的に生成して、gsコマンド（GhostScript）に流し込むことで、自動生成された変な模様がどんどん出ていく、というものらしい。

オリジナルの状態だとメモリ破壊をしておちるので、手当として`calloc`のサイズを2倍にして回避している。
ただ、そのせいかどうかはわからないが、急に大量のデータを書き出してしまってgsが固まったり巨大ファイルを作ったりしがちで、どうも安定動作をしてくれない。
そのため、何が本来の挙動なのかいまいちよくわかっていない。

コード形状に特に工夫はない。
識別子は元素記号を選んでいる。
なぜ元素記号を選んだのかはわからないが、nu-clearとのこと（「核」のnuclearと「きれい」のclearをかけている）。

審査員が少しコードをいじったとのこと（いじる前のコードはleo.orig.c）。
gsにデータを直接流し込んだ後、すぐに終了すると窓が消えてしまうので、fgetsをするようにしたらしい。
そのためのバッファの名前は`Sg`になっていて、これは原子番号106の[シーボーギウム](https://ja.wikipedia.org/wiki/%E3%82%B7%E3%83%BC%E3%83%9C%E3%83%BC%E3%82%AE%E3%82%A6%E3%83%A0)。
これはちょっとした時事ネタで、1995年当時、存命人物由来の名前をつけるかどうかで話題になっていた元素らしい。
また、gsの反転という意味もあるのかもしれない。
