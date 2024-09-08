// 7. Write a program in C to copy one string to another string.

#include<stdio.h>

int main()
{
	char source[100], destination[100];
	int i = 0;
	
	printf("Ente the source string :- ");
	gets(source);
	
	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	
	printf("\nCopied String :- %s",destination);
	
	return 0;
}
