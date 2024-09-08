/*
5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice
*/
#include<stdio.h>
void array(int arr[],int size,int order)
{
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size;j++)
		{
			if((order == 1 && arr[i] > arr[j]) || (order == 2 && arr[i] < arr[j]))
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int printarray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}

int main()
{
	int size1,size2,order,i;
	
	printf("\nEnter the size of first array :- ");
	scanf("%d",&size1);
	int arr1[size1];
	
	for(i=0;i<size1;i++)
	{
		printf("\nEnter the element in first array :- ");
		scanf("%d",&arr1[i]);	
	}	
	
	printf("\nEnter the size of second array :- ");
	scanf("%d",&size2);
	int arr2[size2];
	
	for(i=0;i<size2;i++)
	{
		printf("\nEnter the element in second array :- ");
		scanf("%d",&arr2[i]);	
	}
	
	printf("\nEnter choice 1 is for accending order or 2 is for Descending order :- ");
	scanf("%d",&order);
	
	array(arr1,size1,order);
	array(arr2,size2,order);
	
	printf("\nFirst Array :- ");
	printarray(arr1,size1);
	printf("\nSecond Array :- ");
	printarray(arr2,size2);
	
	return 0;
}
