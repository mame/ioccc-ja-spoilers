char    *e,t    [366    ],*f
,*g,    *h,*    i;d,    m  ;
    main    (c,b)   char    **b;{
    for(    ;d[t]   =d%3    ?60&lt;d
&amp;300    &gt;d&amp;6    &lt;d %    30?0 
:32:    d%30    ?32:    10 ,    
    366&gt;    ++d;)   ;for    (g=3*
    atoi    (*++    b) +    34+t;
i=f=    &quot;\1&quot;    &quot;\7&quot;    &quot;(d&quot;
&quot;\177&quot;  &quot;yX&quot;    &quot;\34&quot;   ,e=g
    ;  )    for(    *e++    =++m/
    10 +    48,g    =c=0    ,*e =    
48+m    %10;    h=e-    65+*    
i,d=    *h,*    i++;    f-=8    
    ,g=d    &lt;c?c    =d,h:   g)for
    (; d    -=!!    h[*f    ++-64
    ],*f    ;) ;    puts    (t);}