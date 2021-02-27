---
id: 1994/smr
year: 1994
order: 7
authors: "Szymon_Rusinkiewicz"
orig_url: "https://www.ioccc.org/1994/smr.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1994/smr.hint"
title: "IOCCC 1994: Worst Abuse of the Rules"
award_ja: "ルールの最悪の悪用"
---

## 動作

世界最小の自己生成プログラム（いわゆるQuine）と主張する問題作。
現代のコンパイラではコンパイルできない。
詳しくは以下の解説を参照のこと。

## 解説

0バイトのプログラム、つまり空のファイル。
当時の一部のCコンパイラは、これをコンパイルすると何もしない実行ファイルを出力していたと思われる。
何もしない、つまり何も出力しない、つまり0バイトを出力するので、Quineといえる。

残念ながら、現代ではgccでもclangでもビルドできなかった。
`main`関数がないと完全なCプログラムとは言えないので仕方ない。
