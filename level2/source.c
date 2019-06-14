#include <unistd.h>
#include <libc.h>

void p()
{
	void *ptr;
	char buf[64];

	fflush(stdout);
	gets(buf);
	ptr = buf - 4;
	if ((int)ptr & 0xb0000000 == 0xb0000000)
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
