// 22. WAP to input the week number and print week day.
#include<stdio.h>
int main()
{
	int weekno,TTS,MWF;
	printf("Enter the week number:- ");
	scanf("%d",&weekno);
	
	switch(weekno)
	{
		case 1:
			printf("Sunday");
			break;
		
		case 2:
			printf("Monday");
			break;
		
		case 3:
			printf("Tuesday");
			break;
		
		case 4:
			printf("Wednesday");
			break;
		
		case 5:
			printf("Thursday");
			break;
		
		case 6:
			printf("Friday");
			break;
		
		case 7:
			printf("Saturday");
			break;
		
		default:
			printf("invalid weekno");
			break;
	}
	
	
	return 0;								
}
