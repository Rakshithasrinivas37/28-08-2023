#include<stdio.h>

void reverse(int *arr, int size)
{
	int temp;
	for(int i = 0;i < size/2;i++)
	{
		temp = *(arr+i);
		*(arr+i) = *(arr+(size-1-i));
		*(arr+(size-1-i)) = temp;
	}
}

void print(int *arr, int size)
{
	printf("Reversed array elements are: ");
	for(int i = 0;i < size;i++)
	{
		printf("%d ", *(arr+i));
	}
	printf("\n");
}

int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter array elements: ");
	for(int i = 0;i < size;i++)
	{
		scanf("%d", &arr[i]);
	}
	reverse(arr, size);
	print(arr, size);
}
