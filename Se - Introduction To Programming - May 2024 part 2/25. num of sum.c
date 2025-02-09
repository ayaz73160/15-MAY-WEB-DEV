// 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
int main()
{
	int n,sum;
	
	printf("Enter the number :- ");
	scanf("%d",n);
	
	sum = (n * (n + 1) * (2 * n + 1)) / 6 + (n * (n + 1)) / 2;
	
	printf("Sum of the series :- %d\n", sum);
    return 0;
}
