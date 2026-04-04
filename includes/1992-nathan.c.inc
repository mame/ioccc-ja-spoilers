#include &lt;stdio.h&gt;
static char *text[] =
{
  &quot;Export of this program from the USA is governed by the US&quot;,
  &quot;Munitions List from the ITAR (International Traffic in Arms&quot;,
  &quot;Regulations). This list gives the specific categories of&quot;,
  &quot;restricted exports and includes cryptographic exports. Traffic&quot;,
  &quot;entirely external to, entirely internal to, or into the USA is&quot;,
  &quot;not restricted.&quot;,
  &quot;To obtain a copy of the program, email to nathan@inmos.co.uk&quot;,
  &quot;with a subject \&quot;IOCCC request\&quot;. If you know that your &#39;From&#39;&quot;,
  &quot;line is incorrect, add a single line&quot;,
  &quot;\&quot;replyto you@your.correct.address\&quot; to the body of the message.&quot;,
  &quot;A deamon will autoreply.&quot;,
  &quot;WARNING: You must not re-export this out of the USA, or else&quot;,
  &quot;the men in black might get you.&quot;,
  NULL
};
int main()
{
  char **ptr;

  for(ptr = text; *ptr; ptr++)
    printf(&quot;%s\n&quot;, *ptr);
  return 0;
}