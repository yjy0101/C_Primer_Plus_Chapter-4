#include<stdio.h>
#define PI 3.14159
//const float PI = 3.14159和#define 都是用来定义常量的，前者更加灵活 
int main(void)
{
	float area, circum, radius;

	printf("What is the radius of your pizza?\n");
	scanf_s("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("Your basic pizza parameters are as follows:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);

	return 0;
}