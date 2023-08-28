#include<stdio.h>

void search(int *ptr, int num, int size)
{
    int flag = 0, i = 0;
    for(i = 0;i < size;i++)
	{
		if(*ptr == num)
		{
			flag = 1;
			break;
		}
		ptr++;
	}
	if(flag == 1)
	{
		printf("Element %d found at position %d\n", num , i);
	}
	else
	{
		printf("Element not found\n");
	}
}

int main()
{
	int size, num, i, flag = 0;
	printf("Enter array size: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter array element: ");
	for(int i = 0;i < size;i++)
	{
		scanf("%d", &arr[i]);
	}
        printf("Enter the element to be searched: ");
	scanf("%d", &num);
	search(arr, num, size);
	
}