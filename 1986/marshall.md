---
id: 1986/marshall
year: 1986
order: 6
authors: "Eric_Marshall"
orig_url: "https://www.ioccc.org/1986/marshall/marshall.c"
hint_url: "https://www.ioccc.org/1986/marshall/hint.html"
award: "Best layout"
award_ja: "最高のレイアウト"
---

## 動作

"choo choo"と表示して無限ループになる。

```
$ gcc -o marshall marshall.c

$ ./marshall
      choo choo
```

## 解説

初のBest Layout賞。蒸気機関車のアスキーアート。明確なモチーフのあるアスキーアートプログラムとしては初めての作品。
"choo choo"（蒸気機関車のシュッポシュッポ）を出力するので、単純ではあるが難読化ネタと挙動があっている。 

大半のコードは挙動には無意味。
凝った挙動にすることは捨てて、アスキーアートとして自然に見える文字を選ぶことを優先していると思われる。
たとえば縦棒が来て欲しいところでは `|` `)` `!` `i` `]` などを選び、煙もカンマから丸っぽい小文字アルファベットを選んだことが推察される。

最下行に作者名が仕込まれているけれど、現代のIOCCCでは禁止事項なので注意。

clangは`main`の第2引数が`char**`でないと怒るので書き換えが必要だが、意匠に関わるので修正がむずかしい。
