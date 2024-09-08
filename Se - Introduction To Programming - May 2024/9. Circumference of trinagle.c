// 9. Find Circumference of triangle formula : triangle = a + b + c

#include<stdio.h>
int main()
{
	int base,hight;
	
	printf("Enter Base of triangle:- ");
	scanf("%d",&base);
	
	printf("Enter Hight of triangle:- ");
	scanf("%d",&hight);
	
	float area,circumference;
	int a=5,b=10,c=15;
	
	area = base*hight;
	circumference = a + b + c;
	
	printf("area of a triangle:- %f\n",area);
	printf("The Circumference of the triangle :- %f\n",circumference);
	
	return 0;
}
