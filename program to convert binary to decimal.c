//binary to decimal
#include<stdio.h>
int main()
{
	int i=0,a[1000],bin_num,dec_num=0, next=1;
	printf("Enter the bin num: ");
	scanf("%d",&bin_num);
	while(bin_num>0)
	{
		a[i] = bin_num % 10;
		if(a[i]==1)
		{
		dec_num = dec_num + a[i]*next;
		}
		bin_num = bin_num / 10;
		next = next*2;
		i++;
	}
	printf("decimal number is: %d",dec_num);
	return 0;
}
