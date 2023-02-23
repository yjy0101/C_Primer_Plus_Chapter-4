#include<stdio.h>			//可能遇到的问题解决方案链接：https://blog.csdn.net/weixin_51520483/article/details/123965668
#include<string.h>			//提供strlen()函数的原型
#define DENSITY 62.4		//人体密度（单位：磅/立方英尺）
int main()
{
	float weight, volume;
	int size, letters;
	char name[40];		//name 是一个可容纳40个字符的数组
	printf("Hi!What's your first name?\n");
	scanf_s("%s", name,40);		//使用%s转换说明来处理字符串的输入输出,为name添加字符串长度(40)的参数
								/*scanf_s("%s", name);对于变量name这个字符串，
								没有传入字符串长度的参数，因为在调用scanf_s()函数时，
								如果必须提供一个数字以表明最多读取多少位字符。
								比如：char d[20]；写成scanf_s("%s",d,20)；才是正确的，
								有这个参数20使准确性、安全性提高。*/
	name[40 - 1] = 0;		//手动在末尾加结束符 '\0'
	printf("%s,what's your weight in pounds?\n", name);
	scanf_s("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);			/*strlen 所作的是一个计数器的工作，它从内存的
									某个位置（可以是字符串开头，中间某个位置，甚
									至是某个不确定的内存区域）开始扫描，直到碰到第一个字符串结
									束符 '\0' 为止，然后返回计数器值(长度不包含'\0')。——百度百科*/
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n", name, volume); /*%2.2f意思就是宽度至少位2，小数点后面保存2位小数。
																		因为小数点后面保存了两位小数，所以宽度一定大于2，
																		所以%2.2f前面那个宽度限制就失效了！
																		因为宽度肯定超过2了，所以实际是好多宽度就输出多少宽度。*/
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);
	return 0;
}