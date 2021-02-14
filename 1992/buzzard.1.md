---
id: 1992/buzzard.1
year: 1992
order: 4
authors: "Sean_Barrett"
orig_url: "https://www.ioccc.org/1992/buzzard.1.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1992/buzzard.1.hint"
title: "IOCCC 1992: Most Obfuscated Algorithm"
award_ja: "もっとも難読化されたアルゴリズム"
---

## 動作

3つのアルゴリズムが入っている。1つは階乗計算。第1引数が0のとき、第2引数の階乗を求める。

```
$ gcc -o buzzard.1 buzzard.1.c

$ ./buzzard.1 0 1
1

$ ./buzzard.1 0 2
2

$ ./buzzard.1 0 3
6

$ ./buzzard.1 0 4
24

$ ./buzzard.1 0 10
3628800
```

第2引数が1のとき、第2引数の素数判定をする。合成数なら因数を出し、素数なら`ace`と出す。

```
$ ./buzzard.1 1 2
ace

$ ./buzzard.1 1 3
ace

$ ./buzzard.1 1 4
2

$ ./buzzard.1 1 5
ace

$ ./buzzard.1 1 100
50

$ ./buzzard.1 1 101
ace
```

第1引数が2以上のとき、第2引数との最大公約数を求める。

```
$ ./buzzard.1 4 6
2

$ ./buzzard.1 45 60
15

$ ./buzzard.1 100 101
1
```

## 解説

[チャールズ・バベッジ](https://ja.wikipedia.org/wiki/%E3%83%81%E3%83%A3%E3%83%BC%E3%83%AB%E3%82%BA%E3%83%BB%E3%83%90%E3%83%99%E3%83%83%E3%82%B8)の[解析機関](https://ja.wikipedia.org/wiki/%E8%A7%A3%E6%9E%90%E6%A9%9F%E9%96%A2)のシミュレータとのこと。
解析機関は、[エイダ・ラブレス](https://ja.wikipedia.org/wiki/%E3%82%A8%E3%82%A4%E3%83%80%E3%83%BB%E3%83%A9%E3%83%96%E3%83%AC%E3%82%B9)が世界で初めてプログラミングをしたとされていることで有名。

マクロが解析機関の命令を表現していて、コード部が解析機関のプログラムを表現しているらしい。
命令の詳細はbuzzard.1.hint参照。

マクロを展開してindentコマンドをかけても、解析機関のアセンブリがCに展開されるだけでまるでわからない。
次のようなコードが500行以上続くだけ。

```
int t, u, q, p = 0, r, w = 0, a, x, y, s;
main (argc, argv)
     char **argv;
{
  for (; !w;)
    {
      q = 0;
      u = p;
      u -= q;
      t = u;
      t *= u;
      t += 2047;
      t /= 2048;
      t += 8191;
      t /= 8192;
      r += 2;
...
      t = 0;
      t -= p;
      t *= r;
      p += t;
      r = 0;
    }
  printf ("%x\n", y);
}
```

コードの形状は"CB"。
理由は"for obvious reasons"とのことだが、Charles Babbageのイニシャルや、C言語ソースコードを整形するcbコマンド（現代で言うprettier、C-beautifierの略称）などにかけていると思われる。
さらに「Charles Barrettに捧ぐ」とあるが、おそらく作者の身内だろうか。
