---
id: 1994/ldb
year: 1994
order: 5
authors: "Laurion_Burchall"
orig_url: "https://www.ioccc.org/1994/ldb.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1994/ldb.hint"
title: "IOCCC 1994: Best One-liner"
award_ja: "最高のワンライナー"
---

## 動作

標準入力から1行をランダムに選んで出力する。

```
$ cat rsp.txt
rock
scissors
paper

$ gcc -trigraphs -o ldb ldb.c

$ ./ldb < rsp.txt
rock

$ ./ldb < rsp.txt
paper

$ ./ldb < rsp.txt
rock

$ ./ldb < rsp.txt
scissors
```

## 解説

[trigraph](https://ja.wikipedia.org/wiki/%E3%83%88%E3%83%A9%E3%82%A4%E3%82%B0%E3%83%A9%E3%83%95)を使っているワンライナー。
コードの構造は`while(<cond>);`だけ。

アルゴリズムがちょっと面白い。
1行目は100%の確率で選ぶ、2行目は1/2の確率で選ぶ、3行目は1/3の確率で選ぶ、4行目は1/4の確率で選ぶ、……と進めていき、最後に選んだ行を出力する。
これですべての行を公平に選べる。
