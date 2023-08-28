#include<stdio.h>

void swap(int *arr1, int *arr2, int size)
{
	int temp;
	for(int i = 0;i < size;i++)
	{
		temp = *(arr1+i);
		*(arr1+i) = *(arr2+i);
		*(arr2+i) = temp;
	}
}

void print(int *arr1, int *arr2, int size)
{
	printf("After swapping, Array1 elements: ");
	for(int i = 0;i < size;i++)
	{
		printf("%d ", *(arr1+i));
	}
	printf("\nAfter swapping, Array2 elements: ");
	for(int i = 0;i < size;i++)
	{
		printf("%d ", *(arr2+i));
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
	printf("Enter array1 elements: ");
	for(int i = 0;i < size;i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Enter array2 elements: ");
	for(int i = 0;i < size;i++)
	{
		scanf("%d", &arr2[i]);
	}
	swap(arr1, arr2, size);
	print(arr1, arr2, size);
}
