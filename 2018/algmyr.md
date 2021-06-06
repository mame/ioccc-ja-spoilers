---
id: 2018/algmyr
year: 2018
order: 1
authors: "Anton_Älgmyr"
orig_url: "https://www.ioccc.org/2018/algmyr/prog.c"
hint_url: "https://www.ioccc.org/2018/algmyr/hint.html"
title: "IOCCC 2018: Most cacophonic"
award_ja: "もっとも不快な音を持つ"
---

## 動作

テキストを音に変換する。

```
$ gcc -o prog prog.c

$ echo "Hello, world!" | ./prog | sox -t raw -c 1 -r 44100 -L -e floating-point -b 32 - hello.wav
```

表題の通り、この音声ファイルはノイズでしかない。

{% include audio.html src="2018-algmyr-1.mp3" desc="hello.wav" %}

しかし、周波数のスペクトグラムを表示すると、意味がわかる。

```
$ sox hello.wav -n spectrogram -d 10 -X 300
```

{% include img.html src="2018-algmyr-2.png" desc="spectrogram.png" %}

つまり、スペクトラムにしたときにメッセージが表示されるような音声を合成している。

---

なお、デコードもできる。

```
$ echo "Hello, world!" | ./prog | ./prog -d 1 0
Hello, world!
```

コマンドラインに"-h"を与えることでヘルプが出てくるが、音声データとして出てくるので注意。

```
$ ./prog -h | ./prog -d 1 0
Usage
    ./prog [-h] [-d #c cid] file1 file2 ... (or stdin)
```

ステレオチャンネルに別のテキストを持たせることもできる。

```
$ cat hello.txt
Hello

$ cat world.txt
world

$./prog hello.txt world.txt | sox -t raw -c 2 -r 44100 -L -e floating-point -b 32 - hello-world.wav

$ sox hello-world.wav -n spectrogram -d 10 -X 300
```

{% include img.html src="2018-algmyr-3.png" desc="ステレオ版spectrogram.png" %}

## 解説

音声の周波数のスペクトラムを表示したら文字が出てくるような音声データを生成するプログラム。

コード形状は前半と後半で別れている。
前半は波を表現していると思う。
ちなみに前半は文字列リテラルで、フォントデータをBase64風にエンコードしたものとのこと。

後半のアスキーアートは[スペクトル漏れ](https://ja.wikipedia.org/wiki/%E3%82%B9%E3%83%9A%E3%82%AF%E3%83%88%E3%83%AB%E6%BC%8F%E3%82%8C)を表現している。
このプログラムの苦労した点として、音を突然再生し始めるとスペクトル漏れによってスペクトグラムが読みにくくなってしまう問題があったらしい。
窓関数を導入して緩和したとのこと。
窓関数は有名なものだが、ちょっと変わった形で導入しており、多項式のように見えて多項式のように振る舞うもので、実際には多項式ではないかもしれないもの、らしい。
詳細は未解析なのでわからない。

iocccsize -iは2018とカウントするとのこと。
