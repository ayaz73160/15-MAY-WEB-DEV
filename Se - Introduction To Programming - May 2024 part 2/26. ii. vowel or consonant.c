// 26. WAP to show
// ii. Vowel or Consonant using switch case

#include<stdio.h>
int main()
{
	char ch;
	int vowel;
	
	printf("Enter character:- ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			vowel = 1;
			break;	
	}
	if (vowel)
	{ 
        printf("%c is a vowel character", ch);
	}
	else
	{
        printf("%c is a consonant character", ch);
	}
	
	return 0;
}

