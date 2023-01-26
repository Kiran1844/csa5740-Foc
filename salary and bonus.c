#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char grade;
	float salary, bonus, to_be_paid;
	printf("Enter grade: ");
	scanf("%c",&grade);
	printf("Enter salary of the emp: ");
	scanf("%f",&salary);
	if(grade=='A')
	{
		bonus=5;
		if(salary<10000)
		{
			bonus+=2;
			to_be_paid = salary + (salary*(bonus/100));
			printf("Salary to be paid: %.2f",to_be_paid);
		}
		else
		{
			to_be_paid = salary + (salary*(bonus/100));
			printf("Salary to be paid: %.2f",to_be_paid);
		}
	}
	else if(grade=='B')
	{
		bonus=10;
		if(salary<10000)
		{
			bonus+=2;
			to_be_paid = salary + (salary*(bonus/100));
			printf("Salary to be paid: %.2f",to_be_paid);
		}
		else
		{n
			to_be_paid = salary + (salary*(bonus/100));
			printf("Salary to be paid: %.2f",to_be_paid);
		}
	}
}
