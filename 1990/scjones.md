---
id: 1990/scjones
year: 1990
order: 7
authors: "Larry_Jones"
orig_url: "https://www.ioccc.org/1990/scjones.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1990/scjones.hint"
title: "IOCCC 1990: ANSI Committee's Worst Abuse of C"
award_ja: "ANSI委員会のCの最悪の悪用"
---

## 動作

自分自身のソースコードを出力する。いわゆる[Quine](https://ja.wikipedia.org/wiki/%E3%82%AF%E3%83%AF%E3%82%A4%E3%83%B3_%28%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0%29)。

```
$ gcc -ansi -o scjones scjones.c

$ ./scjones > scjones.out

$ diff -s scjones.c scjones.out
Files scjones.c and scjones.out are identical
```

## 解説

C89（ANSI C）が規格化したあとの初のIOCCCなので、偏執的にこれに準拠している。
必要とされるヘッダファイルをきちんと`#include`し、終了には`exit(EXIT_SUCCESS)`などを使う。

そして、悪名高い[trigraph](https://ja.wikipedia.org/wiki/%E3%83%88%E3%83%A9%E3%82%A4%E3%82%B0%E3%83%A9%E3%83%95)を使っている。
trigraphとは、`#`の代用として`??=`と書いたり、`[`の代用として`??(`と書いたりできるというC言語の機能のこと。

なぜこのような機能があるかというと、`#`や`[`などは他の文字と比べて（わずかに）ポータビリティに問題のある文字だったため。
[ASCII](https://ja.wikipedia.org/wiki/ASCII)ではすべて定義されていたが、それを国際化した[ISO/IEC 646](https://ja.wikipedia.org/wiki/ISO/IEC_646)では一部の文字が未定義となっていた。
実際、ISO/IEC 646の日本語版である[JIS X 0201](https://ja.wikipedia.org/wiki/JIS_X_0201)では、バックスラッシュが円マークに置き換えられている。
trigraphを使うと、ポータビリティの高い文字だけでC言語プログラムが書けるようになる。

ということで、この作品はtrigraphを使用しているのでポータブルであるとのこと。
当時の多くのK&R準拠コンパイラでは逆にビルドできない原因になるので、皮肉の意味もあったのかもしれない。
またこの作品は、さらなるポータビリティのために、一行を72文字に抑えている。
これにより、パンチカードで行番号を打つ余裕もある。

IOCCC審査員はscjones.hintでtrigraphへの嫌悪感を隠しておらず、今後の審査ではtrigraphによる難読化はあまり考慮しないとしている。
ASCIIは当時の時点でも既にデファクトスタンダードであり、trigraphは最初から議論のある機能だったことが伺える。

現代のgccはデフォルトでtrigraphを無効化している（`-ansi`オプションをつけると有効になる）。
このプログラムを`-Wall`つきでコンパイルすると、皮肉にもtrigraphの使用が警告される。
余談だが、C++17ではtrigraphは廃止されている。

プログラム自体は、普通のQuineだと思う。
実は初のQuine作品の入賞だが、C89規格の話に埋もれていてあまり知られていない。

なお、この作者はANSI委員会でCを規格化したメンバの一人とのこと。
IOCCCの審査は作者情報を見ないで行うので、賞名は作者の正体を知らずにつけたらしい。
