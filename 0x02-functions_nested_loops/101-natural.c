#include <stdio.h>

/**
 * main - starting point of file execution
 *
 * Return: sum of the multiples
 */
int main(void)
{
	int i, n;

	n = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n = n + i;
		}
	}
	printf("%d\n", n);
	return (0);
}
