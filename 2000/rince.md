---
id: 2000/rince
year: 2000
order: 9
authors: "James_Bonfield"
orig_url: "https://www.ioccc.org/2000/rince.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/rince.hint"
title: "IOCCC 2000: Astronomically Obfuscated"
award_ja: "天文学的難読化"
---

## 動作

木星の4つの[ガリレオ衛星](https://ja.wikipedia.org/wiki/%E3%82%AC%E3%83%AA%E3%83%AC%E3%82%AA%E8%A1%9B%E6%98%9F)をプロットする。

```
$ gcc -o rince rince.c -lX11 -lm

$ ./rince
```

{% include img.html src="2000-rince-1.png" desc="4つのガリレオ衛星" %}

中央の大きな円が木星で、Iは[イオ](https://ja.wikipedia.org/wiki/%E3%82%A4%E3%82%AA_%28%E8%A1%9B%E6%98%9F%29)、IIは[エウロパ](https://ja.wikipedia.org/wiki/%E3%82%A8%E3%82%A6%E3%83%AD%E3%83%91_%28%E8%A1%9B%E6%98%9F%29)、IIIは[ガニメデ](https://ja.wikipedia.org/wiki/%E3%82%AC%E3%83%8B%E3%83%A1%E3%83%87_%28%E8%A1%9B%E6%98%9F%29)、IVは[カリスト](https://ja.wikipedia.org/wiki/%E3%82%AB%E3%83%AA%E3%82%B9%E3%83%88_%28%E8%A1%9B%E6%98%9F%29)。

第1引数はシミュレーション速度、第2引数はシミュレーションの起点時刻（[ユリウス通日](https://ja.wikipedia.org/wiki/%E3%83%A6%E3%83%AA%E3%82%A6%E3%82%B9%E9%80%9A%E6%97%A5)で指定）。
次のように実行するとアニメーションする。

```
$ ./rince 0.0001 2441193.6
```

## 解説

コードの前提に「巨大な彗星が木星や地球の起動を変えないこと」「紀元前2000年問題（あんまり昔だと計算が不正確になる）」「火星から観測した結果とは違うのでポータブルではない」などと書いてあっておもしろい。

コード形状は"4713BC"と"X"。前者は天文学で使われる[ユリウス通日](https://ja.wikipedia.org/wiki/%E3%83%A6%E3%83%AA%E3%82%A6%E3%82%B9%E9%80%9A%E6%97%A5)の起点の日（紀元前4713年1月1日）が由来。"X"は[X Window System](https://ja.wikipedia.org/wiki/X_Window_System)のロゴ。

賞名のAstronomicallyは「天文学的」という意味で、程度が大きいことの慣用表現とかけている。

---

次の3つは、ガリレオが衛星を発見した当時の様子とのこと。

1610年1月7日の夜に初めて観測し、木星を挟んで2つと1つの星を見つけた時の様子（IVには気づいてなかった？）。

```
$ make dmy2jd

$ ./rince 0 `./dmy2jd  7.8 1 1610`
```

{% include img.html src="2000-rince-2.png" desc="1610年1月7日ごろのガリレオ衛星" %}

翌日の夜に見たところ、予想に反してすべての星が東側に移動していた。

```
$ ./rince 0 `./dmy2jd  8.8 1 1610`
```

{% include img.html src="2000-rince-3.png" desc="1610年1月8日ごろのガリレオ衛星" %}

2日後の夜に見たところ、すべての星が西側に移動していた。
これらの天体は太陽ではなく木星の周りを回っているのでは？ということで[地動説](https://ja.wikipedia.org/wiki/%E5%9C%B0%E5%8B%95%E8%AA%AC)に行き着いたとか。

```
$ ./rince 0 `./dmy2jd 10.8 1 1610`
```

{% include img.html src="2000-rince-4.png" desc="1610年1月10日ごろのガリレオ衛星" %}
