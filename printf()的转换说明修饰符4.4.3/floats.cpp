#include<stdio.h>

int main(void)
{
	const double RENT = 3852.99;		//const ����  �޶�Ϊֻ��

	printf("*%f*\n", RENT);				//ϵͳĬ�������ʽ��С�������6λС��
	printf("*%e*\n",RENT);				
	printf("*%4.2f*\n",RENT);			//�ܹ�ռ4���ֶο�ȣ�ûռ ���İ��ո���֣�С�������2λ
	printf("*%3.1f*\n",RENT);			//�����˱����ֿ���ԭ�����С�������1λ
	printf("*%10.3f*\n",RENT);			//�ܹ�ռ10���ֶο�ȣ�ûռ���İ��ո���֣�С�������3λ
	printf("*%10.3E*\n",RENT);			
	printf("*%+4.2f*\n",RENT);			//'+'����ʾ����
	printf("*%010.2f*\n",RENT);			//ûռ���Ŀո�0���
	

	return 0;
}