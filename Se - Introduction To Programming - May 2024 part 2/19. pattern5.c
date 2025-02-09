// 14. Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>
int factorial(int num) 
{
    int fact=1,i;
    for (i=1;i<=num;i++) 
	{
        fact = fact * i;
    }
    return fact;
}

int main() 
{
    int numbers[5],i;

    for (i=0;i<5;i++) 
	{
    	printf("\nEnter five numbers :- ");
        scanf("%d",&numbers[i]);
    }

    for (i=0;i<5;i++) 
	{
        printf("\n Factorial of %d = %d\n",numbers[i],factorial(numbers[i]));
    }

    return 0;
}

