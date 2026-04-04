#include&lt;stdio.h&gt;
#include&lt;string.h&gt;

main()
{
	char*O,l[999]=&quot;&#39;`acgo\177~|xp .-\0R^8)NJ6%K4O+A2M(*0ID57$3G1FBL&quot;;
	while(O=fgets(l+45,954,stdin)){
		*l=O[strlen(O)[O-1]=0,strspn(O,l+11)];
		while(*O)switch((*l&amp;&amp;isalnum(*O))-!*l){
		case-1:{char*I=(O+=strspn(O,l+12)+1)-2,O=34;
			while(*I&amp;3&amp;&amp;(O=(O-16&lt;&lt;1)+*I---&#39;-&#39;)&lt;80);
			putchar(O&amp;93?*I&amp;8||!(I=memchr(l,O,44))?&#39;?&#39;:I-l+47:32);
			break;
		case 1:	;}*l=(*O&amp;31)[l-15+(*O&gt;61)*32];
			while(putchar(45+*l%2),(*l=*l+32&gt;&gt;1)&gt;35);
		case 0:	putchar((++O,32));}
	putchar(10);}
}