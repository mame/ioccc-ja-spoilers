---
id: 1995/dodsond2
year: 1995
order: 3
authors: "Don_Dodson"
orig_url: "https://www.ioccc.org/1995/dodsond2.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1995/dodsond2.hint"
title: "IOCCC 1995: Best Game"
award_ja: "最高のゲーム"
---

## 動作

3D迷路のゲーム。

```
$ gcc -o dodsond2 dodsond2.c -lncurses

$ ./dodsond2
```

```

 ####                                                       Level 4
 #  #
 #U #
 ####           #  ####
                #@    #
                #     #
                ####  #
                      #
                      #
             #######  #
             #        #
             #        #
             #  #######
             #  #  #  #
             #  #  #U #
    ####  ####  #  #  #
    #  #  #     #  #  #
    #U #  #UD   # D#  #
    #  #  #  ####  #  #
    #  #  #           #
    # D#  #           #
    ####  #############

```

`@`がプレイヤー。
到達したら周囲の壁が見えるようになる。
`U`は登る階段、`D`は下る階段。
操作方法は、<kbd>hjkl</kbd>で上下左右に動き、`U`のある位置で<kbd>u</kbd>を押すと上の階に、`D`のある位置で<kbd>d</kbd>を押すと下の階に行く。
Level 7がスタートで、Level 1の左上が出口。

## 解説

コード形状は"III D !"（3D!）。シンプルにまとまっていて、とてもIOCCCらしい作品。
