#define B break;
#define Q if(
#define R return
#define V getenv(
#define T &quot;DOCUMENT_ROOT&quot;
#define S snprintf(
#define C strcspn(u,
#include &lt;fcntl.h&gt;
#include &lt;dirent.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;unistd.h&gt;
#include &lt;sys/stat.h&gt;
#include &lt;sys/wait.h&gt;
#include &lt;sys/socket.h&gt;
#include &lt;netinet/in.h&gt;
#include &lt;arpa/inet.h&gt;
#define Z				8192
char r[Z], q[Z], l[Z], w[Z], *o, *m = &quot;404 Not Found&quot;, *e = &quot;500 Error&quot;;
void
X(int t, char *u, long j)
{
				j = S 
								q, Z,
								&quot;HTTP/1.0 %s\r\nContent-Length: %ld\r\n\r\n%s&quot;,
								u, j ? j : C &quot;&quot;), j ? &quot;&quot; : u
				);
				send(t, q, j, 0);
}
void
A(char *i, char *j)
{
				char *u;
				Q (u = strstr(o, i + 5)))
								sscanf(u + C &quot;:&quot;) + 1, j, V i));
}
int
main(int c, char **p)
{
				int f, t, i;
				struct stat g;
				struct sockaddr_in a;
				char *v, *u;
				Q (v = V &quot;SERVER_PORT&quot;)) == 0) {
								R 4;
				}
				i = (int) strtol(v, 0, 10);
				a.sin_addr.s_addr = htonl(INADDR_ANY);
				a.sin_port = htons((unsigned short) i);
				a.sin_family = AF_INET;
				Q (f = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) &lt; 0) {
								R 5;
				}
				Q bind(f,  (void *) &amp;a, sizeof a)) {
								R 6;
				}
				Q listen(f, 10)) {
								R 7;
				}
				for ( ; ; close(t)) {
								for ( ; waitpid(0, 0, WNOHANG) &gt; 0; )
												;
								i = sizeof a;
								Q (t = accept(f,  (void *) &amp;a, &amp;i)) &lt; 0)
												continue;
								Q fork())
												continue;
								for (f = i = 0; f &lt; 2 &amp;&amp; i &lt; Z; i++) {
												Q recv(t, r + i, 1, 0) &lt;= 0)
																R 1;
												Q r[i] == &#39;\n&#39;)
																f++;
												Q r[i] == &#39;:&#39;)
																f = 0;
												Q f)
																r[i] = r[i] == &#39;-&#39; ? &#39;_&#39; : toupper(r[i]);
								}
								Q Z &lt;= i)
												B
								r[i] = 0;
								Q *r != &#39;G&#39; &amp;&amp; *r != &#39;H&#39; &amp;&amp; r[2] != &#39;S&#39;) {
												X(t, &quot;501 Unsupported&quot;, 0);
												B
								}
								*l = 0;
								Q (v = strstr(r, &quot;HOST:&quot;)))
												sscanf(v+5, &quot; %255[^:\r\n]&quot;, l);
								S w, Z, T &quot;=%s/%s&quot;, V T), l);
								putenv(w);
								u = r + 4 + (*r != &#39;G&#39;);
 								Q *u != &#39;/&#39; || strstr(u, &quot;../&quot;)) {
												X(t, m, 0);
												B
								}
								u[i = C &quot; &quot;)] = 0;
								o = u + i + 1;
								i = C &quot;?&quot;);
								Q u[i]) {
												S q, Z, &quot;QUERY_STRING=%s&quot;, u+i+1);
												putenv(q);
												u[i] = 0;
								}
								S l, Z, &quot;SCRIPT_FILENAME=%s%s&quot;, w+14, u);
								v = l+16;
								Q stat(v, &amp;g) &lt; 0) {
												X(t, m, 0);
												B
								}
								Q S_ISDIR(g.st_mode)) {
												struct dirent *d;
												DIR *D = opendir(v);
												for ( ; (d = readdir(D)); ) {
																Q !strncmp(d-&gt;d_name, &quot;index.&quot;, 6)) {
																				strncat(v, d-&gt;d_name, Z-16);
																				stat(v, &amp;g);
																				B
																}
												}
												closedir(D);
												Q d == 0) {
																X(t, m, 0);
																B
												}
								}
								Q *r != &#39;H&#39;) {
												Q g.st_mode &amp; 0111) {
																putenv(l);
																sscanf(r, &quot;%4s&quot;, V &quot;REQUEST_METHOD&quot;));
																sscanf(inet_ntoa(a.sin_addr), &quot;%15s&quot;, V &quot;REMOTE_ADDR&quot;));
																A(&quot;HTTP_COOKIE&quot;, &quot;%*[ \t]%80[^\r\n]&quot;);
																A(&quot;CONTENT_LENGTH&quot;, &quot;%20s&quot;);
																A(&quot;CONTENT_TYPE&quot;, &quot;%60s&quot;);
																dup2(t, 0);
																dup2(t, 1);
																Q system(v))
																				X(t, e, 0);
																B
												}
												Q (f = open(v, O_RDONLY)) &lt; 0) {
																X(t, e, 0);
																B
												}
								}
								X(t, &quot;200 OK&quot;, g.st_size);
								Q *r != &#39;H&#39;) {
												for ( ; 0 &lt; (i = read(f, r, Z)); )
																send(t, r, i, 0);
								}
								B
				}
				shutdown(t, SHUT_WR);
				R 0;
}