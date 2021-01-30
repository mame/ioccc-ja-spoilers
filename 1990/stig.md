---
id: 1990/stig
year: 1990
order: 8
authors: "Stig_Hemmer"
orig_url: "https://www.ioccc.org/1990/stig.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1990/stig.hint"
title: "IOCCC 1990: Strangest Abuse of the Rules"
award_ja: "もっとも奇妙なルール悪用"
---

## 動作

コンパイラが入れ子のコメントをサポートしているかどうかを判定する、とのこと。
次のようにコンパイル・実行する。

{: .wrap }
```
$ alias c="cc -E stig.c -Dc='main(){printf(\"N%sested comments allowed.\\n"'",/*/*/0*/**/1?"":"o n"'");}'|grep -v '^#'>o.c;cc -o o o.c;./o"

$ c
...
No nested comments allowed.
```

## 解説

ソースコードは`c`の1文字だけで、コンパイラオプション`-Dc=...`として意味を与える。
これは[[[1987/biggar]]]({{ site.baseurl }}{% link 1987/biggar.md %})とまったく同じネタ。
しかし、そこに埋め込むコードの方に創意工夫が認められたとのこと。

コメントの入れ子がサポートされているかどうかを判定するギミックは`/*/*/0*/**/1`のところ。
コメントが入れ子にならないコンパイラではこれは`0 * 1`となり、コメントが入れ子になるコンパイラでは`1`になる。
ただしstig.hintによると、これは作者自身の発明ではないとのこと。

作者自身の創意工夫は、この判定ギミックを埋め込んだコードをコンパイラオプション（`-Dc=...`）に埋め込み、それと主にccコマンドの呼び出しを行うcsh向けaliasをechoで出力させる、というところらしい。
エスケープだらけになってわかりにくいことは確か。

現代では、コメントを入れ子で処理するコンパイラが見当たらなかったので、`Nested comments allowed.`の出力は確認できていない。
また、残念ながらcshはマイナーになってしまい、現代の主流であるbashやzshでは比較的自然にaliasを定義できてしまう（添付されているksh向けの定義がほぼそのまま動く）ので、難読化のポイントも伝わりにくくなっている。
