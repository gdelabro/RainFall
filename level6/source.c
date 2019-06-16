void n()
{
	system("/bin/cat /home/user/level7/.pass");
}

void m()
{
	puts("Nope");
}

int main(int ac, char **av)
{
	void *buf1;

	buf1 = malloc(64);
	void (*buf2)(void) = malloc(4);
	buf2 = &m;
	strcpy(buf1, av[1]);
	buf2();
}

