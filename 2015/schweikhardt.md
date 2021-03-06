---
id: 2015/schweikhardt
year: 2015
order: 12
authors: "Jens_Schweikhardt"
orig_url: "https://www.ioccc.org/2015/schweikhardt/prog.c"
hint_url: "https://www.ioccc.org/2015/schweikhardt/hint.html"
title: "IOCCC 2015: Best Documented"
award_ja: "最高にドキュメントが書かれている"
tabsize: 4
---

## 動作

[コラッツ予想](https://ja.wikipedia.org/wiki/%E3%82%B3%E3%83%A9%E3%83%83%E3%83%84%E3%81%AE%E5%95%8F%E9%A1%8C)の数列を計算する。

```
$ gcc -Dtyp=uint64_t -o prog prog.c

$ ./prog 6
0000000000000006
0000000000000003 1
000000000000000A 2
0000000000000005 3
0000000000000010 4
0000000000000008 5
0000000000000004 6
0000000000000002 7
0000000000000001 8
```

入力も出力も16進数で行われることに注意。

## 解説

コラッツ予想は、偶数なら2で割り、基数なら3を掛けて1を足す、という処理を繰り返していくうちに1にたどり着く、という予想。
動作例に示した6の場合、6→3→10→5→16→8→4→2→1となる。
多倍長整数で計算を行う。

ドキュメントが非常に長く、700行ほどある。
guidelines.txtに書かれた審査プロセスにしたがって、この作品の特徴などをPRしている。
Cコードの静的・動的解析ツールをいろいろ適用した結果も書かれている。
[MISRA C](https://ja.wikipedia.org/wiki/MISRA_C)のルールがどのように難読化に寄与したか、なども。

コード形状に特徴はない。
審査プロセスにC beautifierを適用するとあるので、あらかじめindentを適用しておいたとのこと。
1文字の変数名は古いので3文字。
基本的に[タンパク質を構成するアミノ酸](https://ja.wikipedia.org/wiki/%E3%82%BF%E3%83%B3%E3%83%91%E3%82%AF%E8%B3%AA%E3%82%92%E6%A7%8B%E6%88%90%E3%81%99%E3%82%8B%E3%82%A2%E3%83%9F%E3%83%8E%E9%85%B8)の3文字表記を採用している。
2の累乗以外のマジックナンバーを使わない、という制約も。
