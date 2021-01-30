---
year: 1990
title: "IOCCC 1990の解説"
layout: contest
---
## 全体の印象

プログラムの挙動のおもしろさを目指すものと、難読化の創意工夫を目指すもので二極化してきたように見える。

前者の系統の作品は難読化自体は目新しくなく、短い変数名でインデントをつぶした程度のものが多いが、[[[1990/tbr]]]({{ site.baseurl }}{% link 1990/tbr.md %})はコード形状で遊び始めていて、今後のIOCCCの方向性を示している。
後者の「難読化の創意工夫」の系統の作品は、まだ1つのアイデアで押し通す一点突破ものが多い。

個人的な好みでは、[[[1990/westley]]]({{ site.baseurl }}{% link 1990/westley.md %})の超絶技巧と、[[[1990/theorem]]]({{ site.baseurl }}{% link 1990/theorem.md %})のコード遊びが飛び抜けていると思う。

この回はC89（ANSI C）規格化後初のIOCCCであり、ANSI Cに捧ぐコンテストとなっている。
が、直接的にC89にからめた作品は[[[1990/scjones]]]({{ site.baseurl }}{% link 1990/scjones.md %})だけか。
付属のMakefileでコンパイルする場合、`make`時に`USE=ansi`か`USE=common`をつけないといけなくなっている。
