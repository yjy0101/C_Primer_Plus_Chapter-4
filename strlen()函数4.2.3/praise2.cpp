#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraodinary being."
int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf_s("%s", name, 40);
	name[40 - 1] = 0;				//手动在字符串数组末尾加'\0'（结束的空字符）
	printf("Hello, %s. %s \n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof(name));
	printf("The phrase of praise has %zd letters ", strlen(PRAISE));		//sizeof()会计入结束的空字符而strlen()不会
	printf("and occupies %zd memory cells.\n", sizeof(PRAISE));
	//C99和C11标准专门为sizeof运算符的返回类型添加了%zd转换说明，对于strlen()同样适用

	return 0;
}