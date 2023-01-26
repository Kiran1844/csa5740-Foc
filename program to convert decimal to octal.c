//decimal to octal
#include<stdio.h>
int main()
{
	int oct[1000],dec=0,num,i=0,rem=0;
	printf("Enter the num: ");
	scanf("%d",&num);
	while(num!=0)
	{
		oct[i] = num % 8;
		num = num / 8;
		i++;
	}
	int k=i;
	for(i=k-1;i>=0;i--)
	{
		printf("%d",oct[i]);
	}
	return 0;
}
