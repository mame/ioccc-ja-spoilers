---
id: 1988/robison
year: 1988
order: 6
authors: "Arch_D_Robison"
orig_url: "https://www.ioccc.org/1988/robison.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1988/robison.hint"
title: "IOCCC 1988: Best abuse of C constructs"
award_ja: "C構文の最高の悪用"
---

## 動作

指定した桁数だけ[ネイピア数e](https://ja.wikipedia.org/wiki/%E3%83%8D%E3%82%A4%E3%83%94%E3%82%A2%E6%95%B0)の計算を行う。

```
$ gcc -o robison robison.c

$ ./robison
2.718281828

$ ./robison 40
2.718281828459045235360287471352662497757
```

第2引数は基数（デフォルトは10）。

```
$ ./robison 40 2
2.101101111110000101010001011000101000101
```

## 解説

利用できる構文・言語機能をあえて制限してプログラムを書こうという方針の初の入賞作品。
おおよそ`--`と`>=`と`while`だけでプログラムが書かれている。

難読化プログラミング言語の[Brainf**k](https://ja.wikipedia.org/wiki/Brainfuck)を思い浮かべる人も多いのではないかと思う。
ただし、このコードはBrainf\*\*kの登場（1993年）より先に作られている。
`unsigned char`を使って、underflowによってゼロから非ゼロを作り出す点はBrainf\*\*kよりhackyな感じ。

robison.hintには、`robison 80 2`にバグがあることが示唆されている。

```
     robison 80 2   <--- can you find the bug?
```

これはおそらく、`2.`で始まっていることを指していると思われる。2進数なので`2`は書けず、`10.`で始まるのが正しい。

```
     robison 80 -246
```

は、`unsigned char`に変換するので、10を指定しているのと同じ。

なお、この年までのhintファイルには審査員のコメントしかなかったけれど、robison.hintには作者の冗談コメントが引用されている。

> このプログラムは、Cには不要な構文が多すぎることを示しています。
> 実際、必須なのは`--`と`>=`と`while`だけです （先頭にある2つの代入は、`atoi`をこのやり方で書き直せば避けられます）。
> 留意すべきは、異論の多い`goto`や代入文がないことで、意味が明瞭になっていることです。
> 現在のANSI委員会はこの実用的なCの簡略化をよく見るべきです。

ちなみにC言語の初の標準規格、ANSI C（C89）が登場するのは翌年末。
