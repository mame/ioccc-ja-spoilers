---
id: 1993/lmfjyh
year: 1993
order: 7
authors: "Jyrki_Holopainen"
orig_url: "https://www.ioccc.org/1993/lmfjyh.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1993/lmfjyh.hint"
title: "IOCCC 1993: Most Versatile Source"
award_ja: "もっとも多用途なソース"
---

## 動作

ファイル名にコードを仕込むことで任意のコードを実行させられるプログラム。

当時のCコンパイラのバグに依存しているので、現代では動かせない。

## 解説

ひさびさの一発ネタ。

当時のCコンパイラ（gcc 2.3.2やHP-UXやVAXのccなど）は`__FILE__`のエスケープが漏れていたそうで、ソースファイル名を`";main(){...};char*C=".c`などしてこのコードをコンパイルすると

```
char*_="";main(){...};char*C="";
```

となっていたらしい。
ただ、これは明らかにコンパイラのバグなので、gcc 2.3.3で即座に直された模様。
今では適切にエスケープが行われて次のように解釈されるので、残念ながら動かしようがない。

```
char*_="\";main(){...};char*C=\"";
```
