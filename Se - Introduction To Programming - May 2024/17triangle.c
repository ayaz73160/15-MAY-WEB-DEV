// 17. Write a C program to check whether a triangle can be formed with the given values for the angles
#include<stdio.h>
int main()
{
	int angle1,angle2,angle3,sum;
	printf("Enter angle 1:- ");
	scanf("%d",&angle1);
	printf("Enter angle 2:- ");
	scanf("%d",&angle2);
	printf("Enter angle 3:- ");
	scanf("%d",&angle3);
	
	sum = angle1 + angle2 + angle3;
	
	if(sum == 180)
	{
		printf("Triangle is valid.");
	}
	else
	{
		printf("Trinagle is  invalid.");
	}
	
	return 0;
}
