main(int c,char**v){return!m(v[1],v[2]);}m(char*s,char*t){return*t-42?*s?63==*t|*s==*t&amp;&amp;m(s+1,t+1):!*t:m(s,t+1)||*s&amp;&amp;m(s+1,t);}