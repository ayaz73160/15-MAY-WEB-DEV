// 8. Find Circumference of Rectangle formula : C = 4 * area
#include<stdio.h>

int main()
{
	int length,width;
	float area,Circumference;
	
	printf("Enter The Length of Rectangle :- ");
	scanf("%d",& length);
	
	printf("Enter The Width of Rectangle :- ");
	scanf("%d",& width);
	
	area = length * width;
	Circumference = 4 * area;
	
	printf("The Area of the Rectangle :- %f\n",area);
	printf("The Circumference of the Rectangle :- %f\n",Circumference);
	
	return 0;
}
