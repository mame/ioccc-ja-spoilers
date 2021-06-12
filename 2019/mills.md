---
id: 2019/mills
year: 2019
order: 12
authors: "Christopher_Mills"
orig_url: "https://www.ioccc.org/2019/mills/prog.c"
hint_url: "https://www.ioccc.org/2019/mills/hint.html"
title: "IOCCC 2019: Most in need to be tweeted"
award_ja: "もっともツイートされる必要がある"
---

## 動作

[回帰型ニューラルネットワーク（RNN）](https://ja.wikipedia.org/wiki/%E5%9B%9E%E5%B8%B0%E5%9E%8B%E3%83%8B%E3%83%A5%E3%83%BC%E3%83%A9%E3%83%AB%E3%83%8D%E3%83%83%E3%83%88%E3%83%AF%E3%83%BC%E3%82%AF)で、学習した文書っぽい文書を自動生成する。

LSTMやGRUなど、RNNの派生版をマクロで生成できる。
次は2段階LSTMの例らしい。

```
$ gcc -DRS=.15 -DTR=.95 -DLR=.002 -DLD=.97 -DLE=10 -DCL=5 -DB1=.9 -DB2=.999 -DEP=1e-8 -DWD=8e-5 -DDI=100 -DSL=200 -DN=50 -DTP=1 -DPF='"cp%02d_%.3f"' -DHS=128 -DBK='cp = I(HS), hp = I(HS), t1 = L(HS, x), f = S(A(t1, L(HS, hp))), t2 = L(HS, x), i = S(A(t2, L(HS, hp))), t3 = L(HS, x), cn = T(A(t3, L(HS, hp))), t4 = M(f, cp), c = C(cp, A(t4, M(i, cn))), t5 = L(HS, x), o = S(A(t5, L(HS, hp))), h = C(hp, M(o, T(c))), y = h' -DNW='x = I(n), y = L(n, MD(MD(x)))' -o lstm2 prog.c -lm
```

IOCCCのルールやガイドラインっぽいテキストを生成する例。

```
$ ./lstm2 < IOCCC-Rules-Guidelines.cp98_0.175 | head -n 30
 compiler octet to make sime, pre, and then Bird and interesting the following address:

|       q.2018@ioccc.org       (for questions only!)

|   You must use such in order to needed to confusiated to postions of the same program, one that is a compact blob
    of code, and the other that is formatted more like a typical C
    program, we tend to favor the second version.  Of course, a third
    version of the same program that is formatted in an interesting
    and/or obfuscated way, would definitely win over the first two!
    Remember, you can ters are portable and usable from within a master
        * reading the "how to build" information and forming a Makefile
        * reading prog.c, the C source
        * reviewing the "remarks" information
        * briefly looking any any supplied data files
        * passing the source thru the C pre-processor
            skipping over any #include files
        * compiling/building the source
        * running the program
        * Doing other things that only IOCCC judges know about :-)

    In later rounds, other remarks file.

    People who are considering to just use some complex mathematical
    function or state machine to spell out something such as "hello,
    world!" really really, and we do mean really, do need to be more creative.

    Ultra-obfuscated programs are, in some cases, easier to
    deobfuscate than subtly-obfuscated programs.  Consider using
    misleading or subtle tricks layered on top of or under an
    appropriate level of obfuscation.  A clean looking program with
```

## 解説

OMLET（Obfuscated Machine Learning Environment Toolkit）という名前をついている。
詳しいことは見ていない。
コード形状が何を表現しているのかもわかっていない。
hint.textはそれなりに長いが、コードについての説明はなさそう。
