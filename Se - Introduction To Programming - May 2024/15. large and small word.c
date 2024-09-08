// 15. Write a program in C to find the largest and smallest words in string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char word[100]; 
    char mx[100];   
    char mn[100];   

    int i = 0, j = 0, flg = 0;

    while (i < strlen(str)) 
	{
        while (i < strlen(str) && !isspace(str[i]) && isalnum(str[i]))  
		{
            word[j++] = str[i++];
        }

        if (j != 0) 
		{
            word[j] = '\0';

            if (!flg) 
			{
                flg = 1;
                strcpy(mx, word);
                strcpy(mn, word);
            }

            if (strlen(word) > strlen(mx)) 
			{
                strcpy(mx, word);
            }

            if (strlen(word) < strlen(mn)) 
			{
                strcpy(mn, word);
            }

            j = 0;
        }
    }

    printf("The largest word is '%s' and the smallest word is '%s' in the string: '%s'.\n", mx, mn, str);
    return 0;
}

