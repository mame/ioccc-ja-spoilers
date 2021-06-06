---
id: 2018/endoh1
year: 2018
order: 7
authors: "Yusuke_Endoh"
orig_url: "https://www.ioccc.org/2018/endoh1/prog.c"
hint_url: "https://www.ioccc.org/2018/endoh1/hint.html"
title: "IOCCC 2018: Best tool to reveal holes"
award_ja: "穴を明らかにする最高のツール"
---

## 動作

テキストをアニメGIFにするツール。
そのうち全体がブラックアウトするが、穴（線で囲まれている部分）になっている部分のみ白く残る。

サンプルのテキスト。

```
$ cat invisible.txt
TELUGU INEFFECTIVENESS SHEETS CYSTIC SHIFTINESS FLESHIEST UNSUCCESSFULLY WEIGHTLESSNESS FLESH HUFFIEST
LIFE FLOORBOARD CHESSBOARD APPROACHES CARDBOARD TINY POPPA PAROXYSMS ARBOR BARBARIC JARROD DOODAD SLIT
WUSS BARODA PROBATE CORPORA PAPOOSE WOODARD PARADE SEABOARD BROAD SHIPBOARD PARADIGM ABOARD BOARD NIGH
LIMY ORDAIN MBABANE UPDRAFTS SLUTS FERRARI TERRORS INROAD ENTRAPPING PROPHETESSES LIKEN CAPRA NEGLECTS
INESCAPABLY HINES SKEDADDLES FUNNY GEARBOX JELLYFISH PROPS STARDOM TEAROOM ENTHUSING KICKAPOO JUSTNESS
GUNS PRADO BRAD MICK DROOP ADORABLE CARBOYS MCKINNEY PRADA ARDOR SIGNBOARD BARBRA LEVITT BORON WISTFUL
NIFTY ERROR QADDAFI SAPPORO RADAR STEPDAD EYEFULS CLIPBOARD PARAFFIN ABROAD PROPONENT ESTRADA IMMUNITY
INSENSITIVE VAPOR GUMDROP MIXTEC HETERODOX SEEKING STRADDLES BARON THROBBING WILTING SCHIAPARELLI TUMS
UNMEMORABLE NARROWLY ARABS SECS KLEE POOP TEMPORAL FEDORA STUBBORN SCRAPPIEST SEVENTHS UNBARRING TYING
ZINC BAOBAB BROADEST DOBRO BARROOM SCABBARD ODDBALLS BOOBING PROPELS BROOD RAPPROCHEMENT ADORNS SWEETS
GENUS CORROBORATES TEARDROP PARBOILING BOARDROOM INEXORABLY HADDOCK CORDOBA PADDOCKS VIVIPAROUS HUGEST
TEXT SLUM THICKLY FUZZIEST JUNKETING SINGEING INSUFFICIENTLY CIVET INSENSITIVITY LESSENS SINE NICETIES

$ gcc -o prog prog.c

$ ./prog < invisible.txt > invisible.gif
```

{% include img.html src="2018-endoh1-1.gif" desc="invisible.gif" %}

アニメーションするまで5秒くらい待つこと。

{% include youtube.html src="-Tq_npwqnc8" desc="作者によるデモ動画" %}

## 解説

コードは、"2018"というアスキーアートの上に、"IOCCC"というメッセージが隠されるものになっている。
"IOCCC"の位置には、極力フォントに穴がある文字（`#$%&04689@ABDOPQRabdegopq`）を置き、それ以外の位置ではなるべくこれらの文字を使わないようにする、という制約で書かれている。

他のテキストも付属している。
golem.txtは[ゴーレム](https://ja.wikipedia.org/wiki/%E3%82%B4%E3%83%BC%E3%83%AC%E3%83%A0)を壊すときのネタ。
ゴーレムの体にはどこかに"emeth/אמת"（ヘブライ語で真理）という文字があり、eを消して"meth/מת"（死）とすれば壊せる、というもの。

```
$ ./prog < golem.txt > golem.gif
```

{% include img.html src="2018-endoh1-2.gif" desc="golem.gif" %}

smily.txtは笑顔のマークに怒りの顔が隠されている。

```
$ ./prog < smily.txt > smily.gif
```

{% include img.html src="2018-endoh1-3.gif" desc="smily.gif" %}

---

プログラム本体にもメッセージが隠されている。

```
$ ./prog < prog.c > prog.gif
```

{% include img.html src="2018-endoh1-4.gif" desc="prog.gif" %}
