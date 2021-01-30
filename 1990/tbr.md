---
id: 1990/tbr
year: 1990
order: 9
patch: true
authors:
  - "Byron_Rakitzis"
  - "Sean_Dorward"
orig_url: "https://www.ioccc.org/1990/tbr.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1990/tbr.hint"
title: "IOCCC 1990: Best Utility"
award_ja: "最高のユーティリティ"
---

## 動作

シェル。

```
~/ioccc/1990$ gcc -o tbr tbr.c

~/ioccc/1990$ ./tbr
$ echo Hello > tmp.txt
$ cat tmp.txt
Hello
```

## 解説

謎のレイアウト。波線や縦書き円周率などが目につくが、特に主題とは関係ないと思う。

tbr.hintではコード圧縮のテクニックがいろいろと語られている。550バイトでシェルは結構すごい気がする。詳細は未解読。

エラーメッセージは`?`のみだが、[edコマンド](https://ja.wikipedia.org/wiki/Ed_%28%E3%83%86%E3%82%AD%E3%82%B9%E3%83%88%E3%82%A8%E3%83%87%E3%82%A3%E3%82%BF%29)も同じなのでいいでしょう、とのこと。

現代では`exit(0)`の返り値を使っているところでエラーになるので、`(exit(0),0)`に置き換えた。
