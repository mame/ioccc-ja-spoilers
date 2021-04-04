---
id: 2001/jason
year: 2001
order: 15
authors: "Jason_Orendorff"
orig_url: "https://www.ioccc.org/2001/jason.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2001/jason.hint"
title: "IOCCC 2001: Best Of Show"
award_ja: "最優秀賞"
---

## 動作

テキストアドベンチャーゲーム。

```
$ gcc -o jason jason.c

$ ./jason
you are in a maze of twisty little passages
caves lead:  left right
you see
   a lamp
>
```

ランプを取る。

```
> get lamp
done
```

左に向く。

```
> left
you climb...
you are in a maze of twisty little passages
caves lead:  left forward right back
```

このように指示を与えて迷路の中を探検して、8つの宝を集めて脱出するのが目的。

## 解説

一番の見どころは、この大量のメッセージがコードのどこに隠されているか。
鍵は、マクロ`G`にある。
このマクロの定義は次の通り。

```
#define G(g,l,k,o,e,d,n,c,i,b,a,f,j,m,p) \
a#b#c#d#e#f#g#a#i#j#k#l#m#n#o e,i l##c,m##b; d g j n h(k 30:1); o p f}
```

`#b#c#d...`という文字列化演算子の列が目立つ。
そして、`G`はコード全体を囲んでいることがわかる。
実際にプリプロセスすると、次のような巨大な文字列の定義が見える（わかりやすいように手修正している）。

```
char *p = " C((j=i* T(i-4 )) +R (3 ) + 4 ) D(J...";
```

そして`main`関数の冒頭で、この文字列をイテレートし、デコードを行っている。
ざっくりいうと、文字が空白か非空白かを記号として扱い、記号の列のパターンに応じてバッファに追記する値を決めている。
符号の長さは可変なので、おそらくハフマン符号だろう。
また、追記する値も可変（38より大きい値の場合は、38進数の複数桁のように扱う）。

要するに、このプログラムはプログラムの空白の入れ方によってテキストデータをエンコードしている。

テキストデータは起動直後にすべてデコードされるので、マクロ`G`の定義を次のように変えると、隠されたテキストがすべて見える。

```
#define G(g,l,k,o,e,d,n,c,i,b,a,f,j,m,p) \
a#b#c#d#e#f#g#a#i#j#k#l#m#n#o e,i l##c,m##b; d g j n h(k 30:1); { int z; for(z=0; z < 408; z++) printf("%c", M[z]+86); puts(""); } o p f}
```

コード全体の形に意味はないと思うが、いくつか遊びが仕込まれている。
`B? B?`を悲しげなコーラスとして入れてみたり、顔文字になっている文字シーケンスは左端に寄せてみたり、魚の骨のアスキーアート`Q)++j<`や、流れ星のアスキーアート`-~- ~ -~i +`を混ぜ込んでみたり。

起動直後に出るメッセージ"you are in a maze of twisty little passages"は、[コロッサル・ケーブ・アドベンチャー](https://ja.wikipedia.org/wiki/%e3%82%b3%e3%83%ad%e3%83%83%e3%82%b5%e3%83%ab%e3%83%bb%e3%82%b1%e3%83%bc%e3%83%96%e3%83%bb%e3%82%a2%e3%83%89%e3%83%99%e3%83%b3%e3%83%81%e3%83%a3%e3%83%bc)で迷路にいるとき出てくる有名なメッセージ"you are in a twisty little maze of passages, all different."が元ネタ。

現在地について方角と置いてあるアイテムしかメッセージが出ないので、いま自分がどこにいるのかがわからなくなりがち。
基本的な攻略は、アイテムをあえてdropすることで、目印にすること。

起動のたびに迷路が変わるのでチートが大変。
`time (0)`になっているところを（空白を壊さずに）`0000 +00`みたいな固定値に置き換えることで、固定盤面でのリスタートができるようになる。
地図を作りながらすべての宝を集めてクリアした図。
やってみてわかったが、`left`と打つと左に向くだけではなく、一部屋分進むので注意。
また、通路は曲がっているので、真っすぐ進んでいてもループになっている箇所がいっぱいある。

```
$ ./jason
you are in a maze of twisty little passages
caves lead:  left forward right back
you see
   a lamp
> get lamp
done
> forward
you climb...
you are in a maze of twisty little passages
caves lead:  left forward right back
you see
   a kris
   a chime
> get kris
done
> get chime
done
> forward
you climb...
you are in a maze of twisty little passages
caves lead:  left forward right back
you see
   a talisman
> forward
you climb...
you are in a maze of twisty little passages
caves lead:  left right back
you see
   a ruby
> left
you climb...
you are in a maze of twisty little passages
caves lead:  left right back
you see
   a zither
> get zither
done
> back
you climb...
you are in a maze of twisty little passages
caves lead:  forward right back
you see
   a ruby
> get ruby
done
> right
you climb...
you are in a maze of twisty little passages
caves lead:  left forward right back
you see
   a talisman
> get talisman
done
> right
you climb...
you are in a maze of twisty little passages
caves lead:  left forward right back
> forward
you climb...
you are in a maze of twisty little passages
caves lead:  left forward right back
> forward
you climb...
you are in a maze of twisty little passages
caves lead:  left forward right back
> left
you climb...
you are in a maze of twisty little passages
caves lead:  left forward right back
> forward
you climb...
you are in a maze of twisty little passages
caves lead:  left forward back
> left
you climb...
you are in a maze of twisty little passages
caves lead:  left forward right back
you see
   a diadem
> get diadem
done
> back
you climb...
you are in a maze of twisty little passages
caves lead:  left right back
> right
you climb...
you are in a maze of twisty little passages
caves lead:  left forward right back
> forward
you climb...
you are in a maze of twisty little passages
caves lead:  left forward right back
> left
you climb...
you are in a maze of twisty little passages
caves lead:  forward right back
you see
   a harp
> get harp
done
> forward
you climb...
you are in a maze of twisty little passages
caves lead:  forward back
you see
   a scepter
sunlight streams in ahead!
> get scepter
done
> forward
you climb...
into bright sunlight!
score: 800
```
