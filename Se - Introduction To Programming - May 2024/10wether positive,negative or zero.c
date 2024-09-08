// 10.WAP to check whether a number is negative, positive or zero
#include<stdio.h>
int main()
{
	int wether;
	printf("Enter Wether:- ");
	scanf("%d",&wether);
	
	if(wether>0)
	{
		printf("This is positive");
	}
	else if(wether<0)
	{
		printf("This is nagative");
	}
	else
	{
		printf("Both are same");
	}
	
	return 0;
}
