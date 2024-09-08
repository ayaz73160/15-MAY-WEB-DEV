// 16. Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main()
{
	int num[5];
	int i,j,temp;
	
	for(i=0;i<5;i++)
	{
		printf("Enter the number :- ");
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(num[j] > num [j+1])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	printf("\nStore Array in Ascending order :- ");	
	for(i=0;i<5;i++)
	{
		printf("%d",num[i]);
	}
	
	printf("\n");
	
	return 0;
}
