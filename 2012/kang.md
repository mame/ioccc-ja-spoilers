---
id: 2012/kang
year: 2012
order: 7
authors: "Seonghoon_Kang"
orig_url: "https://www.ioccc.org/2012/kang/kang.c"
hint_url: "https://www.ioccc.org/2012/kang/hint.html"
title: "IOCCC 2012: Best short program"
award_ja: "最高のショートプログラム"
---

## 動作

数字の英語表現をいい感じに解釈する。

```
$ gcc -o kang kang.c

$ echo Nineteen hundred and eighty-four | ./kang
1984
```

trillion（1兆）まで対応している。

```
$ echo a trillion | ./kang
1000000000000
```

## 解説

約256バイトで実現されているのでとてもすごい。

ポイントはもちろん、単語から数字に変換するところ。
単語を巧妙に`long long`型に符号化して、"tw-"や"tr-"や"-ty"といった特徴的な部分列を検出しているらしい。
hint.textに結構詳しく書かれているが、正直全然解読できていない。いつかきちんと理解したい。

数字の構築は比較的わかりやすく巧妙で、`printf("%llx", m)`から分かる通り、16進数として構築されている。
"fourty-two"なら0x42が構築される。
これにより、trillionのような巨大な桁もビット演算ですぐに作れている。

インド・ヨーロッパ語族の言語なら特徴は似ているのでわりといける、と審査員は主張している。
挙げられている例は、uno（イタリア語）、trois（フランス語）、fier（ドイツ語、ただし正しくはvierで、意図的にスペルミスしている）、shest'（ロシア語）。

```
$ echo uno | ./kang
1

$ echo trois | ./kang
3

$ echo fier | ./kang
4

$ echo "shest'" | ./kang
6
```
