/*
6. WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array
*/

#include<stdio.h>
int main()
{
	int i,j,k,a[100][100],b[100][100],sum[100][100],sub[100][100],mul[100][100],div[100][100],row,col,choice;

	printf("Enter the row:- ");	
	scanf("%d",&row);

	printf("Enter the col:- ");
	scanf("%d",&col);

	printf("\nEnter 1 is for addition:- ");
	printf("\nEnter 2 is for subtraction:- ");
	printf("\nEnter 3 is for multiplication:- ");
	printf("\nEnter 4 is for divition:- ");
	printf("\nEnter the choice:- ");
	scanf("%d",&choice);
	
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		printf("\nEnter the element in a[%d][%d]:- ",i,j);
		scanf("%d",&a[i][j]);
	}
}

for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		printf("\nEnter the element in b[%d][%d]:- ",i,j);
		scanf("%d",&b[i][j]);
	}
}
switch(choice)
{
	case 1:
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				sum[i][j] = a[i][j] + b[i][j];
			}
		}

		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d ",sum[i][j]);
			}
			printf("\n");
		}
		break;
		
	case 2:
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				sub[i][j] = a[i][j] - b[i][j];
			}
		}

		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d ",sub[i][j]);
			}
			printf("\n");
		}
		
		break;
	case 3:
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				mul[i][j] = 0;
				for(k=0;k<col;k++)
				{
					mul[i][j] = mul[i][j] + (a[i][k]*b[k][j]); 
				}
			}
		}

		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d ",mul[i][j]);
			}
			printf("\n");
		}
		break;
		
	case 4:
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				div[i][j] = a[i][j] / b[i][j];
			}
		}

		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d ",div[i][j]);
			}
			printf("\n");
		}
		break;			
}
	
	return 0;
}
