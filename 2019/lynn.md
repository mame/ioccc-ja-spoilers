---
id: 2019/lynn
year: 2019
order: 11
authors: "Ben_Lynn"
orig_url: "https://www.ioccc.org/2019/lynn/prog.c"
hint_url: "https://www.ioccc.org/2019/lynn/hint.html"
title: "IOCCC 2019: Most functional compiler"
award_ja: "もっとも関数的なコンパイラ"
---

## 動作

Haskellサブセットのコンパイラ。

コンパイルすると、HaskellからCコード断片を生成するコンパイラになっている。
```
$ gcc -o prog prog.c

$ (./prog < fib.hs; cat prog.c) > fib.c
```

生成されたCコード断片とprog.cを連結してコンパイルすると、Haskellコードの意味で動作する。

```
$ gcc -o fib fib.c

$ ./fib
832040
```

## 解説

かなり簡素にしたHaskellサブセットを受理して、独自のバイトコードを出力する。

* ややこしい型を排除した
* 実行を阻害するガベージコレクションはしない
* IOモナドを排除し、すべての関数は純粋
* 演算子を限定しているのでややこしいレイアウトルールは不要
* プリミティブの型は`Int`のみ、他の型はスコットエンコーディングで実現
* dataはあるが、タプルなし、リスト内包表記なし、単項演算子なし
* `main`は`[Int] -> [Int]`で入出力を表現する

出力のバイトコードはC言語の`#define`にくるんで出力し、prog.cと結合してコンパイル・実行することが前提になっている。

セルフホストするコンパイラ、正規表現の文字列列挙、強連結成分分解のサンプルコードが添付されている。
