---
id: 1996/westley
year: 1996
order: 10
authors: "Brian_Westley"
orig_url: "https://www.ioccc.org/1996/westley.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1996/westley.hint"
title: "IOCCC 1996: Best One Liner"
award_ja: "最高のワンライナー"
---

## 動作

見た目を設定できる時計。
実行には、コマンドライン引数でテンプレートを与える必要がある。

westleyを実行するシェルスクリプトが3つ添付されている。
[clock1](https://github.com/ioccc-src/winner/blob/main/1996/clock1)は柱時計。
13:00過ぎに実行した例。

```
$ gcc -m32 -o westley westley.c

$ ./clock1

 -<<==O==>>-
--====v====--
|     .     |
|      *    |
|           |
|     0     |
|           |
|           |
|           |
=============
  \       /
   \     /
   |     |
   |  |  |
   |  |  |
   |  |  |
   |  |  |
   |  O  |
   |     |
)-----------(
|           |
=============
```

[clock2](https://github.com/ioccc-src/winner/blob/main/1996/clock2)は逆向きに進む置き時計。

```
$ ./clock2

   )-=*=-(
--===-=-===--
)     x     (
|    X      |
|           |
|     0     |
|           |
|           |
)           (
]]==-----==[[
   )  |  (
 -----------
```

[clock3](https://github.com/ioccc-src/winner/blob/main/1996/clock3)はゲージ表示。

```
$ ./clock3

..3..6..9..12 Hours
|
   |
 ----.----10---.----20---.----30---.----40---.----50---.---- Minutes
```

clock1からclock3は./westleyを引数付きで呼び出すスクリプトになっている。westley自身のコマンドライン引数の意味は次の通り。

* 第1引数：分のマークを置く位置のマップデータ
* 第2引数：時のマークを置く位置のマップデータ
* 第3引数：分と時のマーク
* 第4引数：時計のテンプレート

## 解説

これがたった92バイトで実現されているのには心を動かされる。

`localtime`の返り値の時と分をマップデータで引いて、テンプレート中のその位置に指定されたマークを置く、というのが極めて簡潔に実現されている。
`localtime()`の返す`struct tm*`を`int*`とみなして時と分を読み出している。
`argc`が初期状態で5なので、`argc/=2`をループの条件とすることで、2、1となる。
2は`localtime()`の返り値である`struct tm`の3番目のフィールド、つまり`tm_hour`に対応する。
1は2番目のフィールド、つまり`tm_min`に対応する。
実に巧妙。

`localtime`が返すポインタを暗黙的に`int`として扱うので、`-m32`が必要。
プロトタイプ宣言`int *localtime();`を足すのでもよい。
