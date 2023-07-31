#include<stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling point.\n", bph2o);				//printf()返回值的大小是打印字符的个数（空格也包括）转义字符也算。
	printf("The printf() function printed %d characters.\n", rv);

	return 0;
}
/*
212 F is water's boiling point.
The printf() function printed 32 characters.
*/