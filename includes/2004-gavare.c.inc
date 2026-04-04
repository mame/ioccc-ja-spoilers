X=1024; Y=768; A=3;

J=0;K=-10;L=-7;M=1296;N=36;O=255;P=9;_=1&lt;&lt;15;E;S;C;D;F(b){E=&quot;1&quot;&quot;111886:6:??AAF&quot;
&quot;FHHMMOO55557799@@&gt;&gt;&gt;BBBGGIIKK&quot;[b]-64;C=&quot;C@=::C@@==@=:C@=:C@=:C5&quot;&quot;31/513/5131/&quot;
&quot;31/531/53&quot;[b ]-64;S=b&lt;22?9:0;D=2;}I(x,Y,X){Y?(X^=Y,X*X&gt;x?(X^=Y):0,  I (x,Y/2,X
)):(E=X);      }H(x){I(x,    _,0);}p;q(        c,x,y,z,k,l,m,a,          b){F(c
);x-=E*M     ;y-=S*M           ;z-=C*M         ;b=x*       x/M+         y*y/M+z
*z/M-D*D    *M;a=-x              *k/M     -y*l/M-z        *m/M;    p=((b=a*a/M-
b)&gt;=0?(I    (b*M,_      ,0),b    =E,      a+(a&gt;b      ?-b:b)):     -1.0);}Z;W;o
(c,x,y,     z,k,l,    m,a){Z=!    c?      -1:Z;c     &lt;44?(q(c,x         ,y,z,k,
l,m,0,0     ),(p&gt;      0&amp;&amp;c!=     a&amp;&amp;        (p&lt;W         ||Z&lt;0)          )?(W=
p,Z=c):     0,o(c+         1,    x,y,z,        k,l,          m,a)):0     ;}Q;T;
U;u;v;w    ;n(e,f,g,            h,i,j,d,a,    b,V){o(0      ,e,f,g,h,i,j,a);d&gt;0
&amp;&amp;Z&gt;=0? (e+=h*W/M,f+=i*W/M,g+=j*W/M,F(Z),u=e-E*M,v=f-S*M,w=g-C*M,b=(-2*u-2*v+w)
/3,H(u*u+v*v+w*w),b/=D,b*=b,b*=200,b/=(M*M),V=Z,E!=0?(u=-u*M/E,v=-v*M/E,w=-w*M/
E):0,E=(h*u+i*v+j*w)/M,h-=u*E/(M/2),i-=v*E/(M/2),j-=w*E/(M/2),n(e,f,g,h,i,j,d-1
,Z,0,0),Q/=2,T/=2,       U/=2,V=V&lt;22?7:  (V&lt;30?1:(V&lt;38?2:(V&lt;44?4:(V==44?6:3))))
,Q+=V&amp;1?b:0,T                +=V&amp;2?b        :0,U+=V    &amp;4?b:0)     :(d==P?(g+=2
,j=g&gt;0?g/8:g/     20):0,j    &gt;0?(U=     j    *j/M,Q      =255-    250*U/M,T=255
-150*U/M,U=255    -100    *U/M):(U    =j*j     /M,U&lt;M           /5?(Q=255-210*U
/M,T=255-435*U           /M,U=255    -720*      U/M):(U       -=M/5,Q=213-110*U
/M,T=168-113*U    /       M,U=111               -85*U/M)      ),d!=P?(Q/=2,T/=2
,U/=2):0);Q=Q&lt;    0?0:      Q&gt;O?     O:          Q;T=T&lt;0?    0:T&gt;O?O:T;U=U&lt;0?0:
U&gt;O?O:U;}R;G;B    ;t(x,y     ,a,    b){n(M*J+M    *40*(A*x   +a)/X/A-M*20,M*K,M
*L-M*30*(A*y+b)/Y/A+M*15,0,M,0,P,  -1,0,0);R+=Q    ;G+=T;B   +=U;++a&lt;A?t(x,y,a,
b):(++b&lt;A?t(x,y,0,b):0);}r(x,y){R=G=B=0;t(x,y,0,0);x&lt;X?(printf(&quot;%c%c%c&quot;,R/A/A,G
/A/A,B/A/A),r(x+1,y)):0;}s(y){r(0,--y?s(y),y:y);}main(){printf(&quot;P6\n%i %i\n255&quot;
&quot;\n&quot;,X,Y);s(Y);}