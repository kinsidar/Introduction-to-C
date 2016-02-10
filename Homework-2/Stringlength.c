#include <stdio.h>

int stringlength(char str[]);

int main()
{
	char str[] = "My string length is 22";

	printf ("The string length is %d ",  stringlength(str));
}

int stringlength(char str[])
{
	int count = 0, i = 0;
	for (i; str[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}
