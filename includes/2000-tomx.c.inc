#include &lt;stdio.h&gt;
#define  true

true /*:all

CC=cc
PROG=tomx

false :
	make -f $0 $1
	exit 0

all: $(PROG)

%:%.c
	$(CC) $&lt; -o $@

clean:
	rm $(PROG)

.PHONY: /* true clean */
	int main() {return!printf(&quot;Hello, world\n&quot;);}