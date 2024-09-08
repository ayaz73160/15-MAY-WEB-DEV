// 5. Write a program in C to compare two strings without using string library function.

#include<stdio.h>

int comparestring(char *str1,char *str2)
{
	int i=0;
	
	while(str1[i] != '\0' && str2[i] != '\0')
	{
		if(str1[i] != str2[1])
		{
			break;
		}
		i++;
	}
	return str1[i] - str2[i];
}

int main()
{
	char str1[100],str2[100];
	int result;
	
	printf("\nEnter the First string :- ");
	gets(str1);
	printf("\nEnter the Second string :- ");
	gets(str2);
	
	result = comparestring(str1,str2);
	
	if(result == 0)
	{
		printf("\nString are equal.");
	}
	else if(result > 0)
	{
		printf("\nFirst String is Greater than the Second String.");
	}
	else
	{
		printf("\nFirst String is less than the Second String.");
	}
	
	return 0;
}
