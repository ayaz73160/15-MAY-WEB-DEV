// 15.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main()
{
	int n,sum=0,count=1;
	
	
	while(count <= 10)
	{
		printf("\nEnter the number:- ");
		scanf("%d",&n);
		sum = sum + n;
		count++;
	}
	
	printf("\n sum of 10 numbers :- %d",sum);
	return 0;
}
