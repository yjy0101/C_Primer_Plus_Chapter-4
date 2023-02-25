#include<stdio.h>
#define PAGES 959
int main(void)
{									//输出结果如下：	
	printf("*%d*\n", PAGES);		//*959*							
	printf("*%2d*\n", PAGES);		//*959*				//2字段宽度，打印了3个数字宽度，字段宽度会自动扩大以符合整数的长度				
	printf("*%10d*\n", PAGES);		//*       959*		//对应10个字段宽度，所以前面7个空格					
	printf("%-10d*\n", PAGES);		//*959       *		//对应10个字段宽度，所以后面7个空格

	return 0;
}