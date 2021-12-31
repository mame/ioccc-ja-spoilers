---
id: 2020/tsoj
year: 2020
order: 13
authors: "tsoj"
orig_url: "https://www.ioccc.org/2020/tsoj/prog.c"
hint_url: "https://www.ioccc.org/2020/tsoj/index.html"
title: "IOCCC 2020: Most misleading indentation"
award_ja: "もっともミスリーディングなインデント"
---

### 動作

[アステロイド](https://ja.wikipedia.org/wiki/%E3%82%A2%E3%82%B9%E3%83%86%E3%83%AD%E3%82%A4%E3%83%89_%28%E3%82%B2%E3%83%BC%E3%83%A0%29)風シューティングゲーム。

```
$ gcc -o prog prog.c

$ ./prog
```

```
0                 o0o                          o0o
              .   0OO                          0OO

                            .
     .                  .           o0o   o0o
                                    0OO   0OO     o0o
       .                     .                    0OO

       .         o0o
      .          0OO            .      .      .
                              /\   .
            .                /__\               o0o
                  o0o         ^^     o0o        0OO
  .          .    0OO                0OO
                                  .            .
          .                                      .

           .                                .
         .                                      .


```

三角が自機で、`wsad`で上下左右、スペースでショット。
`p`がポーズと再開、`q`で終了。

### 解説

cursesを使わずに自力で描画している。

コード形状は、右揃えでインデントしている。
賞名はリーディング（先頭にある）の反対、とかけている。
