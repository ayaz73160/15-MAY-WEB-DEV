// 10.Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
#include<stdio.h>
int main()
{
	int num,sum=0,firstdigit,lastdigit;
	
	printf("\n Enter the num :- ");
	scanf("%d",&num);
	
	lastdigit = num%10;
	
	
	firstdigit = num;
	while(num >= 10)
	{
		num /= 10;
	}
	
	firstdigit = num;
	
	sum = firstdigit + lastdigit;
	
	printf("Sum of the firstdigit and lastdigit :- %d\n",sum);
	
	return 0;
}
