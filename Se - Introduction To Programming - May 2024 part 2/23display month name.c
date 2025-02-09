// 23. Accept month number and display month name
#include<stdio.h>
int main()
{
	int monthno;
	
	printf("Enter the Month number:- ");
	scanf("%d",&monthno);
	
	switch(monthno)
	{
		case 1:
			printf("January");
			break;
		
		case 2:
			printf("February");
			break;
			
		case 3:
			printf("March");
			break;
			
		case 4:
			printf("April");
			break;
			
		case 5:
			printf("May\n");
			break;
			
		case 6:
			printf("June");
			break;
			
		case 7:
			printf("July");
			break;
			
		case 8:
			printf("August");
			break;
			
		case 9:
			printf("September");
			break;
			
		case 10:
			printf("October");
			break;
			
		case 11:
			printf("November");
			break;
			
		case 12:
			printf("December\n");
			break;							
			
		default:
			printf("invalid month number");
			break;	
	}
	
	
	return 0;
}
