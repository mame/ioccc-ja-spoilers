---
id: 2005/vince
year: 2005
order: 14
authors: "Vincent_Weaver"
orig_url: "https://www.ioccc.org/2005/vince/vince.c"
hint_url: "https://www.ioccc.org/2005/vince/hint.text"
title: "IOCCC 2005: Most beauteous visuals"
award_ja: "もっとも美しい見た目"
---

## 動作

OpenGLを使ったロゴ入りキューブが回転するデモ。

```
$ gcc -o vince vince.c -lGL -lGLU -lX11

$ ./vince
```

{% include img.html src="2005-vince-1.png" desc="2005 IOCCCと書かれたキューブが回転しているデモ" %}

真ん中で回るキューブに、それに重なるように飛んできて飛んでいくキューブもある。

{% include img.html src="2005-vince-2.png" desc="もうひとつのキューブがまるい軌道を描いて中央のキューブを通り過ぎていく" %}

スペースバーを押すとキューブがさまざまな色に微妙に変わる。

{% include img.html src="2005-vince-3.png" desc="キューブの色が変わる" %}

## 解説

IOCCCにX11を使った作品が増えているが、X11はスタンダードではない、ということで、スタンダードになっているOpenGLで作ったとのこと。
OpenGLは定数名や関数名がとにかく長いので、サイズ制限と戦うのが大変だった。
コード形状はキューブ。

ロゴは、自分のソースコードを開いて、次の関数定義から読み出す。

```
void Y()
{ { { { { { { { { { { { { { { {
                               
  { {     { { {   { { {   { { {
      {   {   {   {   {   {    
  { {     {   {   {   {     { {
  {       {   {   {   {       {
  { { {   { { ;   { } }   } } }
                               
                               
  }   } } }     }     }     }  
  }   }   }   }     }     }    
  }   }   }   }     }     }    
  }   }   }   }     }     }    
  }   } } }     }     }     }  
                               
} } } } } } } } } } } } } } } }
```

`{`と`}`を使って"2005 / IOCCC"と書かれているのがわかる。
IOCCCのサイズ制限のルール上、波カッコと空白が続く文字は0文字扱いなので、コードサイズを稼げる。
同様に`Q()`の定義も必要なデータをエンコードしているのだと思う（詳しく見ていない）。
