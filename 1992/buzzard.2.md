---
id: 1992/buzzard.2
year: 1992
order: 5
authors: "Sean_Barrett"
orig_url: "https://www.ioccc.org/1992/buzzard.2.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1992/buzzard.2.hint"
title: "IOCCC 1992: Best Language Tool"
award_ja: "最高の言語ツール"
---

## 動作

独自スタックベース言語firstの評価器。次のように使う。

```
$ gcc -o buzzard.2 buzzard.2.c

$ echo "2 3 + . cr" | cat third - | ./buzzard.2
Welcome to THIRD.
Ok.
5
```

`2 3 + . cr`がプログラムで、`2`と`3`をスタックにプッシュして、それらを足したものに置き換えて（`+`）、それを10進数表示して（`.`）、改行を表示する（`cr`）という意味。

## 解説

firstは13命令しかない非常にプリミティブなスタックベース言語で、thirdはそれの標準ライブラリ。
実行するときは、firstインタプリタにまずthirdを食わせて、それからプログラムを食わせる。
[thirdのソースコード](https://github.com/ioccc-src/winner/blob/main/1992/third)は難読化されていないので、スタックベースプログラミング言語を知っていればそれなりに読める。
上の例の`2`とか`3`とかはすべてthirdが規定している。

firstとかthirdとかいう名前は[プログラミング言語FORTH](https://ja.wikipedia.org/wiki/Forth)の劣化版みたいなネタ。
secondがないのは、5文字を超えるため（FORTHはもともと「4番目の言語」という意味でfourthと名付けたかったが、当時の開発環境ではファイル名が最大5文字だったのでFORTHになったという逸話がある）。
thirdはforth79と大体同じくらいの機能を備えているとか備えていないとか。

スタックベース言語自体が難読なので、コードの難読化自体にそれほど特筆するところはないと思う。
この年の翌年（1993年）に、現代でも有名な[難解プログラミング言語](https://ja.wikipedia.org/wiki/%E9%9B%A3%E8%A7%A3%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0%E8%A8%80%E8%AA%9E)である[Brainfuck](https://ja.wikipedia.org/wiki/Brainfuck)や[Befunge](https://ja.wikipedia.org/wiki/Befunge)や[False](https://ja.wikipedia.org/wiki/False)が登場している。
当時そういうブームがあったのかもしれない。
