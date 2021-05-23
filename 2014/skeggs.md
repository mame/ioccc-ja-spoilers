---
id: 2014/skeggs
year: 2014
order: 9
authors: "Cel_Skeggs"
orig_url: "https://www.ioccc.org/2014/skeggs/prog.c"
hint_url: "https://www.ioccc.org/2014/skeggs/hint.html"
title: "IOCCC 2014: Most dynamic"
award_ja: "もっともダイナミック"
---

## 動作

普通に実行すると、ゲーム画面が出てくる。

```
$ gcc -DCC='"cc -fPIC"' prog.c -o prog -ldl

$ ./prog
```

```




                        ; ; ; ; ; ; ; ; ;; ; ; ; ; ; ; ; ;
                        {                                }
                        {  { { DEFEAT THE LEMONLORD } }  }
                        {                                }
                        {   30    5            50   10   }
                        {  {HP} {MP}          {HP} {MP}  }
                        {                                }
                        {      O                  O      }
                        {     /|-}              {-|\     }
                        {      |                  |      }
                        {     / \                / \     }
                        {                                }
                        {  {ATTACK}  REGENERATE   HEAL   }
                        {                                }
                        ; ; ; ; ; ; ; ; ;; ; ; ; ; ; ; ; ;





```

左右キーで行動を選択肢、改行またはスペースで決定。
"ATTACK"を選ぶと相手のHPを減らす。
"REGENERATE"を選ぶと自分のMPを増やす。
"HEAL"を選ぶと自分のMPを消費しつつ自分のHPを増やす。

お互いに行動をして、先にHPがなくなった方の負け。
相手はATTACKとHEALに加え、こちらのMPを奪うという行動もする。

## 解説

実行時にC言語コードを生成し、それを共有ライブラリとしてビルドし、`dlopen()`でロードすることで実行が進むらしい。
ncursesを使っているが、prog.c自体のビルドでは`-lncurses`を必要とせず、実行時に`-lncurses`でビルドした共有ライブラリを作ってそれをロードすることで使用する。

地球に侵略してきたレモン人と10年戦い、ついにレモン王との対決になった、というストーリーが書かれている。
これに元ネタがあるのか、なぜレモンなのかはわからない。
`{}`が多用されているので、これのことをレモンといっている？
