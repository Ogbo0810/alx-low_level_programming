#include <stdio.h>

/**
 * main - starting point of programme execution
 *
 * Return: zero
 */

int main(void)
{
	int num;

	num = 0;

	while (num <= 10)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");
	return (0);
}
