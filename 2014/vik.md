---
id: 2014/vik
year: 2014
order: 10
authors: "Daniel_Vik"
orig_url: "https://www.ioccc.org/2014/vik/prog.c"
hint_url: "https://www.ioccc.org/2014/vik/hint.html"
title: "IOCCC 2014: Best handling of beeps"
award_ja: "ビープの最高の扱い方"
---

## 動作

モールス信号の音声を合成する。

```
$ gcc -o prog prog.c

$ echo SOS | ./prog | sox -t raw -c 2 -r 44100 -L -e signed-integer -b 16 - sos.wav
```

{% include audio.html src="2014-vik.mp3" desc="sos.wav" %}

デコードもサポートしている。

```
$ echo "Hello, world!" | ./prog > raw

$ ./prog e < raw
HELLO, WORLD!
```

## 解説

デコードの精度は低く、アマチュア無線だとノイズやエコーがあるから無理だが、人間が直接録音したものならデコードできることもある、とのこと。

コードのポイントはよくわからない。
コードに最低6個のチョコレート（IOCCC審査員の内輪ネタで、審査員への賄賂を意味する）が仕込まれている、と書かれているが、何のことかわかっていない。
