---
id: 1992/nathan
year: 1992
order: 11
authors: "Nathan_Sidwell"
orig_url: "https://www.ioccc.org/1992/nathan.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1992/nathan.hint"
title: "IOCCC 1992: Worst Abuse of the Rules"
award_ja: "ルールの最悪な悪用"
---

## 動作

メッセージが出る。

```
$ gcc -o nathan nathan.c

$ ./nathan
Export of this program from the USA is governed by the US
Munitions List from the ITAR (International Traffic in Arms
Regulations). This list gives the specific categories of
restricted exports and includes cryptographic exports. Traffic
entirely external to, entirely internal to, or into the USA is
not restricted.
To obtain a copy of the program, email to nathan@inmos.co.uk
with a subject "IOCCC request". If you know that your 'From'
line is incorrect, add a single line
"replyto you@your.correct.address" to the body of the message.
A deamon will autoreply.
WARNING: You must not re-export this out of the USA, or else
the men in black might get you.
```

ざっくり翻訳。

> このプログラムをアメリカ合衆国から輸出することは、ITAR（国際武器取引規制）の米国軍需品リストによって抑制されています。
> このリストは輸出規制対象のカテゴリを示しており、暗号技術の輸出もこれに含まれています。
> 完全にアメリカ国外の取引、完全にアメリカ国内の取引、アメリカ外からアメリカ内への取引は規制されません。
>
> このプログラムのコピーを得るには、"IOCCC request"というsubjectのメールをnathan@inmos.co.ukに送ってください。
> Fromが間違っているとわかっている場合には、"replyto you@your.correct.address"の一行をメッセージ本文に書いてください。
> デーモンが自動返信します。
>
> 警告：これをアメリカ国外に再輸出してはなりません。さもないと、黒服の男に連れて行かれるかもしれません。

## 解説

本来の投稿作品は、hello worldのテキストを[エニグマ](https://ja.wikipedia.org/wiki/%E3%82%A8%E3%83%8B%E3%82%B0%E3%83%9E_%28%E6%9A%97%E5%8F%B7%E6%A9%9F%29)式の方法で暗号化・復号するプログラムらしい。

しかし、1992年当時は[アメリカの暗号技術輸出規制](https://ja.wikipedia.org/wiki/%E3%82%A2%E3%83%A1%E3%83%AA%E3%82%AB%E5%90%88%E8%A1%86%E5%9B%BD%E3%81%8B%E3%82%89%E3%81%AE%E6%9A%97%E5%8F%B7%E3%81%AE%E8%BC%B8%E5%87%BA%E8%A6%8F%E5%88%B6)が話題だった時期。
作者がencrypter/decrypterと説明してしまったために（？）、アメリカにいる審査員が全世界に向けてこのプログラムを再配布することはできない、ということで上記のテキストを表示するだけのプログラムに置き換えられている。

なお、書かれているメールアドレスにメールを送ってみたものの、残念ながら返信はなかった。
メールアドレスのドメインである[Inmosという会社](https://en.wikipedia.org/wiki/Inmos)は1994年に吸収合併されてなくなったらしい。

この年のIOCCCのルール7番に「投稿作品はパブリックドメインでなければならない」というのは、意図としては「自由に再配布できるプログラムであること」だったのだけれど、この作品は自由に再配布できないので「ルールの悪用」という賞名にしたとのこと（暗号化ではなくファイル暗号化といえばOKかもしれないし、作者にルールの悪用の意図はなかったのだろうけど）。

---

余談だが、IOCCC入賞者のメーリングリストでこの作品について聞いてみたところ、ある人がwayback machineにコードが残っていることを見つけてくれた。
おそらく作者のNathan Sidwell自らが書いた記事で間違いないと思うけれど、公式情報ではないのでURLのみ記して解説は控える。

https://web.archive.org/web/19980122052920/http://www.cs.bris.ac.uk/~nathan/ioccc.html
