#include<stdio.h>


int main() 
{
	int row1, col1, row2, col2;
	printf("Enter row1 value: ");
	scanf("%d", &row1);
	printf("Enter column1 value: ");
	scanf("%d", &col1);
	int arr1[row1][col1];
	printf("Enter array elements:\n");
	for(int i = 0;i < row1;i++)
	{
		for(int j = 0;j < col1;j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	int (*ptr1)[col1] = arr1;
	printf("Enter row2 value: ");
	scanf("%d", &row2);
	printf("Enter column2 value: ");
	scanf("%d", &col2);
	int arr2[row2][col2];
	printf("Enter array elements:\n");
	for(int i = 0;i < row2;i++)
	{
		for(int j = 0;j < col2;j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	int (*ptr2)[col2] = arr2;
	int product[row1][col2];
	int sum = 0;
	if(row1 == col2 && row2 == col1)
	{
		for(int i = 0;i < row1;i++)
		{
			for(int j = 0;j < col2;j++)
			{
				for(int k = 0;k < row2;k++)
				{
					sum = sum + *(*(ptr1+i)+k) * *(*(ptr2+k)+j);
				}
				product[i][j] = sum;
				sum = 0;
			}
		}
	}
	else
	{
		printf("Cannot multiply\n");
		return 0;
	}
	printf("The elements are:\n");
	for(int i = 0;i < row1;i++)
	{
		for(int j=0;j<col2;j++)
		{
			printf("%d ", product[i][j]);
		}
		printf("\n");
	}
}
