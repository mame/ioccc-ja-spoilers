---
id: 2020/yang
year: 2020
order: 14
authors: "Don Yang"
orig_url: "https://www.ioccc.org/2020/yang/prog.c"
hint_url: "https://www.ioccc.org/2020/yang/index.html"
title: "IOCCC 2020: Best abuse of CPP"
award_ja: "CPPの最高の悪用"
---

### 動作

メッセージとPIN（暗証番号）を次のように入力し、Cコードを生成する。

```
$ gcc -o prog prog.c

$ echo "Hello, world!" | ./prog 12345 > tmp.c
```

生成されたCコードは`#define`や`#ifdef`を使いまくったり、自分自身を`#include`したりしている。

次のようにPIN付きでコンパイルし、実行すると元のメッセージが出てくる。

```
$ gcc -DPIN=12345 -o tmp tmp.c

$ ./tmp
Hello, world!
```

### 解説

コード形状は[『私、能力は平均値でって言ったよね！』](https://ja.wikipedia.org/wiki/%E7%A7%81%E3%80%81%E8%83%BD%E5%8A%9B%E3%81%AF%E5%B9%B3%E5%9D%87%E5%80%A4%E3%81%A7%E3%81%A3%E3%81%A6%E8%A8%80%E3%81%A3%E3%81%9F%E3%82%88%E3%81%AD!)のキャラクター、マイル。

プリプロセッサで遊ぶ作品はよくあるけれど、それを出力することが主題となっている作品は見当たらなかったので作ったとのこと。

出力コードのテンプレートは圧縮されている。
CRC32が埋め込まれている。
