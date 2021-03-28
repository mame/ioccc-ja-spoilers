---
id: 2000/bellard
year: 2000
order: 2
authors: "Fabrice_Bellard"
orig_url: "https://www.ioccc.org/2000/bellard.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/bellard.hint"
title: "IOCCC 2000: Most Specific Output"
award_ja: "もっとも限定された出力"
---

## 動作

2^6972593-1を表示する。

```
$ gcc -o bellard bellard.c

$ ./bellard
43707574412708137883332329120...35366526142924193791

$ ./bellard | wc -c
2098960
```

## 解説

この数字は、当時知られていた[最大の素数](https://en.wikipedia.org/wiki/Largest_known_prime_number)。

10進数変換のためにModular Fast Fourier Transformというアルゴリズムを使っている。
現代でも実行には数秒かかるが、当時は数分かかっていたらしい。

賞名は、[[[2000/schneiderwent]]]({{ site.baseurl }}{% link 2000/schneiderwent.md %})と[[[2000/thadgavin]]]({{ site.baseurl }}{% link 2000/thadgavin.md %})と対象的になっている。

なお、作者の[Fabrice Bellard](https://en.wikipedia.org/wiki/Fabrice_Bellard)は、QEMU、FFmpeg、tccなどを作ったすごいプログラマ。
