---
id: 2004/gavin
year: 2004
order: 15
authors: "Gavin_Barraclough"
orig_url: "https://www.ioccc.org/2004/gavin.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/gavin.hint"
title: "IOCCC 2004: Best of Show"
award_ja: "最優秀賞"
---

## 動作

x86向けの32ビットマルチタスクOS。
PS2マウスやキーボードドライバを備えたGUI、ファイルシステム、ELFバイナリのロードと実行、テキストファイルビューアを備えている。

{% include img.html src="2004-gavin.png" desc="QEMU内で動作するOSの画面" %}

## 解説

このプログラムは、「x86向け32ビットマルチタスクOSのカーネルイメージ」を出力するプログラムになっている。
カーネルの実行にはx86が必要だが、このイメージ生成プログラム自体はポータブルに様々な環境で動く、というところが審査員にとても評価されている。

しかし皮肉にも、このイメージ生成プログラムはまったくポータブルに動いてくれない。
64ビット環境は正しいカーネルイメージが出力できず、`-m32`をつけても動作するイメージが生成されなかった。
比較的当時に近い環境であるDebian 3.1 (sarge)をQEMUでセットアップし、gcc 3.3でビルドして出力されたカーネルイメージをQEMUで起動したところ、どうにか動作が確認できた。

興味がある人のために、動作が確認できた[kernel]({{ site.baseurl }}{% link imgs/2004-gavin-kernel %})と[fs.tar]({{ site.baseurl }}{% link imgs/2004-gavin-fs.tar %})を置いておく。
手元では次のように実行することで起動した。

```
$ qemu-system-i386 -m 32 -kernel kernel -initrd fs.tar
```

gavin.hintで審査員が書いている通り、起動後に画面をクリックしないと画面が更新されないので注意。
GUIは極端に遅い（数秒に1回程度しか画面が更新されない）。
また、マウスカーソル（画面内に`X`として表示されているもの）はなかなか思うように動かず、上記のスクリーンショットを撮るのは非常に苦労した。

shとviのコマンドは作者が用意したもの。
primは審査員が用意したもので、素数を列挙するプログラム。
