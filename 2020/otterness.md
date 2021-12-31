---
id: 2020/otterness
year: 2020
order: 12
authors: "Nathan_Otterness"
orig_url: "https://www.ioccc.org/2020/otterness/prog.c"
hint_url: "https://www.ioccc.org/2020/otterness/index.html"
title: "IOCCC 2020: Most percussive"
award_ja: "もっともパーカッション的"
---

### 動作

MIDIファイルにドラムのトラックを付け加える。

```
$ gcc -o prog prog.c

$ ./prog < input.mid > output.mid
```

### 解説

MIDIをパースし、最長のトラックを特定し、ドラムのトラックを追加する。

[あるmidi配布サイト](http://www.kunstderfuge.com/beethoven/variae.htm#Symphonies)にあるベートーベン交響曲第6番（田園）の`symphony_6_1_(c)cvikl.mid`というファイルでテストされている。
このファイルは個人使用は問題ないようだけれど、再配布などが認められていないように見えたので、デモは避けた。
Wikicommonsにある権利の明らかなmidファイルで試したが、残念ながら出力ファイルが壊れていたり、リズムがむちゃくちゃだったりして、よいデモが見つけられなかった。
興味のある人は自分で`symphony_6_1_(c)cvikl.mid`で試して欲しい。

コードは、リテラルを一切使わない方針で書かれている。
形状自体は普通で、clang-formatを通しているとのこと。
