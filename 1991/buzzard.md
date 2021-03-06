---
id: 1991/buzzard
year: 1991
order: 2
authors: "Sean_Barrett"
orig_url: "https://www.ioccc.org/1991/buzzard.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1991/buzzard.hint"
title: "IOCCC 1991: Best Output"
award_ja: "最高の出力"
---

## 動作

3D迷路。<kbd>f</kbd>で前に進む、<kbd>r</kbd>と<kbd>l</kbd>がそれぞれ右と左に向きを変える。

```
$ gcc -o buzzard buzzard.c

$ ./buzzard
    \                                           /
     |\                                        |
     |  \                                      |
     |    \                                    |
     |      \                                  |
     |       |\                       /--------|
     |       |  \                   /  |       |
     |       |    \               /    |       |
     |       |     |            /|     |       |
     |       |     |          /  |     |       |
     |       |     |---------|   |     |       |
     |       |     |   |     |   |     |       |
     |       |     |---------|   |     |       |
     |       |     |          \  |     |       |
     |       |     |            \|     |       |
     |       |    /               \    |       |
     |       |  /                   \  |       |
     |       |/                       \--------|
     |      /                                  |
     |    /                                    |
     |  /                                      |
     |/                                        |
    /                                           \
f
    \
     |\                                       /--
     |  \                                   /  |
     |    \                               /    |
     |      \                           /      |
     |       |                        /|       |
     |       |                      /  |       |
     |       |                    /    |       |
     |       |-------------------|     |       |
     |       |     |             |     |       |
     |       |     |             |     |       |
     |       |     |             |     |       |
     |       |     |             |     |       |
     |       |     |             |     |       |
     |       |-------------------|     |       |
     |       |                    \    |       |
     |       |                      \  |       |
     |       |                        \|       |
     |      /                           \      |
     |    /                               \    |
     |  /                                   \  |
     |/                                       \--
    /
r

    --\                                       /--
     |  \                                   /  |
     |    \                               /    |
     |      \                           /      |
     |       |                        /|       |
     |       |                      /  |       |
     |       |                    /    |       |
     |       |-------------------|     |       |
     |       |     |             |     |       |
     |       |     |             |     |       |
     |       |     |             |     |       |
     |       |     |             |     |       |
     |       |     |             |     |       |
     |       |-------------------|     |       |
     |       |                    \    |       |
     |       |                      \  |       |
     |       |                        \|       |
     |      /                           \      |
     |    /                               \    |
     |  /                                   \  |
    --/                                       \--

f
    \                                           /
     |                                        /|
     |                                      /  |
     |                                    /    |
     |                                  /      |
     |---------------------------------|       |
     |       |                         |       |
     |       |                         |       |
     |       |                         |       |
     |       |                         |       |
     |       |                         |       |
     |       |                         |       |
     |       |                         |       |
     |       |                         |       |
     |       |                         |       |
     |       |                         |       |
     |       |                         |       |
     |---------------------------------|       |
     |                                  \      |
     |                                    \    |
     |                                      \  |
     |                                        \|
    /                                           \
f
                                                /
    -------------------------------------------|
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
     |                                         |
    -------------------------------------------|
                                                \

```

## 解説

マップファイル（テキストファイル）、ゴールの記号、スタート位置はで指定することができる。

```
$ ./buzzard [filename [escape-char [start-x start-y]]]
```

デフォルトでは自分自身のソースコードをマップとして使う。
空白文字が通れる空間で、その他の文字はすべて壁になる。
スタート位置は4行目の`char`と`Z`の間の空白、ゴールは`\`記号。

この記事は一応ネタバレなので、攻略方法を示しておく。
次の入力でゴール直前まで一気に進める。

{: .pre }
```
frfflfffflffffffffffrfflfffffffffffffflffrfffflffffrffffrffffffrfffflffrflfffflffrfflffffrfff
```

比較的短いコードでインパクトのある出力を行う作品。
コード中に迷路のマップを埋め込んでいるため、空白の入り方が奇妙になっている。
マップに関係ない部分が多くあるのが荒削りではあるが、むやみやたらに難読化するのではなく、意味のある難読化が始まった作品としても興味深い。
