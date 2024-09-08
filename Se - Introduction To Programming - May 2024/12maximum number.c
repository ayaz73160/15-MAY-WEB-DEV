// 12. WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
	int max,n1,n2,n3;
	
	printf("Enter number one:- ");
	scanf("%d",&n1);
	
	printf("Enter number two:- ");
	scanf("%d",&n2);
	
	printf("Enter number Three:- ");
	scanf("%d",&n3);
	
	max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
	
	printf("The maximum number among %d",max);
	
	return 0;
}
