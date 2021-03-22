---
id: 1998/bas1
year: 1998
order: 1
authors: "Bas_de_Bakker"
orig_url: "https://www.ioccc.org/1998/bas1.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1998/bas1.hint"
title: "IOCCC 1998: Best Encapsulation"
award_ja: "最高のカプセル化"
---

## 動作

gzipされたPostScriptを生成する。

```
$ gcc -o bas1 bas1.c

$ ./bas1 | gunzip > tmp.ps

$ ps2pdf tmp.ps
```

エッシャーの描いたような3D迷路みたいなものが出てくる。

{% include img.html src="1998-bas1.png" desc="ビームの迷路" %}

左下と右上のビームが切れている。
端っこから反対側の端っこを目指して迷路を解けとのこと。

## 解説

プログラム中にも書かれている通り、"bemazing"というタイトルがついている。
bemaze（戸惑わせる）、beam（ビーム）、maze（迷路）、amazing（すばらしい）などをかけている。

作者コメントの冒頭にある"you're in a twisty little maze of beams, all different."（曲がりくねった小さなビームの迷路にいる。すべてまちまちである）は、[コロッサル・ケーブ・アドベンチャー](https://ja.wikipedia.org/wiki/%e3%82%b3%e3%83%ad%e3%83%83%e3%82%b5%e3%83%ab%e3%83%bb%e3%82%b1%e3%83%bc%e3%83%96%e3%83%bb%e3%82%a2%e3%83%89%e3%83%99%e3%83%b3%e3%83%81%e3%83%a3%e3%83%bc)で迷路にいるとき出てくる有名なメッセージ"you are in a twisty little maze of passages, all different."（曲がりくねった小さな通路の迷路にいる。すべてまちまちである）のパロディ。

gzipにするのは、emacsをインストールするためのディスクの余裕を残すためとのこと。
ポータビリティのために、復帰文字（`\r`）と改行文字（`\n`）は出力しないようにしている（Windowsのテキストモードなど）。
こういう細かい配慮は面白い。

コマンドライン引数を与えると迷路が乱数生成になるが、その場合、解けることは保証されない、とのこと。

カプセル化という賞名はあまりよくわからない。
同年の[[[1998/chaos]]]({{ site.baseurl }}{% link 1998/chaos.md %})や[[[1998/df]]]({{ site.baseurl }}{% link 1998/df.md %})の賞名と合わせて、なんとなくオブジェクト指向の用語を選んだのかもしれない。
