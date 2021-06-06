---
id: 2018/endoh2
year: 2018
order: 8
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2018/endoh2/prog.c"
hint_url: "https://www.ioccc.org/2018/endoh2/hint.html"
title: "IOCCC 2018: Best use of python"
award_ja: "Pythonの最高の使用"
---

## 動作

オウムの絵が回るQuine。

```
$ gcc -o prog prog.c

$ ./prog
```

{% include img.html src="2018-endoh2-1.png" desc="最初の出力" %}

この出力は色のためのエスケープシーケンスが混ざっているが、そのままコンパイルできる。

```
$ ./prog > tmp.c

$ gcc -o tmp tmp.c

$ ./tmp
```

{% include img.html src="2018-endoh2-2.png" desc="2枚目の出力" %}

同じことを合計10回繰り返すと、赤いオウムに戻る。詳しくはデモ動画を参照のこと。

{% include youtube.html src="6Ak1DC1uBuc" desc="作者によるデモ動画" %}

## 解説

新しいハッカーが好きなオウムと、古いハッカーが好きなオウムのネタをかけ合わせたハイコンテクストな作品。
1つは[Party Parrot](http://cultofthepartyparrot.com/)と呼ばれるインターネットミーム。
もう1つはイギリスのコメディテレビ番組[『空飛ぶモンティ・パイソン』](https://ja.wikipedia.org/wiki/%E7%A9%BA%E9%A3%9B%E3%81%B6%E3%83%A2%E3%83%B3%E3%83%86%E3%82%A3%E3%83%BB%E3%83%91%E3%82%A4%E3%82%BD%E3%83%B3)の[『死んだオウム』](https://ja.wikipedia.org/wiki/%E6%AD%BB%E3%82%93%E3%81%A0%E3%82%AA%E3%82%A6%E3%83%A0)というスケッチ（コント）。
賞名の"Python"は[プログラミング言語のPython](https://ja.wikipedia.org/wiki/Python)ではなく、モンティ・パイソンを指している（なお、プログラミング言語のPythonの名前はモンティ・パイソンに由来している）。

prog.cの形状は『死んだオウム』（dead parrot）を踏まえて"Undead Parrot"。
出力のソースコードの一番下の行に出てくるメッセージは、『死んだオウム』に出てくる、オウムが死んだことを多種多様な表現で説明するセリフの主語をIにしたもの。
また、下から2行目の`__<-_Source_of_Parrots__`という文字列がある行には、`http://cultofthepartyparrot.com/`のURLが隠されている（オウムの胴体で見えなくなっている）。

見飽きたQuineネタではあるが、10枚のオウムの絵と10個のセリフのデータを持たせるのはそれなりに大変。
オウムの絵は輪郭データのみを保存していて、胴体の塗りつぶしは実行時に行っている。
これらのデータはたぶん[byte pair encoding](https://ja.wikipedia.org/wiki/%E3%83%90%E3%82%A4%E3%83%88%E5%AF%BE%E7%AC%A6%E5%8F%B7%E5%8C%96)で圧縮されている。

hint.textの作者コメントはオウムのアスキーアートのみ。
"It's"はモンティ・パイソンの番組のオープニングで言われるセリフ。
審査員コメントの["And now for something completely different"](https://ja.wikipedia.org/wiki/%E3%83%A2%E3%83%B3%E3%83%86%E3%82%A3%E3%83%BB%E3%83%91%E3%82%A4%E3%82%BD%E3%83%B3%E3%83%BB%E3%82%A2%E3%83%B3%E3%83%89%E3%83%BB%E3%83%8A%E3%82%A6)も同様にオープニングで使われるセリフ。
