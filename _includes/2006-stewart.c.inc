#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#define P printf
#define F(x,y) ((FILE*)Z(x,y))
#define U(x,y) ((unsigned char*)Z(x,y))
#define X(x,y,z) ((double*)x+y+7*z)
#define Y(x,y) ((double*)x+y)
#define Z(x,y) *(long*)Y(x,y)
#define R(x,y) (x=y,y^=(y&lt;&lt;11),y^=(y&gt;&gt;15),y^=(y&lt;&lt;3),(x+y)&amp;0x7fffffff)

int main(int c,char**o)
{
   void* v=malloc(0170UL);
   memset(v,0,0170UL);
   if(c!=4)P(&quot;bad args\n&quot;),exit(1);
   Z(v,2)=atoi(o[1]);
   Z(v,1)=atoi(o[2]);
   Z(v,0)=Z(v,2)*Z(v,2)&gt;&gt;3;
   Z(v,6)=(long)malloc(Z(v,0));
   memset((void*)Z(v,6),0,Z(v,0));
   Z(v,13)=(long)fopen(o[3],&quot;r&quot;);
   fscanf(F(v,13),&quot;%ld&quot;,(long*)Y(v,3));
   Z(v,8)=(long)malloc(050+Z(v,3)*070);
   Z(Z(v,8),0)=Z(v,3);
   fscanf(F(v,13),&quot;%lf %lf %lf %lf&quot;,Y(Z(v,8),1),Y(Z(v,8),2),Y(Z(v,8),3),Y(Z(v,8),4));
   for(Z(v,3)=0;Z(v,3)&lt;Z(Z(v,8),0);
       fscanf(F(v,13),&quot;%lf %lf %lf %lf %lf %lf %lf&quot;,X(Z(v,8),5,Z(v,3)),
              X(Z(v,8),6,Z(v,3)),X(Z(v,8),7,Z(v,3)),X(Z(v,8),8,Z(v,3)),
              X(Z(v,8),9,Z(v,3)),X(Z(v,8),10,Z(v,3)),X(Z(v,8),11,Z(v,3))),
           ++Z(v,3));
   fclose(F(v,13));
   Z(v,14)=8675309;
   for(Z(v,3)=0;Z(v,3)&lt;Z(v,1);++Z(v,3))
   {
      *Y(v,7)=(R(Z(v,4),Z(v,14))/(double)0x7fffffff),Z(v,5)=0;
      for(Z(v,4)=0;Z(v,4)&lt;Z(Z(v,8),0);++Z(v,4),++Z(v,5))
         if(*Y(v,7)&lt;*X(Z(v,8),11,Z(v,5)))
            break;
         else
            *Y(v,7)-=*X(Z(v,8),11,Z(v,5));
      *Y(v,11)=*X(Z(v,8),5,Z(v,5))**Y(v,9)+*X(Z(v,8),6,Z(v,5))**Y(v,10)+*X(Z(v,8),9,Z(v,5));
      *Y(v,12)=*X(Z(v,8),7,Z(v,5))**Y(v,9)+*X(Z(v,8),8,Z(v,5))**Y(v,10)+*X(Z(v,8),10,Z(v,5));
      *Y(v,9)=*Y(v,11);
      *Y(v,10)=*Y(v,12);
      if(Z(v,3)&gt;10)
         if((*Y(v,9)&gt;=*Y(Z(v,8),1))&amp;&amp;(*Y(v,9)&lt;=*Y(Z(v,8),3))&amp;&amp;(*Y(v,10)&gt;=*Y(Z(v,8),2))&amp;&amp;(*Y(v,10)&lt;=*Y(Z(v,8),4)))
            *Y(v,11)=(*Y(v,9)+-*Y(Z(v,8),1))/(*Y(Z(v,8),3)-*Y(Z(v,8),1)),
      *Y(v,12)=(*Y(v,10)+-*Y(Z(v,8),2))/(*Y(Z(v,8),4)-*Y(Z(v,8),2)),
      *(U(v,6)+((((long)(Z(v,2)-*Y(v,12)*Z(v,2))*Z(v,2))+(long)(*Y(v,11)*Z(v,2)))&gt;&gt;3))|=
      1&lt;&lt;((((long)(Z(v,2)-*Y(v,12)*Z(v,2))*Z(v,2))+(long)(*Y(v,11)*Z(v,2)))&amp;7);
   }
   P(&quot;#define x_width %ld\n#define x_height %ld\nstatic char x_bits[] = {\n&quot;,Z(v,2),Z(v,2));
   for(Z(v,3)=0;Z(v,3)&lt;Z(v,0);++Z(v,3))
   {
      if(Z(v,3))
         P(&quot;,&quot;);
      P(&quot;0x%02x&quot;,*(U(v,6)+Z(v,3)));
   }
   P(&quot;};\n&quot;);
   free(Y(Z(v,6),0));
   free(Y(Z(v,8),0));
   free(v);
   return 0;
}