#include "main.h"
#include <stdio.h>

/**
 * natural - Prints the sum of multples of 3 or 5 below 1024
 *
 * Return: sum of the multiples
 */
int natural(void)
{
	int i, n;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n = n + i;
		}
	}
	printf("%d\n", n);
	return (n);
}
