#include <stdio.h>

/**
 * main - starting point of file execution
 *
 * Return: zero
 */
int main(void)
{
	unsigned long int c, n, sum, i, e_sum;

	c = 1;
	n = 2;
	e_sum = 0;

	for (i = 3; i <= 50; i++)
	{
		sum = (c + n);
		if (sum <= 4000000 && sum % 2 == 0)
		{
			e_sum = e_sum + sum;
		}
		c = n;
		n = sum;
	}
	e_sum = e_sum + 2;
	printf("%lu\n", e_sum);
	return (0);
}
