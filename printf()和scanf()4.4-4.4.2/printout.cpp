/*printout.c--使用转换说明*/
//printf()函数的格式：printf(格式字符串， 待打印项1， 待打印项2， ...)；
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
	printf("%c%d\n", '$', 2 * cost);		//%c 转换单个字符；%s 转换字符串

	int pc = 2 * 6;
	printf("\nOnly %d%% of Sally's gribbles were edible.\n", pc);//%%表示打印一个'%'

	return 0;
}
