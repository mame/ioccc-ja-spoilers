---
id: 1984/anonymous
year: 1984
order: 1
authors: "Anonymous_1984"
orig_url: "https://www.ioccc.org/1984/anonymous/anonymous.c"
hint_url: "https://www.ioccc.org/1984/anonymous/hint.html"
title: "IOCCC 1984: Dishonorable mention"
award_ja: "不名誉な言及"
---

## 動作

Hello, worldプログラム。

{: .wrap }
```
$ gcc -m32 -o anonymous anonymous.c

$ ./anonymous
hello, world!
```

## 解説

記念すべき最初の入賞作。
賞名の"Honorable mention"は直訳すると「名誉ある言及」で、選外佳作（入選には至らないが高評価だったもの）という意味。
でもIOCCCで入賞するのは名誉ではないのでDishonorable（不名誉）。

たった2行だが、C言語の仕様の隅をつつくものから、人間に誤認識をさせるミスディレクションまで、たくさんの難読化テクニックが盛り込まれている。

* `for(;i["]<i;++i){--i;}`は`for`文のコードっぽく見えるが、実は後半が文字列リテラルになっている（コード右上の"Highlight"にチェックをつけるとわかりやすい）
* `i[str]`は`str[i]`と同じ意味（C言語ではどちらも`*(str+i)`と解釈される）
* 文字列を表示する関数に`read`という名前をつけている
* `write`の第1引数が1（ファイルディスクリプタの1番は初期状態では`stdout`、標準出力の意味）
* 整数の0や1を文字リテラルの演算で作っている
* `i`という変数名は整数を思わせるが、ポインタとしても使われている

この作品に限らないが、古い作品にはポインタとintのサイズが同じと仮定しているものが多いので、`-m32`が必要。
または、readの3つの引数をlong型と書き換えても良い。
