---
id: 1987/korn
year: 1987
order: 4
authors: "David_Korn"
orig_url: "https://www.ioccc.org/1987/korn/korn.c"
hint_url: "https://www.ioccc.org/1987/korn/hint.html"
title: "IOCCC 1987: Best One Liner"
award_ja: "最高のワンライナー"
---

## 動作

`unix`と表示するプログラム。

```
$ gcc -o korn korn.c

$ ./korn
unix
```

## 解説

短くてシンプルなプログラムなので、IOCCCの中ではよく解説されている作品。
コード中に`six`やhave funなどが仕込まれているのがとてもおしゃれ。

この作品はとても短いので、比較的容易に読み解ける。

* `"\012"`は`"\n"`の8進数表記。
* `unix`は（Unix環境で）1として定義されている定数。
* `&idx[str]`はポインタ演算で`idx + str`と同じ意味。
* `&unix["\021%six\012\0"]`は`1 + "\021%six\n\0"`なので実質`"%six\n"`。
* `(unix)["have"]`は`"have"[1]`なので`'a'`、ASCIIコードで0x61。
* `(unix)["have"]+"fun"-0x60`は`0x61+"fun"-0x60`、つまり`"fun"+1`、1文字進めるので`"un"`。

よってこのプログラムは実質的に`printf("%six\n", "un");`をしている。

作者のDavid Kornは[ksh](https://ja.wikipedia.org/wiki/KornShell)の作者。
