// 13. calculate the Factorial of a Given Number using while loop

#include<stdio.h>
int main()
{
	int n,fact=1,i=1;
	
	printf("Enter number to check the factorial number: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact = fact*i;
		i++;
	}
	
	printf("%d = %d\n",n,fact);
	
	return 0;
}
