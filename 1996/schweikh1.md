---
id: 1996/schweikh1
year: 1996
order: 7
authors: "Jens_Schweikhardt"
orig_url: "https://www.ioccc.org/1996/schweikh1.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1996/schweikh1.hint"
title: "IOCCC 1996: Worst Abuse of the C Preprocessor"
award_ja: "Cプリプロセッサの最悪な悪用"
---

## 動作

[イースター（復活祭）](https://ja.wikipedia.org/wiki/%E5%BE%A9%E6%B4%BB%E7%A5%AD)の日付を列挙する。

コンパイルオプションの`-I .`を足すことで、同じディレクトリのerrno.hを参照できる設定でコンパイルする必要がある。

```
$ cat errno.h
extern int errno;

$ gcc -I . -o schweikh1 schweikh1.c

$ ./schweikh1
Sun Apr 18 1582
Sun Apr 10 1583
Sun Apr 01 1584
Sun Apr 21 1585
Sun Apr 06 1586
Sun Mar 29 1587
Sun Apr 17 1588
Sun Apr 02 1589
Sun Apr 22 1590
Sun Apr 14 1591
...
Sun Mar 29 2195
Sun Apr 17 2196
Sun Apr 09 2197
Sun Mar 25 2198
Sun Apr 14 2199
```

## 解説

イースターは「春分の後の最初の満月の後の日曜日」とのこと。
これを求めるアルゴリズムは[ガウス](https://ja.wikipedia.org/wiki/%E3%82%AB%E3%83%BC%E3%83%AB%E3%83%BB%E3%83%95%E3%83%AA%E3%83%BC%E3%83%89%E3%83%AA%E3%83%92%E3%83%BB%E3%82%AC%E3%82%A6%E3%82%B9)によるらしい。
詳しくはschweikh1.hintを参照。

プリプロセスの指示のみからなるコード。
`extern int errno;`を置き換えている。
schweikh1.hintによるとこれは当時から一部の環境で動かなかったらしい。
Solarisのgccでこの定義が2箇所にあるので壊れているとある（が、同じ`extern`宣言を複数回置くのはC言語的に合法のはずなので、壊れているのはこのコードである）。
リリースパッケージにはerrno.hが添付され、`gcc -I.`するようになっている。
同年の[[[1996/jonth]]]({{ site.baseurl }}{% link 1996/jonth.md %})と少しネタがかぶっているのは偶然か。

コードの形はロケット。
コメントでApollo 13と書かれているが、イースターとの関連はわからない。
次のようにC言語の構文の説明みたいなものを（あまり脈絡なく）入れているあたり、思いつくネタをいろいろ入れたのかもしれない。

```
#define        compound_statement { declaration_list ; statement_list ; }
```

[[[1996/schweikh2]]]({{ site.baseurl }}{% link 1996/schweikh2.md %})と[[[1996/schweikh3]]]({{ site.baseurl }}{% link 1996/schweikh3.md %})とあわせて、同じ人が同年に3部門で入賞するのは初の事例。
