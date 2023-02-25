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
	//由于有符号short int类型对应的转换说明%u(无符号)输出的结果为65200
	//short int 的大小是2字节，系统是同[二进制补码]来表示有符号整数。
	//这种方法，数字0-32767代表它们本身，而数字32768-65535表示负数。65535表示-1，-336表示为65200。 

	//%c打印336时，它只会查看存储336的2字节中的最后1字节。
	//这种截断相当于用一个整数初一256，只保留其余数，余数为80，对应的ASCII值为'P'。
	return 0;
}