#include <stdio.h>

/**
 * main - starting point of file execution
 *
 * Return: zero
 */
int main(void)
{
	unsigned long int c, n, sum, i;

	c = 1;
	n = 2;

	printf("%lu, %lu, ", c, n);

	for (i = 3; i <= 50; i++)
	{
		sum = (c + n);
		printf("%lu", sum);
		if (i < 50)
		{
			printf(", ");
		}
		c = n;
		n = sum;
	}
	printf("\n");
	return (0);
}
