// 6. WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
	int range,n1,n2,n3,i;
	
	printf("Enter the numbers :- ");
	scanf("%d",&range);
	
	printf("%d %d",n1,n2);
	
	for(i=1;i<=range;i++)
	{
		n3 = n1 + n2;
		printf("%d ",n3);
		n1 = n2;
		n2 = n3;
		
	}
	
	return 0;
}
