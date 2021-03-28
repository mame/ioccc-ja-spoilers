---
id: 2000/dlowe
year: 2000
order: 6
patch: true
authors: "J_David_Lowe"
orig_url: "https://www.ioccc.org/2000/dlowe.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2000/dlowe.hint"
title: "IOCCC 2000: Worst Abuse of the Rules"
award_ja: "ルールの最悪な悪用"
---

## 動作

逆ポーランド記法の電卓。

{: .wrap }
```
$ gcc -DPERL_POLLUTE `perl -MExtUtils::Embed -e ccopts` dlowe.c -o dlowe `perl -MExtUtils::Embed -e ldopts`

$ echo "3 4 + 1 2 - * p" | ./dlowe
-7
```

## 解説

Perlインタプリタの組み込みAPIを使って、コード中に埋め込まれたPerlプログラムを実行する構成になっている。
あくまでこのプログラム自体はC言語で書かれているので、IOCCCのルールに従っていると主張している。
難読化については、「PerlのAPIはマクロばっかりだから、安易にプリプロセスしたら悲惨なことになるよ。でも大丈夫、PerlのAPIはとてもわかりやすい名前だからね。`SvNV`とか`SvIV`とか`newSVpv`とか」とのこと。
ポータビリティは、「PerlはX Window Systemよりポータブルだ」と主張している。

埋め込まれたPerlプログラム自体は特段難読化されていないが、Perlなので普通に難しい。
「IOCCCのルールの裏をつくことにフォーカスして、Perl部分はきれいなコードにするつもりだったが、どうしてもできなかった」と作者は言っている。
入力の演算子は`chr(((ord)%39)+3**4)x2`によって関数名に変換し、それを呼ぶようになっている。
たとえば`+`は`UU`という関数名になる。

コード形状は川の字。3つの対象的なコードスタックを表現しているとのこと。

"easter egg"が含まれているということだけれど、たぶん次の挙動のことだと思う。

```
$ echo poot | ./dlowe
poot was here!
```

作者は[[[1998/dlowe]]]({{ site.baseurl }}{% link 1998/dlowe.md %})や[[[1998/dloweneil]]]({{ site.baseurl }}{% link 1998/dloweneil.md %})と同じであることに注意。

現代ではPerlのAPIが少しだけ変わっていた（`na`が`PL_na`に変わった）のでそこだけ修正した。
