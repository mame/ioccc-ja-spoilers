---
type: entry
id: 2011/toledo
year: 2011
order: 11
authors: "Oscar_Toledo_G."
orig_url: "https://www.ioccc.org/2011/toledo/toledo.c"
hint_url: "https://www.ioccc.org/2011/toledo/index.html"
title: "IOCCC 2011: Best non-chess game"
award_ja: "最高のチェスじゃないゲーム"
---

## 動作

3D戦車ゲーム。

```text {class="wrap"}
$ gcc -DA=XK_Up:XK_w -DB=XK_Left:XK_a -DC=XK_Right:XK_d -DD=XK_Down:XK_s -DE=XK_BackSpace:XK_Tab "-DQ=XFillRectangle(W,X,Y," -o toledo toledo.c -lX11 -lm

$ ./toledo
```

{{< img src="2011-toledo-1.png" desc="ゲーム開始直後の様子" >}}

プレイヤー1（赤の戦車）は<kbd>w</kbd><kbd>a</kbd><kbd>s</kbd><kbd>d</kbd>で前左後右に移動、<kbd>Tab</kbd>で砲撃。
プレイヤー2（緑の戦車）は矢印で移動、<kbd>BackSpace</kbd>で砲撃。
水色の戦車は動かない飾り。破壊すると加点がもらえる。

2～3発程度を当てると破壊できる。赤い戦車が緑の戦車を狙って砲撃している様子。

{{< img src="2011-toledo-2.png" desc="赤い戦車が砲撃してきた様子（赤い戦車の右横にあるオレンジの小さい四角が砲弾）" >}}

戦車が破壊されたら画面が青くなる。

{{< img src="2011-toledo-3.png" desc="撃破されたら画面が青くなる" >}}

発射したら画面が揺れたり、戦車が回るタイトル画面があったり、凝っている。

{{< img src="2011-toledo-4.png" desc="タイトル画面" >}}

グローバル変数の`M`と`N`を変えると画面サイズが変えられる。

## 解説

コード形状は箱？
IOCCCのサイズルールを回避するために、各種空白と波括弧だけの文字列リテラルがある。
山、水平線、スコアとステータスバー、爆発と作り込んであるので、サイズ制限が大変だったとのこと。

賞名は、同作者が前々回のIOCCC 2005、前回の2006ともにチェスAIで入賞していたことを踏まえたもの（[[[2005/toledo]]]({{< relref "/2005/toledo/" >}})、[[[2006/toledo3]]]({{< relref "/2006/toledo3/" >}})）。
