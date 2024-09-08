#include<stdio.h>
int findmax(int arr[], int size)
{
	int max = arr[0],i;
	for(i=1;i<size;i++) 
	{
	    if (arr[i] > max) 
		{
    	    max = arr[i];
        }
    }
    return max;
}

int main()
{
	int n,i;
	
	printf("\nEnter the number of element in array:- ");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter element :- ");
		scanf("%d",&arr[i]);
	}
	
	int max = findmax(arr,n);
	
	printf("\nThe maximum number of array is :- %d",max);
	
	return 0;
}
