#include<stdio.h>
int main()
{
	int a[1000],oct_num,dec_num=0,num,i=0,next=1;
	printf("Enter the oct_num: ");
	scanf("%d",&num);
	oct_num = num;
	while(oct_num!=0)
	{
		a[i]=oct_num % 10;
		oct_num = oct_num/10;
		dec_num = dec_num+ (a[i]*next);
		next = next*8;
		i++;
	}
	printf("%d",dec_num);
}
