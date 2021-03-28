---
id: 2000/briddlebane
year: 2000
order: 4
authors:
  - "Moxen_N._Briddlebane"
  - "Lord_Zarbon"
orig_url: "https://www.ioccc.org/2000/briddlebane.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/briddlebane.hint"
title: "IOCCC 2000: Best Abuse of User"
award_ja: "ユーザに対する最高の悪口"
---

## 動作

ユーザを罵るメッセージが自動生成される。

```
$ gcc -o briddlebane briddlebane.c -lm

$ ./briddlebane
you are a uneducated dumpster of misery
```
「おまえは悲惨な無知なゴミ箱だ」

```
$ ./briddlebane
you are a virulent bag of refuse
```

「おまえはクズの有毒なバッグだ」

## 解説

この作品の面白さはよくわかっていない。
英語ネイティブには面白いのかもしれない。
上の例は比較的やさしいメッセージで、あまり書きたくない単語もいっぱい含まれている。

技術的なポイントは、メッセージのエンコード方法だと思う。
巨大な文字列リテラルにエンコードされていて、`printf`の直前で`for(int i=0;i<1079;i++) printf("%c", s[i]);`とすれば隠されている単語一覧を見ることはできた。
文字列リテラルは632バイトで、単語一覧が1079バイトだから、何らかの圧縮がされていると思われるが、詳しくは見ていない。
briddlebane.hintに書かれている"114"と"2"というヒントは、114を足して2でxorをとった上で数字をかき回しているのはわかるけれど、これらの数字に特別な意味があるのかはわからない。
乱数生成に`rand`2つの数字を極座標として、直交座標に変換した数字を使っているようだが、理由はよくわからない（[ボックス・ミュラー法](https://ja.wikipedia.org/wiki/%E3%83%9C%E3%83%83%E3%82%AF%E3%82%B9%EF%BC%9D%E3%83%9F%E3%83%A5%E3%83%A9%E3%83%BC%E6%B3%95)にしては`log`がないので違いそう）。
hintでは、「このプログラムはLord Zarbon（ドラゴンボールのザーボン？）から送られてきた」というようなノリで書かれている。

賞名は、「悪用」という意味のabuseではなく、「悪口」「悪態」という意味だと思う。
