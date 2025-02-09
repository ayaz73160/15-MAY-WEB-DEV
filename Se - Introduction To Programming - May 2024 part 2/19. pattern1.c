/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int i,j,rows,space;
	
	printf("Enter the number of rows:- ");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
				{
					printf("1 ");
				}
				else
				{
					printf("0 ");
				}
		}
		printf("\n");
	}
	return 0;
}
