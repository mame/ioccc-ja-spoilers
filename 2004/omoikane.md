---
id: 2004/omoikane
year: 2004
order: 10
authors: "Don_Yang"
orig_url: "https://www.ioccc.org/2004/omoikane.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2004/omoikane.hint"
title: "IOCCC 2004: Best Utility"
award_ja: "最高のユーティリティ"
---

## 動作

テキストにCRCを埋め込むツール。次のファイルにCRCを埋め込む。

```
$ cat example.txt
crc = ######## 
patch = ###### 
other text here
```

次のように実行する。数分程度かかる。

```
$ gcc -o omoikane omoikane.c

$ ./omoikane example.txt example.txt example.output
........................................
    OK.
```

結果はこうなった（乱数で変わる）。

```
$ cat example.output
crc = 37d5ccd5
patch = #JFE=B
other text here
```

別の方法でCRCを計算すると、確かに一致していることがわかる。

```
$ ruby -rzlib -e 'puts "%08x" % Zlib.crc32(File.read("example.output"))'
37d5ccd5
```

## 解説

コマンドライン引数は、元のテキスト、レイアウト指定、出力ファイル。

レイアウトファイルから、8連続で出現する文字のうち、もっとも出現頻度が低い文字に対応する部分は変更して良いものとして扱う。
上記の例だと、元のテキストとレイアウト指定を両方同じファイル（example.txt）にしている。

コードは[モエかん](https://ja.wikipedia.org/wiki/%E3%83%A2%E3%82%A8%E3%81%8B%E3%82%93)に出てくるキャラクター、リニアとのこと。
当然このソースコード自身にもCRCが埋め込んである（`b9213272`）。
