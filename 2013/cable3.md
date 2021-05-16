---
id: 2013/cable3
year: 2013
order: 3
authors: "Adrian_Cable"
orig_url: "https://www.ioccc.org/2013/cable3/cable3.c"
hint_url: "https://www.ioccc.org/2013/cable3/hint.html"
title: "IOCCC 2013: Largest small system emulator"
award_ja: "小さいシステムの最大のエミュレータ"
linewrap: true
---

## 動作

8086エミュレータ。次のように起動する。

```
$ gcc -fsigned-char -DKB='(kb=read(H(8),r+1190,1))&&H(7)' -o cable3 cable3.c `sdl-config --cflags --libs`

$ stty cbreak raw -echo min 0 ; ./cable3 bios fd.img ; stty cooked echo
FreeDOS kernel - SVN (build 2040 OEM:0xfd) [compiled Apr  7 2012]
Kernel compatibility 7.10 - WATCOMC - FAT32 support

(C) Copyright 1995-2011 Pasquale J. Villani and The FreeDOS Project.
All Rights Reserved. This is free software and comes with ABSOLUTELY NO
WARRANTY; you can redistribute it and/or modify it under the terms of the
GNU General Public License as published by the Free Software Foundation;
either version 2, or (at your option) any later version.
 - InitDiskno hard disks detected

FreeCom version 0.82 pl 3 XMS_Swap [Dec 10 2003 06:49:21]


 type HELP to get support on commands and navigation

A:\>
```

QUITEMUコマンドを使うと終了する。

## 解説

1980年代後半のIBM互換PCのエミュレータ。
次の機能を備えているとのこと。

> - Intel 8086/186 CPU
> - 1MB RAM
> - 8072A 3.5" floppy disk controller (1.44MB/720KB)
> - Fixed disk controller (supports a single hard drive up to 528MB)
> - Hercules graphics card with 720x348 2-color graphics (64KB video RAM), and CGA 80x25 16-color text mode support
> - 8253 programmable interval timer (PIT)
> - 8259 programmable interrupt controller (PIC)
> - 8042 keyboard controller with 83-key XT-style keyboard
> - MC146818 real-time clock
> - PC speaker

MS-DOS 6.22、Lotus 1-2-3 2.4やAutoCAD 2.5、QBASICやTurbo C++など、実アプリが動作する。
いくつかクリーンショットが公開されている。

* [https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_autocad.png](https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_autocad.png)
* [https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_flightsim4.png](https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_flightsim4.png)
* [https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_lotus123.png](https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_lotus123.png)
* [https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_qbasic.png](https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_qbasic.png)
* [https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_simcity.png](https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_simcity.png)
* [https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_win3_on_macosx.png](https://github.com/ioccc-src/winner/blob/main/2013/cable3/screenshot_win3_on_macosx.png)

8086は命令の符号化が複雑かつ不規則で、バグや非公式機能も再現しないと実アプリが動かないので大変だったとのこと。
実アプリについての詳細はhint.textを参照。
エミュレータ系作品の宿命だけれど、ソフトウェアの著作権については自己判断・自己責任で。

サイズ制限が本当に厳しいのでコードサイズはただの四角だが、サイズで少し遊びがある。
全体のサイズは4043バイト＝8086[ニブル](https://ja.wikipedia.org/wiki/%E3%83%8B%E3%83%96%E3%83%AB)。
iocccsize -iでは1977文字と判定される（4.77 MHz 8086 CPUが発表された年とのこと）。
