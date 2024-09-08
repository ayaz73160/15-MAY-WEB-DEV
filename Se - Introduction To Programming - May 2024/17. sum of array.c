#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
	if(*str)
	{
		reverse(str + 1);
		printf("%c", *str);
	}
	
}

int main()
{
	char str[100];
	
	printf("Enter the string :- ");
	fgets(str,sizeof(str),stdin);
	
	str[strcspn(str,"\n")] 	= '\n';
	
	printf("Reverse String :- ");
	reverse(str);
	printf("\n");
	
	return 0;
}
