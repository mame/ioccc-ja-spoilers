---
id: 2004/anonymous
year: 2004
order: 1
authors: "Anonymous_2004"
orig_url: "https://www.ioccc.org/2004/anonymous.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/anonymous.hint"
title: "IOCCC 2004: Best use of \"Precious\" Lines"
award_ja: "「いとしい」行の最高の使い方"
---

## 動作

[トールキン](https://ja.wikipedia.org/wiki/J%E3%83%BBR%E3%83%BBR%E3%83%BB%E3%83%88%E3%83%BC%E3%83%AB%E3%82%AD%E3%83%B3)が作ったエルフ語の架空文字（[テングワール](https://ja.wikipedia.org/wiki/%E3%83%86%E3%83%B3%E3%82%B0%E3%83%AF%E3%83%BC%E3%83%AB)）をレンダリングする。

第1引数にアルファベット表記で渡すと、pgm形式の画像を出力する。

{: .wrap }
```
$ gcc -o anonymous anonymous.c

$ ./anonymous "ash nazg durhbatuluhk, ash nazg gimbatul, ash nazg thrakatuluhk, agh burzhumh-ishi krimpatul." >anonymous.pgm

$ convert anonymous.pgm anonymous.png
```

{% include img.html src="2004-anonymous.png" desc="『指輪物語』の「一つの指輪」に彫られている言葉" %}

## 解説

動作例の文言は、[指輪物語](https://ja.wikipedia.org/wiki/%E6%8C%87%E8%BC%AA%E7%89%A9%E8%AA%9E)に出てくる「[一つの指輪](https://ja.wikipedia.org/wiki/%E4%B8%80%E3%81%A4%E3%81%AE%E6%8C%87%E8%BC%AA#%E6%8C%87%E8%BC%AA%E3%81%AE%E9%8A%98)」に彫られている文言で、次のような意味とのこと。

> 一つの指輪は全てを統べ、
> 一つの指輪は全てを見つけ、
> 一つの指輪は全てを捕らえて、暗闇の中に繋ぎとめる。
> (One Ring to rule them all, One Ring to find them, One Ring to bring them all, and in the darkness bind them)

フォントは[Harri Peräläが作ったもの](http://www.sci.fi/~alboin/tengwar.htm)を必要な文字だけ取り出して埋め込んでいるとのこと。

賞名の"Precious"は[指輪物語の登場人物のセリフ](https://ja.wikipedia.org/wiki/%E3%82%B4%E3%82%AF%E3%83%AA)に由来するネタ。
「いとしい」と訳されているらしい。
anonymous.hintに書かれている"Frodo lives!"も指輪物語に由来する[ヒッピー文化のスローガン](https://en.wikipedia.org/wiki/Frodo_Lives!)。
指輪物語を読んだことがないので正しく理解できていない可能性がある。

コードの形状もおそらくテングワールではないかと思われるが、一致する字形を見つけられなかった。また、この字に特別な意味があるのかもわからない。
