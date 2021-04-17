;typedef char n;typedef n*m;int C;n c[11];n y[]={37,100,0};n b[2048];int i
;int A(void){return C=getchar();}int B(m s){return strlen(s)
;}n w[2048];typedef m defvar;m R(void){do A();while(isblank(C) || C == &#39;\n&#39;)
;if(C&lt;0) return 0;i=0;if(C==&#39;;&#39;){for
(defvar q=
&quot;;typedef char n;typedef n*m;int C;n c[11];n y[]={37,100,0};n b[2048];int iY;int A(void){return C=getchar();}int B(m s){return strlen(s)Y;}n w[2048];typedef m defvar;m R(void){do A();while(isblank(C) || C == &#39;\n&#39;)Y;if(C&lt;0) return 0;i=0;if(C==&#39;;&#39;){forY(defvar q=Y~sY;C!=&#39;\n&#39;;A()Y);R();}else if(C==&#39;(&#39;||C==&#39;)&#39;)b[i++]=C;else if(C==34)do b[i++]=CY;while(A()!=34);else do b[i++]=C;while(!isblank(A())&amp;&amp;C!=&#39;\n&#39;)Y;b[i] = 0;return b;}typedef defvar*format;m E(void){Y;m a=R();if(!a) return 0;if(*a==34)return aY;if(*a==&#39;#&#39;){c[0]=a[2]==&#39;N&#39;?&#39;\n&#39;:a[2];return c;}if(*a==&#39;q&#39;)return wY;if(*a==&#39;(&#39;){a=R();if(*a==&#39;d&#39;){R();strcpy(w,E());R();return wY;}else if(*a==&#39;f&#39;){R();m f = strdup(E());*strchr(f,126)=37Y;m s=E();s[B(s)+1]=0;s[B(s)]=34;printf(f+1,s);R()Y;}else if(*a==&#39;s&#39;){n p=*E();n o=*E();m r=strdup(E());a=r;forY(format t ;*a;a++)*a=*a==o?p:*aY;R();return r;}else if(*a==&#39;c&#39;){c[0]=*E()-32/*Y(substitute #\Newline (char-upcase #\y ) q= )q= );*/Y;R();return c;}else{n z=*a;int d=atoi(E()),e=atoi(E())Y;sprintf(c,y,z-&#39;+&#39;?z-&#39;-&#39;?z-&#39;*&#39;?d/e:d*e:d-e:d+e);R();return cY;}}return a;}int main(void){while(C+1)E();return 0;}Y&quot;
;C!=&#39;\n&#39;;A()
);R();}else if(C==&#39;(&#39;||C==&#39;)&#39;)b[i++]=C;else if(C==34)do b[i++]=C
;while(A()!=34);else do b[i++]=C;while(!isblank(A())&amp;&amp;C!=&#39;\n&#39;)
;b[i] = 0;return b;}typedef defvar*format;m E(void){
;m a=R();if(!a) return 0;if(*a==34)return a
;if(*a==&#39;#&#39;){c[0]=a[2]==&#39;N&#39;?&#39;\n&#39;:a[2];return c;}if(*a==&#39;q&#39;)return w
;if(*a==&#39;(&#39;){a=R();if(*a==&#39;d&#39;){R();strcpy(w,E());R();return w
;}else if(*a==&#39;f&#39;){R();m f = strdup(E());*strchr(f,126)=37
;m s=E();s[B(s)+1]=0;s[B(s)]=34;printf(f+1,s);R()
;}else if(*a==&#39;s&#39;){n p=*E();n o=*E();m r=strdup(E());a=r;for
(format t ;*a;a++)*a=*a==o?p:*a
;R();return r;}else if(*a==&#39;c&#39;){c[0]=*E()-32/*
(substitute #\Newline (char-upcase #\y ) q= )q= );*/
;R();return c;}else{n z=*a;int d=atoi(E()),e=atoi(E())
;sprintf(c,y,z-&#39;+&#39;?z-&#39;-&#39;?z-&#39;*&#39;?d/e:d*e:d-e:d+e);R();return c
;}}return a;}int main(void){while(C+1)E();return 0;}