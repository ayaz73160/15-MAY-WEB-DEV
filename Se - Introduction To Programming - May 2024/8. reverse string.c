//8. WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],rev[100];
	int i,flag=0,len;
	
	printf("Etner the number :- ");
	gets(str);
	
	len = strlen(str);
	
	for(i=0;i<len;i++) 
	{
        rev[i] = str[len-i-1];
    }
	
	rev[len] = '\0';
	
	for(i=0;i<len;i++)
	{
		if(str[i] != rev[i])
		{
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
	{
		printf("\n %s The Number is Palindrome",str);
	}
	else
	{
		printf("\n %s The number is Not a Palindrom",str);
	}

	return 0;
}
