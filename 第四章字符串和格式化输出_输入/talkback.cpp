#include<stdio.h>			//�����������������������ӣ�https://blog.csdn.net/weixin_51520483/article/details/123965668
#include<string.h>			//�ṩstrlen()������ԭ��
#define DENSITY 62.4		//�����ܶȣ���λ����/����Ӣ�ߣ�
int main()
{
	float weight, volume;
	int size, letters;
	char name[40];		//name ��һ��������40���ַ�������
	printf("Hi!What's your first name?\n");
	scanf_s("%s", name,40);		//ʹ��%sת��˵���������ַ������������,Ϊname����ַ�������(40)�Ĳ���
								/*scanf_s("%s", name);���ڱ���name����ַ�����
								û�д����ַ������ȵĲ�������Ϊ�ڵ���scanf_s()����ʱ��
								��������ṩһ�������Ա�������ȡ����λ�ַ���
								���磺char d[20]��д��scanf_s("%s",d,20)��������ȷ�ģ�
								���������20ʹ׼ȷ�ԡ���ȫ����ߡ�*/
	name[40 - 1] = 0;		//�ֶ���ĩβ�ӽ����� '\0'
	printf("%s,what's your weight in pounds?\n", name);
	scanf_s("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);			/*strlen ��������һ���������Ĺ����������ڴ��
									ĳ��λ�ã��������ַ�����ͷ���м�ĳ��λ�ã���
									����ĳ����ȷ�����ڴ����򣩿�ʼɨ�裬ֱ��������һ���ַ�����
									���� '\0' Ϊֹ��Ȼ�󷵻ؼ�����ֵ(���Ȳ�����'\0')�������ٶȰٿ�*/
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n", name, volume); /*%2.2f��˼���ǿ������λ2��С������汣��2λС����
																		��ΪС������汣������λС�������Կ��һ������2��
																		����%2.2fǰ���Ǹ�������ƾ�ʧЧ�ˣ�
																		��Ϊ��ȿ϶�����2�ˣ�����ʵ���Ǻö��Ⱦ�������ٿ�ȡ�*/
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);
	return 0;
}