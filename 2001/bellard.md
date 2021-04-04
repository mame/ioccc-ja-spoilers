---
id: 2001/bellard
year: 2001
order: 2
patch: true
authors: "Fabrice_Bellard"
orig_url: "https://www.ioccc.org/2001/bellard.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2001/bellard.hint"
title: "IOCCC 2001: Best abuse of the rules"
award_ja: "ルールの最高の悪用"
---

## 動作

セルフホスト可能なC言語のサブセットのコンパイラ。
次は、添付されているbellard.otccex.cから一部だけ抜粋したコードfib.cを動かす例。

```
$ gcc -m32 -rdynamic bellard.c -o bellard -ldl

$ cat fib.c
fib(n) {
    if (n <= 2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}
main(argc, argv) {
    int n;
    n = atoi(*(int *)(argv + 4));
    printf("fib(%d) = %d\n", n, fib(n));
    return 0;
}

$ ./bellard fib.c 10
fib(10) = 55
```

`./bellard fib.c 10`はfib.cをコンパイルして実行している。
見かけ上は、C言語インタプリタのようになる。
セルフホストは最後に示す。

## 解説

C言語のソースコードを読んで機械語（x86）に変換し、その機械語を実行する。
ただし、実行可能ファイルを出力するのではなく、メモリ内に命令列を構築し、その中の`main`関数をcallして実行する。
たとえば`./bellard foo.c`と実行すると、foo.cをメモリ内にコンパイルし、その結果を実行するので、見かけの挙動はC言語インタプリタのようになっている。
実行ファイルにするにはELFフォーマットを作る必要があるので、コードサイズ制限に合わなかったか。

コード形状による難読化はないが、サイズ制限に収まっているだけでもすごい。

x86しかサポートしていないので、`-m32`が必要。
値とポインタがともに4バイトであることを強く仮定したコードになっているので、`-m32`なしで動かすのはとても大変だと思う。
また、`calloc`関数で得たメモリに機械語を構築してcallするが、現代ではこのようなメモリは実行フラグが立っていない（[実行保護](https://ja.wikipedia.org/wiki/%E5%AE%9F%E8%A1%8C%E4%BF%9D%E8%AD%B7)を参照のこと）ので、`mmap`でメモリ確保するようにした。

[作者自身が解説サイトを作っている](https://bellard.org/otcc/)ので興味あれば参照されたい。
最近、難読化されていないバージョンも公開された。
なお作者（Fabrice Bellard）はその後、この作品を元に[tcc](https://github.com/TinyCC/tinycc)を作っている。

残念ながら、現代の環境ではfibまでは動かせたが、bellard.otccex.cを完全動作させることができなかった。
詳しくは調べていないが、関数ポインタが動いていないような気がする。
腕に自信のあるバイナリアンに解析してもらいたい。

---

当時のOS環境であるDebian 2.2 (potato)をQEMUでセットアップしたところ、bellard.otccex.cだけでなくセルフホストまで動作確認できた。

{% include img.html src="2001-bellard.png" desc="セルフホストができている様子" %}

`./bellard bellard.otccex.c 10`はbellard.otccex.cをコンパイルして動かしているだけ。
`./bellard bellard.c bellard.otccex.c 10`はbellard.cをコンパイルしてコンパイラを作り、その新しいコンパイラでbellard.otccex.cをコンパイルして実行する。
`./bellard bellard.c bellard.c bellard.otccex.c 10`はコンパイラのコンパイルをもう一段階増やしている。

