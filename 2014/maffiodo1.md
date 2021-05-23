---
id: 2014/maffiodo1
year: 2014
order: 5
authors: "Sandro_Maffiodo"
orig_url: "https://www.ioccc.org/2014/maffiodo1/prog.c"
hint_url: "https://www.ioccc.org/2014/maffiodo1/hint.html"
title: "IOCCC 2014: Homage to a classic game"
award_ja: "クラシックゲームへのオマージュ"
tabsize: 4
---

## 動作

[スーパーマリオブラザーズ](https://ja.wikipedia.org/wiki/%E3%82%B9%E3%83%BC%E3%83%91%E3%83%BC%E3%83%9E%E3%83%AA%E3%82%AA%E3%83%96%E3%83%A9%E3%82%B6%E3%83%BC%E3%82%BA)風のミニゲームのSDLプログラム。

次のように実行する。

```
$ gcc -o prog prog.c `sdl-config --cflags --libs`

$ cat mario.level | ./prog 320 200 800 300 128 144 mario.rgba mario8.wav 10343679
```

マリオのキャラクターをそのまま使っているので、画像の掲載は控える。
IOCCCのサイトにスクリーンショットがあるのでそちらを見て欲しい。

[https://github.com/ioccc-src/winner/tree/main/2014/maffiodo1](https://github.com/ioccc-src/winner/tree/main/2014/maffiodo1)

## 解説

ソースコードもスーパーマリオブラザーズのマリオの形状に、"SMB"の文字が下に書かれている。
タブ幅を4にして見る必要がある。

コマンドライン引数の意味やステージデータのフォーマットについては、hint.textを参照してほしい。
