---
id: 1984/laman
year: 1984
order: 2
authors: "Mike_Laman"
orig_url: "https://www.ioccc.org/1984/laman/laman.c"
hint_url: "https://www.ioccc.org/1984/laman/hint.html"
title: "IOCCC 1984: Third place"
award_ja: "第3位"
---

## 動作

1から指定された数字までを螺旋状に並べて表示する。

```
$ gcc -o laman laman.c

$ ./laman 4
2   1
3   4

$ ./laman 9
9   8   7
2   1   6
3   4   5

$ ./laman 50
50  49  48  47  46  45  44  43
    26  25  24  23  22  21  42
    27  10  9   8   7   20  41
    28  11  2   1   6   19  40
    29  12  3   4   5   18  39
    30  13  14  15  16  17  38
    31  32  33  34  35  36  37
```

## 解説

5本の柱のような形状になっている。形状に特に深い意味はないと思うが、プログラムをアスキーアート化する先駆け。

コードの最後に作者名が書かれているが、現代では作者の情報をプログラムに埋め込むことは反則となっている。
