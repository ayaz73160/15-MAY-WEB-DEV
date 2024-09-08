// 9. Write a program in C to find the maximum number of charcters in a string.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int frequency[256] = {0};
	int i,max = 0;
	char maxchar;
	
	printf("\nEnter the string :- ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		frequency[(int)str[i]]++;
	}
	
	for(i=0;str != '\0';i++)
	{
		if(frequency[(int)str[i]] > max)
		{
			max = frequency[(int)str[i]];
			maxchar = str[i];
		}
	}
	
	printf("\nThe maximum occurring character is '%c' with a frequency of %d.",maxchar,max);
	
	return 0;
}
