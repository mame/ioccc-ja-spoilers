---
id: 1996/huffman
year: 1996
order: 4
authors: "Ken_Huffman"
orig_url: "https://www.ioccc.org/1996/huffman.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1996/huffman.hint"
title: "IOCCC 1996: Best Obfuscated Character Set Utility"
award_ja: "最高の難読化文字集合ツール"
---

## 動作

点字変換ツール。

```
$ gcc -o huffman huffman.c

$ echo Hello world | ./huffman
*  *  * * *     * *  *  * **
**  * * *  *   **  * ** *  *
      * * *     * *  *  *
```

逆変換もできる。

```
$ echo Hello world | ./huffman | ./huffman
HELLO WORLD
```

---

そして、コードの配置が点字になっており、デコードするとメッセージがでてくる。

```
$ ./huffman < huffman.c
THIS PROGRAM CONVERTS
ALPHANUMERIC CHARACTERS
TO BRAILLE AND VICE VERSA
WHEN ASTERISKS ARE FOUND
EXCEPT LINES THAT START
WITH A POUND SIGN WHICH
ARE IGNORED
OUTPUT FROM THIS PROGRAM
IS SUITABLE FOR ITS INPUT
1234567890
0987654321
THE QUICK BROWN FOX
JUMPS OVER THE LAZY DOG
```

「このプログラムは英数字を点字に変換します。アスタリスクが見つかったときは逆変換をします。ただし`#`で始まる行は無視します。このプログラムの出力は入力として使えます。」

## 解説

意味のあるコード形状制約がとてもすばらしい。

余談だが、受賞者のKen Huffmanは、ハフマン符号化を作った[David Huffman](https://en.wikipedia.org/wiki/David_A._Huffman)の甥らしい。
