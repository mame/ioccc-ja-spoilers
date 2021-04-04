---
id: 2001/anonymous
year: 2001
order: 1
authors: "Gavin_Barraclough"
orig_url: "https://www.ioccc.org/2001/anonymous.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2001/anonymous.hint"
title: "IOCCC 2001: Most likely to amaze"
award_ja: "もっとも仰天させそう"
---

## 動作

x86バイナリを任意のCPUの上で動かすためのバイナリ変換器。

残念ながら、動かせていない。
かなりデバッグしないと動かすことはできなさそう。
バイナリに詳しいプログラマに助けてほしい。

## 解説

anonymous.hintには実装方法が書かれていないが、コードを読む限り、x86のELF実行バイナリのサブセットをC言語コードに変換し、gccでコンパイルしてネイティブコードにするというものだと思う。

anonymous.hintにも「Hello worldやそれに近いプログラムしか動かせない」とあり、動かせるバイナリに強い前提があると思われる。
あいにく、実行確認が行われたバイナリ（anonymous.hintの中で"ten"と呼ばれている）が添付されておらず、現代のgccでビルドして得られるバイナリの形式には対応できていないのだと思う。
一応、当時のOS環境であるDebian 2.2 (potato)を作って試したが、動作を再現できなかった。

コードには"x86 Dynamic Binary Translator"というメッセージが埋め込まれている。
