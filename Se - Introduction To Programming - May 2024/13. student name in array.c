// 13. 12.WAP to accept 5 students name and store it in array 
#include<stdio.h>
int main()
{
	char name[5][50];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter the student name :- ",i+1);
		scanf("%s",name[i]);	
	}
	
//	printf("\nThe name of student is :-");
	for(i=0;i<5;i++)
	{
		printf("\nThe name of student is :-");
		printf("%s",name[i]);
	}
	
	return 0;
}
