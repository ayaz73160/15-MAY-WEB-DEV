#include <stdio.h>

void asc_sort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++) 
	{
        for (j = i + 1; j < size; j++) 
		{
            if (arr[i] > arr[j])
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


int main() 
{
    int arr1[100], arr2[100];
    int size1, size2, i;

    printf("Enter size of first array: ");
    scanf("%d", &size1);
    for (i = 0; i < size1; i++) 
	{
		printf("Enter elements for first array: ");
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);
    for (i = 0; i < size2; i++) 
	{
		printf("Enter elements for second array: ");
        scanf("%d", &arr2[i]);
    }

    asc_sort(arr1, size1);
    asc_sort(arr2, size2);
    
	printf("\nFirst array in ascending order: ");
    for (i = 0; i < size1; i++) 
	{
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array in ascending order: ");
    for (i = 0; i < size2; i++) 
	{
        printf("%d ", arr2[i]);
    }

    return 0;
}

