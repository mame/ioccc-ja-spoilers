---
id: 1991/rince
year: 1991
order: 6
authors: "James_Bonfield"
orig_url: "https://www.ioccc.org/1991/rince.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1991/rince.hint"
title: "IOCCC 1991: Best Game"
award_ja: "最高のゲーム"
linewrap: true
---

## 動作

倉庫番風の独自のパズルゲーム。
次のように起動する。

```
$ gcc -o rince rince.c -lncurses

$ ./rince
```

すると次のような画面が端末に表示される。

```
########################################################################
########################################################################
########################################################################
######  /\    ___ ######                                          ######
###### <  >  /   \######                                          ######
######  \/   \___/######                                          ######
######  ___   ___ ######      ######      ##################      ######
###### /   \ /   \######      ######^^^^^^##################      ######
###### \___/ \___/######      ######      ##################      ######
######                        ######              <<
######                        ######              <<
######                        ######              <<
######  ___   ___        O__O   <<              ########################
###### /   \ /   \      /----\  <<              ########################
###### \___/ \___/      _/  \_  <<              ########################
##########################################      ######  ___       ######
##########################################vvvvvv###### /   \      ######
##########################################      ###### \___/      ######
######  /\    /\  ############  ___   ___       ######  ___       ######
###### <  >  <  > ############ /   \ /   \      ###### /   \      ######
######  \/    \/  ############ \___/ \___/      ###### \___/      ######
```

vi風に<kbd>hjlk</kbd>でキャラクタを動かして、ダイヤモンド（上の画面に3つある星型のもの）を集める。
岩と岩を押しつけるとダイヤモンドに変わるのでそれも集める。バリアのようになっているのはドアで、別の部屋に行くと鍵があるのでそれを押しつけて開ける。
すべてのダイヤモンドを集めるとクリア。
ムーブ可能数が484に制限されていて、上限に達すると無条件に終了する。

## 解説

[curses](https://ja.wikipedia.org/wiki/Curses)を使って作られている。
難読化については、特筆すべき工夫は特に無いと思う。
やってみるとわりと普通に面白い。
484ムーブの上限はかなり厳しいと思うが、2行目の`int u=484,`を書き換えば上限を自由に変えられる。