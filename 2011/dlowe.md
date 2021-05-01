---
id: 2011/dlowe
year: 2011
order: 3
authors: "J_David_Lowe"
orig_url: "https://www.ioccc.org/2011/dlowe/dlowe.c"
hint_url: "https://www.ioccc.org/2011/dlowe/hint.html"
title: "IOCCC 2011: Most self deprecating"
award_ja: "もっとも自虐的"
---

## 動作

ニューラルネット分類器。

まず、学習済みネットのデータをダウンロードする。

```
$ curl -O http://www.ioccc.org/2011/dlowe/dlowe-aux-data.tar.bz2

$ tar -jxf dlowe-aux-data.tar.bz2
```

この年のIOCCCの入賞作品と落選作品で学習したネットワークで、dlowe.cを判定。
落選しそう。

```
$ gcc -o dlowe dlowe.c -lm

$ ./dlowe dlowe.c < dlowe-aux-data/ioccc-winlose-trained.net
dlowe.c 0.125108
```

英語の文書とフランス語の文書で学習したネットワークでhint.textを判定。
英語っぽい。

```
$ ./dlowe hint.text < dlowe-aux-data/english-trained.net
hint.text 0.851449
```

他に、PNG/GIF判定や、xor判定のネットワークが提供されている。

## 解説

審査員を手助けするために、作品の審査をするAIを作った、という立て付け。

オンライン誤差逆伝播法で学習する[多層パーセプトロン](https://ja.wikipedia.org/wiki/%E5%A4%9A%E5%B1%A4%E3%83%91%E3%83%BC%E3%82%BB%E3%83%97%E3%83%88%E3%83%AD%E3%83%B3)。
トポロジは、2^16の入力、6つの隠れニューロン、1つの出力ニューロン。
活性化関数は 1 / (1 + e^-x) とのこと。

トレーニングの方法もhint.textに書いてある。興味ある人は読んでほしい。

コードの形状はゾンビ。
ニューラルネットワークは脳みそを手本にしたもので、ゾンビは脳みそを食べるから（ホラー映画の『[バタリアン](https://ja.wikipedia.org/wiki/%E3%83%90%E3%82%BF%E3%83%AA%E3%82%A2%E3%83%B3)』が広めたイメージらしい）。
corpus（[コーパス](https://ja.wikipedia.org/wiki/%E3%82%B3%E3%83%BC%E3%83%91%E3%82%B9)、言語の研究用データ）とcorpse（死体）の音が似てるから、とも。
