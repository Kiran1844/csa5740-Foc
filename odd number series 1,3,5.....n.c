#include<stdio.h>
int main()
{
	int x=0,y=1,z,i,n;
	printf("Enter till: ");
	scanf("%d",&n);
	printf("%d\t%d\t",x,y);
	for(i=1;i<n-1;i++)
	{
		z=x+y;
		printf("%d\t",z);
		x=y;
		y=z;
		
	}
	return 0;
}
