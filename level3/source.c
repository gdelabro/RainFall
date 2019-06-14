void v()
{
	char buf[520];

	fgets(buf, 512, stdin);
	printf(buf);
	if (*(0x804988c) == 0x40)
	{
		fwrite("Wait what?!\n", 1, 12, stdout);
		system("/bin/sh");
	}
	return ;
}
int main()
{
	v()
}
