#include<stdio.h>
int main()
{
	int n,i,term;
	
	printf("Enter the number of term :- ");
	scanf("%d",&n);
	
	printf("Sequence:- ");
	for(i=1;i<=n;i++)
	{
		printf("\t%d",term);
		if(i%2==0){
			term = term * 3/2;
		}
		else{
			term = term * 2;
		}
	}
	
	return 0;
}
