---
id: 2005/sykes
year: 2005
order: 10
authors: "Stephen_Sykes"
orig_url: "https://www.ioccc.org/2005/sykes/sykes.c"
hint_url: "https://www.ioccc.org/2005/sykes/hint.text"
title: "IOCCC 2005: Best emulator"
award_ja: "最高のエミュレータ"
---

## 動作

[コモドールPET 2001](https://ja.wikipedia.org/wiki/PET_2001)のエミュレータ。
初のエミュレータ系作品で、今後いろいろなエミュレータが入賞することになる。

作者自身が作成したROMが添付されている。6502testはCPUのテスト。

```
$ gcc -o sykes sykes.c -lncurses

$ ./sykes 6502test
```

```
6502 test suite
Instruction tests
ADC passed
AND passed
ASL passed
BCC passed
BCS passed
BEQ passed
BIT passed
BMI passed
BNE passed
BPL passed
BRK passed
BVC passed
BVS passed
CLC passed
CLD passed
CLI passed
CLV passed
CMP passed
CPX passed
```

chessはチェスプログラム（作者の落選した過去の作品を再利用したとのこと）。

```
$ ./sykes chess
```

```
  +-+-+-+-+-+-+-+-+
8 |R|N|B|Q|K|B|N|R|
7 |P|P|P|P|P|P|P|P|
6 |.|.|.|.|.|.|.|.|
5 |.|.|.|.|.|.|.|.|
4 |.|.|.|.|.|.|.|.|
3 |.|.|.|.|.|.|.|.|
2 |p|p|p|p|p|p|p|p|
1 |r|n|b|q|k|b|n|r|
  +-+-+-+-+-+-+-+-+
   A B C D E F G H
```

`d2d4`のようにコマを動かす。

```
7 |P|P|P|P|P|P|P|P|
6 |.|.|.|.|.|.|.|.|
5 |.|.|.|.|.|.|.|.|
4 |.|.|.|.|.|.|.|.|
3 |.|.|.|.|.|.|.|.|
2 |p|p|p|p|p|p|p|p|
1 |r|n|b|q|k|b|n|r|
  +-+-+-+-+-+-+-+-+
   A B C D E F G H
d2d4
........................................
....
h7h5
  +-+-+-+-+-+-+-+-+
8 |R|N|B|Q|K|B|N|R|
7 |P|P|P|P|P|P|P|.|
6 |.|.|.|.|.|.|.|.|
5 |.|.|.|.|.|.|.|P|
4 |.|.|.|p|.|.|.|.|
3 |.|.|.|.|.|.|.|.|
2 |p|p|p|.|p|p|p|p|
1 |r|n|b|q|k|b|n|r|
  +-+-+-+-+-+-+-+-+
   A B C D E F G H
```

縦幅は24行で切れる。

## 解説

基本的には[6502](https://ja.wikipedia.org/wiki/MOS_6502)のCPUエミュレータ。
10進数モードと非公式命令は実装していないとのことだが、それでもこのサイズで実現されているのはすごい。

コード形状は[PET 2001](https://ja.wikipedia.org/wiki/PET_2001)の筐体の特徴的な形状をそのまま表現している。

なお、hint.textには、ROMデータをどこからかダウンロードして実行する方法が書かれているが、著作権上の問題があるかもしれないので割愛する。
見たい人は自己責任で。
