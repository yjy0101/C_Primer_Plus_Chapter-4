#include<stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
	short num = PAGES;
	short mnum = -PAGES;
	
	printf("num as short and unsigned short: %hd %hu\n", num, num);				//336 336
	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);			//-336 65200	                              
	printf("num as int and char: %d %c\n", num, num);							//336 P
	printf("WORDS as int, short,and char: %d %hd %c\n", WORDS, WORDS, WORDS);	//65618 82 R
	//�����з���short int���Ͷ�Ӧ��ת��˵��%u(�޷���)����Ľ��Ϊ65200
	//short int �Ĵ�С��2�ֽڣ�ϵͳ��ͬ[�����Ʋ���]����ʾ�з���������
	//���ַ���������0-32767�������Ǳ���������32768-65535��ʾ������65535��ʾ-1��-336��ʾΪ65200�� 

	//%c��ӡ336ʱ����ֻ��鿴�洢336��2�ֽ��е����1�ֽڡ�
	//���ֽض��൱����һ��������һ256��ֻ����������������Ϊ80����Ӧ��ASCIIֵΪ'P'��
	return 0;
}