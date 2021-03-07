---
id: 1995/spinellis
year: 1995
order: 11
authors: "Diomidis_Spinellis"
orig_url: "https://www.ioccc.org/1995/spinellis.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1995/spinellis.hint"
title: "IOCCC 1995: Abusing The Rules"
award_ja: "ルールの悪用"
---

## 動作

自分のソースコードを与えて実行すると、IOCCCのルールの抜粋を表示する。

```
$ gcc -o spinellis spinellis.c

$ ./spinellis < spinellis.c
12th International Obfuscated C Code Contest Rules

    Obfuscate:  tr.v.  -cated, -cating, -cates.  1. a.  To render obscure.
                b.  To darken.  2. To confuse:  his emotions obfuscated his
                judgment.  [LLat. obfuscare, to darken : ob(intensive) +
                Lat. fuscare, to darken < fuscus, dark.] -obfuscation n.
                obfuscatory adj.

GOALS OF THE CONTEST:

    * To write the most Obscure/Obfuscated C program under the rules below.
    * To show the importance of programming style, in an ironic way.
    * To stress C compilers with unusual code.
    * To illustrate some of the subtleties of the C language.
    * To provide a safe forum for poor C code.  :-)


RULES:

    [...]
    2) Your entry must be <= 3217 bytes in length.  The number of characters
       excluding whitespace (tab, space, newline), and excluding any ; { or }
       immediately followed by whitespace or end of file, must be <= 1536.
    [...]
```

## 解説

空白と`;`と`{`と`}`だらけのコメントが大半を占めるソースコード。
ここに上記の抜粋がエンコードされている。

このような文字の選択になっているのは、IOCCCのコードサイズのルール、「作品は3217バイト以下であること。また、空白以外の文字の数は1536個以下であること（ただし`;`か`{`か`}`で、その後に空白文字が来るものはカウントしない）」を悪用するため。
つまり、`;`と`{`と`}`の後で空白がある場合は1536バイトの制限を気にしなくて済む。
これみよがしに、ファイル全体のサイズも上限の3217バイトとなっている。

ネタ自体は[[[1992/vern]]]({{ site.baseurl }}{% link 1992/vern.md %})で既出だが、ルールの悪用にフォーカスを絞っている点に好感を持てる。
コード部は意味ありげなインデントになっているが、特に意味はないと思う。
