/*
 ============================================================================
 Name        : CS2650_Hw3_ReverseArray.c
 Author      : Robert Delfin
 ============================================================================
 */

 #include<stdio.h>

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
	int temporary;
	while (start < end)
	{
		temporary = arr[start];
		arr[start] = arr[end];
		arr[end] = temporary;
		start++;
		end--;
	}
}

/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
	int colum;
	for (colum=0; colum < size; colum++)
	{
	printf("%d ", arr[colum]);
	}
	printf("\n");
}

/* Driver function to test above functions */
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	printArray(arr, 6);
	rvereseArray(arr, 0, 5);
	printf("Reversed array is \n");
	printArray(arr, 6);
	return 0;
}
