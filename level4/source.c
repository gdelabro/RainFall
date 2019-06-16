void p(char *buf)
{
	printf(buf);
}

void n()
{
	char buf[520];

	fgets(buf, 512, stdin);
	p(buf);
	if (*(int*)(0x8049810) == 0x01025544)
		system("/bin/cat /home/user/level5/.pass");
}

int main()
{
	n();
}
