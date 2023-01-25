//summing up squares of odd numbers
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter till where: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum+=i*i;
		}
	}
	printf("%d",sum);
	return 0;
}
