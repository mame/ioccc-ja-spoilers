#include &lt;stdio.h&gt;
#include &lt;malloc.h&gt;
#include &lt;setjmp.h&gt;
#include &lt;ctype.h&gt;
#define new(PP) (PP *) malloc(sizeof(PP)) 
typedef struct q {
    jmp_buf ppp;
    long qq;
    struct q *P;
    struct q *p;
} 
PP;

PP *P;
int aaaaaa=2;
int aaaaaaa=1;

long qqq;


aaAaaa(aa,aaa)
char *aa;
char *aaa;
{
    char aaaa = 0;
    if ((((( aaa )))))
    {
        aaaa = *aa;
        *aa=0;
        aa+=strlen(aa+1);
        P =new(PP);
        P-&gt;P=P;
        P-&gt;p=P;
    }

    if ((((( !setjmp(P-&gt;ppp) ))))) 
        {
        if ((((( !isdigit(*aa) )))))
            longjmp(P-&gt;ppp,aaaaaaa);
        else {
            P-&gt;p-&gt;P = new(PP);
            P-&gt;p-&gt;P-&gt;P = P;
            P-&gt;p-&gt;P-&gt;p = P-&gt;p;
            P-&gt;p = P-&gt;p-&gt;P;

            P-&gt;qq = *aa--;
            P = P-&gt;p;
            aaAaaa(aa,0);
        }
    } else {
        if ( !aaaa&amp;&amp;!*aa ) 
           longjmp(P-&gt;p-&gt;ppp,aaaaaaa);

        if ((((( (P-&gt;qq=aaaa)&lt;10     &amp;&amp;!
                 (isdigit(aaaa))     ||!
                 (isdigit(*aa)       ||!
                 *aa                        )))))) 
        {
            fprintf(stderr,&quot;Usage %c%s &lt;number&gt;\n&quot;,
            (aaa[0]?7:aaaa),aaa+!aaa[0]);
            exit(1);
        }
    }
}


ppPppp(pp,ppp)
PP **pp, *ppp;
{
    int aa;
    if ((((( !(aa=setjmp(ppp-&gt;ppp))||aa==aaaaaa )))))
    {
        if ((((( *pp==ppp )))))
        {
            ppp = (*pp)-&gt;p;

            if ( qqq&lt;47 ) return;
            if ( ppp-&gt;qq!=48 ) return;

            while ( ppp-&gt;qq==48 ) 
            {
                printf(&quot;%ld\n&quot;,qqq-45);
                *pp = ppp;
                ppp = ppp-&gt;p;
            }
            qqq -= 1;
            longjmp(ppp-&gt;ppp,aaaaaaa);
        } else {
            PP *p;

            ppPppp(pp,ppp-&gt;p);
            for (p=ppp;p!=*pp;p=p-&gt;p)
            {
                int qq=4;
                if ((((( qqq&lt;47                            &amp;&amp;
                         (qq=0,p-&gt;qq+=p-&gt;p-&gt;qq-96)&gt;=48-qqq ||
                         qqq&gt;46                            &amp;&amp;
                         (p-&gt;qq-=p-&gt;p-&gt;qq)&lt;0                   ))))) 
                {
                    p-&gt;qq += qqq+qq;
                    if ( p-&gt;p==P &amp;&amp; qqq&lt;=46 )
                    {
                        P-&gt;p-&gt;P = new(PP);
                        P-&gt;p-&gt;P-&gt;P = P;
                        P-&gt;p-&gt;P-&gt;p = P-&gt;p;
                        *pp = P = P-&gt;p = P-&gt;p-&gt;P;
                        P-&gt;qq = 48;
                    }

                    p-&gt;p-&gt;qq+=qq==0;
                    p-&gt;p-&gt;qq-=qq!=0;
                }
                else
                {
                    p-&gt;qq += 48;
                }
            }
            if ( ppp-&gt;P==P ) longjmp(ppp-&gt;ppp,aaaaaaa);
        }
    }
    else
    {
        qqq += 1; 

        while (48==P-&gt;qq )
        {
            P-&gt;P-&gt;p = P-&gt;p;
            P = P-&gt;p-&gt;P = P-&gt;P;

        }

        if ( ppp!=ppp-&gt;p-&gt;p || qqq&lt;47 )
            longjmp(ppp-&gt;ppp,aaaaaa);
        else
        {
            printf(&quot;At most one remains\n&quot;);
            exit(0);
        }
    }
}


main(aaa,aaaa)
int aaa;
char **aaaa;
{
    aaAaaa(aaa==aaaaaaa?aaaa[0]:aaaa[1],aaaa[0]);
    qqq = 39;
    ppPppp(&amp;P,P-&gt;p);
}

