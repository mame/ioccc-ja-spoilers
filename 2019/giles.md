---
id: 2019/giles
year: 2019
order: 9
authors: "Edward_Giles"
orig_url: "https://www.ioccc.org/2019/giles/prog.c"
hint_url: "https://www.ioccc.org/2019/giles/hint.html"
title: "IOCCC 2019: Most in need of wide space"
award_ja: "もっとも広いスペースが必要"
---

## 動作

WAVファイルにリバーブをかける。

元の音声。

{% include audio.html src="2019-giles-1.mp3" desc="MonodyVocals.wav" cite="https://www.ioccc.org/2019/giles/MonodyVocals.wav" %}

```
$ gcc -o prog prog.c

$ ./prog MonodyVocals.wav
```

out.wavが出力される。

{% include audio.html src="2019-giles-2.mp3" desc="out.wav" %}

コマンドライン引数でいろいろ調整できる。
hint.text参照のこと。

## 解説

コード形状は3つの弧。音波を表現しているとのこと。
iocccsize -iが2019になる。

賞名は[[[2019/endoh]]]({{ site.baseurl }}{% link 2019/endoh.md %})、[[[2019/karns]]]({{ site.baseurl }}{% link 2019/karns.md %})と対称的になっている。
