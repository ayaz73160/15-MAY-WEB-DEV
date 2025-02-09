// 20. Write a program in C to read any Month Number in integer and display the number of days for this month.

#include<stdio.h>
int main()
{
	int monthno;
	printf("Enter The month number:- ");
	scanf("%d",&monthno);
	
	switch(monthno)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("In This months is 31 days");
			break;
			
		case 2:
			printf("In This month is 28 days\n");
			printf("In The leap year as 29 days");
			break;
			
		case 4: case 6: case 9: case 11:
			printf("In This months is 30 days");
			break;	
			
		default:
			printf("invalid month");
			break;		
	}
	
	return 0;
}
