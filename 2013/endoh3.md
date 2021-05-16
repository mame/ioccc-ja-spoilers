---
id: 2013/endoh3
year: 2013
order: 7
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2013/endoh3/endoh3.c"
hint_url: "https://www.ioccc.org/2013/endoh3/hint.html"
title: "IOCCC 2013: Most tweetable 1-liner"
award_ja: "もっともツイート可能なワンライナー"
---

## 動作

次のように実行する。

```
$ gcc -o endoh3 endoh3.c

$ echo 'CDEFGABc' | ./endoh3 | ruby wavify.rb > cde.wav
```

cde.wavを再生すると、ドレミファソラシドが流れる。
音量に注意。

{% include audio.html src="2013-endoh3-1.mp3" desc="cde.wav" %}

---

きらきら星。

```
$ cat twinkle.abc | ./endoh3 | ruby wavify.rb > twinkle.wav
```

{% include audio.html src="2013-endoh3-2.mp3" desc="twinkle.wav" %}

---

[メヌエット](https://ja.wikipedia.org/wiki/%E3%83%A1%E3%83%8C%E3%82%A8%E3%83%83%E3%83%88_%28%E3%83%9A%E3%83%84%E3%82%A9%E3%83%BC%E3%83%AB%E3%83%88%29)。

```
$ cat menuet.abc | ./endoh3 | ruby wavify.rb > menuet.wav
```

{% include audio.html src="2013-endoh3-3.mp3" desc="menuet.wav" %}

## 解説

[ABC記譜法](https://ja.wikipedia.org/wiki/ABC%E8%A8%98%E8%AD%9C%E6%B3%95)のサブセットから音楽データを合成する。

対応している機能は次の通り。

* 音符は`C`から`B`（低いオクターブ）、`c`から`b`（高いオクターブ）
* 休符は`z`
* 音符の長さは`A`で8分音符、`A2`で4分音符、`A3`で付点4分音符、`A4`で2分音符。

楽譜データのパースは`scanf(" %c%f")`で行う。
音符を音程に変えるのは、ブルートフォースで見つけた次の式。

    (a % 32 + 5) * 9 / 5 % 13 + a / 32 * 12 - 22

音符のASCIIコードを`a`に入れてこの式を計算すると、次のように音程の数字が得られる。

* `'C' (ASCII  67)` →  3
* `'D' (ASCII  68)` →  5
* `'E' (ASCII  69)` →  7
* `'F' (ASCII  70)` →  9
* `'G' (ASCII  71)` → 10
* `'A' (ASCII  65)` → 12
* `'B' (ASCII  66)` → 14
* `'c' (ASCII  99)` → 15
* `'d' (ASCII 100)` → 17
* `'e' (ASCII 101)` → 19
* `'f' (ASCII 102)` → 20
* `'g' (ASCII 103)` → 22
* `'a' (ASCII  97)` → 24
* `'b' (ASCII  98)` → 26

シャープやフラットの記法（`^C`や`_C`）には対応していないが、次の文字で音を出すことは可能。

* `'K'` →  4 (= C#)
* `'L'` →  6 (= D#)
* `'U'` →  8 (= F#)
* `'V'` → 11 (= G#)
* `'P'` → 13 (= A#)

この音程の数字に対して`pow(2, n / 12.0)`を計算すれば周波数が得られる。
しかし`pow`は使えないので、`pow(2, 1 / 12.0)` ≒ `89/84.0`を`n`回掛けることで算出する。

そして、次の計算で出力を行う。

```
for(c = 0; c < 音符の長さに相当する回数; c++) putchar(a = c * D);
```

`a`は`char`型の変数、`D`が周波数、`c`はカウンタ。
`a`に代入することで、`D * c`を256で割った余りになるので、のこぎり波が出力されることになる。

以上の処理を1つの`for`文で行うことで実現されている。

細かいことだが、`scanf(" %c%f")`でパースする都合上、`C2E2`とは書けない。
`2e2`が浮動小数点数リテラルとみなされるため。
`C2 E2`のようにスペースをあけば回避できる。

賞名の"tweetable"は、「さえずる」という意味と、Twitterにツイート可能という意味を重ねている。
当時のTwitterの文字数制限（140文字）に収まるコードなので。
