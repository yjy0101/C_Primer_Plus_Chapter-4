#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraodinary being."
int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf_s("%s", name, 40);
	name[40 - 1] = 0;				//�ֶ����ַ�������ĩβ��'\0'�������Ŀ��ַ���
	printf("Hello, %s. %s \n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof(name));
	printf("The phrase of praise has %zd letters ", strlen(PRAISE));		//sizeof()���������Ŀ��ַ���strlen()����
	printf("and occupies %zd memory cells.\n", sizeof(PRAISE));
	//C99��C11��׼ר��Ϊsizeof������ķ������������%zdת��˵��������strlen()ͬ������

	return 0;
}