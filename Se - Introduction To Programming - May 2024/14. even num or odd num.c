/*
14. WAP to accept 5 numbers from user and check entered number is even or odd
using of array
*/
#include<stdio.h>
int main()
{
	
	int i,n[5];
	
	for(i=0;i<5;i++)
	{
		printf("enter the number:-");
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(n[i]%2==0)
		{
			printf("\n%d is even",n[i]);
		}
		else
		{
			printf("\n%d is odd",n[i]);
		}
	}
	
	return 0;
}
