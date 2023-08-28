#include<stdio.h>

void print(int row, int col, int (*arr)[col])
{
	printf("Array elements are:\n");
	for(int i = 0;i < row;i++)
	{
		for(int j = 0;j < col;j++)
		{
			printf("%d ", *(*(arr+i)+j));
		}
		printf("\n");
	}
}
int main() 
{
	int row, col;
	printf("Enter row value: ");
	scanf("%d", &row);
	printf("Enter column value: ");
	scanf("%d", &col);
	int arr[row][col];
	printf("Enter array elements:\n");
	for(int i = 0;i < row;i++)
	{
		for(int j = 0;j < col;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	print(row, col, arr);
}
