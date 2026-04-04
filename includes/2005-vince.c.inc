#include &lt;stdio.h&gt;
#include &lt;unistd.h&gt;
#include &lt;string.h&gt;
#include &lt;GL/glx.h&gt;
#include &lt;GL/glu.h&gt;
#define E(x) { printf(&quot;%i\n&quot;,x); goto l; }
#define G fgetc(F)
#define H glEnable(
#define I glMaterialfv(GL_FRONT,
#define J glMatrixMode(
#define L (y
#define M 640,480
#define N NULL
#define O GL_DIFFUSE , i
#define P glCallList(u);
#define T glTexCoord2i
#define U glLightfv(GL_LIGHT0,
#define V R(); glVertex3i(c,m,n);
#define X GL_TEXTURE_2D
#define Z(x) G; x=G; x=x&lt;50-(x==59); 

void Y()
{ { { { { { { { { { { { { { { {
                               
  { {     { { {   { { {   { { {
      {   {   {   {   {   {    
  { {     {   {   {   {     { {
  {       {   {   {   {       {
  { { {   { { ;   { } }   } } }
                               
                               
  }   } } }     }     }     }  
  }   }   }   }     }     }    
  }   }   }   }     }     }    
  }   }   }   }     }     }    
  }   } } }     }     }     }  
                               
} } } } } } } } } } } } } } } }

void Q()
{ { ; { { { {   {     {   { {
  { {     {         {     { {
{   { {   { {               {
; { { } } } } }   }     }   }
} ; }   } }   }   } }   } } }
} }     }         }     } }   



		 FILE *F; int u,t,l,m,n,x=0,a=0,b[]={ GLX_DOUBLEBUFFER,
	       GLX_RGBA , GLX_DEPTH_SIZE , 16, None},o,n,c ; void R() {
	     Z(c); Z(m); Z(n); } int main( int _, char **A) { char   f[
	  BUFSIZ ] ;  GLXContext r  ; XVisualInfo * v ; Display     *y; 
	XEvent e ; GLfloat g=0, h=10, i[ ]= { 1,1, 1, 1, 5,5,       100
     ,0, .6, .6, .6 ,1 } ; XSetWindowAttributes s; GLubyte          j[1
   &lt;&lt;10] ; Window w; if(! L= XOpenDisplay ( N ) ) ) E(1)            ;if
								    ( !
glXQueryExtension L , N , N ) ) E (2); v=glXChooseVisual            L ,
DefaultScreen (y ) , b  ) ; s.colormap = XCreateColormap            L ,
RootWindow (y,v -&gt; screen), v -&gt; visual, AllocNone ); if            (!(
r= glXCreateContext L, v, N, 1) ) ) E (3) ; strcpy(f, *A            ) ;  
s.event_mask=KeyPressMask; strcat(f,&quot;.c&quot;); F=fopen(f,&quot;r&quot;            ) ; 
w= XCreateWindow L, RootWindow( y, v -&gt; screen ), M , M,            0,v
-&gt;depth,InputOutput, v-&gt;visual , CWColormap|CWEventMask,            &amp;s)
;glXMakeCurrent L , w , r ); H GL_DEPTH_TEST ); if ( ! F            )E(
4 ) ; glShadeModel ( GL_SMOOTH ) ; while ( a != 89 ) a =            G ; 
G; G ; glGenTextures( 1, &amp; t ); while ( x&lt; 1024 ) { G; a            =G;
j[ x++ ] = 128; j[ x++ ] = 128 &amp; - ( a&lt;33 ); j [ x ]= j[            x-1
]; x++; j[x++] =-1;} glBindTexture(X,t); glTexParameteri            (X,
GL_TEXTURE_MIN_FILTER , GL_NEAREST ) ;   glTexImage2D( X	    ,0,
GL_RGBA, 16 ,  16 , 0 ,  GL_RGBA, GL_UNSIGNED_BYTE , j ) 	    ; J 
GL_PROJECTION ) ; gluPerspective( 60 , 1.333 , 1 ,  100)    	    ; J 
GL_MODELVIEW); u=glGenLists(1); glNewList(u,GL_COMPILE);	    H X
) ; while ( a != 81 ) a = G ; G ; G ; for (x=0; x&lt;6; x++	    ) {
glBegin(GL_QUADS); R(); glNormal3f( c, m,n); T(1,1); V T            (1,
0  )  ;  V  T (  0  , 0 ) ; V T( 0 , 1 ) ;  V  glEnd ( )	    ; } 
glEndList( ) ; XMapWindow L , w ) ; c = 0; for ( ; ; ) {	    if( 
XPending L ) ) { XNextEvent L , &amp;e ) ; if((XLookupKeysym	    ( (
XKeyEvent *)&amp;e,0))&amp;1&lt;&lt;5){ h=10; i[c]=!i[c]; c++; c&amp;=3; }           else        
E(0)} glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT          ) ;  
glLoadIdentity(); gluLookAt ( -2 ,0 ,5 ,0,0 ,0,0 ,0 ,1 )        ; H 
GL_LIGHTING); H GL_LIGHT0 ); U GL_POSITION, i + 4); U O)      ; U 
GL_SPECULAR,i); glLightModelfv( GL_LIGHT_MODEL_AMBIENT,i    +8)
; I GL_AMBIENT, i+8); I O + 8 ) ; glRotatef( g, 1, 1, 1)  ; P 
glTranslatef(-h,0,0); P usleep (4000); g+=.07*x; if (g&gt;360) 
g-=360.0; h-=x /100.0; glFlush(); glXSwapBuffers L ,w);} 

l: 
return 0; 
}