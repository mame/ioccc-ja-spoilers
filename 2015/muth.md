---
id: 2015/muth
year: 2015
order: 11
authors: "Dominik_Muth"
orig_url: "https://www.ioccc.org/2015/muth/prog.c"
hint_url: "https://www.ioccc.org/2015/muth/hint.html"
title: "IOCCC 2015: Most Complete Use of CPP"
award_ja: "CPPのもっとも完全な使い方"
---

## 動作

プリプロセッサでチューリングマシン。

5×2を計算する例らしい。

```
$ gcc -include "machine_times2.h" -include "tape_five.h" prog.c -o prog

$ ./prog
(((((((((((((,), 1), 1), 1), 1), 1), 1), 1), 1), 1), 1), _), _, (,))
```

他にもいろいろマシンやテープの定義があるので参照のこと。

## 解説

`#if`も再帰`#include`もせず、プリプロセッサを繰り返し適用することもなくチューリングマシンを実現しようという試み。
[[[2001/herrmann1]]]({{ site.baseurl }}{% link 2001/herrmann1.md %})の改善と言えるか。

実際のところプリプロセッサはチューリング完全ではないので、デフォルトでは8^3 = 512ステップだけ遷移を行う。
それで終わらなかったら、途中状態のテープが出力されるとのこと。
なお、このステップ数上限はビルドオプションの`-DX=n`で8^n回に変更できる。

また、`-DV=1`でステップごとに`~`を表示したり、`-DV=2`でステップごとのテープの状態を表示したりすることもできる。
