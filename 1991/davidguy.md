---
id: 1991/davidguy
year: 1991
order: 4
patch: true
authors: "David_Applegate"
orig_url: "https://www.ioccc.org/1991/davidguy.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1991/davidguy.hint"
title: "IOCCC 1991: Best X11 Graphics"
award_ja: "最高のX11グラフィックス"
---

## 動作

[X Window System](https://ja.wikipedia.org/wiki/X_Window_System)で[ライフゲーム](https://ja.wikipedia.org/wiki/%E3%83%A9%E3%82%A4%E3%83%95%E3%82%B2%E3%83%BC%E3%83%A0)を描画する。

動かすにはまず、Xサーバを準備する必要がある。
そして、そのアドレスを引数として次のようにプログラム起動する。

```
$ gcc -o davidguy davidguy.c

$ ./davidguy x-server-address:0.0
```

ランダムマップを初期配置としてライフゲームの世代が進んでいく。

{% include img.html src="1991-davidguy.png" desc="X Window Systemでライフゲーム" %}

`argv[0]`の最初の文字の偶奇を変えると色が反転する。

```
$ ruby -e 'exec(["./davidguy", "1"], "x-server-address:0.0")'
```

## 解説

Xlibなどを使わず、自力でX11プロトコルを叩いてroot windowにライフゲームを描画する。
ライフゲームという定番ハッカーネタがここまで出ていなかったのはちょっと意外（ライフゲームの提案は1970年）。

X Window Systemを使う初のエントリでもある。
IOCCCが始まった1984年ごろはポータブルにGUIを扱うことはできなかったが、X11が1987年にリリースされ、事実上の標準になったので、今後のコンテストではX11を使うプログラムを受け付けるという審査員コメントがdavidguy.hintに書かれている。

幸いX11は現在でも健在だが、それでもこのプログラムを動かすのは非常に大変だった。
[VcXsrv](https://sourceforge.net/projects/vcxsrv/)を使ったが、foreground colorとbackground colorのデフォルトがともに黒のようで、そのままでは真っ黒な画面にしかならなかった（現代ではXサーバの背景に直接描画をすることはほとんどないのでしょうがない）。
X11プロトコルを真面目に調べ、CreateGCでforeground colorとbackground colorを指定するようにしたら無事に描画されることが確認できた。
他に、`sbrk`が動かないことがあるので`malloc`に置き換え、また、`+=`が改行で区切られている箇所を修正した。
