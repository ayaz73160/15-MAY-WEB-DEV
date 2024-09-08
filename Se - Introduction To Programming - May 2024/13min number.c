// 13. WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>
int main()
{
	int min,n1,n2,n3;
	printf("Enter number 1:- ");
	scanf("%d",&n1);
	printf("Enter number 2:- ");
	scanf("%d",&n2);
	printf("Enter number 3:- ");
	scanf("%d",&n3);
	
	min = n3 < ((n1 < n2) ? n1 : n2) ? n3 : ((n1 < n2) ? n1 : n2);
	
	printf("The minmum number %d");
	
	return 0;
}
