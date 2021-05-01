---
id: 2011/konno
year: 2011
order: 9
authors: "Taketo_Konno"
orig_url: "https://www.ioccc.org/2011/konno/konno.c"
hint_url: "https://www.ioccc.org/2011/konno/hint.html"
title: "IOCCC 2011: Best one liner"
award_ja: "最高のワンライナー"
---

## 動作

[QWERTY配列](https://ja.wikipedia.org/wiki/QWERTY%E9%85%8D%E5%88%97)のキーボードの文字の位置を示す。

```
$ gcc -o konno konno.c

$ ./konno qwerty
o o o o o o . . . .
 . . . . . . . . .
  . . . . . . .

$ ./konno abcde
. . o . . . . . . .
 o . o . . . . . .
  . . o . o . .

$ ./konno typewriter
. o o o o o . o . o
 . . . . . . . . .
  . . . . . . .
```

## 解説

128バイトで実現されている。
短いコードで実現できるようにキーボードの表示方法が工夫されている。
文字列リテラルはQWERTY配列を表現するデータであるが、"qwerty..."などと書いてあると興ざめなので、xorで暗号化されている。
アイデアが良い上に、工夫と配慮を感じる作品。
