#include<stdio.h>

int main(void)
{
	const double RENT = 3852.99;		//const 变量  限定为只读

	printf("*%f*\n", RENT);				//系统默认输出格式，小数点后保留6位小数
	printf("*%e*\n",RENT);				
	printf("*%3.1f*\n",RENT);			//超过了保留字宽，按原输出，小数点后保留1位
	printf("*%10.3f*\n",RENT);			//总共占10个字段宽度，没占满的按空格出现，小数点后保留3位
	printf("*%10.3E*\n",RENT);			
	printf("*%+4.2f*\n",RENT);			//'+'会显示符号
	printf("*%010.2f*\n",RENT);			//没占满的空格被0填充
	

	return 0;
}
/*
*3852.990000*
*3.852990e+03*
*3853.0*
*  3852.990*
* 3.853E+03*
*+3852.99*
*0003852.99*
*/