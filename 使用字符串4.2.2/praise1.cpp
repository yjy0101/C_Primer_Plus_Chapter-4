#include<stdio.h>;
#define PRAISE "You are an extraodinary being."
int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf_s("%s", name, 40);
	name[40 - 1] = 0;				//�ֶ����ַ�������ĩβ��'\0'
	printf("Hello, %s. %s \n", name, PRAISE);

	return 0;
}