---
id: 2014/wiedijk
year: 2014
order: 11
authors: "Freek_Wiedijk"
orig_url: "https://www.ioccc.org/2014/wiedijk/prog.c"
hint_url: "https://www.ioccc.org/2014/wiedijk/hint.html"
title: "IOCCC 2014: Most functional"
award_ja: "最も関数的"
---

## 動作

42を出力する。

```
$ gcc -o prog prog.c

$ ./prog
42
```

## 解説

10の階乗を計算している。
コード形状も、階乗を表す`!`マーク。

明示的なループも明示的な再帰呼び出しも使わずに階乗を計算している。
C言語で[Yコンビネータ](https://ja.wikipedia.org/wiki/%E4%B8%8D%E5%8B%95%E7%82%B9%E3%82%B3%E3%83%B3%E3%83%93%E3%83%8D%E3%83%BC%E3%82%BF)を定義し、それによって再帰呼び出しを行っているとのこと。

ちょっとした工夫として、10!の結果（3628800）をそのまま出力するのではなく、3628800秒を日数に変換して出力する。
1日は60*60*24 = 86400秒で、3628800/86400は42なので、その結果が表示されている。
42には「[生命、宇宙、そして万物についての究極の疑問の答え](https://ja.wikipedia.org/wiki/%E7%94%9F%E5%91%BD%E3%80%81%E5%AE%87%E5%AE%99%E3%80%81%E3%81%9D%E3%81%97%E3%81%A6%E4%B8%87%E7%89%A9%E3%81%AB%E3%81%A4%E3%81%84%E3%81%A6%E3%81%AE%E7%A9%B6%E6%A5%B5%E3%81%AE%E7%96%91%E5%95%8F%E3%81%AE%E7%AD%94%E3%81%88)」という元ネタがあり、ハッカーの間で好まれる数字。
