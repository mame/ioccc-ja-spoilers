---
id: 2014/morgan
year: 2014
order: 7
authors: "Yves-Marie_Morgan"
orig_url: "https://www.ioccc.org/2014/morgan/prog.c"
hint_url: "https://www.ioccc.org/2014/morgan/hint.html"
title: "IOCCC 2014: Most likely to succeed"
award_ja: "もっとも成功しそう"
---

## 動作

makeコマンドのクローン。

```
$ cat Makefile
MESSAGE=Hello

all: sub1 sub2
        @echo $(MESSAGE)

sub1:
        @echo sub task 1

sub2:
        @echo sub task 2

$ gcc -o prog prog.c

$ ./prog
sub task 1
sub task 2
Hello
```

## 解説

コード形状は"MAKE"。
マクロを使った、比較的古い雰囲気の難読化がなされている。
[[[1992/ant]]]({{ site.baseurl }}{% link 1992/ant.md %})とネタがかぶっている？

---

ところで、IOCCCのMakefileにはいろいろなイースターエッグが仕込まれている。
これらはおおよそこの作品でも動いた。

```
$ make love
not war?
```

["Make love, not war"](https://ja.wikipedia.org/wiki/%E6%88%A6%E4%BA%89%E3%82%92%E3%81%97%E3%81%AA%E3%81%84%E3%81%A7%E6%81%8B%E3%82%92%E3%81%97%E3%82%88%E3%81%86)は「戦争をしないで恋をしよう」という反戦の標語。

```
$ make waste
haste

$ make haste
haste
```

"Haste makes waste"は「急がば回れ」に相当することわざ。

```
$ make easter_egg
you expected to sometimes mis-understand this 4323 magic
chongo <was here> /\oo/\
Readers shall not be disallowed from failong to be unable to not partly misunderstand this partocular final echo.
```

1行目はおそらく、["You are not expected to understand this."](https://en.wikipedia.org/wiki/Lions%27_Commentary_on_UNIX_6th_Edition,_with_Source_Code#%22You_are_not_expected_to_understand_this%22)（あなたがこれを理解することは期待されていない）という有名なコメントを踏まえている。このコメントは[デニス・リッチー](https://ja.wikipedia.org/wiki/%E3%83%87%E3%83%8B%E3%82%B9%E3%83%BB%E3%83%AA%E3%83%83%E3%83%81%E3%83%BC)が[Version 6 Unix](https://ja.wikipedia.org/wiki/Version_6_Unix)のソースコードに残していたとされる。
2行目の"chongo"は、IOCCCの審査員で創始者である[Landon Curt Noll](https://en.wikipedia.org/wiki/Landon_Curt_Noll)のネット上の名前。
3行目は否定だらけでよくわからない英文。元ネタがあるのかは知らない。
なお、1行目の数字はmakeの組み込み変数`$${RANDOM}`で実現されていて、この作品は組み込み変数に対応していないので、空欄になる。

```
$ make supernova
rm -f prog.o
rm -f prog
rm -f morgan
We are not expected to understand that
```

"supernova"は超新星。"nuke"ターゲットを呼んでいて、これは"clobber"と同じ。

```
$ make magic
You are holding it wrong!
These aren't the primes you're looking for Pauline!
```

1行目は、[スティーブ・ジョブズ](https://ja.wikipedia.org/wiki/%E3%82%B9%E3%83%86%E3%82%A3%E3%83%BC%E3%83%96%E3%83%BB%E3%82%B8%E3%83%A7%E3%83%96%E3%82%BA)がiPhone 4の受信感度が悪いという苦情に対して言ったとされる「持ち方が悪いんだよ」というジョークらしい。
2行目は、[スター・ウォーズ](https://ja.wikipedia.org/wiki/%E3%82%B9%E3%82%BF%E3%83%BC%E3%83%BB%E3%82%A6%E3%82%A9%E3%83%BC%E3%82%BA%E3%82%B7%E3%83%AA%E3%83%BC%E3%82%BA)のセリフ"These aren't the droids you're looking for"。
"Pauline"はわからない。
