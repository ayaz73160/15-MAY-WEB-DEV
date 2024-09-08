// 11. Find Circumference of square formula : a = 4 * a

#include<stdio.h>
int main()
{
	float side,area;
	float circumference;
	
	printf("Enter The Side of Square:- ");
	scanf("%f",side);
	
	area = side*side;
	
	circumference = 4 * area;
	
	printf("Area of the Square:- %f\n",area);
	printf("The Circumference of the Square:- %f\n",circumference);

	
	return 0;
}
