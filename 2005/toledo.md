---
id: 2005/toledo
year: 2005
order: 12
authors: "Oscar_Toledo_G."
orig_url: "https://www.ioccc.org/2005/toledo/toledo.c"
hint_url: "https://www.ioccc.org/2005/toledo/hint.text"
title: "IOCCC 2005: Best game"
award_ja: "最高のゲーム"
---

## 動作

チェス。

```
$ gcc -o toledo toledo.c

$ ./toledo a

      A B C D E F G H

   8  r n b q k b n r  8
   7  p p p p p p p p  7
   6  . . . . . . . .  6
   5  . . . . . . . .  5
   4  . . . . . . . .  4
   3  . . . . . . . .  3
   2  P P P P P P P P  2
   1  R N B Q K B N R  1

      A B C D E F G H

>
```

移動元移動先のパターンでムーブを指示していく。

```
>d2d4

      A B C D E F G H

   8  r n b q k b n r  8
   7  p p p p p p p p  7
   6  . . . . . . . .  6
   5  . . . . . . . .  5
   4  . . . P . . . .  4
   3  . . . . . . . .  3
   2  P P P . P P P P  2
   1  R N B Q K B N R  1

      A B C D E F G H

*D7-D5 (98)

      A B C D E F G H

   8  r n b q k b n r  8
   7  p p p . p p p p  7
   6  . . . . . . . .  6
   5  . . . p . . . .  5
   4  . . . P . . . .  4
   3  . . . . . . . .  3
   2  P P P . P P P P  2
   1  R N B Q K B N R  1

      A B C D E F G H

>
```

無引数で呼び出すと人間同士の対戦、`./toledo a`だと深さ5まで読むAI、`./toledo b`だと深さ6まで読むAIになるとのこと。
それより多い数も可能だが、時間はかかるようになる。

## 解説

アルファベータ法によるチェスAI。

コード形状は逆さまの[ナイト](https://ja.wikipedia.org/wiki/%E3%83%8A%E3%82%A4%E3%83%88_%28%E3%83%81%E3%82%A7%E3%82%B9%29)。
ネタは[[[1992/vern]]]({{ site.baseurl }}{% link 1992/vern.md %})と完全にかぶっているように見えるので、コードに大きな工夫があるのかもしれないが、詳細未解析。
作者自身による改良作品が翌年に[[2006/toledo3]]（未執筆）として入賞している。
