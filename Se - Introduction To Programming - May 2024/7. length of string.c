// 7. WAP Find out length of string without using inbuilt function

#include<stdio.h>
int main()
{
	char n[50],i;
	int length;
	printf("\n Enter the name :- ");
	gets(n);
	printf("\n Original string :- %s",n);
	
	for(i=0;n[i]!='\0';i++)
	{
		length++;
	}
	
	printf("\n length of string is :- %d",length);
	return 0;
}
