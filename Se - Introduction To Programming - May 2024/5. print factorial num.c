// 5. WAP to print factorial of given number 

#include<stdio.h>
int main()
{
	int n1,n2,i,j,fact=1;
	
	printf("\n Enter the number 1:- ");
	scanf("%d",&n1);
	printf("\n Enter the number 2:- ");
	scanf("%d",&n2);
	
	for(i=n1;i<=n2;i++)
	{
		
		fact = 1;
		for(j=1;j<=i;j++)
		{
			fact = fact * j;
		}
		printf("\n factorial of %d is %d",i,fact);
	}
	return 0;
}
