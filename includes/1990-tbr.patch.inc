--- tbr.c
+++ tbr.c
@@ -4,7 +4,7 @@
 char              *c,q              [512              ],m[              256
 ],*v[           99], **u,        *i[3];int         f[2],p;main       (){for
  (m[m        [60]=   m[62      ]=32   ]=m[*      m=124   [m]=       9]=6;
-  e(-8)     ,gets      (1+(    c=q)     )||      exit      (0);     r(0,0)
+  e(-8)     ,gets      (1+(    c=q)     )||     (exit(    0),0);    r(0,0)
    )for(    ;*++        c;);  }r(t,      o){    *i=i        [2]=    0;for
      (u=v  +98           ;m[*--c]         ^9;m [*c]          &amp;32  ?i[*c
        &amp;2]=                *u,u-             v^98              &amp;&amp;++u:
@@ -19,5 +19,5 @@
 	2	]?
 	6	D 1),e(creat(i[2],438)):
 	5	,e(execvp(*u,u))):e(chdir(u[1])*2):
-	3	;}e(x){x&lt;0?write(2,&quot;?\n$ &quot;-x/4,2),x+1||exit(1):
+	3	;}e(x){x&lt;0?write(2,&quot;?\n$ &quot;-x/4,2),x+1||(exit(1),0):
 	5	;}