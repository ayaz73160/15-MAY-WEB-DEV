// 9. Find Circumference of triangle formula : triangle = a + b + c

#include<stdio.h>
int main()
{
	int base,height;
	
	printf("Enter base of triangle:- ");
	scanf("%d",&base);
	
	printf("Enter Height of triangle:- ");
	scanf("%d",&height);
	
	float area,circumference;
	int a=5,b=10,c=15;
	
	area = base*height;
	circumference = a + b + c;
	
	printf("area of a triangle:- %f\n",area);
	printf("The Circumference of the triangle :- %f\n",circumference);
	
	return 0;
}
