---
id: 1992/adrian
year: 1992
order: 1
authors: "Adrian_Mariano"
orig_url: "https://www.ioccc.org/1992/adrian.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1992/adrian.hint"
title: "IOCCC 1992: Most Educational"
award_ja: "もっとも教育的"
---

## 動作

正規表現のかわりに[有限状態機械](https://ja.wikipedia.org/wiki/%E6%9C%89%E9%99%90%E3%82%AA%E3%83%BC%E3%83%88%E3%83%9E%E3%83%88%E3%83%B3)を書くgrepコマンド。

たとえばこれは、`t(h|c)(e|h)$`に相当するステートマシン。（読み方は解説で）

```
$ cat adrian.grep.try
    <q0> t <q1> . <q0>
    <q1> hc <q2> t <q1> . <q0>
    <q2> eh [q3] t <q1> . <q0>
    [q3] t <q1> . <q0>
```

adrian.hintに適用すると、`the`か`tch`で終わる行だけが列挙される。

```
$ gcc -o adrian adrian.c

$ ./adrian adrian.grep.try < adrian.hint
    indicated by the appropriate rule.  This process is repeated until the
    string is consumed.  If the current state at this point is one of the
    possible input character at each state.  To simplify descriptions of the
    the '.' character matches any character if it occurs first in the
    The new file now contains all lines which match
    examples that appear above, and from, which is used to emulate the
```

## 解説

次の1行で、「状態`state`にいるときに、`chars1`のどれかの文字を読んだら状態`dest1`へ、`chars2`のどれかの文字を読んだら状態`dest2`へ遷移せよ」という規則を表す。

```
       state chars1 dest1 chars2 dest2 ...
```

よって前記のadrian.grep.tryは、

* 初期状態`<q0>`から文字`t`を読んだら状態`<q1>`へ、それ以外だったら`<q0>`のまま（`.`は任意の文字を表す）
* 状態`<q1>`で文字`h`または`c`を読んだら状態`<q2>`へ、`t`だったら`<q1>`のまま、それ以外なら`<q0>`へ戻る
* 状態`<q2>`で文字`e`または`h`を読んだら状態`[q3]`へ、`t`だったら`<q1>`に戻る、それ以外なら`<q0>`へ戻る
* 状態`[q3]`でさらに文字があり、それが`t`だったら`<q1>`に戻る、それ以外なら`<q0>`へ戻る

という意味になっている。`]`で終わる状態は受理状態として扱われる。
（なお、添付のadrian.grep.tryは最後の規則が`[q3] . <q1>`になっていて、たとえば`thexhe`なんかにもマッチしてしまうので、バグだと思う）


ここからが本題。
adrian.cはそれ自身が状態機械の記述になっている。
ファイル先頭のコメントに`/* . wc . */`とあるが、これは初期状態`/*`で何か文字を読んだら状態`wc`に行く、という意味になっている。
状態`wc`から記述は82行目に`wc |C ==o[o[C] .e] .`というのがある。以下省略するが、この状態機械でadrian.c自身をgrepすると、wcのコードがでてくる。

```
$ ./adrian adrian.c < adrian.c > wc.c

$ gcc -o wc wc.c

$ ./wc adrian.hint
    227   1108   7587
```

そして、埋め込まれているコードはwcだけではない。
`/* . wc . */`を`/* . echo| . */`と書き換えることでecho相当のコードが得られる。
他に、head、basename、sleepが埋め込まれているとのこと。
それぞれの得方はadrian.hintを参照のこと。
headは比較的、grepの条件が読みやすいので読んでみるとよい（`W`がある行を出力する、という程度）。

これぞIOCCC、という風情の作品。
