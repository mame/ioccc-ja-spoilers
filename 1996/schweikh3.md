---
id: 1996/schweikh3
year: 1996
order: 9
authors: "Jens_Schweikhardt"
orig_url: "https://www.ioccc.org/1996/schweikh3.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1996/schweikh3.hint"
title: "IOCCC 1996: Best Utility"
award_ja: "最高のユーティリティ"
---

## 動作

OSがメモリの[overcommit](https://www.kernel.org/doc/Documentation/vm/overcommit-accounting)をするかどうかを調べるツールらしい。

システムに強く依存する（やや危険な香りのする）コードなので、動作確認はしていない。

## 解説

overcommitとは、プログラムが実メモリ以上のサイズのメモリを確保することを許すOSの機能。
実メモリ以上確保させるのは危険だけれど、マルチプロセス環境で各プロセスの確保しているメモリの合計を実メモリ以下に抑えるのは実用上厳しすぎるので、難しい問題。
当時は、Solarisはovercommitなし、FreeBSDはovercommitあり（実メモリが足りなくなったらプロセスを適当に殺す）、Linuxはpseudo overcommit（実メモリが足りなくなったらスワップに書き出す、[スラッシング](https://ja.wikipedia.org/wiki/%E3%82%B9%E3%83%A9%E3%83%83%E3%82%B7%E3%83%B3%E3%82%B0)が発生する）だったらしい。

子プロセスで`malloc`できる最大メモリサイズを二分探索で探して、たぶんその中にアクセスすることで物理メモリを割り当てさせて、overcommitが行われているかどうかを調べる。
特に問題なくアクセスできればovercommitなし、子プロセスが`SIGKILL`で殺されたらovercommitあり、非常に遅くなったらスラッシング発生とみなしてovercommitあり、と判定するらしい。

コードの特徴は、1カラム目に1文字のトークンをなるべく置くとか、変数名をプログラミング言語名にするとか。

[[[1996/schweikh1]]]({{ site.baseurl }}{% link 1996/schweikh1.md %})と[[[1996/schweikh2]]]({{ site.baseurl }}{% link 1996/schweikh2.md %})とあわせて、同じ人が同年に3部門で入賞するのは初の事例。
