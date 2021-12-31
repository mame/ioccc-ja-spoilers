---
id: 2020/ferguson1
year: 2020
order: 5
authors: "Cody_Ferguson"
orig_url: "https://www.ioccc.org/2020/ferguson1/prog.c"
hint_url: "https://www.ioccc.org/2020/ferguson1/index.html"
title: "IOCCC 2020: Don't tread on me award"
award_ja: "俺を踏みにじるな賞"
---

### 動作

[snake game](https://ja.wikipedia.org/wiki/%E3%83%98%E3%83%93%E3%82%B2%E3%83%BC%E3%83%A0)。

{: .wrap }
```
$ gcc -D_XOPEN_SOURCE -D_POSIX_C_SOURCE -D'f(a,b)'='((a)<(b)?(a):(b))' -DWALL='COLOR_CYAN' -DHEAD='COLOR_RED' -DBODY='COLOR_GREEN' -DWB='COLOR_BLACK' -DHB='COLOR_BLACK' -DBS='COLOR_BLACK' -DBG='COLOR_WHITE' -DBB='COLOR_BLACK' -o prog prog.c -lcurses

$ ./prog
```

{% include img.html src="2020-ferguson1.png" desc="プレイ画面" %}

`<`が蛇の頭（向きによってキャラクタが変わる）。上下左右で移動、スペースでポーズと再開、<kbd>q</kbd>で終了。
`*`が虫で、これを餌として集める。

### 解説

環境変数でいろいろな設定が可能。

* `WALL=0`としたら、壁に当たると死ぬ（デフォルトではトーラスになっている）
* `CANNIBAL=0`としたら、自分自身に当たっても死ななくなる（デフォルトでは当然死ぬ）
* `SHED`だけ動くごとに`SHEDS`だけ胴体が伸びる
* 胴体の長さの初期値は`SIZE`、`MAXSIZE`まで伸びたら勝利（`SIZE=-1`とすれば即時に勝利）
* `WAIT`を小さくするとすべてが速くなる
* `EVADE`を小さくすると虫の位置が変わるスピードが速くなる

ドキュメントがとんでもなく長い。

```
$ wc *.markdown COMPILING HACKING HISTORY README
   293   2657  14817 bugs.markdown
   170   1067   6293 chocolate-cake.markdown
   773   4555  34107 gameplay.markdown
    52    150   1161 judges.markdown
   773   4555  34107 remarks.markdown
   890   7762  42421 spoilers.markdown
   328   1955  11850 terminals.markdown
   409   3027  16822 troubleshooting.markdown
   595   4570  27663 COMPILING
   515   3643  20407 HACKING
   132   1543   8186 HISTORY
   148   1385   7640 README
  5078  36869 225474 total
```

コード形状は、遊んでいたらなんとなくできたパターンらしい。
全体の行数やブロックの行数が素数になっている。

賞名は、アメリカの昔の軍人[クリストファー・ガズデン](https://ja.wikipedia.org/wiki/%E3%82%AF%E3%83%AA%E3%82%B9%E3%83%88%E3%83%95%E3%82%A1%E3%83%BC%E3%83%BB%E3%82%AC%E3%82%BA%E3%83%87%E3%83%B3)がデザインしたアメリカ軍旗（[ガズデン旗](https://ja.wikipedia.org/wiki/%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB:Naval_jack_of_the_United_States_%281975%E2%80%931976%29.png)）に基づく。
