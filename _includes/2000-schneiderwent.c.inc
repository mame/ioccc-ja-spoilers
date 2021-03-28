
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;setjmp.h&gt;
#include &lt;time.h&gt;

#define I ??(i??)??(j??)
#define K ??(i-1??)??(j??)
#define S strtok(NULL,&quot;,\n\0&quot;)
#define P printf(
#define NB_MSGS 42
#define C( f, m ) mNb = m;\
    s = setjmp( sT??( sI++ ??) );\
    if (!s) goto f;
#define bck longjmp( sT??( --sI ??), 0 );

jmp_buf sT??( 256 ??);
int m5??(84??),sI=0,c1=&#39;J&#39;%2,mNb=0,s=0,mI=0,r=1;
unsigned long m1??(32??),q=0,z;
unsigned char m??( NB_MSGS ??)??( 11 ??);

int main( int argc, char *argv??(??) )
{
    time_t tmT = time( NULL );
    struct tm *tmS = localtime( &amp;tmT );
    char tms??( 7 ??);
    int hr,n,i=1,j=0;
    FILE *info = NULL;
    char iS??( 2048 ??);

    if ( argc &gt; 1 ) info = fopen( argv??(1??), &quot;r&quot; );
    strftime( tms, 7, &quot;%H:%M\n&quot;, tmS );
    if ( info != NULL ) {
        fgets( iS, 2048, info );
        m5??( 0 ??) = atoi( strtok( iS, &quot;,\0&quot; ) );
        for ( hr = 1; hr &lt; 85; hr++ ) m5??(hr??) = atoi(S);
        for ( hr = 0; hr &lt; 32; hr++ ) 
            m1??( hr ??) = strtoul( S, NULL, 10 );
        for ( hr = 0; hr &lt; NB_MSGS; hr++ ) 
            for ( n = 0; n &lt; 11; n++ ) 
                m??(hr??)??(n??) = (unsigned char)atoi( S );
        fclose( info );
        hr = atoi( strtok( tms, &quot;:\0&quot; ) );
        n = atoi( strtok( NULL, &quot;:\0&quot; ) );
        C( mA, 0 )
        C( out, 40 )
        s = setjmp( sT??( sI++ ??) );
        if ( s ) {
            s = setjmp( sT??( sI++ ??) );
            if ( s ); else goto doHr;
        } else goto doMin;
    } else {
        P &quot;%s&quot;, tms );
        goto eoj;
        doMin:
            z = 22;
            C( doIt, 0 )
            bck
        doHr:
            hr = ( n &gt;= 36 ) ? hr+1 : hr;
            if ( hr == 24 ) hr=0;
            if (hr&amp;&amp;hr!=12)(hr&lt;12)?(P &quot;%d &quot;,hr)):(P &quot;%d &quot;,hr-12));
            n = hr + 61;
            q = 0;
            r = 1;
            z = 16;
            C( doIt, 0 )
            P &quot;\n&quot; );
            bck
        doIt:
            if ( r &amp; m1??( m5??(n??) ??) ) {
                if (z == 22) q = q &lt;&lt; 1;
                C( out, q )
                if (z == 22) q = q &gt;&gt; 1;
            }
            r = r &lt;&lt; 1;
            q++;
            if ( q &lt; z ) goto doIt;
            bck
        out:
            mI = 0;
            mNb += c1;
            while ( m??( mNb ??)??( mI ??) ) 
                P &quot;%c&quot;, m??( mNb ??)??( mI++ ??) );
            bck
        mA:
            129&lt;=m I ? 137&gt;=m I ? m K=m I-32
            : 145&lt;=m I ? 153&gt;=m I ? m K=m I-39
            : 162&lt;=m I ? 169&gt;=m I ? m K=m I -47
            : j : j : j : 125==m I ? m K=39
            : 64==m I ? m K=32 : j;
            j++;
            if (m I) goto mA;
            i+=2;
            j = 0;
            if ( i &lt; NB_MSGS ) goto mA;
            bck
    }

    eoj: exit( 0 );

}