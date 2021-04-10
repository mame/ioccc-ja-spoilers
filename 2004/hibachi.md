---
id: 2004/hibachi
year: 2004
order: 5
authors: "Anthony_C._Howe"
file: 2004/hibachi
orig_url: "http://ioccc.org/2004/hibachi.tar.gz"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/hibachi.hint"
title: "IOCCC 2004: Best Abuse of the Guidelines"
award_ja: "ガイドラインの最高の悪用"
---

## 動作

[CGI](https://ja.wikipedia.org/wiki/Common_Gateway_Interface)に対応したHTTPサーバ。

実行には多数のファイルが必要なため、tarballにまとめて配布されている。

[http://ioccc.org/2004/hibachi.tar.gz](http://ioccc.org/2004/hibachi.tar.gz)

これを展開してconfigureしてmakeしてhibachi-start.shを起動する。

```
$ tar xf hibachi.tar.gz

$ cd hibachi

$ ./configure

$ make

$ ./hibachi-start.sh
```

そしてブラウザで[http://localhost:8008](http://localhost:8008)を開く。

{% include img.html src="2004-hibachi.png" desc="Hibachi Webサーバをブラウザで開いたところ" %}

## 解説

HIBACHIは日本語の火鉢に由来するらしい。
ポータブルな調理器と、ポータブルなHTTPサーバで、コンセプトが似ているとのこと。
CGIに対応しているので、シェルスクリプト、Perl、PHP、RubyでのCGIの例も含まれている。

HIBACHIのロゴは、Apache HTTP Serverのロゴを火鉢で燃やし尽くすGIFアニメになっている。
当時のやんちゃなインターネット文化を感じる。

コードは、インデントがハードタブ4文字となっている。
多数の意味でガイドラインに違反しているということが評価されたらしい。
