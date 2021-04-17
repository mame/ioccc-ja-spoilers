---
id: 2005/klausler
year: 2005
order: 7
authors: "Peter_Klausler"
orig_url: "https://www.ioccc.org/2005/klausler/klausler.c"
hint_url: "https://www.ioccc.org/2005/klausler/hint.text"
title: "IOCCC 2005: Abuse of the rules"
award_ja: "ルールの悪用"
---

## 動作

アナグラムを生成する。

{: .wrap }
```
$ cat /usr/share/dict/words | tr -cd 'A-Za-z\n' | tr A-Z a-z | egrep -v '^[^ais]$' | sort | uniq | sed 's/^/"/;s/$/",/' > dict.h

$ gcc -o klausler klausler.c

$ ./klausler hello world
howled roll
rolled howl
droll whole
hello world
droll low eh
droll low he
droll owl eh
droll owl he
doll howl re
doll her low
doll her owl
drew loll ho
drew loll oh
hell low rod
hell old row
hell owl rod
hold roll we
hold well or
lewd roll ho
lewd roll oh
loll word eh
loll word he
loll hew rod
loll how red
loll red who
lord well ho
lord well oh
roll weld ho
roll weld oh
roll hew old
roll how led
roll led who
```

## 解説

`#include "dict.h"`しているが、これは/usr/share/dict/のファイルなどからdict.hを指定フォーマットで作る必要がある。
IOCCCの配布パッケージにはすでに生成された次のようなファイルが添付されている。

```
"a",
"aardvark",
"abaci",
"aback",
"abacus",
"abacuses",
"abacuss",
"abandon",
"abandoned",
"abandoning",
...
"zooming",
"zooms",
"zoos",
"zucchini",
"zucchinis",
```

ソースコードに入りきらないものはユーザの環境からもってこよう、というところが審査員の琴線に触れた模様。
IOCCCの第1のルール、「投稿作品は完全なプログラムでなければならない」に挑戦しているようになっている。。
ただし作者本人にはルールに挑戦するつもりはなかったとのこと。
