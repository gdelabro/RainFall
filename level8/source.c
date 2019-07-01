void *ptr1 = 0; //0x08049ab0
void *ptr2 = 0; //0x08049aac
char buf[128];  //0x08049a80

int main(int ac, char **av)
{
	while (1)
	{
		printf("%p, %p \n", 0x08049ab0, 0x08049aac);
		if (!fgets(buf, 128, stdin))
			break ;
		
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
