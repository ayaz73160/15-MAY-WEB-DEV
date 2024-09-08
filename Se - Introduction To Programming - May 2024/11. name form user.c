// 11. Accept 5 names from user at run time.

#include<stdio.h>
int main()
{
	int name[5][50],i;
	
	printf("\n Enter the name:- ");
	
	for(i=1;i<5;i++)
	{
		printf("\n name %d :- ",i);
		scanf("%s",name[i]);
	}
	
	printf("\n Entered the following name :- ");
	
	for(i=1;i<5;i++)
	{
		printf("\n name %d :- %s",i,name[i]);
	}
	
	return 0;
}
