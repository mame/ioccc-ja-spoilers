---
id: 2020/endoh2
year: 2020
order: 3
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2020/endoh2/prog.c"
hint_url: "https://www.ioccc.org/2020/endoh2/index.html"
title: "IOCCC 2020: Best perspective"
award_ja: "最高の展望"
---

### 動作

ROT13の結果を[スターウォーズのオープニング風](https://ja.wikipedia.org/wiki/%E3%80%8E%E3%82%B9%E3%82%BF%E3%83%BC%E3%83%BB%E3%82%A6%E3%82%A9%E3%83%BC%E3%82%BA%E3%80%8F%E3%81%AE%E3%82%AA%E3%83%BC%E3%83%97%E3%83%8B%E3%83%B3%E3%82%B0%E3%82%AF%E3%83%AD%E3%83%BC%E3%83%AB)に表示する。

```
$ cat hello.txt
URYYB
JBEYQ
NAQ
TNYNKL

$ gcc -o prog prog.c

$ ./prog hello.txt
```

```













                   I^  _^   I^^^^^   I       I        _I^^^_
                 _^^^^I^   _^^^^     I       ^_        I_  ^I
                ^     ^   ^^^^^^     ^^^^     ^^^^^^     ^^^^


          _^  _  _I     _^^^^_      I^^^I_     I           ^I^^^___
         I^ _I^ _^    _I     I      I    I     ^I           ^_    ^I
        II_^_^_I     _I     _^     I^^^I^       I             I     ^_
      _II^  II^      I     _I      I    I       I_            ^I     ^_
     _I^   I^        I_  __^       I    ^I       I             ^I   __^
                       ^^                        ^^^^^^^^        ^^^


```

デモ動画。

{% include youtube.html src="pwFQ6J2EHT0" desc="作者によるデモ動画" %}

### 解説

コード形状は"IOCCC 2020"をスターウォーズのロゴの雰囲気にしたもの。
大文字アルファベットの字形を、2次ベジエ曲線によって表現したものを埋め込んでいる。

`double complex`型によってベクトルを表現している（[[[2012/endoh1]]]({{ site.baseurl }}{% link 2012/endoh1.md %})と同じネタ）。
