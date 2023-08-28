#include<stdio.h>

void add(int row, int col, int(*arr1)[col], int(*arr2)[col])
{
	int arr3[row][col];
	for(int i = 0;i < row;i++)
	{
		for(int j=0;j<col;j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf("After adding:\n");
	for(int i = 0;i < row;i++)
	{
		for(int j = 0;j < col;j++)
		{
			printf("%d ", *(*(arr3+i)+j));
		}
		printf("\n");
	}
}

int main() 
{
	int row1, col1, row2, col2;
	printf("Enter row value: ");
	scanf("%d", &row1);
	printf("Enter column value: ");
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
	printf("Enter row value: ");
	scanf("%d", &row2);
	printf("Enter column value: ");
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
	if(row1 == row2 && col1 == col2)
	{
		add(row1, col1, arr1, arr2);
	}
	else
	{
		printf("Addition not possible\n");
	}
}
