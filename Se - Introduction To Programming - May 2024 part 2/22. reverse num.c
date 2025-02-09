// 23. C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
int main()
{
	int n,rev = 0,rem,i;
	
	printf("Enter the number here :- ");
	scanf("%d",&n);
	int copy = n;
	
	for(i=n;n!=0;n/=10)
	{
		rem = n % 10;
        rev=(rev*10)+rem;
	}
	
	printf("\n Original number = %d",copy);
	printf("\n Reversed number = %d",rev);
	
	return 0;	
}
