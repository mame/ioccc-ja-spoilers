---
id: 1988/dale
year: 1988
order: 1
patch: true
authors: "Paul_Dale"
orig_url: "https://www.ioccc.org/1988/dale.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1988/dale.hint"
title: "IOCCC 1988: Best abuse of system calls"
award_ja: "システムコールの最高の悪用"
---

## 動作

echoと同じ。

```
$ gcc -traditional-cpp -o dale dale.c

$ ./dale hello world
hello world
```

`-n`オプションで改行抑制。

```
$ ./dale -n hello world && echo END
hello worldEND
```

## 解説

賞名の通り、システムコール関数を乱用している。

* 適当な整数を作るために`chroot`や`kill(1)`を呼ぶ
* `close(0)`して`dup(1)`して`close(1)`をすることでstdoutを0番に変え、さらに`pipe()`を呼んで1番と2番をパイプにする
* `fork()`して、子プロセスはコマンドライン引数を2番に書き込み、親プロセスは1番を読み出し0番（stdout）に書き出す

他に、`#define case_3 default`や`#define while switch`のようなフェイントは単純だけど好き。

次の難読化は現代では動かない。1つめは修正が必要、2つめと3つめは`-traditional-cpp`で解決できる。

* `#define _ define`している
* `#define a(x)get/***/x/***/id())`として`a(u)`とすることで`getuid()`を作り出している（`##`にすれば動く）
* `for/*/(;;);/*/k()`が`fork()`になることを利用している（怖い）
