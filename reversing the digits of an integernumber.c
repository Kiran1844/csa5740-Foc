//reversing digits in a number
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
	int z = i;     // z is used to store i value to use in for loop.
 	for(i=0;i<z;i++)
	{
		printf("%d\t",c[i]);
	}

}
