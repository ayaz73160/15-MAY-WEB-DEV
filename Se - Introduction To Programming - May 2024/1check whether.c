// 1. Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>
int main()
{
	int a,b,whether;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("They are equal");
	}
	else
	{
		printf("They are not equal");
	}
	
	return 0;
}
