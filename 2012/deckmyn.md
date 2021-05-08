---
id: 2012/deckmyn
year: 2012
order: 2
authors: "Alex_Deckmyn"
orig_url: "https://www.ioccc.org/2012/deckmyn/deckmyn.c"
hint_url: "https://www.ioccc.org/2012/deckmyn/hint.html"
title: "IOCCC 2012: Most notable and best tool"
award_ja: "もっとも注目すべきで、最高のツール"
---

## 動作

次のように実行する。

```
$ gcc -o deckmyn deckmyn.c

$ ./deckmyn "`cat deckmyn.c`" "`cat example_beethoven`" > example_beethoven.pbm

$ convert example_beethoven.pbm example_beethoven.png
```

{% include img.html src="2012-deckmyn.png" desc="楽譜の画像が生成された（example_beethoven.pbm）" %}

## 解説

入力した楽譜データから、楽譜の画像を生成する。
コードの形状がト音記号や音符などの楽譜を構成するパーツになっている。
コード形状は単なる飾りではなく、実際に描画するときにビットマップとして用いる情報になっている。
実行時の自分のソースコードを第1引数として渡す必要がある（ファイル名を渡すのではなく、ソースコード自体を渡していることに注意。審査員はシェルの悪用と言っている）。

楽譜は[ABC記法](https://ja.wikipedia.org/wiki/ABC%E8%A8%98%E8%AD%9C%E6%B3%95)風に書く。
CDEFGABがドレミファソラシで、cdefgabは1オクターブ高いドレミファソラシ。
音の高さの後に`4`が書いてあれば4分音符、`8`なら8分音符、`4.`なら付点4分音符、という具合。
`KF`でト音記号の代わりにヘ音記号、`m44`で4分の4拍子、`:`で小節線、`x`で行を変えるなどは楽譜生成のための独自拡張。
詳しくは[MANUALファイル](https://www.ioccc.org/2012/deckmyn/MANUAL)を参照のこと。
出力画像は[PBMフォーマット](https://ja.wikipedia.org/wiki/PNM_%28%E7%94%BB%E5%83%8F%E3%83%95%E3%82%A9%E3%83%BC%E3%83%9E%E3%83%83%E3%83%88%29)。

ちなみに、example\_beethovenは[ベートーベンの交響曲第9番](https://ja.wikipedia.org/wiki/%E4%BA%A4%E9%9F%BF%E6%9B%B2%E7%AC%AC9%E7%95%AA_%28%E3%83%99%E3%83%BC%E3%83%88%E3%83%BC%E3%83%B4%E3%82%A7%E3%83%B3%29)。

Cのコンテストの作品ならC major（ハ長調）を生成できるべき、とのこと。
賞名の"notable"も、notable（注目に値する）とnote（音、音符）をかけた洒落。

コードの特徴としては、形状が楽譜のパーツであることに加え、変数宣言を一切していないとのこと（メモリフットプリント削減のため、とうそぶいている）。
使っているのは`argc`と`argv`のみ。
引数にファイルの内容をそのまま渡す必要があるのはこのためで、冒頭の数行部分は破壊してメモリ領域としてつかっているらしい。
また、実行ファイル名（`argv[0]`）も4文字以上ないとダメとのこと。
hint.textにはふざけたことがいっぱい書いてある。
