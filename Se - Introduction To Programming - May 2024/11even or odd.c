// 11.WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
	int ans,num,odd,even;
	
	printf("Enter the number:- ");
	scanf("%d",&num);
	
	ans=(num%2==0)?printf("even"):printf("odd");

	if(ans==0)
	printf("number is even");
	else
	printf("number is odd");
	return 0;
}
