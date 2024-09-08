// 9. C Program to Check Uppercase or Lowercase or Digit or Special
// Character

#include<stdio.h>
int main()
{
	char c;
	printf("Enter a value:- ");
	scanf("%c",&c);
	
	if(c>='A' && c<='Z')
	{
		printf("Uppercase");
	}
	else if(c>='a' && c<='z')
	{
		printf("Lowercase");
	}
	else if(c>='0' && c<='9')
	{
		printf("Digit");
	}
	else
	{
		printf("Special symbol");
	}
	
	return 0;
}
