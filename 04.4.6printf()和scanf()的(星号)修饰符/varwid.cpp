/*varwid.c--ʹ�ñ������ֶ�*/
#include<stdio.h>
int main(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("Enter a field width:\n");						//����width�ṩ�ֶο�ȣ�number�Ǵ���ӡ�����֡�
	scanf_s("%d", &width);									//��Ϊת��˵����*��d��ǰ�棬������printf()�Ĳ����б��У�
	printf("The number is :%*d:\n", width, number);			//width��number��ǰ�档
	printf("Now enter a width and a precision:\n");
	scanf_s("%d%d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("Done!\n");

	return 0;
}

//���磺
/*
Enter a field width:
6
The number is :   256:
Now enter a width and a precision:
8 3
Weight =  242.500
Done!
*/