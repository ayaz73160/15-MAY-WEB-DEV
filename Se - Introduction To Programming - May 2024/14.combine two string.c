// 14. Write a program in C to combine two string manually.
#include<stdio.h>
#include<string.h>
void concatstr(char result[],char str1[],char str2[])
{
	int i=0,j=0;
	
	while(str1[i] != '\0')
	{
		result[i] = str1[i];
		i++;
	}
	
	while(str2[j] != '\0')
	{
		result[i] = str2[j];
		j++;
		i++;
	}
	
	result[i] = '\0';
}

int main()
{
	char str1[100], str2[100], result[200];
	
	printf("\nEnter the First String :- ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	
	printf("\nEnter the First String :- ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';
	
	concatstr(result, str1, str2);
	
	printf("\nThe Combined String is :- %s",result);
}
