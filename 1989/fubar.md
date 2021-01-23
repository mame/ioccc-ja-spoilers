---
id: 1989/fubar
year: 1989
order: 1
patch: true
authors: "Jay_Vosburgh"
orig_url: "https://www.ioccc.org/1989/fubar.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1989/fubar.hint"
title: "IOCCC 1989: Best self-modifying program"
award_ja: "最高の自己書き換えプログラム"
---

## 動作

階乗の計算。

動かし方にクセがある。

```
$ cp fubar.c ouroboros.c

$ chmod +x ouroboros.c

$ ./ouroboros.c 10
...
10 factorial = 3628800
```

## 解説

このコードはC言語とシェルスクリプトのかんたんなpolyglotになっている。
シェルスクリプトがやっている処理をわかりやすく書き下すと、次のような処理となる。

```
$ cp fubar.c ouroboros.c
$ cc -o x ouroboros.c && cat ouroboros.c | ./x 5 > x1 && mv x1 ouroboros.c
$ cc -o x ouroboros.c && cat ouroboros.c | ./x 5 > x1 && mv x1 ouroboros.c
$ cc -o x ouroboros.c && cat ouroboros.c | ./x 5 > x1 && mv x1 ouroboros.c
$ cc -o x ouroboros.c && cat ouroboros.c | ./x 5 > x1 && mv x1 ouroboros.c
$ cc -o x ouroboros.c && cat ouroboros.c | ./x 5 > x1 && mv x1 ouroboros.c
$ cc -o x ouroboros.c && cat ouroboros.c | ./x 5 > x1 && mv x1 ouroboros.c
5 factorial = 120
```

つまり、自分をコンパイルし、自分を読み込んであらたなコードを作る、ということを繰り返す。

初期コードのouroboros.cの先頭には、

```
#define QQ      1
#define TT         1
```

と書かれている。
これをビルドし、ouroboros.cを標準入力に流し込みながら`./x 5`と実行すると、ほとんど同じコードが出力されるが、上の箇所が下のように変わっている。

```
#define QQ      2
#define TT         2
```

これをouroboros.cとして上書き保存し、同じ処理を行うと、次のようになっている。

```
#define QQ      3
#define TT         6
```

`QQ`が繰り返し回数、`TT`がここまでの階乗の値であることがわかる。
これを繰り返して、'QQ'がコマンドライン引数の数字に到達すると、標準エラー出力に`5 factorial = 120`と出力して停止する。

実行可能なプログラムを繰り返し出力する初の作品。
元ソースコードを標準入力に与えているので厳密な意味でのQuineではないが、コードをもてあそぶ体験の原型がある。
polyglot自体は[[[1985/applin]]]({{ site.baseurl }}{% link 1985/applin.md %})で既出だが、繰り返しの処理を自動化するシェルスクリプトをpolyglotとして盛り込んでいるところはポイント高い。
さらに、`cc ouroboros.c -o x`の文字列がC言語プログラムとして解釈されているところも（単なるマクロ置換ではあるが）面白い。

現代の環境で動かすために、2点の変更を行っている。

* メーラの都合で折り返されていた行をあらかじめ結合した（`ex`コマンドのスクリプトが付属していたがうまく動かなかった）。
* `PATH`にカレントディレクトリが含まれている前提だったので、`./x`とした。
