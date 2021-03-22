---
id: 1998/banks
year: 1998
order: 14
authors: "Carl_Banks"
orig_url: "https://www.ioccc.org/1998/banks.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1998/banks.hint"
title: "IOCCC 1998: Best of Show"
award_ja: "最優秀賞"
---

## 動作

フライトシミュレータ。次のように動かすとXの窓が開く。

{: .wrap }
```
$ gcc -DIT=XK_Page_Up -DDT=XK_Page_Down -DUP=XK_Up -DDN=XK_Down -DLT=XK_Left -DRT=XK_Right -DCS=XK_Return -Ddt=0.02 -o banks banks.c -lm -lX11

$ cat horizon.sc pittsburgh.sc | ./banks
```

{% include img.html src="1998-banks-1.png" desc="フライトシミュレータの画面（地平線とピッツバーグ）" %}

シーンは標準入力から設定ができる。

```
$ cat mountains.sc river.sc pyramids.sc | ./banks
```

{% include img.html src="1998-banks-2.png" desc="フライトシミュレータの画面（山と川とピラミッド群）" %}

操作方法は、矢印の上下左右で操縦桿を動かし、エンターで操縦桿を元の位置に戻す。
<kbd>Page Up</kbd>でスロットルを上げ、<kbd>Page Down</kbd>で下げる。
左下の数字は、左から対気速度、方角（0が北、90が東）、高度とのこと。

なお、あくまでシミュレータであって、ゲームではない。
墜落や着陸という概念はなく、自由に飛び回るだけ。
ビルや地面に当たっても突き抜ける。

## 解説

IOCCCのもっとも有名な作品のひとつ。
久々に純粋な作り込み系作品の優勝。

X11プログラムは関数名や初期化プロセスが冗長なので長くなりがちなので、1536バイトで実現されているのは意外とすごいと思う。

コンパイルオプションでキー設定やシミュレーションのタイムステップを調整できる。

シーンデータは3Dの点を並べてあるだけで、それを線でつないで描画するとのこと（`0 0 0`は線分の区切りとみなされる）。

作者は航空学科の学生とのこと。
