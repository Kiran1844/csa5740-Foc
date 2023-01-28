#include<stdio.h>
int main()
{
	int n,i,x=0;
	printf("enter n: ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{	
			x=0;
		}
		else
		{
			x=1;
		}
	}
	if(x==0)
	{
		printf("not prime");
	}
	else if(x==1)
	{
		printf("prime");
	}
	return 0;
}
