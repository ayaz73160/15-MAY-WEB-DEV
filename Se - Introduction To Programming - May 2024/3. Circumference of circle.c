// 3. WAP to Find Area And Circumference of circle

#include <stdio.h>

int main() 
{
    int r;
    float pi=3.14,area,circumference;

    printf("Enter the radius of the circle:- ");
    scanf("%d",&r);

    area=pi*r*r;
    circumference=2*pi*r;

    printf("The Area of the circle is:- %f\n",area);
    printf("The Circumference of the circle is:- %f\n",circumference);

    return 0;
}

