// 8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)


#include<stdio.h>
int main()
{
	int n,maxn,digit;
	
	printf("Enter the number :- ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		digit = n%10;
		if(digit<maxn)
		{
			maxn = digit;
		}
		n = n/10;
	}
	
	printf("\n The Maximum number is %d ",maxn);
	return 0;
}
