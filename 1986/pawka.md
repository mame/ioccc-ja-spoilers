---
id: 1986/pawka
year: 1986
order: 7
authors: "Michael_H._Pawka"
orig_url: "https://www.ioccc.org/1986/pawka/pawka.c"
hint_url: "https://www.ioccc.org/1986/pawka/hint.html"
award: "Most illegible code"
award_ja: "もっとも判読不能なコード"
---

## 動作

OBFUSCATED?というバナーが出る。

```
$ gcc -o pawka pawka.c

$ ./pawka
    OOOOO  BBBB   FFFFF  U   U  SSSSS  CCCCC  AAAAA  TTTTT  EEEEE  DDDD   ????
    O   O  B   B  F      U   U  S      C      A   A    T    E      D   D      ?
    O   O  BBBBB  FFF    U   U   SSSS  C      AAAAA    T    EEEEE  D   D      ?
    O   O  B   B  F      U   U      S  C      A   A    T    E      D   D    ?
    OOOOO  BBBB   F      UUUUU  SSSSS  CCCCC  A   A    T    EEEEE  DDDD     ?
```

## 解説

識別子は`xyyyx`みたいな文字列ばかり。
ランレングス圧縮したデータを展開していると思う。

難読化はシンプルで、プリプロセスしてindentコマンドを適用すれば、わりと普通に読めてしまう。
解析方法の参考として書いておくと、`#include <stdio.h>`を消した上で、次のようにするとよい。

```
$ gcc -E pawka.c | indent -
...

char *xyx[] = {
  "]I^x[I]k\\I^o[IZ~\\IZ~[I^|[I^l[I^j[I^}[I^n[I]m\\I]h",
  "]IZx\\IZx[IZk\\IZk[IZo_IZ~\\IZ~[IZ|_IZl_IZj\\IZj]IZ}]IZn_IZm\\IZm_IZh",
  "]IZx\\IZx[I^k[I\\o]IZ~\\IZ~\\I]|[IZl_I^j]IZ}]I^n[IZm\\IZm_IZh",
  "]IZx\\IZx[IZk\\IZk[IZo_IZ~\\IZ~_IZ|[IZl_IZj\\IZj]IZ}]IZn_IZm\\IZm]IZh",
  "]I^x[I]k\\IZo_I^~[I^|[I^l[IZj\\IZj]IZ}]I^n[I]m^IZh", '\0'
};

char *xyyx;
int xyyyx, xyyyyx, xyyyyyx = 0x59, xyyyyyyx = 0x29, xxyx = 0x68;
main ()
{
  xyyyyx = 0;
  while (xyx[xyyyyx])
    {
      xyyx = xyx[xyyyyx++];
      while (*xyyx)
        {
          xyyyx = *xyyx++ - xyyyyyx;
          while (xyyyx--)
            putchar (*xyyx - xyyyyyyx);
          if (*xyyx == xxyx)
            putchar ('\n');
          *xyyx++;
        }
    }
}
```

現代の、高度に発展したIOCCCの基準から見るとちょっと単純なプログラムではあるが、挙動はわりと好き。
