/*
Series Program:
24. 1 + 2 + 3 + 4 + 5 + ... + n
*/
#include <stdio.h>

int main() 
{
    int n,sum = 0,i;

    printf("Enter the number :- ");
    scanf("%d", &n);

    for(i=1;i<=n;i++) 
	{
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d\n",n,sum);
    
	return 0;
}

