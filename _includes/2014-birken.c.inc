/**??/
/
#include&lt;netdb.h&gt;
#include&lt;stdio.h&gt;
#include&lt;sys/time.h&gt;
#define NCC 1701
#define STARDATE 500000
#define k 16309

                      int C,p,t,J,a,m,e,s,T,K,i,r[k],_[k][2],c[k][2],f=NCC;
                    fd_set O,d,o;char g[8][k],*h,j[]=&quot;0\1&amp;me\1&amp;t&amp;e\1TFTTJPO&gt;&quot;
                 &quot;\1&amp;t\\_&lt;\16\v^\1&amp;+\\_;^&amp;o;&amp;e\1TFU.DPPLJF;\1iuuq;00&amp;92:2\\_0^&amp;&quot;
               &quot;o\1&amp;tDppljf;!tfttjpo&gt;&amp;t\16\v\16\v\1HFU!&amp;t!IUUQ02/1\16\vIptu;!&quot;&quot;&quot;
            &quot;&amp;t\16\v\1IUUQ02/1!311!PL\16\vDpoufou.uzqf;!ufyu0iunm\16\vFyqjsft;!1&quot;&quot;&quot;
          &quot;\16\vTfu.Dppljf;!tfttjpo&gt;&amp;t\16\vDpoufou.Mfohui;!&amp;me\16\v\16\v&amp;t\1=iunm?=c&quot;                                 &quot;pez!chdpmps&gt;#cmbdl&quot;
       &quot;#?=ejw!tuzmf&gt;(qptjujpo;bctpmvuf&lt;upq;61&amp;&amp;&lt;mfgu;61&amp;&amp;&lt;usbotgpsn;usbotmbufY).61&amp;&amp;*u&quot;                        &quot;sbotmbufZ).61&amp;&amp;*&lt;(?=gpou!dpm&quot;
     &quot;ps&gt;#xijuf#?=qsf?&amp;t=0qsf?=0gpou?=0ejw?=0cpez?=0iunm?\1T`K!`.`[!G!G`\v]C`)K&gt;0`&gt;`0!E`/&quot;                  &quot;D.(D.aD./E`D!C`p`K!F`0F`}\vM!]`!]E!&quot;
   &quot;]E./J`/E.0C!G&gt;I`0L.0\vO!]!]D!0C!0E!a.`.(K!)E`0I!]G`E!}\vK!C`-C.a/a.(//(.`[!N!]C!+!]\vJ!0E`K!}}[!K!C`0E`0C`\vO!aC./E`-.([!K!|K`|&quot;;struct sockad\
dr_in l;struct timeval n,q;struct hostent*u;long w;void x(int y){close(y);FD_CLR(y,&amp;O);if(y&gt;=m)while(--m)if(FD_ISSET(m,&amp;O))break;}vo\
id z(char*A,char*B){char*D,*E=A,*F=A;for(0[0[g]]=0;*E;E++)if(*E==10){if(E-F==(*(E-1)-13?1:2))break;*E=0;if(!strncmp(F,B,strlen(B))&amp;&amp;(D=strstr(F,j+\
11))){sscanf(D+8,j+20,0[g]);break;}F=E+1;}else*E=toupper(*E);}int main(int G,char**H){h=j;while(*h)(*h)--,h++;h=j+414;do{t=*h++;e=1;if(t&gt;=65&amp;&amp;t&lt;=90)e
=t-64,t=*h++;while(e--)6[g][i++]=t;}while(t);sprintf(7[g],j+229,6[g]);l.sin_family=2;if(G&gt;1){sscanf(1[H],j+53,4[g],&amp;K);sprintf(2[g],j+97,*(1[H]+K)?1[
H]+K:j,4[g]);sscanf(4[g],j+29,&amp;i,&amp;f);i[4[g]]=0;u=gethostbyname(4[g]);memcpy(&amp;l.sin_addr.s_addr,0[u-&gt;h_addr_list],u-&gt;h_length);l.sin_port=htons(f);\
for(;;close(G))if(!connect(G=socket(2,1,0),&amp;l,sizeof l))for(;;){strcpy(1[g],0[g]);s=sprintf(5[g],j+72,2[g],0[g]);if(write(G,5[g],s)&lt;0)break;gett\
imeofday(&amp;n,0);0[3[g]]=0;e=read(G,3[g],k);if(e&lt;0)break;else if(e&amp;&amp;*3[g]==72){gettimeofday(&amp;q,0);3[g][k-1]=0;z(3[g],j+41);if(0[1[g]])if(!strnc\
mp(1[g],0[g],strlen(1[g]))){t=0;if((q.tv_sec-n.tv_sec)*1000000+q.tv_usec-n.
tv_usec&lt;STARDATE-1000){t=p&lt;15?1:16;p+=t;C+=t;}else p=p&lt;15?15:255;if(p==2\
55){putchar(C);fflush(stdout);C=p=0;}}else{T=1;goto l;}}}}else{for(f=0;
f&lt;k;f++){if((i=fgetc(stdin))&lt;0)break;f[r]=i;}for(i=0;i&lt;k;i++){0[i[_]]
=1[i[_]]=-1;0[i[c]]=1[i[c]]=0;}gettimeofday(&amp;n,0);p=sprintf(5[g],j+2
,n.tv_sec);n.tv_sec=0;n.tv_usec=STARDATE;FD_ZERO(&amp;d);FD_ZERO(&amp;O);F\
D_ZERO(&amp;o);l.sin_addr.s_addr=0;l.sin_port=htons(NCC);bind(G=sock\
et(2,1,0),&amp;l,sizeof l);listen(G,10);FD_SET(m=G,&amp;O);for(i=1,t=0;;
){d=O;C=select(m+1,&amp;d,0,0,0);if(C&lt;=0){if(!i&amp;&amp;t)x(t);goto l;}fo\
r(J=t;C&amp;&amp;J&lt;=m;J++)if(FD_ISSET(J,&amp;d)){C--;if(J==G){t=accept(G,
0,0);FD_SET(t,&amp;O);FD_CLR(t,&amp;d);FD_SET(t,&amp;o);if(t&gt;m)m=t;t=0;
}else if(!i||FD_ISSET(J,&amp;o)){e=read(J,2[g],k);K=0;if(e&gt;0){
2[g][k-1]=0;if(*2[g]==71){a=0;strcpy(1[g],0[g]);z(2[g],j+
45);if(!strncmp(0[g],5[g],strlen(5[g]))&amp;&amp;!strncmp(1[g],
0[g],strlen(1[g]))){K=atoi(0[g]+p);}if(K){if(0[K[_]]&lt;f
){if(a=(1[K[_]]&lt;15?1[K[_]]:1[K[_]]&gt;&gt;4)&gt;=(1[K[_]]&lt;15?
0[K[_]][r]&amp;15:0[K[_]][r]&gt;&gt;4))1[K[_]]=1[K[_]]&lt;15?1\
5:255;else 1[K[_]]+=1[K[_]]&lt;16?1:16;if(_[K][1]==\
255){0[K[_]]++;1[K[_]]=0;}}else{write(1[K[c]],_[
K],sizeof(_[K]));close(1[K[c]]);K=0;}}else fo\
r(s=1;s&lt;k;s++)if(0[s[_]]==-1){0[s[_]]=1[s[_]]
=0;K=s;break;}if(K)sprintf(0[g],j+6,5[g],K)
;else 0[0[g]]=0;w=sprintf(3[g],j+125,0[g],
strlen(7[g]),7[g]);if(i){pipe(c[K]);if(!
(i=fork())){close(0[K[c]]);FD_ZERO(&amp;O);
FD_SET(t=m=J,&amp;O);}}if(i&lt;0){T=1;goto l;
}if(i){close(1[K[c]]);FD_SET(0[K[c]]
,&amp;O);if(0[K[c]]&gt;m)m=0[K[c]];x(J);\
break;}else{if(a){n.tv_sec=0;n.t\
v_usec=STARDATE;select(0,0,0,0,&amp;
n);}write(J,3[g],w);if(!K){close(J);return 0;}}}}else if(i){
close(J);FD_CLR(J,&amp;o);x(J);}else{write(1[K[c]],K[_],sizeof(K[_
]));close(1[K[c]]);close(J);return 0;}}else{for(K=0;K&lt;=m;K++)if(
0[K[c]]==J){read(J,K[_],sizeof(K[_]));x(J);if(_[K][0]&gt;=f){0[K[_]
]=1[K[_]]=-1;0[K[c]]=1[K[c]]=0;}break;}}}}}l:close(G);return T;}