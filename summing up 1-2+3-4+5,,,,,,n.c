//summing 1-2+3-4+5....n series upto n
#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Enter: ");
	scanf("%d",&n);    // gets n as input
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			sum = sum - i;
		}
		else
		{
			sum = sum + i;
		}
	}
	printf("Sum : %d",sum);
	return 0;
}
