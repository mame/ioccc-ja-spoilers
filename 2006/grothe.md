---
id: 2006/grothe
year: 2006
order: 3
authors: "Aaron_Grothe"
orig_url: "https://www.ioccc.org/2006/grothe/grothe.c"
hint_url: "https://www.ioccc.org/2006/grothe/hint.text"
title: "IOCCC 2006: Most Obfuscaed Audio"
award_ja: "もっとも難読化された音"
---

## 動作

X11を使って、古いアナログテレビの[砂嵐](https://ja.wikipedia.org/wiki/%E3%82%B9%E3%83%8E%E3%83%BC%E3%83%8E%E3%82%A4%E3%82%BA)のような画面を出す
。

```
$ gcc -o grothe grothe.c -lX11

$ ./grothe 65000000 10000000 1344 < twinkle.txt
```

{% include img.html src="2006-grothe.png" desc="砂嵐のような縞々をX Window Systemに描画する" %}

## 解説

昔の[ブラウン管](https://ja.wikipedia.org/wiki/%E3%83%96%E3%83%A9%E3%82%A6%E3%83%B3%E7%AE%A1)テレビは、高周波のノイズ電波を発していた。

このプログラムは、楽譜データを入力し、X11の画面に規則的な縞々画像を表示する。
その画像をブラウン管のディスプレイで表示すると、漏れ出るノイズ電波の周波数が[短波ラジオ](https://ja.wikipedia.org/wiki/%E7%9F%AD%E6%B3%A2%E6%94%BE%E9%80%81)で拾える帯域になるらしい。
受信して再生すると、音楽が再生されるとのこと。

楽譜データは`0`から`9`と`#`と`*`で書く。
これは電話のボタンであり、昔の電話はこれらのボタンに特定の周波数を割り当てることで信号を伝えていた（[トーン信号](https://ja.wikipedia.org/wiki/DTMF)）。
楽譜データのサンプルとして、[きらきら星](https://www.ioccc.org/2006/grothe/twinkle.txt)や[オリンピックファンファーレ](https://www.ioccc.org/2006/grothe/olympic.txt)などが添付されている。

再現環境（ブラウン管テレビとそれにつなげるビデオカードと短波ラジオ）がまったくないので動作確認はしていない。
プログラムの引数はテレビのパラメータ（詳細は読んでいない）。

ネタ自体は[Tempest for Eliza](http://www.erikyyy.de/tempest/)で既出のものらしい。
コード形状はスペクトルか波を表現していると思うが、よくわからない。
