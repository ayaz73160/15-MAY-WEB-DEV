/*
22. Accept 3 numbers from user using while loop and check each numbers
palindrome
*/
#include<stdio.h>

int ispalindrome(int n)
{
	int temp = n,rev = 0,rem;
	
	while(n!=0)
	{
		rem = temp%10;
		rev = (rev*10)+rem;
		temp = temp/10;
	}
	
	return (n == rev);
}
int main()
{
	int n1,n2,n3;
	
	printf("\nEnter the number 1:- ");
	scanf("%d",&n1);
	
	printf("\nEnter the number 2:- ");
	scanf("%d",&n2);
	
	printf("\nEnter the number 3:- ");
	scanf("%d",&n3);

	if(ispalindrome(n1))
	{
		printf("\n%d is a palindrome number",n1);
	}
	else
	{
		printf("\n%d is not a palindrome number",n1);
	}
	
	if(ispalindrome(n2))
	{
		printf("\n%d is a palindrome number",n2);
	}
	else
	{
		printf("\n%d is not a palindrome number",n2);
	}
	
	if(ispalindrome(n3))
	{
		printf("\n%d is a palindrome number",n3);
	}
	else
	{
		printf("\n%d is not a palindrome number",n3);
	}
	return 0;		
}
