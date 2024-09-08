// 7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>
int main()
{
	int rev,n,rem = 0;
	
	printf("Enter the number:- ");
	scanf("%d",&n);
	int copy = n;
	
	while(n!=0)
	{
		rem = n%10;
		rev = (rev*10) + rem;
		n = n/10;
	}
	
	printf("\nOriginal Number :- %d",copy);
	printf("\nreversed Number :- %d",rev);
	
	return 0;
}
