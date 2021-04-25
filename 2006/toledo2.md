---
id: 2006/toledo2
year: 2006
order: 14
patch: true
authors: "Oscar_Toledo_G."
orig_url: "https://www.ioccc.org/2006/toledo2/toledo2.c"
hint_url: "https://www.ioccc.org/2006/toledo2/hint.text"
title: "IOCCC 2006: Best of Show"
award_ja: "最優秀賞"
---

## 動作

[8080](https://ja.wikipedia.org/wiki/Intel_8080)エミュレータ。C.BASICファイルをCという名前のファイルにコピーしてから起動する。

```
$ cp C.BASIC C

$ gcc -o toledo2 toledo2.c

$ ./toledo2

OK
>
```

BASIC環境なので、プログラムを入力して実行する例。

```
>10 PRINT "Hello, world!"
>LIST
  10 PRINT "Hello, world!"

OK
>RUN
Hello, world!

OK
```

終わるにはCtrl+Z。
終わるときにsegfaultするのは仕様。

## 解説

初のエミュレータ系作品だった[[[2005/sykes]]]({{ site.baseurl }}{% link 2005/sykes.md %})は[6502](https://ja.wikipedia.org/wiki/MOS_6502)のエミュレータだったが、Intel 8080は6502と市場を競い合っていたCPUで、初代x86である[8086](https://ja.wikipedia.org/wiki/Intel_8086)の前身となった8ビットCPU。
レジスタ7つ、フラグは4つ、相対ジャンプ命令なしという（現代のx86からみれば）非常に簡素なCPUであるが、それでもIOCCCのサイズ制限を満たすのはすごそう。

コードは、マクロ定義、"8080"のアスキーアート、コードの塊。
アスキーアートは`{`、`}`、`;`で書かれている。
これはIOCCCのサイズ制限のルールにおける、空白の続く波括弧またはセミコロンを0文字扱いするという特例を利用している。

8080の主なユーザは[CP/M](https://ja.wikipedia.org/wiki/CP/M)で、このプログラムはCP/Mエミュレータとしても動くとのこと。
ただしROMなどをダウンロードしてくる必要がある。
著作権的に問題がある可能性があるので、興味のある人は自己責任でhint.textを参照のこと。
