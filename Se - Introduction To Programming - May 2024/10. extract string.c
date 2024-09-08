// 10. Write a program in C to extract a substring from a given string.
#include<stdio.h>
#include<string.h>

void substring(char source[],char destination[],int start,int length)
{
	int i = 0;
	for(i=0;i < length && (start + i) < strlen(source);i++)
	{
		destination[i] = source[start + i];
	}
	destination[i] = '\0';
}
int main()
{
	char str[100],substr;
	int start,length;
	
	printf("\nEnter the string :- ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	
	printf("\nEnter the starting index :- ");
	scanf("%d",&start);
	
	printf("\nEnter the length of the substring :- ");
	scanf("%d",&length);
	
	substring(str, substr, start, length);
	
	printf("\nExtracted substring :- %s",substr);
	
	return 0;
	
}
