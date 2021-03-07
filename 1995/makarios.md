---
id: 1995/makarios
year: 1995
order: 8
authors:
  - "Selene_Makarios"
  - "Heather_Downs"
orig_url: "https://www.ioccc.org/1995/makarios.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1995/makarios.hint"
title: "IOCCC 1995: Best Short Program"
award_ja: "最高のショートプログラム"
---

## 動作

8進数表記したときに回文になる素数を列挙する。

```
$ gcc -o makarios makarios.c

$ ./makarios
2
3
5
7
111
131
141
161
323
343
373
535
565
717
737
747
767
10301
10601
11511
...
```

## 解説

105バイトで素数判定＋回文判定。特にすごい数秘術を使うわけではなく、超絶ハックを使うわけでもなく、意外と実直に計算していてこの長さなのでちょっとびっくりする。

8進数で偶数桁になる回文の素数が存在しないことは容易に証明できるので、回文判定の`a==i|`は省略できるような気もする。
