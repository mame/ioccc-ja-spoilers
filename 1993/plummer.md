---
id: 1993/plummer
year: 1993
order: 8
authors: "Mark_Plummer"
orig_url: "https://www.ioccc.org/1993/plummer.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1993/plummer.hint"
title: "IOCCC 1993: Best One Liner"
award_ja: "最高のワンライナー"
---

## 動作

第1引数の値をインクリメントしていき、桁が増えるときは0に戻って、またインクリメントを続けるというループ。第2引数にダミーに値を与える必要がある。

```
$ gcc -o plummer plummer.c

$ ./plummer 50 dummy
```

とすると、50→51→52→...→98→99→00→01→...→98→99→00→01→...という表示を繰り返す。

```
$ ./plummer 500 dummy
```

ならば、500→501→502→...→998→999→000→001→...となる。


## 解説

`atoi`などを使わず多倍長整数的に計算する125バイトのワンライナー。
形が数字っぽい`O`や`l`や`S`などを変数名に使っている。

`argv[2]`が`argv[1]`の`'\0'`を挟んだ直後に置かれているという構造を期待している。
