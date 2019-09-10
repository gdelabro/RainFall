#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *p1 = 0; //0x08049ab0
void *p2 = 0; //0x08049aac

int main(void)
{
	char buf[128];

	while(1)
	{
		int i;

		printf("%p, %p \n", p1, p2);
		if (fgets(buf, 128, stdin) == 0)
			break;
		if (strncmp(buf, "auth ", 5) == 0 && buf[5] != 0)
		{
			p1 = malloc(4);
			if(strlen(buf+5) <= 30)
			{
				strcpy(p1, buf+5);
			}
		}
		if (strncmp(buf, "reset", 5) == 0 && buf[5] != 0)
		{
			free(p1);
		}
		if (strncmp(buf, "service", 6) == 0 && buf[5] != 0)
		{
			p2 = strdup(buf+7);
		}
		if (strncmp(buf, "login", 5) == 0 && buf[5] != 0)
		{
			if (((char*)p1)[32])
				system("/bin/sh");
			else
			{
				fwrite ("Password:\n", 10, 1, stdout);
			}
		}
	}
}

/*
 * 0x8048810     %p, %p \n
 * 0x8048819     auth 
 * 0x804881f     reset
 * 0x8048825     service
 * 0x804882d     login
 * 0x8048833     /bin/sh
 * 0x804883b     Password:\n
 */
