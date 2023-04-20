#include "main.h"

/**
* print_rev - prints a string in reverse followed by a new line
* @s: string to be printed in reverse
*
* Return: void
*/

void print_rev(char *s)
{
	int i, length;

	length  = sizeof(*s) - 1;
	char arr[length];

	arr[] = *s;

	for (i = sizeof(s); i > 0; i--)
	{
		printf("%s", arr[i]);
	}
	printf("\n");
}
