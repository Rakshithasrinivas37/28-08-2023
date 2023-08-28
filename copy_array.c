#include<stdio.h>

void copy(int *arr1, int *arr2, int size)
{
	for(int i = 0;i < size;i++)
	{
		arr2[i] = arr1[i];
	}
}

void print(int *arr2, int size)
{
	printf("The copied array elements are: ");
	for(int i = 0;i < size;i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}
int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d", &size);
	int arr1[size];
	int arr2[size];
	printf("Enter array elements: ");
	for(int i = 0;i < size;i++)
	{
		scanf("%d", &arr1[i]);
	}
	copy(arr1, arr2, size);
	print(arr2, size);
}
