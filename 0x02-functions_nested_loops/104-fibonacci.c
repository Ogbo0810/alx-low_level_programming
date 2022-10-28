#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - starting point of file execution
 *
 * Return: zero
 */
int main(void)
{
	unsigned long int c, n, sum, i, h1, h2, h3, f1, f2;

	c = 1; /*current*/
	n = 2;/*next*/
	f1 = 0;
	f2 = 0;

	printf("%lu, %lu, ", c, n);

	for (i = 3; i <= 98; i++)
	{	sum = c + n;
		if (sum > LARGEST || f1 > 0 || f2 > 0)
		{
			h1 = sum / LARGEST;
			h2 = sum % LARGEST;
			h3 = sum + h1;
			f1 = f2;
			f2 = h3;
			c = n;
			n = h2;
			printf("%lu%010lu", f2, n);
		}
		else
		{
			h2 = sum;
			c = n
			n = h2;
			printf("%lu", n);
		}
		if (i < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
