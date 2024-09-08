//  6. Find the Character Is Vowel or Not
#include<stdio.h>
int main()
{
	char c;
    int vowel;

    printf("Enter an alphabet:- ");
    scanf("%c", &c);


    vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');


	if (vowel) 
	{
        printf("This is a Vowel alphabet\n", c);
    }
	else 
	{
        printf("This is not Vowel alphabet\n", c);
	}
	
	
	return 0;
}
