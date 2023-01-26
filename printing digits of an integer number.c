//printing digits from number
#include<stdio.h>
int main()
{
	int x;
	int c[100],i=0;
	printf("Enter the number: ");
	scanf("%d",&x);
	while(x!=0)
	{
		c[i] = x % 10;
		x = x/10;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d\t",c[i]);
	}

}
