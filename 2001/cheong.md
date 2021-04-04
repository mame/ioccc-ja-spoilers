---
id: 2001/cheong
year: 2001
order: 3
authors: "Raymond_Cheong"
orig_url: "https://www.ioccc.org/2001/cheong.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/2001/cheong.hint"
title: "IOCCC 2001: Best short program"
award_ja: "最高のショートプログラム"
---

## 動作

任意精度で整数の平方根を求める。

```
$ gcc -o cheong cheong.c

$ ./cheong 81
9

$ ./cheong 1024
32

$ ./cheong 012345678987654321
111111111
```

偶数桁でないといけない。奇数桁の場合は先頭に0をつける。

## 解説

コード形状は"√"の形になっている。驚きの小ささ。

基本的には[開平法](https://ja.wikipedia.org/wiki/%E9%96%8B%E5%B9%B3%E6%B3%95)で求めていると思う。
完全には理解できていないが、1つの`char`に20進数の1桁と10進数の1桁を重ねてもたせる（20で割った余りが前者、20で割った商が後者）とか、`main`関数の再帰でうまく扱えるように値が負の範囲になるように調整する（`argc`は通常起動時は正なので、それと区別する）とか、非常にトリッキーなコードになっている。
