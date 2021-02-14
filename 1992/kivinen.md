---
id: 1992/kivinen
year: 1992
order: 8
patch: true
authors: "Tero_Kivinen"
orig_url: "https://www.ioccc.org/1992/kivinen.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1992/kivinen.hint"
title: "IOCCC 1992: Best X Program"
award_ja: "最高のXプログラム"
---

## 動作

3つのゲームの詰め合わせ。

無引数で起動したらスペースインベーダ風のゲームになる。

```
$ gcc -o kivinen kivinen.c -lX11

$ ./kivinen
```

{% include img.html src="1992-kivinen-1.png" desc="スペースインベーダ風ゲーム" %}

引数1つで起動したらブロック崩し。

```
$ ./kivinen x
```

{% include img.html src="1992-kivinen-2.png" desc="ブロック崩しい" %}

引数2つで起動したらDropout（落ちてくる破片を拾うゲーム）。

```
$ ./kivinen x x
```

{% include img.html src="1992-kivinen-3.png" desc="Dropout（落ちてくる破片を拾う）" %}

操作はすべてマウスの左右ボタンで自機を動かす。
スペースインベーダでは中クリックでミサイル発射。

## 解説

形状はインベーダの敵をイメージしたものらしい。
マクロ名が縦書きで`X INVADERS`になっている。

[[[1991/davidguy]]]({{ site.baseurl }}{% link 1991/davidguy.md %})をきっかけにX11の作品がIOCCCで解禁されて初の作品で、基本的なゲームを詰め込んでいるのが面白い。

現代でもそのまま動くけれど、処理速度が速すぎるので適当にウェイトを置いた。
どうもバグか何かがあるようで、起動直後に自機がものすごい勢いで右に突っ走るので、マウスクリックをして止める必要がある。
