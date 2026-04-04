                               #include/**/&lt;time.h&gt;
                               #include &lt;ncurses.h&gt;
                               # include &lt;stdlib.h&gt;
             /**               */#define O()for(y-=               !!\
           y;y&lt;H&amp;&amp;           /*...Semi-Automatic.*/y&lt;           p/W+2;\
         y++)for(x=p%   W,x-=!!/*..MineSweeper...*/x;x&lt;W&amp;&amp;   x&lt;p%W+2;x++)
       #define _(x,y)COLOR_##x,COLOR_##y /*  click / (R)estart / (Q)uit  */
     #define Y(n)attrset(COLOR_PAIR(n)),mvprintw(/* IOCCC2019 or IOCCC2020 */
   typedef int I;I*M,W,H,S,C,E,X,T,c,p,q,i,j,k;char G[]=&quot; x&quot;,U[256];I F(I p){ I
      r=0,x,y=p/W,q;O()q=y*W+x,r+=M[q]^=p-q?(M[q]&amp;16)&lt;&lt;8:0;return r;}I K(I p
         ,I f,I g){ I x=(g+     f/256)%16-(f+g/256)%16,y=p/W,c=0,n=g/4096
          ,m=x==n?0:x==g           /16%16-f/16%16-n?256:-1; if(m+1)O()if
         ((4368&amp;M[n=y*W             +x])==4112){ M[c=1,n]=(M[n]&amp;~16)|m; }
        return c;}void              D(){I p,k,o=0,n=C,m=0,q=0;if(LINES-1&lt;H
       ||COLS/2&lt;W)clear             (),Y(4)LINES/2,COLS/2-16,&quot;Make the ter\
minal bigger!&quot;);else{for           (p=0;p&lt;S;o+=k==3,Y(k)p/W+1,p%W*2,G),p++)G[1]=&quot;&quot;
&quot;_*!..12345678&quot;[k=E?256&amp;M[p     ]?n--,2:E-2||M[p]%2&lt;1?M[p]&amp;16?q=p,m++,3:4+F(p)%16:
1:3];k=T+time(0);T=o||T&gt;=0||E-1?T:k;k=T&lt;0?k:T;Y(7)0,0,&quot;%03d%*s%03d&quot;,n&gt;999?999:n,W*
2-6,&quot;&quot;,k&gt;999?999:k);Y(9)0,W-1,E&gt;1?&quot;X-(&quot;:E-1||o?&quot;:-)&quot;:&quot;8-)&quot;);M[q]|=256*(n==m&amp;&amp;n); }
refresh();}short B[]={_(RED,BLACK),_(WHITE,BLUE),_(GREEN,RED),_(MAGENTA,YELLOW),_(
CYAN,RED)};I main(I A,char**V){MEVENT e;FILE*f;srand(time(0));initscr();for(start\
_color();X&lt;12;X++){init_pair(X+1,B[X&amp;&amp;X&lt;10?X-1:2],B[X?X&lt;3?2:1:0]);}noecho();cbreak
();timeout(9);curs_set(0);keypad(stdscr,TRUE);for(mousemask(BUTTON1_CLICKED|BUTTO\
N1_RELEASED,0);;){S=A&lt;2?f=0,W=COLS/2,H=LINES-1,C=W*H/5,0:fscanf(f=fopen(V[A-1],&quot;r&quot;
       ),&quot;%d %d %d&quot;,&amp;W,&amp;H,&amp;C)&gt;3; ;S+=W*H;M=realloc(M,S*sizeof(I)*2);for(i=0
        ;i&lt;S;i++)!f?M[i]=i,i&amp;&amp;(k=M[j=rand()%i],M[j]=M[i],M[i]=k):fscanf(f,
         &quot;%d&quot;,M+i);if(f)fclose(f);T=E=X=0;for(clear();D(),c=getch(),c-&#39;r&#39;
          &amp;&amp;(c-KEY_RESIZE||E);){ if(c==&#39;q&#39;){ return(endwin(),0); }if(c==
        KEY_MOUSE&amp;&amp;getmouse(&amp;e)==OK&amp;&amp;e.x/2&lt;W&amp;&amp;e.y&lt;=H){if(!e.y&amp;&amp;(W-2&lt;e.x&amp;&amp;
      e.x&lt;W+2)){break;}p=e.x/2+e.y*W-W;if(p&gt;=0){if(!E){for(i=0;i&lt;S;i++)M[S+M
   [i]]=i,M[i]=16+(M[i]&lt;C);C-=M[p]&amp;1;M[p]=16;E=1;T=-time(0);}if(E&lt;2)M[p]&amp;=(M[p]
     &amp;257)==1?T+=time(0),E=2,273:257;}}for(p=0;p&lt;S&amp;&amp;E==1;M[p++]&amp;=273){}for(i=
       (X+S-1)%S;E==1&amp;&amp;i!=X;X=(X+1)%S){if(!(M[p=M[X+S]]&amp;272)){if(K(p,c=F(p)
         ,0)){goto N;}   for(k=p/W-2,k=k&lt;0?0:k;k&lt;p/W+3&amp;&amp;k   &lt;H;k++)for(j=
           p%W-2,j          =j&lt;0?0:j;j&lt;W&amp;&amp;j&lt;p%W+3;)if           (!(M[q=
             k*W               +j++]&amp;272)){ if(K(p,               c,F
                               (q))){ goto N; }F(q)
                               ; }F(p); }}N:; } } }
                               /*(c)Yusukse Endoh*/