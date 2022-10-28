#include <stdio.h>

/**
 * main - starting point of file execution
 *
 * Return: zero
 */
int main(void)
{
	unsigned int c, n, sum, i;

	c = 1;
	n = 2;

	printf("%d, %d, ", c, n);

	for (i = 3; i <= 50; i++)
	{
		sum = (c + n);
		printf("%u", sum);
		if (i < 50)
		{
			printf(", ");
		}
		c = n;
		n = sum;
	}
	return (0);
}
