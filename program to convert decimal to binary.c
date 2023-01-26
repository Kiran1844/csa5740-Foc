//decimal to binary
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,num,a[100];
	scanf("%d",&num);
	while(num>=1 && num>0)
	{
		a[i] = num % 2;
		num = num / 2;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
