---
id: 2018/ferguson
year: 2018
order: 9
authors: "Cody_Ferguson"
orig_url: "https://www.ioccc.org/2018/ferguson/prog.c"
hint_url: "https://www.ioccc.org/2018/ferguson/hint.html"
title: "IOCCC 2018: Best use of weasel words"
award_ja: "イタチの言葉の最高の使い方"
---

## 動作

[イタチプログラム](https://en.wikipedia.org/wiki/Weasel_program)のプログラム。

"METHINKS IT IS LIKE A WEASEL"という文字列になるまで突然変異を繰り返す。

```
$ gcc -DQ='typedef' -D'g(o)'='goto o;' -D'w(x)'="x:" -D'H(main)'='r(main)' -o prog prog.c

$ ./prog
target 'METHINKS IT IS LIKE A WEASEL'
mutation rate 1
Generation    0 Offspring  1: |N03B7!?D0]*^#{8|SGYV;FA*V[|
Generation    0 Offspring  2:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X
Generation    0 Offspring  3: `[5C7:#G2^Z]VF DS](}QV([8),
Generation    0 Offspring  4: 3-XY%(4A[7K(1@LM",U5:`481B.O
Generation    0 Offspring  5: /$0(1% 7Z_=0]<=T>M9R\)%}P;6~
Generation    0 Offspring  6: BK/4/E%F+N`#H|3@"5,R ,@@}F=N
Generation    0 Offspring  7: F8.KI%}[K$9YR_@]\6{A1S,]|/5{
Generation    0 Offspring  8: X6*{T!G5:>VRT*'$P*|'FA,[,!S*
Generation    0 Offspring  9: 0NQN"AJWC)R*]DCL1MQ~Z.R}R{9{
Generation    0 Offspring 10: |'Q-8 ^=B%XHZEURL07{CNC`_X_,
Generation    0 Offspring 11: T3S1$#:?# @>N0PD9$.#_+G=\N66
Generation    0 Offspring 12: A[H.U_>9|-=HX_QB*~!)K/-FA7G`
Generation    0 Offspring 13: #C2E7@6R|A&_Q'%E$7"Z{K!H]YQ{
Generation    0 Offspring 14: ,0]ZVU|S-3#+8TP:_6,}SY80? =`
Generation    0 Offspring 15: Y'\K 4AV:=>55S&SC9;;V-}:L|7:
Generation    0 Offspring 16: |X"6|A EY$_`<"[ 5~3[9T[*G;1+
Generation    0 Offspring 17: 7/]_<_0K~0(X_<SHOJH#)_AH.`5X
Generation    0 Offspring 18: 5-I2BB,'~B5}6D6[)>=?2"BADFMU
Generation    0 Offspring 19: AH(9X4Q]YC#9I8||B48/"ZQ4?V8F
Generation    0 Offspring 20: 4K^9,$XJ}>C8K&W,:TTJ%(?PH("J
Generation    0 Offspring 21: D!(=,$Z=P.LN6'$G0=W|VF'?1I(\
Generation    0 Offspring 22: 4UA[VL2I0R"}F.-_8\B.3\,:;6F2
Generation    0 Offspring 23: FQ)]B.4[@,?T{<2C3E 2;<&3{5 |
Generation    0 Offspring 24: 2F/[[=3`OM6S\9B9AWB7`B/`H9.:
Generation    0 Offspring 25: T.$L73BX593"$PU{:Z5(-ZES_XN<
Generation    1 Offspring  1:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring  2:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring  3:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring  4:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring  5:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring  6:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring  7:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring  8:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring  9:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 10:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 11:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 12:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 13:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT{*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 14:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 15:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 16:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 17:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 18:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 19:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 20:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 21:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 22:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 23:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 24:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    1 Offspring 25:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"'[X (mutation)
**
Generation    2 Offspring  1:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring  2:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring  3:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring  4:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJC6"';X (mutation)
Generation    2 Offspring  5:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring  6:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring  7:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring  8:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring  9:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 10:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 11:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 12:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[O|]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 13:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 14:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*G6!6"';X (mutation)
Generation    2 Offspring 15:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 16:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 17:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 18:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 19:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(62LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 20:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 21:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 22:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*#[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 23:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 24:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
Generation    2 Offspring 25:  DT|*K[OH]Q:(J2LMY"*GJ!6"';X ->  DT|*K[OH]Q:(J2LMY"*GJ!6"';X (mutation)
**
...
**
Generation 1099 Offspring  1: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring  2: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring  3: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring  4: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring  5: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring  6: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring  7: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring  8: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring  9: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LYK: A WEASEL (mutation)
Generation 1099 Offspring 10: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 11: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 12: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 13: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 14: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 15: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WE]SEL (mutation)
Generation 1099 Offspring 16: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 17: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 18: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 19: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 20: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 21: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 22: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 23: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 24: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1099 Offspring 25: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
**
Generation 1100 Offspring  1: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring  2: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring  3: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring  4: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring  5: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring  6: METHINKS IT IS LIK: A WEASEL -> METHINKS IT ISSLIK: A WEASEL (mutation)
Generation 1100 Offspring  7: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring  8: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring  9: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 10: METHINKS IT IS LIK: A WEASEL -> METHINKS I) IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 11: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 12: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEUSEL (mutation)
Generation 1100 Offspring 13: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 14: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 15: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS :IK: A WEASEL (mutation)
Generation 1100 Offspring 16: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIKE A WEASEL (mutation)
Generation 1100 Offspring 17: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 18: METHINKS IT IS LIK: A WEASEL -> METJINKS IT IS LUK: A WEASEL (mutation)
Generation 1100 Offspring 19: METHINKS IT IS LIK: A WEASEL -> METHINLS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 20: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 21: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 22: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 23: METHINKS IT IS LIK: A WEASEL -> YETHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 24: METHINKS IT IS LIK: A WEASEL -> METHINKS IT IS LIK: A WEASEL (mutation)
Generation 1100 Offspring 25: METHINKS IT IS LIK: A WEASEL -> METH>NKS IT IS LIK: A WEASEL (mutation)
**
Generation 1100 Offspring 16: METHINKS IT IS LIKE A WEASEL
```

ターゲットの文字列は指定できる。

```
$ ./prog "Hello, world!"
target 'Hello, world!'
mutation rate 1
Generation    0 Offspring  1: &Q>S^24)TN41
Generation    0 Offspring  2: <VB:|W29/0|H"
Generation    0 Offspring  3: 9:UY!_EQ-=!G*
Generation    0 Offspring  4: 5-:,XT 2\}PT|
Generation    0 Offspring  5: E"_&$4XYS;30&
...
Generation 1159 Offspring 21: HELLOM WORLD! -> HELLOM WORLD! (mutation)
Generation 1159 Offspring 22: HELLOM WORLD! -> HELLOM WORLD! (mutation)
Generation 1159 Offspring 23: HELLOM WORLD! -> HELLOM WORLD! (mutation)
Generation 1159 Offspring 24: HELLOM WORLD! -> HELLOM WORLD! (mutation)
Generation 1159 Offspring 25: HELLOM WORLD! -> HELLOM WORLD! (mutation)
**
Generation 1159 Offspring 15: HELLO, WORLD!
```

-mオプションを渡すと、完全ランダム探索になる。

```
./prog -m
target 'METHINKS IT IS LIKE A WEASEL'
mutation rate 1
monkey at typewriter
Generation    0 Offspring  1: NLS{Y1RM)9URM\CN=1PPG2- C, }
Generation    0 Offspring  2: E:4V3N2R|"7Q"R!O):5K8#^}`&}?
Generation    0 Offspring  3: `F;#M5YFI'0&)-;VE=@Q>X_:=8M|
Generation    0 Offspring  4: :+9#T9%~4CE`-8L~K$V(<.?+M7]%
Generation    0 Offspring  5: UE#@S"C<")${/)]BG:<UT[`YO7J4
Generation    0 Offspring  6: 4B!PJ$(5O. Q;$MPX>U|XZRG0-}}
Generation    0 Offspring  7: +I2>N3X\}FWM7X{X?)%0]=-P1FZG
Generation    0 Offspring  8: VX>~~=>.4C>2M_E"R$;U.%#QE[~9
Generation    0 Offspring  9: ~YFVLO5,>#@"'H`WB@9X>ZH{C+M#
Generation    0 Offspring 10: LL?L#! O05^}~{ QD`%J~B :_(K=
Generation    0 Offspring 11: 60$HBD,E>,W8(16R-{=5]D|?!|&D
Generation    0 Offspring 12: PT|$"!L:>?,X.!+92'Q&O'AGN!I0
Generation    0 Offspring 13: FR7.A_]%`:ULF~?X .W^}D"MN%W`
Generation    0 Offspring 14: :8V-P(A)M6ZH@JWJIZ;*%,%L3P2
Generation    0 Offspring 15: 6:C#%\0VJTF/P};S)-5U<5ES(+7A
Generation    0 Offspring 16: ^O$Z7']#!(9KB|@*D^DP&\#VXID}
Generation    0 Offspring 17: W^"1)O&&Y")=*(LP&>@-!~`R?}%/
Generation    0 Offspring 18: 'JX|%;YZ:|FD~2|UAI#*Q%;2%`J>
Generation    0 Offspring 19: ^P|L]5)~U 9@|}~E0D]4PCD I{2/
Generation    0 Offspring 20: \C|6+_H:/TNK4<N1KM9BT\Y?|6?G
Generation    0 Offspring 21: ]595[71$\\SR+95E<!9P.9* 0J"Y
Generation    0 Offspring 22: FB8=Z76PTM4,:%{]B1;G];[QYKQO
Generation    0 Offspring 23: -SCVXAXM\)`+;0;:66 =- I>;?9.
Generation    0 Offspring 24: <>D3?"OZ:BC}O!):1*V-FVOWW0B,
Generation    0 Offspring 25: 2B$7J(0L*}B\@HZ'IJYAWKQ`~}2V
Generation    1 Offspring  1: NLS{Y1RM)9URM\CN=1PPG2- C, } -> 8&-<7(WY@&}?_(02&FE4{0>0..*} (monkey typing)
Generation    1 Offspring  2: E:4V3N2R|"7Q"R!O):5K8#^}`&}? -> /GNW^3G{39BJ/>S&XPS?=-I: 569 (monkey typing)
Generation    1 Offspring  3: `F;#M5YFI'0&)-;VE=@Q>X_:=8M| ->  M+AL<ZI@[JFL/"+6C,(T.`?ZJ!W (monkey typing)
Generation    1 Offspring  4: :+9#T9%~4CE`-8L~K$V(<.?+M7]% -> ,-^??YED8@6\}YW,0[K"1S!1V]Z` (monkey typing)
Generation    1 Offspring  5: UE#@S"C<")${/)]BG:<UT[`YO7J4 -> 8|}WVI}$%/,:]R_PHN9}P4V:5G<( (monkey typing)
...
```

-rで変異確率を設定できたり、-qで途中出力を省略したりもできる。
詳しくはweasel.manを参照のこと。

```
$ ./prog -qr5
quiet output
target 'METHINKS IT IS LIKE A WEASEL'
mutation rate 5
Generation  733 Offspring 24: METHINKS IT IS LIKE A WEASEL
```

## 解説

[イタチプログラム](https://en.wikipedia.org/wiki/Weasel_program)とは、[リチャード・ドーキンス](https://ja.wikipedia.org/wiki/%E3%83%AA%E3%83%81%E3%83%A3%E3%83%BC%E3%83%89%E3%83%BB%E3%83%89%E3%83%BC%E3%82%AD%E3%83%B3%E3%82%B9)が著書[『盲目の時計職人』](https://ja.wikipedia.org/wiki/%E7%9B%B2%E7%9B%AE%E3%81%AE%E6%99%82%E8%A8%88%E8%81%B7%E4%BA%BA)で提唱した思考実験らしい。
背景には、「猿がタイプライターを無限に叩き続ければ、いつか必ず任意のテキスト（たとえばシェイクスピアの作品でも）を打ち出す」という[無限の猿定理](https://ja.wikipedia.org/wiki/%E7%84%A1%E9%99%90%E3%81%AE%E7%8C%BF%E5%AE%9A%E7%90%86)がある。
シェイクスピアの全文を出すには、当然ものすごく長い時間がかかる。
しかし、たとえば"Methinks it is like a weasel"という短い一文をターゲットとし、キーボードを大文字アルファベット26文字とスペースだけの制限されたものにすれば、もっと短い時間でできるのでは？というのがドーキンスのイタチプログラムらしい。
ドーキンスは、単純にランダム探索するのではなく、突然変異の中からなるべくターゲットに近い文字列を残すことを繰り返すことで、現実的な時間でたどり着けることを示したとのこと（問題の本は[自然選択](https://ja.wikipedia.org/wiki/%E8%87%AA%E7%84%B6%E9%81%B8%E6%8A%9E%E8%AA%AC)の本らしい）。

hint.textは実に長大で、1000行以上ある。
流し見しかできていない。
hint.textの目次を貼っておく。

0. まえがき
1. これはなにか
2. どのように動くか
3. ヒント（キーボード、オプション、ネタバレ、実行例）
4. 難読化（技術、美）
5. ビルド方法（定数SとN、コンパイル、ポータビリティ、インストール）
6. むすび
7. 勝利のコメント、感謝、献辞、リンクなど

コードは、審査員が提供しているguidelines.txtの中の戯言を細かく拾っている模様。
「ペットの魚のEric」を受けて、`SIZE_MAX - 1`までにターゲットに到達できなかった場合のエラーメッセージを"Too many attempts, blaming the monkey Eric even if he isn't typing or doesn't exist. Bye."にしてみるとか。
「2305567963945518424753102147331756070の何が特別か？」というクイズ（答え：2から97までの素数をかけあわせたもの）を受けて、`-DN=97`というコンパイルオプションを与えたらターゲット文字列がこれになるとか（作者は97の[素数階乗素数](https://ja.wikipedia.org/wiki/%E7%B4%A0%E6%95%B0%E9%9A%8E%E4%B9%97%E7%B4%A0%E6%95%B0)と言っているが、これは誤解のような気がする）。
コードを潰しただけのもの（a compact blob of octets）は好まない、という審査員のヒントに対しては、`/*NO*/` `/*BLOB*/` `/*CODING*/`や`/*THIS*/` `/*IS*/` `/*NOT*/` `/*A*/` `/*COMPACT*/` `/*BLOB*/` `/*OF*/` `/*OCTETS*/`というコメントをバラバラに含めておいたとのこと。

キーの種類を減らしたバージョンも配布されている（prog-simple.c）。

manに「イースターエッグが2つある」とあるが、`-m`オプションと`-DN=97`のことだと思う。

なお、無限の猿定理自体は[[[1989/ovdluhe]]]({{ site.baseurl }}{% link 1989/ovdluhe.md %})で前例がある。
