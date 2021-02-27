---
id: 1994/schnitzi
year: 1994
order: 6
authors: "Mark_Schnitzius"
orig_url: "https://www.ioccc.org/1994/schnitzi.c"
hint_url: "https://github.com/ioccc-src/winner/blob/main/1994/schnitzi.hint"
title: "IOCCC 1994: Best Layout"
award_ja: "最高のレイアウト"
---

## 動作

標準入力のテキストの転置（縦横を入れ替えた線対称）を出力する。

```
$ cat abc.txt
123
ABC
abc

$ gcc -o schnitzi schnitzi.c

$ ./schnitzi < abc.txt
1Aa
2Bb
3Cc
```

元のソースコードを転置しても、同じ動きをするコードが出てくる（転置後のコードは解説に貼る）。

```
$ ./schnitzi < schnitzi.c > tmp.c

$ gcc -o tmp tmp.c

$ ./tmp < abc.txt
1Aa
2Bb
3Cc
```

## 解説

コードの左上に謎のアスキーアートっぽいものが見えるが、これは転置後にアスキーアートとして意味をなす。
ソースコードを転置して得られるコードは次の通り。
左上のアスキーアートが"obfuscated c code"となっている。

```
#include <stdio.h>                                  
int x,n=0,y=0,    /*                                
nt                 /                                
c      |   /                                        
lr  /\ |\ |- | |                                    
u=  \/ |/ |  |_|                                    
d0                        ]                       p 
e,  /\ /\ /\| |-          =                     p r 
 x   \ |  | | |           f        f       f s  r i 
<,  \/ \/ \/| \/          tw       t       s c  i n 
sy                     i  eh       e       e a  n t 
t=  /\  |    /\        n  li       l       e n  t f 
d0  |- /|    |         t  ll       l  {<   k f  f ( 
i,  \/ \|    \/           (e s     (  fr   ( (  ( " 
o                      tu s( t    usw o; i s "  " \ 
.   /\     | /\     m  [[ tg rv   [th rx=f t %  % n 
h   |  /\ /| |-     ac111 de l)   +di (+'( d c  c " 
>   \/ \/ \| \/     ih000 it{e;t> +il x+ n i+"  " )+
 /                  na000[nstny[yrrne<=)'<xnn,  , ;+
 */                  r        =       0        ;    
                main       (       )   {            
               char        v[                       
                100               ]         ,   s  ;
          int t[100   ]                    ,        
              u[100    ]           ;       u        
                  [                         0       
      ]=ftell(stdin        )            ;           
         while(gets (v    )                 )       
                {t[            r ]=                 
             strlen                 (               
               v);y=                                
                  t  [      r             ]         
                 >y             ?        t [        
                  r         ]    :   y;             
              u[++r     ]   =                       
        ftell(stdin )     ;                        }
              while          (                    n 
                  <              y        )         
            {for(x=      0       ;         x        
            <r;x++) {                         s     
               =' '     ;                           
              if(n<             t        [          
                  x            ]     )    {         
        fseek(stdin   , u       [     x    ]        
                +n,0       )                     ;  
         scanf("%c"    ,                     &      
                      s                         )   
                      ;                            }
       printf("%c",                    s      )     
                                            ;  }    
       printf("\n");                n               
                ++;                }             }  
```

これは元のコードと同じ動きをするが、字面上は同じではない。
これはむしろ完全一致よりレベルが高いことなのですごい。
schnitzi.hintにも、初期版は完全一致だったが、ずらしたほうが面白いと書いてある。
