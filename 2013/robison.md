---
id: 2013/robison
year: 2013
order: 14
authors: "Arch_D_Robison"
orig_url: "https://www.ioccc.org/2013/robison/robison.c"
hint_url: "https://www.ioccc.org/2013/robison/hint.html"
title: "IOCCC 2013: Most poetic use of strings"
award_ja: "文字列のもっとも詩的な使い方"
---

## 動作

多倍長整数に対応した電卓。

```
$ gcc -o robison robison.c

$ echo '1*2*3*4*5*6*7*8*9%1000' | ./robison
880

$ echo '100000000000000000000*(20*(1+(99477941840441*50)))/31664812345028528' | ./robison
314159265358979333767
```

## 解説

コード形状は、ライブラリ関数（主に文字列・メモリ関係）を特徴的に並べている。

hint.textがポエム調になっている。
おもしろいが、ちょっと理解に自信がない。
四則演算もビット演算もポインタ演算も配列参照もしないという制約で書かれている。
基本的に上から下に流れていくだけのフローだが、`qsort()`によってチューリング完全にしている（と書かれていると思うが、できないと思うし、`for`文も使用されているのでよくわからない）。

コマンドライン引数で基数を指定できる。
ただし、`argv[1]`は配列参照だから使ってはいけないので、`argv`を`qsort`して先頭を拾う。
普通に`./robison 17`と起動すると、`argv[0]`が`./robison`で、`17`より先に来てしまうのでダメ。
次のように起動すると17進数で計算ができる（`babbage`と`cafe`と`fad`はhint.textに書いてあった例）。

```
$ echo "babbage / cafe" | PATH=. robison 17
fad
```

"translate from Urdu to Tzouby?"（ウルドゥー語からTzoubyに翻訳せよ）という謎のフレーズがあるが、Tzoubyはコード中にある`"tzouby!fssps"`という文字列を指していると思う。
これはASCIIコードを1引くと`"syntax error"`という文字列になる。

```
$ echo "babbage / nix" | PATH=. robison 17
syntax error
Segmentation fault
```

審査員コメントは通常、一通りの使用法に言及するのだが、基数指定は言及されていない。
審査員が見落としているか、または意図的に情報を隠したか。
