---
id: 1986/hague
year: 1986
order: 5
authors: "Jim_Hague"
orig_url: "https://www.ioccc.org/1986/hague/hague.c"
hint_url: "https://www.ioccc.org/1986/hague/hint.html"
award: "Worst abuse of the C preprocessor"
award_ja: "Cプリプロセッサの最悪な悪用"
---

## 動作

モールス符号変換。

```
$ gcc -o hague hague.c

$ echo SOS | ./hague
... --- ...

$ echo "Hello, world" | ./hague
.... . .-.. .-.. --- --..-- ? .-- --- .-. .-.. -..
```

## 解説

モールス信号のトン（Dit）とツー（Dah）に合わせて、識別子は`DIT`や`DAH`などで構成されている。挙動と難読化の主題があっている。

プログラムはタブで3カラムに区切られていて、各断片が含む`DIT`や`DAH`の列はアルファベットのモールス信号として解釈できる。hint.textにもプログラムにモールスメッセージが仕込まれていることを匂わす文があるが（"Now for extra credit, what morse message does the program spell out?"）、意味がわからなかった。復号したものを書いておくので誰かわかる人おしえてほしい。

```
  E
  T
  T
A
  N
  A
N
  N
K
  E G
A U C
A U R
K D G
V E D
C I N
W D X
N E A
R A P
J G E
A U L
L W A
K O E
A P M
R F R
Z T I
A E W
S   P
F   A
```
