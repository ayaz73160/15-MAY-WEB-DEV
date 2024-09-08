// 14. WAP to find the largest of three numbers.
#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter A:- ");
	scanf("%d",&a);
	printf("Enter B:- ");
	scanf("%d",&b);
	printf("Enter C:- ");
	scanf("%d",&c);
	
	if(a > b && a > c)
	{
		printf("largest number %d",a);
	}
	else if(b > a && b > c)
	{
		printf("largest number %d",b);	
	}
	else
	{
		printf("largest number %d",c);
	}
	
	return 0;
}
