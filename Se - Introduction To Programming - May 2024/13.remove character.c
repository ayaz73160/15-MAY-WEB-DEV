// 13. Write a program in C to remove charactes from string except alphabets.

#include <stdio.h>

int main() 
{
    char line[150];
    int i,j;
    
    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin);

    for (i = 0; line[i] != '\0'; i++) 
	{
        while(!(line[i]>='a'&&line[i]<='z')&&!(line[i]>='A'&&line[i]<='Z')&&!(line[i]=='\0'))
		{
            for (j = i; line[j] != '\0'; j++) 
			{
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }

    printf("Output String: %s", line);
    return 0;
}

