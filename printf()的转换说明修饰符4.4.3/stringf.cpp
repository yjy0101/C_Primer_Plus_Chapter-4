#include<stdio.h>
#include<string.h>
#define BLURB "Authentic imitation!"		//20���ַ���ɵ��ַ���
int main(void)
{
	printf("[%2s]\n", BLURB);		//[Authentic imitation!]		
	printf("[%24s]\n", BLURB);		//[    Authentic imitation!]	//
	printf("[%24.5s]\n", BLURB);	//[                   Authe]	//���������˴���ӡ�ַ��ĸ�����.5����printf()ֻ��ӡ5���ַ���
	printf("[%-24.5s]\n", BLURB);	//[Authe                   ]	//���⣬-���ʹ���ı���������

	return 0;
}
/*
[Authentic imitation!]
[    Authentic imitation!]
[                   Authe]
[Authe                   ]
*/