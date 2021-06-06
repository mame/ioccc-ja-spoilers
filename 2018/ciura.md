---
id: 2018/ciura
year: 2018
order: 6
authors: "Marcin_Ciura"
orig_url: "https://www.ioccc.org/2018/ciura/prog.c"
hint_url: "https://www.ioccc.org/2018/ciura/hint.html"
title: "IOCCC 2018: Most likely to be awarded"
award_ja: "もっとも表彰されそう"
---

## 動作

入力した英文の中で使われている受動態を指摘する。

```
$ gcc -o prog prog.c

$ ./prog < hint.text
```

{% include img.html src="2018-ciura.png" desc="受動態が反転で指摘されている" %}

## 解説

コード形状は"STRUNK & WHITE"。
Strunk & Whiteとは、["The Elements of Style"](https://en.wikipedia.org/wiki/The_Elements_of_Style)という英文ライティングの有名な教科書のこと（著者名のストランクとホワイト）。
この教科書は、受動態を嫌っていることで有名。

hint.textはたくさんの受動態で書かれている。

次の受動態がサポートされている。

* 普通の受動態 "Foo was bazzed by bar."
* getの受動態 "I got almost quuxed."
* 短縮形 "I'm not really quuxed: foo wasn't bazzed."
* 疑問形 "Who has been quuxed?  Was foo indeed bazzed?  How was it bazzed?"
* 倒置法 "Also bazzed is bar."

出力は文単位で区切って出すが、短縮形やイニシャルに続くピリオドのあとは区切らないように工夫しているとのこと。
規則過去分詞だけでなく不規則過去分詞も適切に扱われる。
-edで終わっても過去分詞ではない単語もあることに注意。

実装としては、状態機械を作りこんであるとのこと。
詳細は読み解けていないが、著者自身の研究が元になっている模様。
