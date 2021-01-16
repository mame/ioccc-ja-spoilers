---
id: 1988/spinellis
year: 1988
order: 7
authors: "Diomidis_Spinellis"
orig_url: "https://www.ioccc.org/1988/spinellis.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1988/spinellis.hint"
title: "IOCCC 1988: Best abuse of the rules"
award_ja: "ルールの最高の悪用"
---

## 動作

`#include "/dev/tty"`しているだけのプログラム。
コンパイルすると標準入力を待ち受ける。

```
$ gcc -o spinellis spinellis.c

```
{% include img.html src="1988-spinellis.png" desc="コンパイラを起動したら入力の待受状態になった様子" %}

ここに好きなCコードを書き込み、Ctrl+Dなどで区切ることで、入力した内容をコンパイルさせることができる。

```
$ gcc -o spinellisspinellis.c
#include <stdio.h>
int main() {
  puts("Hello, world!");
}
^D

$ ./spinellis
Hello, world!
```

## 解説

`#include "/dev/tty"`というアイデア一発勝負。
/dev/ttyは、呼び出し元のプロセスが使っている標準入出力を表すデバイスファイル。
コンパイラは`#include`を解釈し、/dev/ttyを開いて読み込もうとする。
するとコンパイラは標準入力を読み込むことになるので、上記のような挙動となる。

[[[1987/biggar]]]({{ site.baseurl }}{% link 1987/biggar.md %})と同じく、任意の好きな挙動をさせられるプログラムと主張している。
ルールの悪用なので、今後はビルド時に人間の介入が必要になるコードは禁止となった。

ちなみに、clangではコンパイルできなかった。
