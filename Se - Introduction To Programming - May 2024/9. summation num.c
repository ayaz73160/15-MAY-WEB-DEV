// 9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
int main()
{
	int n,sum = 0,i;
	
	printf("\n Enter The Number:- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	
	printf("\n sum = %d",sum);
	return 0;
}

