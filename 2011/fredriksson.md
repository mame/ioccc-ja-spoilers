---
id: 2011/fredriksson
year: 2011
order: 5
authors: "Kimmo_Fredriksson"
orig_url: "https://www.ioccc.org/2011/fredriksson/fredriksson.c"
hint_url: "https://www.ioccc.org/2011/fredriksson/hint.html"
title: "IOCCC 2011: Most useful"
award_ja: "もっとも便利"
---

## 動作

誤字を許容するgrep。
`-k1`で、1文字の挿入・削除・書き換えを許容してマッチする。
`-i`は大文字・小文字の区別を無視する。

```
$ gcc -o fredriksson fredriksson.c

$ ./fredriksson -k1 -i POOT < /etc/group
root:x:0:
```

`-k2`なら2文字を許容する。
`-t`は、挿入・削除・書き換えに加えて入れ替えを許容する。
`-n`は行番号を表示する。

```
$ ulimit -s unlimited
$ ./fredriksson -k2 -t -n bofuskate < /usr/share/dict/american-english-large
111305:obfuscate
111306:obfuscated
111307:obfuscates
```

## 解説

`.`（ワイルドカード）と`[...]`（文字クラス・範囲）も使えるとのこと。
詳しくはhint.text参照。

コードでは巨大リテラルが目立つ。
これはCコードを圧縮したデータ。
grepの挙動は圧縮されたコードが実現している。
fredriksson.cはそれをこれを展開してag.cとして保存し、`gcc -O3 ag.c -o ag`を実行するだけ。
オリジナル版では、実行後にag.cと実行ファイルを削除していたけれど、この機能は削除したとのこと。

難読化について。
アルゴリズムとしては、ブロックソート（bzip2の特徴）を通した圧縮、近似文字列探索、編集距離計算の動的プログラミングなどいろいろ詰め込んであるらしい。
なお、圧縮と言っても圧縮前と圧縮後でサイズはほぼ変わっておらず、展開用のコードを含めるとむしろ大きくなっている。
Cコードの書き方としては、予約語を必要最小限にする、文は1つにする、などはよくある感じだけれど、数字を一切使っていないというのは少し新鮮。
また、バックスペース文字を挿入することにより、ソースコードをcatコマンドで見るとより紛らわしい。

アルゴリズムが難しいので、作者自身にも難読化を解除できない（おそらく）初の作品、と主張している。
同じ計算量でアルゴリズムをシンプルにすることは研究上の未解決の問題である、と。

`{`や`}`や`;`の後に空白文字が続く場合、IOCCCのコードサイズルールでゼロ文字扱いにするというルールの悪用も主張している。
これらの空白のほとんど圧縮データの中にあり、プログラムにとって意味がある（消したらデータが壊れる）から、とのこと。
