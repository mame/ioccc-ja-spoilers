---
id: 1994/dodsond2
year: 1994
order: 2
authors: "Don_Dodson"
orig_url: "https://www.ioccc.org/1994/dodsond2.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1994/dodsond2.hint"
title: "IOCCC 1994: Most Obfuscated Packaging"
award_ja: "もっとも難読化されたパッケージング"
---

## 動作

テキストアドベンチャーゲーム。

```
$ gcc -o dodsond2 dodsond2.c

$ ./dodsond2
You are in room 2
Passageways to room 14, 15, and 22

```

部屋番号を入力して進む。

```
You are in room 0
Passageways to room 11, 12, and 28
11
You are in room 11
You smell a wumpus
You hear a rustling sound
Passageways to room 0, 21, and 23
21
You are in room 21
You feel a breeze
Passageways to room 11, 13, and 20
13
You are in room 13
The robber scurries away
You feel a breeze
Passageways to room 14, 17, and 21
21
...
Passageways to room 8, 15, and 28
15
You are in room 15
The bats pick you up and drop you in room 6
You are in room 6
You fell in a pit
Your score is 20
```

落とし穴に落ちてゲームオーバーの例。

## 解説

[Hunt the Wumpus](https://en.wikipedia.org/wiki/Hunt_the_Wumpus)というテキストベースのアドベンチャーゲームを意識して作られている。

目的は、ウンパス（Wumpas）というモンスターを倒すこと。
矢を拾って、モンスターの位置を予測して、隣の部屋から矢を射って当たればクリア。
ウンパスが近くにいると「匂いがする」とう表示が出る（同じ部屋に入ってしまうと食われる）。
コマンドは、`s`で矢を射る、`i`で持っている矢の数を表示するなど。
詳しくはdodsond2.hintを参照。
ダンジョンには他に、落とし穴（即死トラップ）、コウモリ（他の部屋に連れ去られる）、盗賊（持っている矢を盗む）がある。
落とし穴が近いとすきま風を感じたり、コウモリが近いと音が聞こえたりする。
よくできている。

このプログラムは1994年のサイズ制限（空白文字などを除いて1536文字以内）を超えているのだが、gzipで圧縮することでサイズ制限を回避した、とのこと。
現代だとどうも理解しがたい主張だが、gzipは時代の最先端を行く圧縮フォーマットだったので（gzipのバージョン1.0は1993年）、感覚が違ったのかも知れない。
なお、今後は圧縮ツールでサイズ制限を回避したことにするのはダメとのこと。
