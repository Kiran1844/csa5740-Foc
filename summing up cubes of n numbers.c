//summing up cubes of n numbers
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i*i*i;
	}
	printf("%d",sum);
	return 0;
}
