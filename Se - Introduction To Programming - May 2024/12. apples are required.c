// 12. Accept number of students from user.I need to give 5 apples to each student. How many apples are required ?
 
#include<stdio.h>
int main()

{
	int student,apple;
	
	printf("Enter the number of the Student:-");
	scanf("%d",&student);
	
	apple = student * 5;
	
	printf("number of a Apples are required:- %d",apple);
	
	return 0;
}
