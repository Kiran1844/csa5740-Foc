//summing up digits from number
#include<stdio.h>
int main()
{
	int x,sum=0,i=0;
	printf("Enter the number: ");
	scanf("%d",&x);
	while(x!=0)
	{
		sum = sum + (x%10);
		x = x/10;
	}
	printf("\nSum: %d",sum);
}
