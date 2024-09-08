// 12. Write a program in C to find the number of times a given words 'is' appears in the given string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char str[]) 
{
	int i;
    for (i = 0; str[i]; i++) 
	{
        str[i] = tolower(str[i]);
    }
}

int main() 
{
    char str[200];
    char word[] = "is";
    int count = 0;
    char *ptr;

    printf("\nEnter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    toLowerCase(str);
    toLowerCase(word);

    ptr = strstr(str, word);  

    while (ptr != NULL)
	{
        if ((ptr == str || !isalnum((ptr - 1))) && !isalnum((ptr + strlen(word)))) 
		{
            count++;
        }
        ptr = strstr(ptr + 1, word);  
    }

    printf("\nThe word 'is' appears %d time(s) in the sentence.", count);

    return 0;
}
