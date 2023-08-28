#include<stdio.h>

int str_len(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char str[50];
	printf("Enter the string: ");
	scanf("%s", str);
	int len = str_len(str);
	printf("String length is = %d\n", len);
}
