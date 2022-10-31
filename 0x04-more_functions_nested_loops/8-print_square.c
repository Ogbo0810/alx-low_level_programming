#include "main.h"

/**
* print_square - prints a square
* @size: size of the square
*
* Return: void
*/

void print_square(int size)
{
	int i, j, n;

	n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}

	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
