---
id: 1990/jaw
year: 1990
order: 5
authors:
  - "James_A._Woods"
  - "Karl_F._Fox"
  - "Paul_Eggert"
orig_url: "https://www.ioccc.org/1990/jaw.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1990/jaw.hint"
title: "IOCCC 1990: Best Entropy-reducer"
award_ja: "最高のエントロピー削減器"
---

## 動作

一言で言えば、テキスト化された自己解凍アーカイブのためのCコード。
ここでは最終的な動作だけを示し、詳しい説明は解説に回す。

添付されている[shark.sh](https://github.com/ioccc-src/winner/blob/main/1990/shark.sh)（jaw.cが埋め込まれている）を使うと自己解凍アーカイブができる。
実行には[compressコマンド](https://ja.wikipedia.org/wiki/UNIX_Compress)とbtoaコマンド（後述）が必要。

```
$ PATH=.:$PATH sh shark.sh jaw.* > archive
```

これを別ディレクトリで解凍する。

```
$ mkdir test

$ cd test

$ sh ../archive
...
```

元と同じファイルが生成されていることが確認できる。

```
$ ls
jaw.c  jaw.hint

$ diff -s jaw.c ../jaw.c
Files jaw.c and ../jaw.c are identical

$ diff -s jaw.hint ../jaw.hint
Files jaw.hint and ../jaw.hint are identical
```

## 解説

当時の通信環境では、通信速度が遅いのでデータ圧縮することが必須だった。
一方で、プロトコルの都合により、テキスト形式にすることも必要だった。
そのため、データを送信する人は圧縮したうえでバイナリ→テキスト変換を行い、受信側はその逆の手順を行っていた（メールの添付ファイルは現代でもBase64によるバイナリ・テキスト変換を行っているが、メールのクライアントが勝手に処理するので意識することは少ない）。
ここで問題になるのは、受信側が適切なツール群を持っていない場合、デコードができないということだった。

この作品はこの問題を解決するために作られた。
このプログラムは、atobの機能と、zcatの機能を備える。
atobは[btoa](https://en.wikipedia.org/wiki/Ascii85#btoa_version)というバイナリ→テキスト変換の結果を逆変換する機能、zcatはcompressで圧縮されたデータを解凍する機能。
これらを使うことで、テキスト→バイナリ変換かつ解凍を行える。

このプログラムのバイナリは`atob`という名前で起動されたとき（`argv[0]`が`'a'`のとき）、atobモードで動く。

```
$ echo Hello | ./btoa
xbtoa Begin
87cURD[HIE
xbtoa End N 6 6 E 48 S 206 R 5520

$ echo Hello | ./btoa | ruby -e 'exec(["./atob", "atob"])'
Hello
```

バイナリが`a`で始まらない場合、このプログラムはzcatモードで動く。

```
$ echo Hello | compress | ./zcat
Hello
```

shark.shで作られた自己解凍アーカイブはjaw.cを埋め込んでいる（1100バイト程度とのこと）ので、受信側はあらかじめatobやzcatを用意しておく必要はない。
アーカイブを実行するとこのCコードをコンパイルしてatobとzcatを作り、それらを使ってデータを展開できる。
ただし受信側にCコンパイラやtarコマンドは必要。

このツールはひょっとしたら半分くらいまじめに実利用を狙っていたのかもしれない。
実用性が難読化（ショートコーディング）に依存しているなど、開発の経緯がjaw.hintに書かれている。
不幸にも現代ではcompressもbtoaも陳腐化しており、起動するのも苦労した。
btoaはUbuntuにパッケージがなかったので、いろいろ調べながらRubyで雑に書いたbtoaを置いておく。

```
#!/usr/bin/env ruby
puts "xbtoa Begin"
data = $<.read
n, e, s, r = data.bytesize, 0, 0, 0
(-n % 4).times { data << 0 }
data.bytes do |b|
  e, s, r = e ^ b, (s + b + 1) & 0xffffffff, (r * 2 + r[31] + b) & 0xffffffff
end
data.unpack("N*").flat_map do |v|
  v == 0 ? [?z.ord] : (0..4).map {|i| v / 85**(4 - i) % 85 + 33 }
end.pack("C*").scan(/.{1,78}/) { puts $& }
puts "xbtoa End N %d %x E %x S %x R %x" % [n, n, e, s, r]
```
