---
id: 1993/schnitzi
year: 1993
order: 9
authors: "Mark_Schnitzius"
orig_url: "https://www.ioccc.org/1993/schnitzi.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1993/schnitzi.hint"
title: "IOCCC 1993: Obfuscated Intelligence Award"
award_ja: "難読化された知能賞"
---

## 動作

謎のAI。

```
$ gcc -o schnitzi schnitzi.c

$ ./schnitzi schnitzi.info
This program answers questions about paragraphs
of text posed to it in English.  It is written
in C.  Mark Schnitzius is the author of this
program.

The Loch Ness monster has been captured.  Elvis
is alive.  Hostler was a woman.  The NASA moon
landings were clearly faked.


?
```

英語の質問に答えてくれる。

```
? Who is Mark Schnitzius?
 The author of this program.

? What exactly does this program do?
 Answers questions about paragraphs of text posed to it in English.

? What language is it written in?
 C.

? Has the Loch Ness monster really been captured?
 Yes.

? Who was Hitler?
 Hostler a woman.

? Were the NASA moon landings faked?
 Clearly.

? Is it true that Elvis is alive?
 Yes.

? Do colorless green ideas sleep furiously?
 Beats me.
```

## 解説

コマンドライン引数で示されたファイルの文章から、質問中の単語の一致率が高い文を特定し、そこからいい感じに回答文を生成する。

コード形状に意味はなさそうだけれど面白い。カッコを揃えた波々がなにか楽しげ。
