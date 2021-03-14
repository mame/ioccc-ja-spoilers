#include&lt;stdlib.h&gt;
#include&lt;stdio.h&gt;
main(I,O,O0,OO,l)
int I,O0,OO,l;
char **O;
{
	return !!I&gt;=I?!I&gt;=I?!!~I&gt;=~I?!~I&gt;=~I?!OO?!I:OO%2?
		OO=main(I,O,O0,OO&gt;&gt;!!OO,l),
		OO=main(I-!I-!!I,O,OO,OO,l),
		OO=main(I-!I-!!I,O,O0,OO,l),
		!(OO-!I||I)?l-1:OO
	:(OO=main(I,O,O0,OO&gt;&gt;!!OO,l),
		!(OO-l+!I||I)?l-1:main(I-!I-!!I,O,OO,OO,l))
	:(O0+OO)%l
	:main(I-I/I-I/I,O,O0,OO+OO/OO,
		main(0,O,O0,OO,I-I-I)+I+1?1:printf(&quot;%d &quot;,I-I-I)+fflush(stdout))
	:main(I-I-I-I-I,O,I+I-I+I,I,0)
	:main(~!!I-!!I,O,atoi(1[O]),1,atoi(0[O]));
}