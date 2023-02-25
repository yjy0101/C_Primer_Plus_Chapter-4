#include<stdio.h>
int main(void)
{
	printf("Here's one way to print a");		//方法一：使用多个printf()语句。
	printf("long string.\n");

	printf("Here's another way to print a \
long string.\n");								//方法二：用反斜杠（\）和Enter键组合来断行。（不推荐）

	printf("Here's the newest way to print a "	
			"long string.\n");					//方法三：ANSI C 引入的字符串连接。
												//在两个用双引号括起来的字符串之间用空白隔开，C编译器会把多个字符串看作是一个字符串。

	return 0;
}