// 15. Convert school’s name in abbreviated form

#include<stdio.h>
#include<string.h>
int main()
{
	char schname[200],abr[20];
	int i,j=0;
	printf("\nEnter the school name:- ");
	gets(schname);
	
	int length = strlen(schname);
	if(schname[length-1] == '\n')
	{
		schname[length-1] = '\0';
	}
	
	i=0;
	
	while(schname[i]!='\0')
	{
		if((i==0 || schname[i-1]==' ') && schname[i]!=' ')
		{
			abr[j] = toupper(schname[i]);
			j++;
		}
		i++;
	}
	
	printf("\n Original school name :- %s",schname);
	printf("\n Abbriviated school name:- %s",abr);	
	return 0;
}
