---
id: 1995/heathbar
year: 1995
order: 6
authors: "Heather_Downs"
orig_url: "https://www.ioccc.org/1995/heathbar.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1995/heathbar.hint"
title: "IOCCC 1995: Best Layout"
award_ja: "最高のレイアウト"
---

## 動作

コマンドライン引数の2つの数字を足す。

```
$ gcc -o heathbar heathbar.c

$ ./heathbar 1 1
2

$ ./heathbar 4253 2281
6534
```

## 解説

コード形状は[半加算器](https://ja.wikipedia.org/wiki/%E5%8A%A0%E7%AE%97%E5%99%A8)。
これを`main`をもじったマクロの羅列で表現している。
実際のアルゴリズムも16ビット加算器をシミュレートするようなビット演算になっている。

heathbar.hintの作者コメントはジョークだらけ。
このプログラムを作った動機は最速のCプログラムを作ることであるとし、
(1)コンピュータは算数が得意、
(2)シンプルな演算は複雑な演算より速い、
(3)すべてのCプログラムは"main"という語を含む、
という観察から、
(1)得意な足し算のプログラムなら速かろう、
(2)高級で抽象化されたC言語の"+"よりビット演算のほうが速かろう、
(3)コンパイラが見慣れたmainっぽい単語だらけのほうがコンピュータの気が散らないだろう、
ということでこのようにした。
あと、過去のIOCCCの作品はちょっと読みにくいので、self-documentingなわかりやすいコードを目指した、とのこと。
IOCCC的なセンスを強く感じる作品。
