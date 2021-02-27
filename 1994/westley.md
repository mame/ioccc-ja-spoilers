---
id: 1994/westley
year: 1994
order: 10
authors: "Brian_Westley"
orig_url: "https://www.ioccc.org/1994/westley.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1994/westley.hint"
title: "IOCCC 1994: Worst Abuse of the C Preprocessor"
award_ja: "Cプリプロセッサの最悪の悪用"
---

## 動作

普通に実行しても何もしない。

```
$ gcc westley.c -DO -o westley

$ ./westley
```

オプション無しでビルドするとエラーが出る。
端末の横幅を80文字にしておくとよい。

```
$ gcc westley.c
westley.c:87:10: fatal error:
 You are in a debris-filled
  dungeon; a door bars the
  way, and sludge trickles into
  a floor drain

 : No such file or directory
...
```

エラーメッセージが「あなたはほこりだらけのダンジョンにいる。ドアは開かない。汚水が排水口にしたたっている。」となっている。

ダンジョンで行動をするには、コンパイルオプションの`-D`から始まるコマンドを使う。
ドア（Door）を説明させる（Describe）例。

```
$ gcc -Describe -Door westley.c
westley.c:36:10: fatal error:
 The door is decorated with relief
  figures of various dog breeds

 : No such file or directory
...
```

「ドアは様々な種類の犬のレリーフで装飾されている」

ダンジョンを脱出できたら成功。

## 解説

コードは比較的単純な`#ifdef`の羅列。
メッセージは`#include " ... message ... "`とすることで存在しないファイル読み込みを行ってエラー表示につなげている。

マクロを定義するコンパイルオプションの`-D`をフル活用しているので、出てくるアイテム（名詞）もコマンド（動詞）もすべてDで始まる名前になっている。

---

この記事はネタバレなので、westley.hintに書いてある攻略の実行結果をすべて置いておく。

```
$ gcc -Describe -Drain westley.c
westley.c:39:10: fatal error:
 Through the drain you see a dwarf
 in another cell
...
```

排水口を説明せよ：「排水口を覗くと、他の部屋にドワーフがいるのが見える」

```
$ gcc westley.c -Describe -Dwarf
westley.c:42:10: fatal error:
 The gnarled dwarf looks thirsty
...
```

ドワーフを説明せよ：「ふしくれだったドワーフはのどが渇いているようだ」

```
$ gcc westley.c -Describe -Debris
westley.c:45:10: fatal error:
 You notice a desk, a phone, and
  a phone directory among the clutter
...
```

ほこりを説明せよ：「とっちらかっている中に、机と電話、電話帳がある」

```
$ gcc westley.c -Describe -Desk
westley.c:48:10: fatal error:
 There are some dimes on the desk
...
```

机を説明せよ：「机の上に10セント硬貨（ダイム）が数枚ある」

```
$ gcc westley.c -Describe -Dime
westley.c:53:10: fatal error:
 You notice nothing unusual
...
```

10セント硬貨を説明せよ：「とくに変わったところはない」

```
$ gcc westley.c -Describe -Directory
westley.c:51:10: fatal error:
 It reads:
      Pixie's Pub -
     instant service -
     Dial DUNgeon0614
...
```

電話帳を説明せよ：「『ピクシーの酒場 - インスタントサービス - DUNgeon0614に電話してください』と書かれている」

```
$ gcc westley.c -Dial -DUNgeon0614
westley.c:63:10: fatal error:
 Pixie takes your order, and
 magically, the room is filled
  with banana daiquiris
...
```

DUNgeon0614に電話をかけよ：「ピクシーが注文を取ると、部屋は魔法のようにバナナダイキリで満たされた」

```
$ gcc westley.c -Drop -Daiquiri
westley.c:72:10: fatal error:
 You drop the drink
  on the floor
...
```

ダイキリを落とせ：「あなたは飲み物を床に捨てた」

```
$ gcc westley.c -Drop -Dwarf -Daiquiri
westley.c:70:10: fatal error:
 The dwarf eagerly accepts
  the drink.  'Thanks!  Here,
  I found this, but I can't
 understand it.'  He hands
 you a document
...
```

ダイキリをドワーフに落とせ：「ドワーフは待ちに待っていたと飲み物を受け取った。『ありがとう！これを見つけたんだ。何なのかわからないが』ドワーフは文書をあなたに渡した」

```
$ gcc westley.c -Describe -Document
westley.c:33:10: fatal error:
 It reads:
      Depress Dotted Dog
...
```

文書を説明せよ：「『ブチ柄の犬を押せ』と書いてある」

```
$ gcc westley.c -Depress -Dotted -Dog
westley.c:85:10: fatal error:
 Be more specific
...
```

ブチ柄の犬を押せ：「具体的に言ってください」

```
$ gcc westley.c -Depress -Dalmatian
westley.c:76:10: fatal error:
 As you press the dalmatian
  figure, the door opens - only
  to reveal a menacing orc by
 a vending machine (with a
 sign reading 'DEPOSIT MONEY')
...
```

ダルメシアンを押せ：「ダルメシアンのレリーフを押すと、ドアが開いた - おそろしいオークがあらわれた。そばに自動販売機がある（『金を預けよ』という看板もある）」

```
$ gcc westley.c -Deposit -Dime
westley.c:79:10: fatal error:
 Donuts spill out; you get
  some, the orc hungrily eats
  the rest
...
```

10セント硬貨を預けよ：「ドーナツがこぼれ出た。あなたはいくつか拾い、残りはオークが貪るように食べた」

```
$ gcc westley.c -Drop -Donut
westley.c:82:10: fatal error:
 The orc quickly eats the
  donut; he still bars the
  way
...
```

ドーナツを落とせ：「オークはすばやくドーナツを食べた。オークはまだ通せん坊をしている」

```
$ gcc westley.c -Drop -Donut -Down -Drain
westley.c:29:10: fatal error:
 The orc scrambles to the drain,
  trying to get the donut; you
  run out the door and escape!

               The End
...
```

ドーナツを排水管に流せ：「オークはドーナツをとろうと排水口にとびついた。あなたはドアを飛び出し逃げ出した！終わり」
