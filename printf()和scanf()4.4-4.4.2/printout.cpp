/*printout.c--ʹ��ת��˵��*/
//printf()�����ĸ�ʽ��printf(��ʽ�ַ����� ����ӡ��1�� ����ӡ��2�� ...)��
#include<stdio.h>
#define PI 3.141593
int main(void)
{
	int number = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d contestants ate %f berry pies.\n", number, pies);
	printf("The values of pi is %f.\n", PI);
	printf("Farewell! thou art too dear for my possessing,\n");
	printf("%c%d\n", '$', 2 * cost);		//%c ת�������ַ���%s ת���ַ���

	int pc = 2 * 6;
	printf("\nOnly %d%% of Sally's gribbles were edible.\n", pc);//%%��ʾ��ӡһ��'%'

	return 0;
}
