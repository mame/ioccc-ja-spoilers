---
id: 1998/tomtorfs
year: 1998
order: 13
authors: "Tom Torfs"
orig_url: "https://www.ioccc.org/1998/tomtorfs.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1998/tomtorfs.hint"
title: "IOCCC 1998: Best Self-Documenting"
award_ja: "最高の自己説明"
---

## 動作

[CRC](https://ja.wikipedia.org/wiki/%E5%B7%A1%E5%9B%9E%E5%86%97%E9%95%B7%E6%A4%9C%E6%9F%BB)を計算する。

```
$ gcc -o tomtorfs tomtorfs.c

$ ./tomtorfs tomtorfs.c 32 04C11DB7 1 FFFFFFFF FFFFFFFF
67C642BB

$ ruby -rzlib -e 'puts "%08X" % Zlib.crc32(File.read("tomtorfs.c"))'
67C642BB
```

## 解説

各種CRCを計算する。
CRCにはいろんなバリエーションがあるので、コマンドライン引数で設定可能になっている。
詳しくはtomtorfs.hintを参照。

コード形状はCRCのアスキーアート。
シンプルな一品。
