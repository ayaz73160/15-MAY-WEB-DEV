// 25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
int main()
{
	int n,sum = 0,i;
	
	printf("Enter the number :- ");
	scanf("%d",&n);
	
    for(i=1;i<=n;i++) 
	{
        sum += i * i;
    }
    
    printf("sum of series :- %d",sum);
    
    return 0;
    
}
