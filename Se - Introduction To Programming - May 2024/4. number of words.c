// 4. Write a program in C to count the total number of words in a string

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100]; 
    int i, words = 0;
    int inWord = 0; 

    printf("Enter a Name :- ");
    fgets(str, sizeof(str), stdin); 

    for (i=0;str[i]!='\0';i++)
	{
        if (str[i]==' '||str[i]=='\n'||str[i]=='\t') 
		{
            inWord = 0; 
        } 
		else if (!inWord) 
		{
            inWord = 1; 
            words++; 
        }
    }

    printf("Total Number of Words: %d\n", words);

    return 0; 
}
