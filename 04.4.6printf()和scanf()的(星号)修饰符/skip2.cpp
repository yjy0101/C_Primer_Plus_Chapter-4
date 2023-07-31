/*skip2.c--跳过输入中的前两个整数*/
#include<stdio.h>
int main01(void)
{
	int n;

	printf("Please enter three integers:\n");
	scanf_s("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);

	
	return 0;
}
/*
Please enter three integers:
2013 2014 2015
The last integer was 2015
*/
//在程序需要读取文件中特定列的内容时，这项跳过功能很有用。