#include<stdio.h>
int main(void)
{
	printf("Here's one way to print a");		//����һ��ʹ�ö��printf()��䡣
	printf("long string.\n");

	printf("Here's another way to print a \
long string.\n");								//���������÷�б�ܣ�\����Enter����������С������Ƽ���

	printf("Here's the newest way to print a "	
			"long string.\n");					//��������ANSI C ������ַ������ӡ�
												//��������˫�������������ַ���֮���ÿհ׸�����C��������Ѷ���ַ���������һ���ַ�����

	return 0;
}