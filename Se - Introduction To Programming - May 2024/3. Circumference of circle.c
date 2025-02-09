// 3. WAP to Find Area And Circumference of circle

#include <stdio.h>

int main() 
{
    int r;
    float pi=3.14,area,circumference;

    printf("Enter radius of circle: ");
    scanf("%d",&r);

    area=pi*r*r;
    circumference=2*pi*r;

    printf("The area of circle is:- %f\n",area);
    printf("The circumference of circle is:- %f\n",circumference);

    return 0;
}

