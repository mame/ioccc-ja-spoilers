---
id: 2015/endoh1
year: 2015
order: 4
authors:
  - "Anonymous_2015"
  - "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2015/endoh1/prog.c"
hint_url: "https://www.ioccc.org/2015/endoh1/hint.html"
title: "IOCCC 2015: Most Diffused Reaction"
award_ja: "もっとも拡散した反応"
---

## 動作

[反応拡散系](https://ja.wikipedia.org/wiki/%E5%8F%8D%E5%BF%9C%E6%8B%A1%E6%95%A3%E7%B3%BB)のシミュレータ。

コンパイル方法が難しい。
たとえば次のようにビルドする。

```
$ gcc -o prog prog.c \
    -Delta_u="Du*laplacian(u)-u*v*v+F*(1-u)" \
    -Delta_v="Dv*laplacian(v)+u*v*v-v*(F+K)" \
    -DF=0.040 -DK=0.060 -DDu=0.200 -DDv=0.100 \
    -DUV_BACKGROUND=1,0 -DUV_DROP=-0.5,0.5 \
    -DTIMESTEP=1.0 -DSPEED=2 -DRGB=255:128:192
```

そして、[ucspi-tcp](https://en.wikipedia.org/wiki/Ucspi-tcp)のtcpserverコマンドを使って次のように起動する。

```
$ tcpserver -v 127.0.0.1 10333 ./prog ioccc.txt
```

ブラウザで[http://localhost:10333](http://localhost:10333)を開くと、IOCCCと書かれた画面がじわっと変化していく。

{% include img.html src="2015-endoh1-1.png" desc="ブラウザの画面（起動直後）" %}

{% include img.html src="2015-endoh1-2.png" desc="ブラウザの画面（変化していく）" %}

{% include img.html src="2015-endoh1-3.png" desc="ブラウザの画面（安定した様子）" %}

マウスカーソルをブラウザの画面の上で動かすことでかき混ぜることができる。

他にもコンパイルオプションでいろいろな挙動をさせられる。

{% include img.html src="2015-endoh1-4.png" desc="make gray-scott-2の様子" %}

{% include img.html src="2015-endoh1-5.png" desc="make oregonatorの様子" %}

詳しくはhint.textを参照のこと。

{% include youtube.html src="G6Gz8qpb_Ek" desc="作者によるデモ動画" %}

## 解説

反応拡散系は、何種類かの化学物質がお互いに反応しつつ、全体に拡散していくという様子を表現する数理モデル。
身近なところでは、豹やシマウマなどの柄は反応拡散系でモデル化できるとされている。

このプログラムは、128 x 128のマスのあるフィールドで、2種類の化学物質の量をシミュレーションする。
各マスの中で物質が化学反応したり、隣接するマスから流入または流出することで、単位時間ごとに物質の量が増減していく。

ブラウザをUIとして利用する点が新しい。
[WebSocket](https://ja.wikipedia.org/wiki/WebSocket)と[canvas要素](https://ja.wikipedia.org/wiki/Canvas%E8%A6%81%E7%B4%A0)を使っている。
このプログラムは、サーバとしてブラウザからのリクエストを待ち受け、JavaScriptやCanvas要素を含んだhtmlを返す。
ブラウザはそれを見て接続をWebSocketにアップグレードすることを要求するのでそれに応える。
WebSocketに反応拡散系のシミュレーション結果を流し、ブラウザ側はそれをCanvasに表示し続ける。
また、ブラウザ側のマウスイベントはWebSocket経由でプログラムに通知し、シミュレーションに影響を与える。

TCPの待受自体はtcpserverにまかせるが、HTTPリクエストの処理、WebSocketのアップグレード対応は自力で行っている。
WebSocketにはSHA1計算やBase64エンコーディングが必要で、これらもprog.cの中で実装されている。

コードの形状は[アラン・チューリング](https://ja.wikipedia.org/wiki/%E3%82%A2%E3%83%A9%E3%83%B3%E3%83%BB%E3%83%81%E3%83%A5%E3%83%BC%E3%83%AA%E3%83%B3%E3%82%B0)の肖像画。
チューリングと言えば[エニグマ](https://ja.wikipedia.org/wiki/%E3%82%A8%E3%83%8B%E3%82%B0%E3%83%9E_%28%E6%9A%97%E5%8F%B7%E6%A9%9F%29)の暗号解読、[チューリング機械](https://ja.wikipedia.org/wiki/%E3%83%81%E3%83%A5%E3%83%BC%E3%83%AA%E3%83%B3%E3%82%B0%E3%83%9E%E3%82%B7%E3%83%B3)、[チューリングテスト](https://ja.wikipedia.org/wiki/%E3%83%81%E3%83%A5%E3%83%BC%E3%83%AA%E3%83%B3%E3%82%B0%E3%83%BB%E3%83%86%E3%82%B9%E3%83%88)など多数の業績で知られるが、反応拡散系の提唱もチューリングの業績の1つ。
コードには絵画らしく、最下行に`Alan Turing  (1912--1954)`と書いてある。
一方で、コメントでいろいろ落書きをしている。
口のあたりに`hahaha`や`<--mouth`など。

賞名は[[[2015/yang]]]({{ site.baseurl }}{% link 2015/yang.md %})と対称的になっている。
