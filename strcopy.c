#include<stdio.h>

int str_len(char *str1, char *str2)
{
	int i;
	for(i = 0;str1[i] != '\0';i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = '\0';
}
int main()
{
	char str1[50], str2[50];
	printf("Enter the string: ");
	scanf("%s", str1);
	str_len(str1, str2);
	printf("Cpoied string is %s\n", str2);
}
