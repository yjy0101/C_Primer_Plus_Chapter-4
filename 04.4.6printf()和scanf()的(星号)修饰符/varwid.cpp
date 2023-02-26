/*varwid.c--使用变宽输出字段*/
#include<stdio.h>
int main(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("Enter a field width:\n");						//变量width提供字段宽度，number是待打印的数字。
	scanf_s("%d", &width);									//因为转换说明中*在d的前面，所以在printf()的参数列表中，
	printf("The number is :%*d:\n", width, number);			//width在number的前面。
	printf("Now enter a width and a precision:\n");
	scanf_s("%d%d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("Done!\n");

	return 0;
}

//例如：
/*
Enter a field width:
6
The number is :   256:
Now enter a width and a precision:
8 3
Weight =  242.500
Done!
*/