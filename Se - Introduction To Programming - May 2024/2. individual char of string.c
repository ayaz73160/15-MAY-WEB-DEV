// 2. Write a program in C to separate individual characters from a string

#include<stdio.h>
int main()
{
	char str[100];
	int i = 0;
	
	printf("Enter a string :- ");
	fgets(str,sizeof(str),stdin);
	
	printf("The characters of the string are :- ");
	while(str[i]!='\0')
	{
		printf("\n%c",str[i]);
		i++;
	}
	
	return 0;
}
