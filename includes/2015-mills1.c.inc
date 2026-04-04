
                  #define P(a,b,c) a##b##c
                #include/*++**++*/&lt;curses.h&gt;
              int         c,h,            v,x,y,s,                i,b; int
            main            () {            initscr(              ); P(cb,
          rea,                k)()                ;///
        P(n,                  oec,                ho)(
       )/*     */             ;for            (curs_set(0); s=        x=COLS/2
      ; P(    flu,            shi,          np)()){ timeout(y=c=      v=0);///
      P(c,    lea,            r)()          ;for              (P (
      mva,     d,             dstr        )(2,                3+x,
      G) ;                  ; P(        usl,                  eep,    )(U)){//
       P(m,               vad,         dstr                   )( y    &gt;&gt;8,x,//
    &quot;    &quot;); for(i=LINES; /*           */ i                   --&gt;0
  ; mvinsch(i,0,0&gt;(~c|i-h-H             &amp;h-i                  )?&#39; &#39;
:(i-                      h|h-            i+H)            &lt;0?&#39;|&#39;      :&#39;=&#39; ));
if((                       i=( y            +=v=        getch(        )&gt;0?I:v+
  A)&gt;&gt;8)&gt;=LINES||mvinch(i*=   0&lt;i,            x)!=&#39; &#39;||&#39; &#39;
  !=mvinch(i,3+x))break/*&amp;%   &amp;*/;              mvaddstr(y
    &gt;&gt;8,                   x,0&gt;v                      ?F:B        ); i=--s
    /-W;                  P(m,                        vpr,        intw)(0,
     COLS-9,&quot; %u/%u &quot;,(0&lt;i)*                  i,b=b&lt;i?i:
      b); refresh(); if(++                    c==D){ c
                        -=W; h=rand()%(LINES-H-6
                          )+2; } } flash(); }}
