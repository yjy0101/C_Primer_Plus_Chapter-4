#include<stdio.h>
int main(void)
{
	char name[40];
	
	printf("Enter your name:");
	scanf_s("%s", name, 40);
	name[40 - 1] = 0;

	float cash;
	printf("Enter your cash:");
	scanf_s("%f", &cash);

	printf("The %s family just may be $%.2f richer!\n", name, cash);

	return 0;
}