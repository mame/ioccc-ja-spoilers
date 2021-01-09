---
id: 1987/hines
year: 1987
order: 3
patch: true
authors: "Spencer_Hines"
orig_url: "https://www.ioccc.org/1987/hines/hines.c"
hint_url: "https://www.ioccc.org/1987/hines/hint.html"
title: "IOCCC 1987: Worst Style"
award_ja: "最悪のスタイル"
---

## 動作

テキスト中のgotoの数を教えてくれる。
```
$ gcc -o hines hines.c

$ ./hines hines.c
24    goto   's

$ cat tmp
gotogotogoto

$ ./hines tmp
3    goto   's
```

## 解説

識別子がgotoのアナグラムばかりで、9カラムのような形状。
1つの処理を何かやると必ずgotoを使って次の処理に飛ぶ、というコードになっている。

これはコーディングスタイルに関する時事ネタ。
1968年にDijkstraが[構造化プログラミング](https://ja.wikipedia.org/wiki/%E6%A7%8B%E9%80%A0%E5%8C%96%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0)を提唱する前後に書いた [「Go To Statement Considered Harmful（Go To文は有害と考えられる）」](https://ja.wikipedia.org/wiki/%E6%A7%8B%E9%80%A0%E5%8C%96%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0#1968%E5%B9%B4%E3%81%AE%E6%8A%95%E6%9B%B8%E3%80%8Cgoto%E6%96%87%E3%81%AF%E6%9C%89%E5%AE%B3%E3%80%8D)という文書が出て20年弱たったころで、gotoは絶対に使ってはいけないと盲信する人が増えていたところに、1987年3月のCommunications of the ACMに「"GOTO Considered Harmful" Considered Harmful」という反論記事が出て、議論が盛り上がっていた時期。
IOCCC 1987の締切は1987年5月30日なので、その記事を踏まえて作られたのではないかと思う。
少なくとも審査員はそれを踏まえて採択したようで、hint.textでも当該記事に触れている。

無引数の`exit();`が動かないので、そこだけ修正した。
