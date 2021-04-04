---
id: 2001/coupard
year: 2001
order: 4
authors: "Pierre-Philippe_Coupard"
orig_url: "https://www.ioccc.org/2001/coupard.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2001/coupard.hint"
title: "IOCCC 2001: Most obfuscated sound"
award_ja: "もっとも難読化された音"
---

## 動作

現在時刻を音声合成してくれる。次のように実行してtime.wavを再生する。

```
$ gcc -o coupard coupard.c

$ ./coupard | sox -c1 -r8000 -tub - -c2 -r44100 -twav time.wav
```

生成された音声のサンプルはこちら。

{% include audio.html src="2001-coupard.mp3" desc="time.wav" %}

"The time is / eleven / hours / eleven / minutes / and / eleven / seconds"と発声しているのがわかるだろうか。

## 解説

現在時刻を"The time is HH hours MM minutes and SS seconds"と発声したPCMデータを出している。
糸電話から蓄音機の間くらいの音質とcoupard.hintに書いてあるが、個人的にはそんなレベルではなく聞き取りづらいので気合いが必要。

elevenが一番聞き取りやすいと思ったので、11ばかりにした。
40行目を次のように書き換えると上記の11:11:11を読み上げてくれる。

```
 l=-k*(k<0),i++);e(21,4);g(11);e(22,1);g(11);e(23,1);e(25,0);g(11);e(24,0);
```

コードは普通。音声データを表示可能文字でうまいことエンコードしているのだと思う（詳細未解読）。
