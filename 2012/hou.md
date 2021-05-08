---
id: 2012/hou
year: 2012
order: 6
authors: "Qiming_HOU"
orig_url: "https://www.ioccc.org/2012/hou/hou.c"
hint_url: "https://www.ioccc.org/2012/hou/hint.html"
title: "IOCCC 2012: Most useful obfuscation"
award_ja: "もっとも便利な難読化"
---

## 動作

正規表現でテキストを変換するプログラム。

ansi.txtは、C言語のキーワードや文字列リテラルなどに、色のエスケープシーケンスを混入することにより、シンタックスハイライトを行う。
hou.c自身をハイライトすると次のようになる。

```
$ gcc -o hou hou.c

$ ./hou ansi.txt hou.c
```

{% include img.html src="2012-hou-1.png" desc="hou.cをansi.txtでシンタックスハイライトした様子" %}

真ん中のコードの塊に、赤い顔が浮かび上がる。

エスケープシーケンスが使えない場合は、同様のハイライトをhtmlでやる方法も用意されている。
次のようにしてhou.htmを開くと良い。

```
$ cp header.htm hou.htm
$ ./hou html.txt hou.c >> hou.htm
```

hou.htmをブラウザで開くと次のようになる。

{% include img.html src="2012-hou-2.png" desc="hou.cをhtml.txtでシンタックスハイライトした様子（hou.htm）" %}

chk.txtは、IOCCCのサイズルールに合わせてC言語プログラムをプリプロセスする。

```
$ ./hou chk.txt hou.c | wc -c
```

markdown.txtは、markdownをhtmlに変換する。

```
$ ./hou markdown.txt hint.text | head
<html><head><title># Most useful obfuscation

</title><link rel="stylesheet" type="text/css" href="http://www.ioccc.org/2011/hint.css"><body><h1># Most useful obfuscation

</h1><p>Qiming Hou
<hqm03ster@gmail.com>
<http://www.houqiming.net>

</p>
<h2>## Judges' comments:
```

## 解説

ansi.txtやchk.txtは、各行が「正規表現、スペース、フォーマット文字列」という構成になっている。
正規表現は`()`、`[]`、`*`、`+`、`?`、`|`、`""`が使えるとのこと。

コードは3つのパートに別れていて、最初はマクロ定義、2つめは四角いコード、3つめはアスキーアート。
2つめの四角いコードは、C言語のキーワードと文字列リテラルと文字リテラルをハイライトすると[魔法少女まどか☆マギカ](https://ja.wikipedia.org/wiki/%E9%AD%94%E6%B3%95%E5%B0%91%E5%A5%B3%E3%81%BE%E3%81%A9%E3%81%8B%E2%98%86%E3%83%9E%E3%82%AE%E3%82%AB)のキャラクター、[キュゥべえ](https://ja.wikipedia.org/wiki/%E3%82%AD%E3%83%A5%E3%82%A5%E3%81%B9%E3%81%88)の顔が出てくるようになっている。
3つめのアスキーアートも同作品に出てくるソウルジェムというアイテム。
アスキーアートの横にあるメッセージはキュゥべえの有名なセリフで、「僕と契約して、魔法少女になってよ」の英訳。

難読化は、キーワードの位置を制御したことと、そこそこパワフルな正規表現エンジンのコードをサイズ制限にあうように小さくしたことから、必然的になされている。
キーワードの位置を調整しているのが凄まじいが、ネタバレをすると、次のマクロによって`long`と`do`を無にしているので、これを都合の良い箇所に挿入することで制御されている。

```
#define long
#define do
```

また、`long`や`do`以外にも`for`や`return`や文字列リテラルが色をつける部分として使われていて、調整には時間と脳力が消費されたことに疑いはない。

セリフの文字列は一応実行フローに意味があり、空文字列にしてしまうと動かなくなる。
ループ条件の`*a->t`で、最初の文字が0でない値に初期化されていることを仮定している。

審査員が「2321237の意味は？」という問いかけを残しているが、結構調べたけどわからなかった。
