---
id: 2020/giles
year: 2020
order: 7
authors: "Edward_Giles"
orig_url: "https://www.ioccc.org/2020/giles/prog.c"
hint_url: "https://www.ioccc.org/2020/giles/index.html"
title: "IOCCC 2020: Most phony"
award_ja: "もっとも偽物"
---

### 動作

[DTMF](https://ja.wikipedia.org/wiki/DTMF)（トーンダイヤルの音）のエンコーダ・デコーダ。

サンプルの入力。

{% include audio.html src="2020-giles-1.mp3" desc="pi.wav" cite="https://www.ioccc.org/2020/giles/pi.wav" %}

```
$ gcc -o prog prog.c

$ ./prog < pi.wav
31415926
```

wavを生成することもできる。

```
$ ./prog "1234567890*#ABCD" > tmp.wav

$ cat tmp.wav | ./prog
1234567890*#ABCD
```

{% include audio.html src="2020-giles-2.mp3" desc="tmp.wav" %}

### 解説

コードは電話の受話器の形状。
libmを使わずに自力で計算している。
iocccsize -iは1963になる。これはプッシュボタン電話が製造された年。

賞名の"phony"は「偽の」という意味だけれど、phone（電話）とかけている。
