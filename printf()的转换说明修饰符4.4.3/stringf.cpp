#include<stdio.h>
#include<string.h>
#define BLURB "Authentic imitation!"		//20个字符组成的字符串
int main(void)
{
	printf("[%2s]\n", BLURB);		//[Authentic imitation!]		
	printf("[%24s]\n", BLURB);		//[    Authentic imitation!]	//
	printf("[%24.5s]\n", BLURB);	//[                   Authe]	//精度限制了待打印字符的个数，.5告诉printf()只打印5个字符。
	printf("[%-24.5s]\n", BLURB);	//[Authe                   ]	//另外，-标记使得文本左对齐输出

	return 0;
}
/*
[Authentic imitation!]
[    Authentic imitation!]
[                   Authe]
[Authe                   ]
*/