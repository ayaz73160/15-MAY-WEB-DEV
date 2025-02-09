// 5. Check Number Is Positive or Negative
#include<stdio.h>
int main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("This is a positive number");
	}
	else
	{
		printf("This is a negative number");
	}
	
	return 0;
}
