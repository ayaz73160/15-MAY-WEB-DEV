// 3. Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,length;
	
	printf("Enter a string :- ");
	fgets(str,sizeof(str),stdin);
	
	length = strlen(str);
	
	printf("The characters of the string reverse order are :- ");
	for(i=length-1; i>=0; i--)
	{
		printf("\n%c", str[i]);
	}
	
	return 0;
}
