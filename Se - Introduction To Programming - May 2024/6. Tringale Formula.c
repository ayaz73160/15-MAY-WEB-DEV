// 6. Find the area of triangle Formula:A = 1/2*b*h

#include<stdio.h>
int main()
{
	float base,hight;
	printf("Enter Base of triangle:-");
	scanf("%f",&base);
	printf("Enter hight of triangle:-");
	scanf("%f",&hight);
	float area;
	
	area=0.5*base*hight;
	printf("area of the triangle:-%f",area);
	
	return 0;
}
