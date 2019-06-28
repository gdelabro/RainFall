#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char var[68]; //0x08049960

void m()
{
	printf("%s - %d", var, (int)time(0));
}

int main(int ac, char **av)
{
	void **ptr1 = malloc(8);
	*(ptr1) = (void*)1;
	ptr1[1] = malloc(8);
	void **ptr2 = malloc(8);
	*(ptr2) = (void*)2;
	ptr2[1] = malloc(8);
	strcpy(ptr1[1], av[1]);
	strcpy(ptr2[1], av[2]);
	fgets(var, 68, fopen("/home/user/level8/.pass", "r"));
	puts("~~");
}



/*
 * 0x080485f4 m()     0xbffff78c save eip
 * 0x080486e0  %s - %d
 * 0x080486e9 r
 * 0x080486eb /home/user/level8/.pass
 * 0x08048703 ~~
*/
