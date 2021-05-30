---
id: 2015/endoh2
year: 2015
order: 5
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2015/endoh2/prog.c"
hint_url: "https://www.ioccc.org/2015/endoh2/hint.html"
title: "IOCCC 2015: Most Overlooked Obfuscation"
award_ja: "もっとも見逃されていた難読化"
---

## 動作

catコマンドで見ると、ただのHello, world!に見える。

```
$ cat prog.c
int main(){ printf("Hello, world!\n"); }
```

しかしコンパイル・実行すると、元のプログラムが表示される。

```
$ gcc -w -o prog prog.c

$ ./prog
int main(){ printf("Hello, world!\n"); }

$ ./prog | diff -s - prog.c
Files - and prog.c are identical
```

デモ動画。

{% include youtube.html src="QZkRw2bik9Q" desc="作者によるデモ動画" %}

## 解説

バックスペース文字を悪用したQuine。
プログラムを20文字程度ずつに分割し、20文字書いたらバックスペースで20文字戻る、というのを繰り返すコードになっている。
実際には、コード中にバックスペース文字が出現したらコンパイルが通らないので、文字列リテラルでバックスペースを包む必要がある。
20文字程度ごとに文字列リテラルが割り込んでくるという制約で書くことになるので多少面倒くさい。
バックスペース文字を難読化に使うアイデアは[[[2011/fredriksson]]]({{ site.baseurl }}{% link 2011/fredriksson.md %})でも少し登場していた。

アンダースコアを出力した後、バックスペースで戻り、文字を出力すると、タイプライタの時代では下線付き文字となっていた。
これを[重ね打ち](https://en.wikipedia.org/wiki/Overstrike)という。
同じ文字を重ね打ちすることで太字にするハックもあった。
これらのハックは今でもlessのようなページャに実装されており、prog.cをlessで見ると強調・下線付き文字になる（端末にもよる）。

プログラムの構造を見たいときは、次のように、バックスペースの列の前にカーソルを下に移動させるエスケープシーケンスを入れるとよい。

```
$ clear && ruby -e 'puts File.read("prog.c").gsub(/\x08+/) { "\e[B" + $& }'
int main(){ printf("");{char*p,s[999]="i
                   nt main(){ printf(~~)
                   ;{char*p,s[999]=~%s
                   ~,*q=s,c;for(p=62**~
                   ~+q;q<s+435;c=q-s>*~s
                   ~||c>8?*p++=c-35?*~}
                   ~<c?34:c:92:0,p[*~
                   ~]=0)c=*q++;*p=2+*~
                   ~;printf(s+62**~
                   ~,s);}return(*~#0
                    _
                    H
                    H_
                     e
                     e_
                      l
                      l_
                       l
                       l_
                        o
                        o_
                         ,
                         ,_

                           _
                           w
                           w_
                            o
                            o_
                             r
                             r_
                              l
                              l_
                               d
                               d_
                                !
                                !#n~); }
                   ",*q=s,c;for(p=62**"
                   "+q;q<s+435;c=q-s>*"s
                   "||c>8?*p++=c-35?*"}
                   "<c?34:c:92:0,p[*"
                   "]=0)c=*q++;*p=2+*"
                   ";printf(s+62**"
                   ",s);}return(*"\0
                    _
                    H
                    H_
                     e
                     e_
                      l
                      l_
                       l
                       l_
                        o
                        o_
                         ,
                         ,_

                           _
                           w
                           w_
                            o
                            o_
                             r
                             r_
                              l
                              l_
                               d
                               d_
                                !
                                !\n"); }
```
