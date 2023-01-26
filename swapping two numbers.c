//swapping two numbers
#include<stdio.h>
int main()
{
	int num1, num2, x;
	printf("enter num1: ");
	scanf("%d",&num1);
	printf("enter num2: ");
	scanf("%d",&num2);
	x=num1;
	num1=num2;
	num2=x;
	printf("After Swapping\n");
	printf("num1 value is: %d\n",num1);
	printf("num2 value is: %d",num2);
	return 0;
}
