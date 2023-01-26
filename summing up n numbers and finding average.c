//summing up any n numbers and finding average
#include<stdio.h>
int main()
{
	int a[1000],i,n,avg,sum=0;
	printf("How many numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the %d number: ",i);
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	avg = sum/n;
	printf("Average: %d",avg);
	return 0;
}
