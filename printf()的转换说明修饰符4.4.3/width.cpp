#include<stdio.h>
#define PAGES 959
int main(void)
{									//���������£�	
	printf("*%d*\n", PAGES);		//*959*							
	printf("*%2d*\n", PAGES);		//*959*				//2�ֶο�ȣ���ӡ��3�����ֿ�ȣ��ֶο�Ȼ��Զ������Է��������ĳ���				
	printf("*%10d*\n", PAGES);		//*       959*		//��Ӧ10���ֶο�ȣ�����ǰ��7���ո�					
	printf("%-10d*\n", PAGES);		//*959       *		//��Ӧ10���ֶο�ȣ����Ժ���7���ո�

	return 0;
}