---
id: 1995/esde
year: 1995
order: 4
authors: "Sebastian_Deorowicz"
orig_url: "https://www.ioccc.org/1995/esde.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1995/esde.hint"
title: "IOCCC 1995: Interesting Algorithm"
award_ja: "興味深いアルゴリズム"
---

## 動作

音が似てそうな単語を含む行を見つける曖昧grep。

```
$ cat esde.data
Johnson
Mike
Steve Jonsun
Dolly
Stephany
Steven
Mick
Michael
Dorroty
Katty Johnsone
Denis
Dennis
Jahansen
Deorowicz
Dorowicz
Deodorowicz

$ gcc -o esde esde.c

$ ./esde esde.data Johanson
Johnson
Steve Jonsun
Katty Johnsone
Jahansen
```

## 解説

[Soundex](https://en.wikipedia.org/wiki/Soundex)という原始的な音声アルゴリズムで単語を符号化し、入力テキストで同じ符号になる単語を見つける。

このアルゴリズムは基本的に、各アルファベットに対応する数字が決まっていて、それに置き換えた上でヒューリスティックな変換をかけて符号とする。
概要はesde.hintを参照のこと。

コード形状は"Soundex"。
変数名は`fgetc`や`rand`や`sin`や`malloc`など、ライブラリ関数と紛らわしいものばかり。
