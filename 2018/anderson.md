---
id: 2018/anderson
year: 2018
order: 2
authors: "Derek_Anderson"
orig_url: "https://www.ioccc.org/2018/anderson/prog.c"
hint_url: "https://www.ioccc.org/2018/anderson/hint.html"
title: "IOCCC 2018: Most able to divine code gaps"
award_ja: "もっともコードの隙間を言い当てられる"
---

## 動作

[タイポグラフィにおける『川』](https://en.wikipedia.org/wiki/River_%28typography%29)を発見するツール。
『川』とは、英文の中で空白が縦につながっている箇所のこと。

人工的な例。川に対応する部分に線を出力する。

```
$ cat test.txt
xxxx xxxxxx xxxx
xxxx xxxxxx xxxx
xxxx xxxxxx xxxx
xxxxx xxxx xxxxx
xxxxx xxxx xxxxx
xxxxx xxxx xxxxx

$ gcc -o prog prog.c

$ ./prog < test.txt
    .      .
    |      |
    |      |
     |    |
     |    |
     '    '
```

hint.textは、わざと川をたくさん入れて書かれている。

```
$ head -43 hint.text | tail -7
This small program, when given text on stdin, will produce a pattern of
squiggly lines. This pattern is deterministic, and it shouldn't be too
difficult to determine from whence they come. There is even a comment
that describes the highlighted phenomena in the source, for those that
require a small nudge. With denser text blocks, such as an essay or
similar prose, the output can be rather pretty, in an chaotic emergence
sort of way. Try using this file, or the source file as inputs.

$ head -43 hint.text | tail -7 | ./prog
                   .          .              .    .
        .           '       .  '              )   |  .
         '                 '           .     '     '  \    .
              .                         )      .       |   |     .
       .       )                       |       |    .  '  '     '
       |      '                 .      |       |     )
       '                         '      '      '    '
```

## 解説

『川』は英文の組版時に気にするものらしく、タイポグラファーは印刷物を逆さまにして川を探すらしい。
審査員が「モニターを逆さまにする必要がない」と言っているのは、その探し方を踏まえている。

コード形状は、川を意図的に入れたものになっている。

```
$ ./prog < prog.c

   . .
    |      . .
    |     /   \    . .
    |    (     )  /   '    . .
   ' '    \   /  (        /   '    . .
           ' '    \   .  (        /   '
                   ' '    \   .  (
                           ' '    \   .
  .     . .     .  .   .           ' '
   '. .'   '. .'   |   |
     |       |     |   |
   .' '.   .' '.    \ /
  '     ' '     '    '


```

"IOCCC"に加え、IOCCC 2018は第25回なので、ローマ数字の25（XXV）が書かれている。

最後の行に`/* typographic tributaries */`というコメントがある。
"tributaries"は「支流」という意味。
