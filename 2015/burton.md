---
id: 2015/burton
year: 2015
order: 1
authors: "Dave_Burton"
orig_url: "https://www.ioccc.org/2015/burton/prog.c"
hint_url: "https://www.ioccc.org/2015/burton/hint.html"
title: "IOCCC 2015: Most Useful"
award_ja: "もっとも便利"
---

## 動作

レジスタのある電卓。

```
$ gcc -o prog prog.c

$ ./prog "a=1; b=0xf; a+b"
16      0x00000010
```

出力は10進数と16進数で行われる。

## 解説

サポートしている演算子や優先順位は[calc.man](https://www.ioccc.org/2015/burton/calc.man)を参照のこと。

コード形状は"Calc"。
数字や文字列リテラルを（極力）使わないという制約で書かれている。
また、制御構造は`for`と`return`のみとのこと。
コードサイズは`iocccsize -i`で2015になるようにしている。
波括弧はメソッド定義でしか使わない。

メモリ確保をせずに動いているとのこと。
どうも、`(char*)argv-65536`～`argv`あたりのアドレスを勝手に使っているように見える。
valgrind上で実行したらSEGVする。将来動かなくなるかもしれない。
