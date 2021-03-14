---
id: 1996/gandalf
year: 1996
order: 3
patch: true
authors: "Dean_Swift"
orig_url: "https://www.ioccc.org/1996/gandalf.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1996/gandalf.hint"
title: "IOCCC 1996: Best Layout"
award_ja: "最高のレイアウト"
---

## 動作

ASCII表を出す。

```
$ gcc -o gandalf gandalf.c

$ ./gandalf
   0123456789ABCDEF

2   !"#$%&'()*+,-./
3  0123456789:;<=>?
4  @ABCDEFGHIJKLMNO
5  PQRSTUVWXYZ[\]^_
6  `abcdefghijklmno
7  pqrstuvwxyz{|}~
8  ����������������
9  ����������������
A  ����������������
B  ����������������
C  ����������������
D  ����������������
E  ����������������
F  ����������������
```

`argv[0]`の先頭の文字がASCIIコードで偶数のときは8 bit文字の範囲を表示しなくなる。

```
$ PATH=. hatcat
   0123456789ABCDEF

2   !"#$%&'()*+,-./
3  0123456789:;<=>?
4  @ABCDEFGHIJKLMNO
5  PQRSTUVWXYZ[\]^_
6  `abcdefghijklmno
7  pqrstuvwxyz{|}~
```

## 解説

このプログラムについては、ネタもコードもあまり理解できていない。

英語圏で著名な絵本作家である、[Dr. Seuss](https://ja.wikipedia.org/wiki/%E3%83%89%E3%82%AF%E3%82%BF%E3%83%BC%E3%83%BB%E3%82%B9%E3%83%BC%E3%82%B9)の絵本がネタになっている。
冒頭の`do you like (green eggs and ham++)?`のあたりは[Green Eggs and Ham](https://en.wikipedia.org/wiki/Green_Eggs_and_Ham)のセリフで、アスキーアートになっているのは[The Cat in the Hat](https://en.wikipedia.org/wiki/The_Cat_in_the_Hat)の猫。
しかしこれらが「ASCII表を表示する」という挙動と関係があるのかはわからなかった。

パッチ前の状態では、マクロ定義に`#`が含まれているなどでコンパイルエラーになる。
他にもいろいろと壊れたプログラムになっていて、C89からすでに7年経っていた当時、どういうコンパイラがこのコードをコンパイルできていたのかわからない。
おそらく、`do`で始まる行は無視されることが想定されているように見える。
少なくとも実行には意味がなさそうなので、関連箇所を削除することでコンパイルはできた。
