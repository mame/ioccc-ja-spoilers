---
id: 2018/hou
year: 2018
order: 11
authors: "Qiming_HOU"
orig_url: "https://www.ioccc.org/2018/hou/prog.c"
hint_url: "https://www.ioccc.org/2018/hou/hint.html"
title: "IOCCC 2018: Most likely to top the charts"
award_ja: "もっともチャートの1位になりそう"
---

## 動作

JSONデータからSVGで円グラフを描く。

```
$ gcc -o prog prog.c -lm

$ ./prog < input.json > tmp.html
prog: prog.c:124: C: Assertion `rulez' failed.
Aborted
```

tmp.htmlをブラウザで開く。

{% include img.html src="2018-hou.png" desc="tmp.htmlを開いた様子" %}

## 解説

「近年、ほとんどのプログラマはWeb関係の雑用しかやっていない。オープンソースのライブラリでなんでも揃っているので、ライブラリをうまく使いこなしてJSONデータからHTMLページを生成するだけ」ということを皮肉り、同じようなことを無理やりC言語でやってみたという作品。

変数なし、演算子なし、制御構造なし（`return`はあるけど返り値は不使用）という制約で書かれている。
基本的な戦略は、`getenv()`と`setenv()`で環境変数を変数的に使うというもの。
ただし文字列リテラルも避けているようで、`getenv(memset(calloc(3, 1), fma(1, 6, 64)))`で`getenv("F")`相当になっている。

現場のコーディング標準にしたがって、コードにはおしゃれな専門語（マクロ名の並びが"JSON HTML mobile WEB javAscrIpt"）、doxygenコメント、ライセンステキストでとっちらかっている。
`assert()`の失敗で終わるのは仕様（分岐がないので無限再帰を抜けるにはこういうのしかない）。
HTMLが生成されてれば誰も文句ないでしょう、とのこと。

プログラミングの現状に対する皮肉と、それを実現する技術力、ともにすばらしい。
